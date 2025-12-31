// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTerrainManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MARCHINGCUBE_API UClass* Z_Construct_UClass_AChunkActor_NoRegister();
MARCHINGCUBE_API UClass* Z_Construct_UClass_ATerrainManager();
MARCHINGCUBE_API UClass* Z_Construct_UClass_ATerrainManager_NoRegister();
MARCHINGCUBE_API UClass* Z_Construct_UClass_UMarchingCubes_NoRegister();
UPackage* Z_Construct_UPackage__Script_MarchingCube();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATerrainManager Function DespawnAll **************************************
struct Z_Construct_UFunction_ATerrainManager_DespawnAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Chunks" },
		{ "Comment", "// Despawn (destroy) the chunk actor and remove from map\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Despawn (destroy) the chunk actor and remove from map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainManager_DespawnAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainManager, nullptr, "DespawnAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainManager_DespawnAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainManager_DespawnAll_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrainManager_DespawnAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainManager_DespawnAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainManager::execDespawnAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DespawnAll();
	P_NATIVE_END;
}
// ********** End Class ATerrainManager Function DespawnAll ****************************************

// ********** Begin Class ATerrainManager Function SpawnChunksInRadius *****************************
struct Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics
{
	struct TerrainManager_eventSpawnChunksInRadius_Parms
	{
		FVector Center;
		float Radius;
		FVector GridSpacing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Chunks" },
		{ "Comment", "// Spawns chunk actors on a 3D grid around Center, with spacing GridSpacing, within Radius.\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Spawns chunk actors on a 3D grid around Center, with spacing GridSpacing, within Radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainManager_eventSpawnChunksInRadius_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainManager_eventSpawnChunksInRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainManager_eventSpawnChunksInRadius_Parms, GridSpacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSpacing_MetaData), NewProp_GridSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::NewProp_GridSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainManager, nullptr, "SpawnChunksInRadius", Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::TerrainManager_eventSpawnChunksInRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::TerrainManager_eventSpawnChunksInRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainManager::execSpawnChunksInRadius)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GridSpacing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnChunksInRadius(Z_Param_Out_Center,Z_Param_Radius,Z_Param_Out_GridSpacing);
	P_NATIVE_END;
}
// ********** End Class ATerrainManager Function SpawnChunksInRadius *******************************

// ********** Begin Class ATerrainManager **********************************************************
void ATerrainManager::StaticRegisterNativesATerrainManager()
{
	UClass* Class = ATerrainManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DespawnAll", &ATerrainManager::execDespawnAll },
		{ "SpawnChunksInRadius", &ATerrainManager::execSpawnChunksInRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrainManager;
UClass* ATerrainManager::GetPrivateStaticClass()
{
	using TClass = ATerrainManager;
	if (!Z_Registration_Info_UClass_ATerrainManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TerrainManager"),
			Z_Registration_Info_UClass_ATerrainManager.InnerSingleton,
			StaticRegisterNativesATerrainManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATerrainManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrainManager_NoRegister()
{
	return ATerrainManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrainManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TerrainManager.h" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarchingCubesSystem_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMeshAppendsPerTick_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "// How many chunk-appends to execute per tick (tuneable)\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "How many chunk-appends to execute per tick (tuneable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelsPerAxis_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// Number of voxels per axis in a chunk (N). Example: 32\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Number of voxels per axis in a chunk (N). Example: 32" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSizeCm_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// Size of one voxel in cm (Unreal units). Example: 200 cm = 2 m.\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Size of one voxel in cm (Unreal units). Example: 200 cm = 2 m." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isolevel_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// Isolevel for the Marching Cubes algorithm.\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Isolevel for the Marching Cubes algorithm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkClass_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// Class to spawn for each chunk (set this to your chunk actor class in editor)\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Class to spawn for each chunk (set this to your chunk actor class in editor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistanceCm_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// Distance (in cm) from player to chunk center at which we spawn the chunk.\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Distance (in cm) from player to chunk center at which we spawn the chunk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnDistanceCm_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// Distance (in cm) beyond which we will despawn old chunks. Must be >= SpawnDistanceCm.\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "Distance (in cm) beyond which we will despawn old chunks. Must be >= SpawnDistanceCm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[] = {
		{ "Category", "Chunks" },
		{ "Comment", "// How frequently (seconds) we update spawn/despawn checks (to avoid heavy per-frame work).\n" },
		{ "ModuleRelativePath", "Public/TerrainManager.h" },
		{ "ToolTip", "How frequently (seconds) we update spawn/despawn checks (to avoid heavy per-frame work)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarchingCubesSystem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMeshAppendsPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelsPerAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSizeCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_isolevel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistanceCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DespawnDistanceCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATerrainManager_DespawnAll, "DespawnAll" }, // 3818846133
		{ &Z_Construct_UFunction_ATerrainManager_SpawnChunksInRadius, "SpawnChunksInRadius" }, // 3257871564
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_MarchingCubesSystem = { "MarchingCubesSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, MarchingCubesSystem), Z_Construct_UClass_UMarchingCubes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarchingCubesSystem_MetaData), NewProp_MarchingCubesSystem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_MaxMeshAppendsPerTick = { "MaxMeshAppendsPerTick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, MaxMeshAppendsPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMeshAppendsPerTick_MetaData), NewProp_MaxMeshAppendsPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_VoxelsPerAxis = { "VoxelsPerAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, VoxelsPerAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelsPerAxis_MetaData), NewProp_VoxelsPerAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_VoxelSizeCm = { "VoxelSizeCm", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, VoxelSizeCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSizeCm_MetaData), NewProp_VoxelSizeCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_isolevel = { "isolevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, isolevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isolevel_MetaData), NewProp_isolevel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_ChunkClass = { "ChunkClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, ChunkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AChunkActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkClass_MetaData), NewProp_ChunkClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_SpawnDistanceCm = { "SpawnDistanceCm", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, SpawnDistanceCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDistanceCm_MetaData), NewProp_SpawnDistanceCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_DespawnDistanceCm = { "DespawnDistanceCm", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, DespawnDistanceCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnDistanceCm_MetaData), NewProp_DespawnDistanceCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainManager_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainManager, UpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInterval_MetaData), NewProp_UpdateInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_MarchingCubesSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_MaxMeshAppendsPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_VoxelsPerAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_VoxelSizeCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_isolevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_ChunkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_SpawnDistanceCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_DespawnDistanceCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainManager_Statics::NewProp_UpdateInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATerrainManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MarchingCube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrainManager_Statics::ClassParams = {
	&ATerrainManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATerrainManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrainManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATerrainManager()
{
	if (!Z_Registration_Info_UClass_ATerrainManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrainManager.OuterSingleton, Z_Construct_UClass_ATerrainManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrainManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrainManager);
ATerrainManager::~ATerrainManager() {}
// ********** End Class ATerrainManager ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h__Script_MarchingCube_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainManager, ATerrainManager::StaticClass, TEXT("ATerrainManager"), &Z_Registration_Info_UClass_ATerrainManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainManager), 941030749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h__Script_MarchingCube_1588257467(TEXT("/Script/MarchingCube"),
	Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h__Script_MarchingCube_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h__Script_MarchingCube_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
