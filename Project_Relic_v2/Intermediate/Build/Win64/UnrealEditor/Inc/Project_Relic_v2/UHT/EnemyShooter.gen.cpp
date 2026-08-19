// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/Enemy/EnemyShooter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyShooter() {}

// ********** Begin Cross Module References ********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyCharacter();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyShooter();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyShooter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyShooter ************************************************************
void AEnemyShooter::StaticRegisterNativesAEnemyShooter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyShooter;
UClass* AEnemyShooter::GetPrivateStaticClass()
{
	using TClass = AEnemyShooter;
	if (!Z_Registration_Info_UClass_AEnemyShooter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyShooter"),
			Z_Registration_Info_UClass_AEnemyShooter.InnerSingleton,
			StaticRegisterNativesAEnemyShooter,
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
	return Z_Registration_Info_UClass_AEnemyShooter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyShooter_NoRegister()
{
	return AEnemyShooter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyShooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/Enemy/EnemyShooter.h" },
		{ "ModuleRelativePath", "AI/Enemy/EnemyShooter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShooter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyShooter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShooter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShooter_Statics::ClassParams = {
	&AEnemyShooter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShooter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyShooter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyShooter()
{
	if (!Z_Registration_Info_UClass_AEnemyShooter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyShooter.OuterSingleton, Z_Construct_UClass_AEnemyShooter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyShooter.OuterSingleton;
}
AEnemyShooter::AEnemyShooter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShooter);
AEnemyShooter::~AEnemyShooter() {}
// ********** End Class AEnemyShooter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyShooter, AEnemyShooter::StaticClass, TEXT("AEnemyShooter"), &Z_Registration_Info_UClass_AEnemyShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyShooter), 1424736694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h__Script_Project_Relic_v2_1655218715(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
