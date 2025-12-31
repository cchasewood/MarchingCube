// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATerrainManager::ATerrainManager()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
    TimeSinceLastUpdate = 0.0f;
    MarchingCubesSystem = CreateDefaultSubobject<UMarchingCubes>(TEXT("MarchingCubesSystem"));

}

// Called when the game starts or when spawned
void ATerrainManager::BeginPlay()
{
	Super::BeginPlay();
	
    if (DespawnDistanceCm < SpawnDistanceCm)
    {
        DespawnDistanceCm = SpawnDistanceCm * 1.5f;
    }
}

// Called every frame
void ATerrainManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    TimeSinceLastUpdate += DeltaTime;
    if (TimeSinceLastUpdate >= UpdateInterval)
    {
        TimeSinceLastUpdate = 0.0f;
        UpdateSpawnDespawn();
    }

    // Process up to MaxMeshAppendsPerTick chunk-appends this frame
    for (int32 i = 0; i < MaxMeshAppendsPerTick; ++i)
    {
        TWeakObjectPtr<AChunkActor> WeakChunk;
        if (!PendingChunkAppends.Dequeue(WeakChunk))
        {
            break; // queue empty
        }

        AChunkActor* Chunk = WeakChunk.Get();
        if (!Chunk || Chunk->IsPendingKillPending())
        {
            // chunk dead — nothing to apply; ensure its bAppendQueued gets cleared if/when destroyed
            continue;
        }

        // Let the chunk apply its own pending compute mesh
        Chunk->ApplyPendingComputeMesh();
    }
}

FIntVector ATerrainManager::WorldPosToChunkIndex(const FVector& WorldPos) const
{
    const float ChunkSize = GetChunkWorldSizeCm();

    // Only positive chunks in this setup; floor to integer chunk index
    int32 X = FMath::FloorToInt(WorldPos.X / ChunkSize);
    int32 Y = FMath::FloorToInt(WorldPos.Y / ChunkSize);
    int32 Z = FMath::FloorToInt(WorldPos.Z / ChunkSize);

    return FIntVector(X, Y, Z);
}

FVector ATerrainManager::ChunkIndexToCenterWorld(const FIntVector& Index) const
{
    const float ChunkSize = GetChunkWorldSizeCm();
    // Chunk origin at Index * ChunkSize; center offset is half the chunk size
    const FVector Origin = FVector(Index.X * ChunkSize, Index.Y * ChunkSize, Index.Z * ChunkSize);
    const FVector Center = Origin + FVector(ChunkSize * 0.5f);
    return Center;
}

AChunkActor* ATerrainManager::SpawnChunkAt(const FIntVector& Index)
{
    if (!ChunkClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("ATerrainManager::SpawnChunkAt: ChunkClass is not set."));
        return nullptr;
    }

    if (SpawnedChunks.Contains(Index))
    {
        return SpawnedChunks[Index];
    }

    FVector SpawnLocation = FVector(Index.X * GetChunkWorldSizeCm(),
        Index.Y * GetChunkWorldSizeCm(),
        Index.Z * GetChunkWorldSizeCm());

    FActorSpawnParameters Params;
    Params.Owner = this;
    Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    UWorld* World = GetWorld();
    if (!World) return nullptr;

    // Spawn the actor (you may want to cast to your specific chunk actor type)
    AChunkActor* NewChunk = World->SpawnActor<AChunkActor>(ChunkClass, SpawnLocation, FRotator::ZeroRotator, Params);
    if (NewChunk)
    {
        SpawnedChunks.Add(Index, NewChunk);
        NewChunk->MarchingCubesSystem = MarchingCubesSystem;
        NewChunk->BuildMarchingCube(SpawnLocation, VoxelsPerAxis, VoxelSizeCm, isolevel);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AChunkManager::SpawnChunkAt failed to spawn at index %d,%d,%d"),
            Index.X, Index.Y, Index.Z);
    }

    return NewChunk;
}

void ATerrainManager::DespawnChunk(const FIntVector& Index)
{
    AChunkActor** Found = SpawnedChunks.Find(Index);
    if (!Found || !*Found) return;

    AActor* ChunkActor = *Found;
    if (ChunkActor && !ChunkActor->IsPendingKillPending())
    {
        ChunkActor->Destroy();
    }
    SpawnedChunks.Remove(Index);
}

void ATerrainManager::UpdateSpawnDespawn()
{
    UWorld* World = GetWorld();
    if (!World) return;

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
    if (!PlayerPawn) return;

    const FVector PlayerLoc = PlayerPawn->GetActorLocation();
    const float ChunkSize = GetChunkWorldSizeCm();

    // Determine player chunk index
    FIntVector PlayerChunkIdx = WorldPosToChunkIndex(PlayerLoc);

    // Compute how many chunks in radius we need to consider
    const int32 SpawnRadiusChunks = FMath::CeilToInt(SpawnDistanceCm / ChunkSize);
    const int32 DespawnRadiusChunks = FMath::CeilToInt(DespawnDistanceCm / ChunkSize);

    // Boundaries: ensure lower bound is 0 (positive-only spawn)
    const int32 MinX = PlayerChunkIdx.X - SpawnRadiusChunks;
    const int32 MinY = PlayerChunkIdx.Y - SpawnRadiusChunks;
    const int32 MinZ = PlayerChunkIdx.Z - SpawnRadiusChunks;

    const int32 MaxX = PlayerChunkIdx.X + SpawnRadiusChunks;
    const int32 MaxY = PlayerChunkIdx.Y + SpawnRadiusChunks;
    const int32 MaxZ = PlayerChunkIdx.Z + SpawnRadiusChunks;

    // --- Spawn pass: iterate integer chunk indices within the spawn cube ---
    for (int32 x = MinX; x <= MaxX; ++x)
    {
        for (int32 y = MinY; y <= MaxY; ++y)
        {
            for (int32 z = MinZ; z <= MaxZ; ++z)
            {
                FIntVector idx(x, y, z);
                FVector Center = ChunkIndexToCenterWorld(idx);
                const float DistToCenter = FVector::Dist(PlayerLoc, Center);

                if (DistToCenter <= SpawnDistanceCm)
                {
                    // spawn if needed
                    if (!SpawnedChunks.Contains(idx))
                    {
                        SpawnChunkAt(idx);
                    }
                }
            }
        }
    }

    // --- Despawn pass: remove chunks that are farther than despawn radius ---
    TArray<FIntVector> ToRemove;
    ToRemove.Reserve(SpawnedChunks.Num());

    for (auto& Pair : SpawnedChunks)
    {
        const FIntVector& Index = Pair.Key;
        AActor* Actor = Pair.Value;
        if (!Actor || Actor->IsPendingKillPending())
        {
            ToRemove.Add(Index);
            continue;
        }

        FVector Center = ChunkIndexToCenterWorld(Index);
        const float Dist = FVector::Dist(PlayerLoc, Center);

        if (Dist > DespawnDistanceCm)
        {
            ToRemove.Add(Index);
        }
    }

    for (const FIntVector& Idx : ToRemove)
    {
        DespawnChunk(Idx);
    }
}

void ATerrainManager::SpawnChunksInRadius(const FVector& Center, float Radius, const FVector& GridSpacing)
{
    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Warning, TEXT("SpawnChunksInRadius: Invalid World"));
        return;
    }

    if (!ChunkClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("SpawnChunksInRadius: ChunkClass is not set"));
        return;
    }

    // Guard against zero spacing
    FVector Spacing = GridSpacing;
    Spacing.X = FMath::Max(Spacing.X, KINDA_SMALL_NUMBER);
    Spacing.Y = FMath::Max(Spacing.Y, KINDA_SMALL_NUMBER);
    Spacing.Z = FMath::Max(Spacing.Z, KINDA_SMALL_NUMBER);

    // We'll compute integer grid indices that cover the AABB around the sphere
    const float RadiusSq = Radius * Radius;

    // Compute integer min/max indices in each axis. Here we convert world space -> grid index by dividing by spacing.
    int32 MinX = FMath::FloorToInt((Center.X - Radius) / Spacing.X);
    int32 MaxX = FMath::CeilToInt((Center.X + Radius) / Spacing.X);
    int32 MinY = FMath::FloorToInt((Center.Y - Radius) / Spacing.Y);
    int32 MaxY = FMath::CeilToInt((Center.Y + Radius) / Spacing.Y);
    int32 MinZ = FMath::FloorToInt((Center.Z - Radius) / Spacing.Z);
    int32 MaxZ = FMath::CeilToInt((Center.Z + Radius) / Spacing.Z);

    // Iterate through the integer grid and spawn chunks whose grid cell centers are within the sphere.
    for (int32 ix = MinX; ix <= MaxX; ++ix)
    {
        for (int32 iy = MinY; iy <= MaxY; ++iy)
        {
            for (int32 iz = MinZ; iz <= MaxZ; ++iz)
            {
                // Compute the world position for the center of this grid cell
                FVector CellCenter = FVector(
                    (ix + 0.5f) * Spacing.X,
                    (iy + 0.5f) * Spacing.Y,
                    (iz + 0.5f) * Spacing.Z
                );

                // Distance check (squared)
                if ((CellCenter - Center).SizeSquared() > RadiusSq)
                {
                    continue;
                }

                // Convert this integer grid cell to the chunk index space used by your manager.
                // If your grid spacing equals GetChunkWorldSizeCm(), this maps 1:1.
                // We'll compute chunk indices by flooring the cell origin / chunk size so it matches WorldPosToChunkIndex expectations.
                // Use the cell's origin (not center) for a consistent integer mapping:
                FVector CellOrigin = FVector(ix * Spacing.X, iy * Spacing.Y, iz * Spacing.Z);
                FIntVector ChunkIdx = WorldPosToChunkIndex(CellOrigin);

                // Avoid double-spawn: SpawnChunkAt already checks SpawnedChunks.Contains, so it's safe to call directly.
                SpawnChunkAt(ChunkIdx);
            }
        }
    }
}

void ATerrainManager::DespawnAll()
{
    TArray<FIntVector> keys;
    SpawnedChunks.GetKeys(keys);
    for (FIntVector id : keys) {
        DespawnChunk(id);
    }
}

void ATerrainManager::EnqueueChunkForAppend(AChunkActor* Chunk)
{
    if (!Chunk) return;
    #if WITH_EDITOR
    Chunk->ApplyPendingComputeMesh();
    #endif //WITH_EDITOR
    PendingChunkAppends.Enqueue(TWeakObjectPtr<AChunkActor>(Chunk));
}

