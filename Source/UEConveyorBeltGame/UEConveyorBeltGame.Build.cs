// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEConveyorBeltGame : ModuleRules
{
	public UEConveyorBeltGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
