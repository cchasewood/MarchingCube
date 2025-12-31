// Copyright Epic Games, Inc. All Rights Reserved.

#include "MarchingCube.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FMarchingCubeModule"

void FMarchingCubeModule::StartupModule()
{
}

void FMarchingCubeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMarchingCubeModule, MarchingCube)