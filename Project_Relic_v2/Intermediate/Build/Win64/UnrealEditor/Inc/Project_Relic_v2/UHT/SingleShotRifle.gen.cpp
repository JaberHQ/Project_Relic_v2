// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingleShotRifle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSingleShotRifle() {}

// ********** Begin Cross Module References ********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ABaseWeapon();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ASingleShotRifle();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ASingleShotRifle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASingleShotRifle *********************************************************
void ASingleShotRifle::StaticRegisterNativesASingleShotRifle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASingleShotRifle;
UClass* ASingleShotRifle::GetPrivateStaticClass()
{
	using TClass = ASingleShotRifle;
	if (!Z_Registration_Info_UClass_ASingleShotRifle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SingleShotRifle"),
			Z_Registration_Info_UClass_ASingleShotRifle.InnerSingleton,
			StaticRegisterNativesASingleShotRifle,
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
	return Z_Registration_Info_UClass_ASingleShotRifle.InnerSingleton;
}
UClass* Z_Construct_UClass_ASingleShotRifle_NoRegister()
{
	return ASingleShotRifle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASingleShotRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************************************************************\n * Type: Class\n *\n * Name: ASingleShotRifle\n *\n * Author: Jaber A\n *\n * Purpose: Singleshot gun, derived from the base weapon class \n *\n * References: N/A\n *\n * See Also: WeaponComponent\n *\n * Change Log:\n * Date          Initials    Version     Comments\n * 29/09/2023    JA          V1.0        N/A\n * 13/12/2025\x09 JA\x09\x09\x09 v2.0\x09\x09 N/A\n*****************************************************************************************************/" },
#endif
		{ "IncludePath", "SingleShotRifle.h" },
		{ "ModuleRelativePath", "SingleShotRifle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type: Class\n\nName: ASingleShotRifle\n\nAuthor: Jaber A\n\nPurpose: Singleshot gun, derived from the base weapon class\n\nReferences: N/A\n\nSee Also: WeaponComponent\n\nChange Log:\nDate          Initials    Version     Comments\n29/09/2023    JA          V1.0        N/A\n13/12/2025   JA                      v2.0            N/A" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingleShotRifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASingleShotRifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASingleShotRifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASingleShotRifle_Statics::ClassParams = {
	&ASingleShotRifle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASingleShotRifle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASingleShotRifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASingleShotRifle()
{
	if (!Z_Registration_Info_UClass_ASingleShotRifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASingleShotRifle.OuterSingleton, Z_Construct_UClass_ASingleShotRifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASingleShotRifle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleShotRifle);
ASingleShotRifle::~ASingleShotRifle() {}
// ********** End Class ASingleShotRifle ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_SingleShotRifle_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASingleShotRifle, ASingleShotRifle::StaticClass, TEXT("ASingleShotRifle"), &Z_Registration_Info_UClass_ASingleShotRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASingleShotRifle), 4217097733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_SingleShotRifle_h__Script_Project_Relic_v2_610885620(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_SingleShotRifle_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_SingleShotRifle_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
