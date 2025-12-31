#include "ChunkActor.h"
#include "Components/DynamicMeshComponent.h"      // header for UDynamicMeshComponent
#include "DynamicMesh/DynamicMesh3.h"
#include "DynamicMesh/MeshAttributeUtil.h"
#include "DynamicMesh/MeshNormals.h"
#include "UDynamicMesh.h"
#include "DynamicMeshEditor.h"        // helpers to copy/modify FDynamicMesh3
#include "Async/Async.h"
#include "Tasks/Task.h"
#include "GeometryScript/MeshUVFunctions.h"
#include "TerrainManager.h"
#include "GeometryScript/MeshNormalsFunctions.h"
#include <Kismet\GameplayStatics.h>

AChunkActor::AChunkActor()
{
    // Enables the Tick() function
    PrimaryActorTick.bCanEverTick = true;
}


void AChunkActor::Tick(float DeltaTime)
{

    Super::Tick(DeltaTime);
}

void AChunkActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
void AChunkActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void AChunkActor::BuildMarchingCube(FVector ChunkOffset, int N, float voxelSize, float isolevel)
{
    if (!MarchingCubesSystem) return;
    FVector WorldLocation = GetActorLocation();
    MarchingCubesSystem->GenerateField(ChunkOffset, N, voxelSize, isolevel, this);
}

void AChunkActor::UpdateMesh(FMarchingCubesResult Result)
{
    UDynamicMesh* computeMesh = AllocateComputeMesh();
    Launch(
        UE_SOURCE_LOCATION,
        [computeMesh, Result, this] {
            computeMesh->EditMesh([&](FDynamicMesh3& Mesh)
                {
                    // Step 1: Ensure attributes are enabled before adding vertices
                    if (!Mesh.HasAttributes()) {
                        Mesh.EnableAttributes();
                    }

                    if (Mesh.HasVertexNormals() == false)
                    {
                        Mesh.EnableVertexNormals(FVector3f::UnitZ());
                    }
                    for (int32 Vid = 0; Vid < Result.Vertices.Num(); ++Vid) // 'result' is your FMarchingCubesResult
                    {
                        Mesh.AppendVertex(Result.Vertices[Vid]);
                        // Set the normal for the vertex
                        //Mesh.SetVertexNormal(Vid, Result.Normals[Vid]);
                    }

                    for (FTriArr Tri : Result.Triangles)
                    {
                        Mesh.AppendTriangle(Tri.VIDs[0], Tri.VIDs[1], Tri.VIDs[2]);
                    }

                    //This line adds mesh vertex normals to the overlay, enabling our gradient calculated normals
                    /*
                    UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals(Mesh.Attributes()->PrimaryNormals(), true);
                    */

                    return;
                });

            //Optional UV recalculations, not necesarry for worldspace triplanar mapping
            /*
            FGeometryScriptRecomputeUVsOptions RecomputeOptions;
            FGeometryScriptMeshSelection Selection;
            UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(computeMesh, 0, RecomputeOptions, Selection);
            FGeometryScriptMeshSelection ScaleSelection;
            ScaleSelection.ClearSelection();
            UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(computeMesh, 0, { .01, .01 }, { 0,0 }, ScaleSelection);
            */


            //Automatic Mesh based Normals (Recalculates vertex normals if enabled)
            FGeometryScriptCalculateNormalsOptions CalculateOptions;
            CalculateOptions.bAngleWeighted = true;
            CalculateOptions.bAreaWeighted = true;
            FGeometryScriptSplitNormalsOptions SplitOptions;
            SplitOptions.OpeningAngleDeg = 60.f;
            SplitOptions.bSplitByOpeningAngle = true;

            UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(computeMesh, SplitOptions, CalculateOptions);

            //Queues this Actor with the TerrainManager to append its mesh on the game thread
            AsyncTask(ENamedThreads::GameThread, [this, computeMesh]() mutable
                {
                    // store the compute mesh on the chunk
                    this->PendingComputeMesh = computeMesh;

                    // mark and enqueue to manager (avoids duplicate queue entries)
                    if (!this->bAppendQueued)
                    {
                        this->bAppendQueued = true;

                        ATerrainManager* Manager = nullptr;
                        if (AActor* Owner = GetOwner())
                        {
                            Manager = Cast<ATerrainManager>(Owner);
                        }
                        if (!Manager)
                        {
                            Manager = Cast<ATerrainManager>(UGameplayStatics::GetActorOfClass(this, ATerrainManager::StaticClass()));
                        }

                        if (Manager)
                        {
                            Manager->EnqueueChunkForAppend(this);
                        }
                        else
                        {
                            // fallback: if manager missing, apply immediately (also clears flags and releases mesh)
                            UE_LOG(LogTemp, Warning, TEXT("ChunkActor: TerrainManager not found; applying mesh immediately."));
                            this->ApplyPendingComputeMesh();
                        }
                    }
                });
            return computeMesh;
        });
}

void AChunkActor::ApplyPendingComputeMesh()
{
    check(IsInGameThread()); // must be called on game thread

    // Nothing to do
    if (!PendingComputeMesh)
    {
        bAppendQueued = false;
        return;
    }

    if (!DynamicMeshComponent)
    {
        // release to avoid leak
        ReleaseComputeMesh(PendingComputeMesh);
        PendingComputeMesh = nullptr;
        bAppendQueued = false;
        return;
    }

    // perform the append (same as your previous code)
    {
        UE::Geometry::FDynamicMeshEditor Editor(DynamicMeshComponent->GetMesh());
        UE::Geometry::FMeshIndexMappings IndexMap;
        FDynamicMesh3* MeshPtr = PendingComputeMesh->GetMeshPtr();
        Editor.AppendMesh(MeshPtr, IndexMap);
    }

    // release the compute mesh back to pool
    ReleaseComputeMesh(PendingComputeMesh);
    PendingComputeMesh = nullptr;

    // restore flags
    bAppendQueued = false;

    // notify component same as before
    DynamicMeshComponent->NotifyMeshUpdated();
    DynamicMeshComponent->FastNotifyVertexAttributesUpdated(true, false, false);
    DynamicMeshComponent->EnableComplexAsSimpleCollision();

    OnMeshUpdated();
}
