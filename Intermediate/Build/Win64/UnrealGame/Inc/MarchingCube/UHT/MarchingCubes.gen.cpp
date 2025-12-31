// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarchingCubes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MARCHINGCUBE_API UClass* Z_Construct_UClass_AChunkActor_NoRegister();
MARCHINGCUBE_API UClass* Z_Construct_UClass_UMarchingCubes();
MARCHINGCUBE_API UClass* Z_Construct_UClass_UMarchingCubes_NoRegister();
UPackage* Z_Construct_UPackage__Script_MarchingCube();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMarchingCubes Function GenerateField ************************************
struct Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics
{
	struct MarchingCubes_eventGenerateField_Parms
	{
		FVector ChunkOrigin;
		int32 N;
		float VoxelSize;
		float IsoLevel;
		AChunkActor* targetChunk;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Main Marching Cubes function\n" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
		{ "ToolTip", "Main Marching Cubes function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IsoLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetChunk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_ChunkOrigin = { "ChunkOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventGenerateField_Parms, ChunkOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkOrigin_MetaData), NewProp_ChunkOrigin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventGenerateField_Parms, N), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventGenerateField_Parms, VoxelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_IsoLevel = { "IsoLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventGenerateField_Parms, IsoLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_targetChunk = { "targetChunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventGenerateField_Parms, targetChunk), Z_Construct_UClass_AChunkActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_ChunkOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_IsoLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::NewProp_targetChunk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMarchingCubes, nullptr, "GenerateField", Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::MarchingCubes_eventGenerateField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::MarchingCubes_eventGenerateField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMarchingCubes_GenerateField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubes_GenerateField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMarchingCubes::execGenerateField)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ChunkOrigin);
	P_GET_PROPERTY(FIntProperty,Z_Param_N);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_IsoLevel);
	P_GET_OBJECT(AChunkActor,Z_Param_targetChunk);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateField(Z_Param_Out_ChunkOrigin,Z_Param_N,Z_Param_VoxelSize,Z_Param_IsoLevel,Z_Param_targetChunk);
	P_NATIVE_END;
}
// ********** End Class UMarchingCubes Function GenerateField **************************************

// ********** Begin Class UMarchingCubes Function SampleDeepSea ************************************
struct Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics
{
	struct MarchingCubes_eventSampleDeepSea_Parms
	{
		FVector Location;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventSampleDeepSea_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventSampleDeepSea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMarchingCubes, nullptr, "SampleDeepSea", Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::MarchingCubes_eventSampleDeepSea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::MarchingCubes_eventSampleDeepSea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMarchingCubes_SampleDeepSea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubes_SampleDeepSea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMarchingCubes::execSampleDeepSea)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->SampleDeepSea(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UMarchingCubes Function SampleDeepSea **************************************

// ********** Begin Class UMarchingCubes Function SampleWorld **************************************
struct Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics
{
	struct MarchingCubes_eventSampleWorld_Parms
	{
		FVector Location;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Main Noise Sampling function\n" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
		{ "ToolTip", "Main Noise Sampling function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventSampleWorld_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventSampleWorld_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMarchingCubes, nullptr, "SampleWorld", Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::MarchingCubes_eventSampleWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::MarchingCubes_eventSampleWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMarchingCubes_SampleWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubes_SampleWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMarchingCubes::execSampleWorld)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->SampleWorld(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UMarchingCubes Function SampleWorld ****************************************

// ********** Begin Class UMarchingCubes Function SetSeed ******************************************
struct Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics
{
	struct MarchingCubes_eventSetSeed_Parms
	{
		int32 NewSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::NewProp_NewSeed = { "NewSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarchingCubes_eventSetSeed_Parms, NewSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::NewProp_NewSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMarchingCubes, nullptr, "SetSeed", Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::MarchingCubes_eventSetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::MarchingCubes_eventSetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMarchingCubes_SetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubes_SetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMarchingCubes::execSetSeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSeed(Z_Param_NewSeed);
	P_NATIVE_END;
}
// ********** End Class UMarchingCubes Function SetSeed ********************************************

// ********** Begin Class UMarchingCubes ***********************************************************
void UMarchingCubes::StaticRegisterNativesUMarchingCubes()
{
	UClass* Class = UMarchingCubes::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateField", &UMarchingCubes::execGenerateField },
		{ "SampleDeepSea", &UMarchingCubes::execSampleDeepSea },
		{ "SampleWorld", &UMarchingCubes::execSampleWorld },
		{ "SetSeed", &UMarchingCubes::execSetSeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMarchingCubes;
UClass* UMarchingCubes::GetPrivateStaticClass()
{
	using TClass = UMarchingCubes;
	if (!Z_Registration_Info_UClass_UMarchingCubes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarchingCubes"),
			Z_Registration_Info_UClass_UMarchingCubes.InnerSingleton,
			StaticRegisterNativesUMarchingCubes,
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
	return Z_Registration_Info_UClass_UMarchingCubes.InnerSingleton;
}
UClass* Z_Construct_UClass_UMarchingCubes_NoRegister()
{
	return UMarchingCubes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMarchingCubes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MarchingCubes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//World Seed\n" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
		{ "ToolTip", "World Seed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_generator_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//World Seed\n" },
		{ "ModuleRelativePath", "Public/MarchingCubes.h" },
		{ "ToolTip", "World Seed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_generator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMarchingCubes_GenerateField, "GenerateField" }, // 793770266
		{ &Z_Construct_UFunction_UMarchingCubes_SampleDeepSea, "SampleDeepSea" }, // 1424393451
		{ &Z_Construct_UFunction_UMarchingCubes_SampleWorld, "SampleWorld" }, // 378253711
		{ &Z_Construct_UFunction_UMarchingCubes_SetSeed, "SetSeed" }, // 824562806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarchingCubes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMarchingCubes_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarchingCubes, seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seed_MetaData), NewProp_seed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMarchingCubes_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarchingCubes, generator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_generator_MetaData), NewProp_generator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarchingCubes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarchingCubes_Statics::NewProp_seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarchingCubes_Statics::NewProp_generator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarchingCubes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMarchingCubes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MarchingCube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarchingCubes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarchingCubes_Statics::ClassParams = {
	&UMarchingCubes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMarchingCubes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMarchingCubes_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMarchingCubes_Statics::Class_MetaDataParams), Z_Construct_UClass_UMarchingCubes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMarchingCubes()
{
	if (!Z_Registration_Info_UClass_UMarchingCubes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarchingCubes.OuterSingleton, Z_Construct_UClass_UMarchingCubes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMarchingCubes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMarchingCubes);
UMarchingCubes::~UMarchingCubes() {}
// ********** End Class UMarchingCubes *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h__Script_MarchingCube_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMarchingCubes, UMarchingCubes::StaticClass, TEXT("UMarchingCubes"), &Z_Registration_Info_UClass_UMarchingCubes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarchingCubes), 823952581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h__Script_MarchingCube_2833101992(TEXT("/Script/MarchingCube"),
	Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h__Script_MarchingCube_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h__Script_MarchingCube_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
