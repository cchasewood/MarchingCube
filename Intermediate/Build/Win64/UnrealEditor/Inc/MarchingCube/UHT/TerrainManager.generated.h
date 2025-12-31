// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TerrainManager.h"

#ifdef MARCHINGCUBE_TerrainManager_generated_h
#error "TerrainManager.generated.h already included, missing '#pragma once' in TerrainManager.h"
#endif
#define MARCHINGCUBE_TerrainManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATerrainManager **********************************************************
#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDespawnAll); \
	DECLARE_FUNCTION(execSpawnChunksInRadius);


MARCHINGCUBE_API UClass* Z_Construct_UClass_ATerrainManager_NoRegister();

#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrainManager(); \
	friend struct Z_Construct_UClass_ATerrainManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MARCHINGCUBE_API UClass* Z_Construct_UClass_ATerrainManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrainManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MarchingCube"), Z_Construct_UClass_ATerrainManager_NoRegister) \
	DECLARE_SERIALIZER(ATerrainManager)


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrainManager(ATerrainManager&&) = delete; \
	ATerrainManager(const ATerrainManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrainManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrainManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATerrainManager) \
	NO_API virtual ~ATerrainManager();


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_10_PROLOG
#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrainManager;

// ********** End Class ATerrainManager ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_TerrainManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
