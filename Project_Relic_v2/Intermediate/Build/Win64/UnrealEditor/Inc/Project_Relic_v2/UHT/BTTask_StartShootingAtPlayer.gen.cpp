// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/Tasks/BTTask_StartShootingAtPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_StartShootingAtPlayer() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_StartShootingAtPlayer();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_StartShootingAtPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_StartShootingAtPlayer ********************************************
void UBTTask_StartShootingAtPlayer::StaticRegisterNativesUBTTask_StartShootingAtPlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer;
UClass* UBTTask_StartShootingAtPlayer::GetPrivateStaticClass()
{
	using TClass = UBTTask_StartShootingAtPlayer;
	if (!Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_StartShootingAtPlayer"),
			Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer.InnerSingleton,
			StaticRegisterNativesUBTTask_StartShootingAtPlayer,
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
	return Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_StartShootingAtPlayer_NoRegister()
{
	return UBTTask_StartShootingAtPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/BTTask_StartShootingAtPlayer.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTTask_StartShootingAtPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingDuration_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Tasks/BTTask_StartShootingAtPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_StartShootingAtPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::NewProp_ShootingDuration = { "ShootingDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_StartShootingAtPlayer, ShootingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingDuration_MetaData), NewProp_ShootingDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::NewProp_ShootingDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::ClassParams = {
	&UBTTask_StartShootingAtPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_StartShootingAtPlayer()
{
	if (!Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer.OuterSingleton, Z_Construct_UClass_UBTTask_StartShootingAtPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer.OuterSingleton;
}
UBTTask_StartShootingAtPlayer::UBTTask_StartShootingAtPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_StartShootingAtPlayer);
UBTTask_StartShootingAtPlayer::~UBTTask_StartShootingAtPlayer() {}
// ********** End Class UBTTask_StartShootingAtPlayer **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StartShootingAtPlayer_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_StartShootingAtPlayer, UBTTask_StartShootingAtPlayer::StaticClass, TEXT("UBTTask_StartShootingAtPlayer"), &Z_Registration_Info_UClass_UBTTask_StartShootingAtPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_StartShootingAtPlayer), 3524836017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StartShootingAtPlayer_h__Script_Project_Relic_v2_2996822435(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StartShootingAtPlayer_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StartShootingAtPlayer_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
