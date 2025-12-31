// MarchingCubes.h
#pragma once

#include "CoreMinimal.h"
#include "TriArr.h"
#include <functional>
#include "FastNoiseLite.h"
#include "Tasks/Task.h"
#include "Async/Async.h"
#include "MarchingCubes.generated.h"

class AChunkActor;

using namespace UE::Tasks;

UCLASS(Blueprintable, BlueprintType)
class MARCHINGCUBE_API  UMarchingCubes : public UObject
{
    GENERATED_BODY()
public:

    UMarchingCubes();

    //World Parmeters
    float WorldRadius = 20000.f;

    float centerFloorDepthCm = 2000.f;
    float centerMaxDepthCm = 5000.f;
    float edgeFloorDepthCm = 100000.f;
    float edgeMaxDepthCm = 300000.f;

    //Noise Generators (initialized and setup in UMarchingCubes constructor)
    FastNoiseLite noise;
    FastNoiseLite noiseHill;
    FastNoiseLite noiseMountain;

    UFUNCTION(BlueprintCallable, Category = "Noise")
    void SetSeed(int NewSeed);

    //World Seed
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
    int seed;

    //World Seed
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
    int generator;

    //Main Marching Cubes function
    UFUNCTION(BlueprintCallable, Category = "Noise")
    void GenerateField(const FVector& ChunkOrigin, int N, float VoxelSize, float IsoLevel, AChunkActor* targetChunk);

    //Main Noise Sampling function
    UFUNCTION(BlueprintCallable, Category = "Noise")
    float SampleWorld(FVector Location) const;

    UFUNCTION(BlueprintCallable, Category = "Noise")
    float SampleDeepSea(FVector Location) const;

private:

    FVector Rot(FVector coord, const FMatrix& mat); 

    float SmoothSnap(float t, float m);

    static inline int GridIndex(int x, int y, int z, int Nx, int Ny, int Nz) { return (z * Ny * Nx) + (y * Nx) + x; }

    // canonical lookup tables:
    static const int EdgeTable[256];
    static const int TriTable[256][16];
};
