// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomaticRifle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAutomaticRifle() {}

// ********** Begin Cross Module References ********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAutomaticRifle();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAutomaticRifle_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ABaseWeapon();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAutomaticRifle **********************************************************
void AAutomaticRifle::StaticRegisterNativesAAutomaticRifle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAutomaticRifle;
UClass* AAutomaticRifle::GetPrivateStaticClass()
{
	using TClass = AAutomaticRifle;
	if (!Z_Registration_Info_UClass_AAutomaticRifle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AutomaticRifle"),
			Z_Registration_Info_UClass_AAutomaticRifle.InnerSingleton,
			StaticRegisterNativesAAutomaticRifle,
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
	return Z_Registration_Info_UClass_AAutomaticRifle.InnerSingleton;
}
UClass* Z_Construct_UClass_AAutomaticRifle_NoRegister()
{
	return AAutomaticRifle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAutomaticRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AutomaticRifle.h" },
		{ "ModuleRelativePath", "AutomaticRifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutomaticRifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAutomaticRifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomaticRifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutomaticRifle_Statics::ClassParams = {
	&AAutomaticRifle::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomaticRifle_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutomaticRifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutomaticRifle()
{
	if (!Z_Registration_Info_UClass_AAutomaticRifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutomaticRifle.OuterSingleton, Z_Construct_UClass_AAutomaticRifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutomaticRifle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomaticRifle);
AAutomaticRifle::~AAutomaticRifle() {}
// ********** End Class AAutomaticRifle ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AutomaticRifle_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutomaticRifle, AAutomaticRifle::StaticClass, TEXT("AAutomaticRifle"), &Z_Registration_Info_UClass_AAutomaticRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutomaticRifle), 616816183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AutomaticRifle_h__Script_Project_Relic_v2_2970565968(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AutomaticRifle_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AutomaticRifle_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
