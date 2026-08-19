// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/Tasks/BTTask_ChasePlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_ChasePlayer() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ChasePlayer ******************************************************
void UBTTask_ChasePlayer::StaticRegisterNativesUBTTask_ChasePlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ChasePlayer;
UClass* UBTTask_ChasePlayer::GetPrivateStaticClass()
{
	using TClass = UBTTask_ChasePlayer;
	if (!Z_Registration_Info_UClass_UBTTask_ChasePlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_ChasePlayer"),
			Z_Registration_Info_UClass_UBTTask_ChasePlayer.InnerSingleton,
			StaticRegisterNativesUBTTask_ChasePlayer,
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
	return Z_Registration_Info_UClass_UBTTask_ChasePlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister()
{
	return UBTTask_ChasePlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ChasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/BTTask_ChasePlayer.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTTask_ChasePlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChasePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams = {
	&UBTTask_ChasePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ChasePlayer()
{
	if (!Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton;
}
UBTTask_ChasePlayer::UBTTask_ChasePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChasePlayer);
UBTTask_ChasePlayer::~UBTTask_ChasePlayer() {}
// ********** End Class UBTTask_ChasePlayer ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_ChasePlayer_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChasePlayer, UBTTask_ChasePlayer::StaticClass, TEXT("UBTTask_ChasePlayer"), &Z_Registration_Info_UClass_UBTTask_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChasePlayer), 1122940203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_ChasePlayer_h__Script_Project_Relic_v2_253883421(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_ChasePlayer_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_ChasePlayer_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
