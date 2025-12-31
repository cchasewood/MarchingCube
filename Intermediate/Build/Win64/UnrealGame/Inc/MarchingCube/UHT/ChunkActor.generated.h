// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChunkActor.h"

#ifdef MARCHINGCUBE_ChunkActor_generated_h
#error "ChunkActor.generated.h already included, missing '#pragma once' in ChunkActor.h"
#endif
#define MARCHINGCUBE_ChunkActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AChunkActor **************************************************************
#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildMarchingCube);


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_CALLBACK_WRAPPERS
MARCHINGCUBE_API UClass* Z_Construct_UClass_AChunkActor_NoRegister();

#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunkActor(); \
	friend struct Z_Construct_UClass_AChunkActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MARCHINGCUBE_API UClass* Z_Construct_UClass_AChunkActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AChunkActor, ADynamicMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MarchingCube"), Z_Construct_UClass_AChunkActor_NoRegister) \
	DECLARE_SERIALIZER(AChunkActor)


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AChunkActor(AChunkActor&&) = delete; \
	AChunkActor(const AChunkActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunkActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunkActor) \
	NO_API virtual ~AChunkActor();


#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_14_PROLOG
#define FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_CALLBACK_WRAPPERS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AChunkActor;

// ********** End Class AChunkActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PackagedGames_Windows_MarchingCube_HostProject_Plugins_MarchingCube_Source_MarchingCube_Public_ChunkActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
