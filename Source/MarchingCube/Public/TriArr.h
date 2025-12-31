// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TriArr.generated.h" // Must match file name

// Blueprintable struct for storing triangle vertices
USTRUCT(BlueprintType)
struct MARCHINGCUBE_API FTriArr
{
    GENERATED_BODY()

    // Array of vertices for a triangle
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Marching Cubes")
    TArray<int32> VIDs;
};

struct FEdgeKey
{

    FIntVector P1;
    FIntVector P2;

    FEdgeKey(FIntVector A, FIntVector B)
    {
        if (A.X < B.X || (A.X == B.X && (A.Y < B.Y || (A.Y == B.Y && A.Z < B.Z))))
        {
            P1 = A;
            P2 = B;
        }
        else
        {
            P1 = B;
            P2 = A;
        }
    }

    bool operator==(const FEdgeKey& Other) const
    {
        return P1 == Other.P1 && P2 == Other.P2;
    }

    friend uint32 GetTypeHash(const FEdgeKey& Key)
    {
        return HashCombine(GetTypeHash(Key.P1), GetTypeHash(Key.P2));
    }
};

struct FMarchingCubesResult
{
    TArray<FVector> Vertices;
    TArray<FVector3f> Normals;
    TArray<FTriArr> Triangles;
};