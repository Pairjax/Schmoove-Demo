// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class schmoove_demo : ModuleRules
{
	public schmoove_demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
