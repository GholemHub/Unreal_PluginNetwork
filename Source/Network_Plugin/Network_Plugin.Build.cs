// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Network_Plugin : ModuleRules
{
	public Network_Plugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs; 

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "OnlineSubsystemSteam", "OnlineSubsystem"});
	}
}
