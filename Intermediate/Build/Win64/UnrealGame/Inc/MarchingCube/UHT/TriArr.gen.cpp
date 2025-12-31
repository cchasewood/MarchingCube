// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriArr.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTriArr() {}

// ********** Begin Cross Module References ********************************************************
MARCHINGCUBE_API UScriptStruct* Z_Construct_UScriptStruct_FTriArr();
UPackage* Z_Construct_UPackage__Script_MarchingCube();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTriArr ***********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTriArr;
class UScriptStruct* FTriArr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTriArr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTriArr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriArr, (UObject*)Z_Construct_UPackage__Script_MarchingCube(), TEXT("TriArr"));
	}
	return Z_Registration_Info_UScriptStruct_FTriArr.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTriArr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Blueprintable struct for storing triangle vertices\n" },
		{ "ModuleRelativePath", "Public/TriArr.h" },
		{ "ToolTip", "Blueprintable struct for storing triangle vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VIDs_MetaData[] = {
		{ "Category", "Marching Cubes" },
		{ "Comment", "// Array of vertices for a triangle\n" },
		{ "ModuleRelativePath", "Public/TriArr.h" },
		{ "ToolTip", "Array of vertices for a triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriArr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriArr_Statics::NewProp_VIDs_Inner = { "VIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTriArr_Statics::NewProp_VIDs = { "VIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriArr, VIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VIDs_MetaData), NewProp_VIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriArr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriArr_Statics::NewProp_VIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriArr_Statics::NewProp_VIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriArr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriArr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MarchingCube,
	nullptr,
	&NewStructOps,
	"TriArr",
	Z_Construct_UScriptStruct_FTriArr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriArr_Statics::PropPointers),
	sizeof(FTriArr),
	alignof(FTriArr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriArr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriArr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriArr()
{
	if (!Z_Registration_Info_UScriptStruct_FTriArr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTriArr.InnerSingleton, Z_Construct_UScriptStruct_FTriArr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTriArr.InnerSingleton;
}
// ********** End ScriptStruct FTriArr *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TriArr_h__Script_MarchingCube_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTriArr::StaticStruct, Z_Construct_UScriptStruct_FTriArr_Statics::NewStructOps, TEXT("TriArr"), &Z_Registration_Info_UScriptStruct_FTriArr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriArr), 1309361872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TriArr_h__Script_MarchingCube_2619328717(TEXT("/Script/MarchingCube"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TriArr_h__Script_MarchingCube_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TriArr_h__Script_MarchingCube_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
