// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MarchingCubes.h"

#ifdef MARCHINGCUBE_MarchingCubes_generated_h
#error "MarchingCubes.generated.h already included, missing '#pragma once' in MarchingCubes.h"
#endif
#define MARCHINGCUBE_MarchingCubes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AChunkActor;

// ********** Begin Class UMarchingCubes ***********************************************************
#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSampleDeepSea); \
	DECLARE_FUNCTION(execSampleWorld); \
	DECLARE_FUNCTION(execGenerateField); \
	DECLARE_FUNCTION(execSetSeed);


MARCHINGCUBE_API UClass* Z_Construct_UClass_UMarchingCubes_NoRegister();

#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMarchingCubes(); \
	friend struct Z_Construct_UClass_UMarchingCubes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MARCHINGCUBE_API UClass* Z_Construct_UClass_UMarchingCubes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMarchingCubes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MarchingCube"), Z_Construct_UClass_UMarchingCubes_NoRegister) \
	DECLARE_SERIALIZER(UMarchingCubes)


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMarchingCubes(UMarchingCubes&&) = delete; \
	UMarchingCubes(const UMarchingCubes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMarchingCubes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMarchingCubes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMarchingCubes) \
	NO_API virtual ~UMarchingCubes();


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_16_PROLOG
#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_INCLASS_NO_PURE_DECLS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMarchingCubes;

// ********** End Class UMarchingCubes *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_MarchingCubes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
