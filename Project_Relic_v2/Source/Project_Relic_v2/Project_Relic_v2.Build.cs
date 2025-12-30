// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Relic_v2 : ModuleRules
{
	public Project_Relic_v2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"GameplayDebugger"
			//"NavigationSystem"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Project_Relic_v2",
			"Project_Relic_v2/Variant_Platforming",
			"Project_Relic_v2/Variant_Platforming/Animation",
			"Project_Relic_v2/Variant_Combat",
			"Project_Relic_v2/Variant_Combat/AI",
			"Project_Relic_v2/Variant_Combat/Animation",
			"Project_Relic_v2/Variant_Combat/Gameplay",
			"Project_Relic_v2/Variant_Combat/Interfaces",
			"Project_Relic_v2/Variant_Combat/UI",
			"Project_Relic_v2/Variant_SideScrolling",
			"Project_Relic_v2/Variant_SideScrolling/AI",
			"Project_Relic_v2/Variant_SideScrolling/Gameplay",
			"Project_Relic_v2/Variant_SideScrolling/Interfaces",
			"Project_Relic_v2/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
