// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DungeonAbyss : ModuleRules
{
	public DungeonAbyss(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
