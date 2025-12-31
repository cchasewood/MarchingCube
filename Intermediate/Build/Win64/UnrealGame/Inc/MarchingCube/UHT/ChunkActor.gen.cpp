// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChunkActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChunkActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
MARCHINGCUBE_API UClass* Z_Construct_UClass_AChunkActor();
MARCHINGCUBE_API UClass* Z_Construct_UClass_AChunkActor_NoRegister();
MARCHINGCUBE_API UClass* Z_Construct_UClass_UMarchingCubes_NoRegister();
UPackage* Z_Construct_UPackage__Script_MarchingCube();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AChunkActor Function BuildMarchingCube ***********************************
struct Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics
{
	struct ChunkActor_eventBuildMarchingCube_Parms
	{
		FVector ChunkOffset;
		int32 N;
		float voxelSize;
		float isolevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Send Request to build a chunk with the given parameters\n" },
		{ "ModuleRelativePath", "Public/ChunkActor.h" },
		{ "ToolTip", "Send Request to build a chunk with the given parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_voxelSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_isolevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_ChunkOffset = { "ChunkOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkActor_eventBuildMarchingCube_Parms, ChunkOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkActor_eventBuildMarchingCube_Parms, N), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_voxelSize = { "voxelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkActor_eventBuildMarchingCube_Parms, voxelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_isolevel = { "isolevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkActor_eventBuildMarchingCube_Parms, isolevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_ChunkOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_voxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::NewProp_isolevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChunkActor, nullptr, "BuildMarchingCube", Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::ChunkActor_eventBuildMarchingCube_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::ChunkActor_eventBuildMarchingCube_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkActor_BuildMarchingCube()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkActor_BuildMarchingCube_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkActor::execBuildMarchingCube)
{
	P_GET_STRUCT(FVector,Z_Param_ChunkOffset);
	P_GET_PROPERTY(FIntProperty,Z_Param_N);
	P_GET_PROPERTY(FFloatProperty,Z_Param_voxelSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_isolevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildMarchingCube(Z_Param_ChunkOffset,Z_Param_N,Z_Param_voxelSize,Z_Param_isolevel);
	P_NATIVE_END;
}
// ********** End Class AChunkActor Function BuildMarchingCube *************************************

// ********** Begin Class AChunkActor Function OnMeshUpdated ***************************************
static FName NAME_AChunkActor_OnMeshUpdated = FName(TEXT("OnMeshUpdated"));
void AChunkActor::OnMeshUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_AChunkActor_OnMeshUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AChunkActor_OnMeshUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "// This will show up as an event node in Blueprints\n" },
		{ "ModuleRelativePath", "Public/ChunkActor.h" },
		{ "ToolTip", "This will show up as an event node in Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkActor_OnMeshUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChunkActor, nullptr, "OnMeshUpdated", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkActor_OnMeshUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkActor_OnMeshUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AChunkActor_OnMeshUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkActor_OnMeshUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AChunkActor Function OnMeshUpdated *****************************************

// ********** Begin Class AChunkActor **************************************************************
void AChunkActor::StaticRegisterNativesAChunkActor()
{
	UClass* Class = AChunkActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildMarchingCube", &AChunkActor::execBuildMarchingCube },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AChunkActor;
UClass* AChunkActor::GetPrivateStaticClass()
{
	using TClass = AChunkActor;
	if (!Z_Registration_Info_UClass_AChunkActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ChunkActor"),
			Z_Registration_Info_UClass_AChunkActor.InnerSingleton,
			StaticRegisterNativesAChunkActor,
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
	return Z_Registration_Info_UClass_AChunkActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AChunkActor_NoRegister()
{
	return AChunkActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AChunkActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChunkActor.h" },
		{ "ModuleRelativePath", "Public/ChunkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkIndex_MetaData[] = {
		{ "Category", "Chunk" },
		{ "Comment", "// index (if you use it elsewhere)\n" },
		{ "ModuleRelativePath", "Public/ChunkActor.h" },
		{ "ToolTip", "index (if you use it elsewhere)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarchingCubesSystem_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/ChunkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingComputeMesh_MetaData[] = {
		{ "Comment", "// The compute mesh produced by marching cubes. Chunk owns it until ApplyPendingComputeMesh()\n" },
		{ "ModuleRelativePath", "Public/ChunkActor.h" },
		{ "ToolTip", "The compute mesh produced by marching cubes. Chunk owns it until ApplyPendingComputeMesh()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarchingCubesSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingComputeMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunkActor_BuildMarchingCube, "BuildMarchingCube" }, // 3666636985
		{ &Z_Construct_UFunction_AChunkActor_OnMeshUpdated, "OnMeshUpdated" }, // 3422103388
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkActor_Statics::NewProp_ChunkIndex = { "ChunkIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkActor, ChunkIndex), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkIndex_MetaData), NewProp_ChunkIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunkActor_Statics::NewProp_MarchingCubesSystem = { "MarchingCubesSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkActor, MarchingCubesSystem), Z_Construct_UClass_UMarchingCubes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarchingCubesSystem_MetaData), NewProp_MarchingCubesSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunkActor_Statics::NewProp_PendingComputeMesh = { "PendingComputeMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkActor, PendingComputeMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingComputeMesh_MetaData), NewProp_PendingComputeMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkActor_Statics::NewProp_ChunkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkActor_Statics::NewProp_MarchingCubesSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkActor_Statics::NewProp_PendingComputeMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChunkActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADynamicMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MarchingCube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkActor_Statics::ClassParams = {
	&AChunkActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChunkActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChunkActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChunkActor()
{
	if (!Z_Registration_Info_UClass_AChunkActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkActor.OuterSingleton, Z_Construct_UClass_AChunkActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChunkActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkActor);
AChunkActor::~AChunkActor() {}
// ********** End Class AChunkActor ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h__Script_MarchingCube_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChunkActor, AChunkActor::StaticClass, TEXT("AChunkActor"), &Z_Registration_Info_UClass_AChunkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkActor), 1843107717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h__Script_MarchingCube_2590216989(TEXT("/Script/MarchingCube"),
	Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h__Script_MarchingCube_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h__Script_MarchingCube_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
