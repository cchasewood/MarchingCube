#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicMeshActor.h"
#include "MarchingCubes.h"
#include "TriArr.h"
#include "Tasks/Task.h"
#include "ChunkActor.generated.h"


class UDynamicMeshComponent;

UCLASS()
class MARCHINGCUBE_API AChunkActor : public ADynamicMeshActor
{
    GENERATED_BODY()

public:
    AChunkActor();

protected:
    virtual void BeginPlay() override;


    virtual void Tick(float DeltaTime) override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:

    // Called by TerrainManager to execute the final append (on GameThread)
    void ApplyPendingComputeMesh();

    // Called by the chunk's async completion to enqueue itself on the manager
    void EnqueueSelfForAppend();

    // index (if you use it elsewhere)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Chunk")
    FIntVector ChunkIndex = FIntVector::ZeroValue;

    // This will show up as an event node in Blueprints
    UFUNCTION(BlueprintImplementableEvent, Category = "Events")
    void OnMeshUpdated();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    UMarchingCubes* MarchingCubesSystem;

	// Send Request to build a chunk with the given parameters
    UFUNCTION(CallInEditor, BlueprintCallable, Category = "Voxel")
    void BuildMarchingCube(FVector ChunkOffset, int N, float voxelSize, float isolevel);

	void UpdateMesh(FMarchingCubesResult result);

private:

    // The compute mesh produced by marching cubes. Chunk owns it until ApplyPendingComputeMesh()
    UPROPERTY()
    UDynamicMesh* PendingComputeMesh = nullptr;

    // true while this chunk is currently enqueued in the manager's queue (prevents duplicates)
    bool bAppendQueued = false;

};