// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/AISense/AISenseConfig_Player.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Player() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISense_Player_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISenseConfig_Player();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISenseConfig_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAISenseConfig_Player ****************************************************
void UAISenseConfig_Player::StaticRegisterNativesUAISenseConfig_Player()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAISenseConfig_Player;
UClass* UAISenseConfig_Player::GetPrivateStaticClass()
{
	using TClass = UAISenseConfig_Player;
	if (!Z_Registration_Info_UClass_UAISenseConfig_Player.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AISenseConfig_Player"),
			Z_Registration_Info_UClass_UAISenseConfig_Player.InnerSingleton,
			StaticRegisterNativesUAISenseConfig_Player,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAISenseConfig_Player.InnerSingleton;
}
UClass* Z_Construct_UClass_UAISenseConfig_Player_NoRegister()
{
	return UAISenseConfig_Player::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAISenseConfig_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/AISense/AISenseConfig_Player.h" },
		{ "ModuleRelativePath", "AI/AISense/AISenseConfig_Player.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Implements the logic for this sense config */" },
#endif
		{ "ModuleRelativePath", "AI/AISense/AISenseConfig_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the logic for this sense config" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/AISense/AISenseConfig_Player.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRate_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum sight distance to notice a target\n" },
#endif
		{ "ModuleRelativePath", "AI/AISense/AISenseConfig_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum sight distance to notice a target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseRate_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/AISense/AISenseConfig_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngle_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/AISense/AISenseConfig_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Player, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Player_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Implementation_MetaData), NewProp_Implementation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_TargetRadius = { "TargetRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Player, TargetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRadius_MetaData), NewProp_TargetRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_DetectionRate = { "DetectionRate", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Player, DetectionRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRate_MetaData), NewProp_DetectionRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_LoseRate = { "LoseRate", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Player, LoseRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseRate_MetaData), NewProp_LoseRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_PeripheralVisionAngle = { "PeripheralVisionAngle", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Player, PeripheralVisionAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionAngle_MetaData), NewProp_PeripheralVisionAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_Implementation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_TargetRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_DetectionRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_LoseRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Player_Statics::NewProp_PeripheralVisionAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseConfig_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Player_Statics::ClassParams = {
	&UAISenseConfig_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseConfig_Player_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Player_Statics::PropPointers),
	0,
	0x001010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseConfig_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseConfig_Player()
{
	if (!Z_Registration_Info_UClass_UAISenseConfig_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Player.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseConfig_Player.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Player);
UAISenseConfig_Player::~UAISenseConfig_Player() {}
// ********** End Class UAISenseConfig_Player ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISenseConfig_Player_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Player, UAISenseConfig_Player::StaticClass, TEXT("UAISenseConfig_Player"), &Z_Registration_Info_UClass_UAISenseConfig_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Player), 2409633942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISenseConfig_Player_h__Script_Project_Relic_v2_1672304705(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISenseConfig_Player_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISenseConfig_Player_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
