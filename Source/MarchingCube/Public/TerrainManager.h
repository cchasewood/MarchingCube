// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChunkActor.h"
#include "TerrainManager.generated.h"

UCLASS()
class MARCHINGCUBE_API ATerrainManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Spawns chunk actors on a 3D grid around Center, with spacing GridSpacing, within Radius.
	UFUNCTION(BlueprintCallable, CallinEditor, Category = "Chunks")
	void SpawnChunksInRadius(const FVector& Center, float Radius, const FVector& GridSpacing);

    // Despawn (destroy) the chunk actor and remove from map
    UFUNCTION(BlueprintCallable, CallinEditor, Category = "Chunks")
    void DespawnAll();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
	UMarchingCubes* MarchingCubesSystem;

    // How many chunk-appends to execute per tick (tuneable)
    UPROPERTY(EditAnywhere, Category = "Performance")
    int32 MaxMeshAppendsPerTick = 2;

    // Called by chunks to enqueue themselves for append
    void EnqueueChunkForAppend(AChunkActor* Chunk);

protected:
	
    // --- Configuration ---
    
    // Number of voxels per axis in a chunk (N). Example: 32
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    int32 VoxelsPerAxis = 32;

    // Size of one voxel in cm (Unreal units). Example: 200 cm = 2 m.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    float VoxelSizeCm = 200.0f;

	// Isolevel for the Marching Cubes algorithm.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    float isolevel = 0.0f;

    // Class to spawn for each chunk (set this to your chunk actor class in editor)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    TSubclassOf<AChunkActor> ChunkClass;

    // Distance (in cm) from player to chunk center at which we spawn the chunk.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    float SpawnDistanceCm = 10000.0f; // example default

    // Distance (in cm) beyond which we will despawn old chunks. Must be >= SpawnDistanceCm.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    float DespawnDistanceCm = 14000.0f;

    // How frequently (seconds) we update spawn/despawn checks (to avoid heavy per-frame work).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunks")
    float UpdateInterval = 0.5f;

    // --- Runtime state ---
    // Map from integer chunk index (x,y,z) to spawned actor.
    TMap<FIntVector, AChunkActor*> SpawnedChunks;

private:
    // Time accumulator for update interval
    float TimeSinceLastUpdate = 0.0f;

    // Derived chunk world size (cm)
    FORCEINLINE float GetChunkWorldSizeCm() const { return VoxelsPerAxis * VoxelSizeCm; }

    // Convert world position to integer chunk index (floor-based)
    FIntVector WorldPosToChunkIndex(const FVector& WorldPos) const;

    // Compute chunk center location (world coords) for a given chunk index
    FVector ChunkIndexToCenterWorld(const FIntVector& Index) const;

    // Spawn a chunk at Index (if not already spawned). Returns spawned actor or nullptr.
    AChunkActor* SpawnChunkAt(const FIntVector& Index);

    // Despawn (destroy) the chunk actor and remove from map
    void DespawnChunk(const FIntVector& Index);

    // The main update that checks player distance and spawns/despawns chunks
    void UpdateSpawnDespawn();

    // queue of weak ptrs to chunk actors; MPSC for safety (though we enqueue on GameThread)
    TQueue<TWeakObjectPtr<AChunkActor>, EQueueMode::Mpsc> PendingChunkAppends;
};
