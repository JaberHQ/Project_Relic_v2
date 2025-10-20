// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_Relic_v2_init() {}
	PROJECT_RELIC_V2_API UFunction* Z_Construct_UDelegateFunction_Project_Relic_v2_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Project_Relic_v2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Project_Relic_v2()
	{
		if (!Z_Registration_Info_UPackage__Script_Project_Relic_v2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_Relic_v2_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Project_Relic_v2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7CEDE5EC,
				0x857B3928,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Project_Relic_v2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Project_Relic_v2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Project_Relic_v2(Z_Construct_UPackage__Script_Project_Relic_v2, TEXT("/Script/Project_Relic_v2"), Z_Registration_Info_UPackage__Script_Project_Relic_v2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7CEDE5EC, 0x857B3928));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
