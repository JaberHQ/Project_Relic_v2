// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTChasePlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTChasePlayer() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTChasePlayer();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTChasePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTChasePlayer **********************************************************
void UBTTChasePlayer::StaticRegisterNativesUBTTChasePlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTChasePlayer;
UClass* UBTTChasePlayer::GetPrivateStaticClass()
{
	using TClass = UBTTChasePlayer;
	if (!Z_Registration_Info_UClass_UBTTChasePlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTChasePlayer"),
			Z_Registration_Info_UClass_UBTTChasePlayer.InnerSingleton,
			StaticRegisterNativesUBTTChasePlayer,
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
	return Z_Registration_Info_UClass_UBTTChasePlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTChasePlayer_NoRegister()
{
	return UBTTChasePlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTChasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTChasePlayer.h" },
		{ "ModuleRelativePath", "BTTChasePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BTTChasePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTChasePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTChasePlayer_Statics::NewProp_ChaseSpeed = { "ChaseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTChasePlayer, ChaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseSpeed_MetaData), NewProp_ChaseSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTChasePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTChasePlayer_Statics::NewProp_ChaseSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTChasePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTChasePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTChasePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTChasePlayer_Statics::ClassParams = {
	&UBTTChasePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTChasePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTChasePlayer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTChasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTChasePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTChasePlayer()
{
	if (!Z_Registration_Info_UClass_UBTTChasePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTChasePlayer.OuterSingleton, Z_Construct_UClass_UBTTChasePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTChasePlayer.OuterSingleton;
}
UBTTChasePlayer::UBTTChasePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTChasePlayer);
UBTTChasePlayer::~UBTTChasePlayer() {}
// ********** End Class UBTTChasePlayer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTChasePlayer_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTChasePlayer, UBTTChasePlayer::StaticClass, TEXT("UBTTChasePlayer"), &Z_Registration_Info_UClass_UBTTChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTChasePlayer), 1887455080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTChasePlayer_h__Script_Project_Relic_v2_3282405340(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTChasePlayer_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTChasePlayer_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
