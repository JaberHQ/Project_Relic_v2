// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/TakedownController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTakedownController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ATakedownController();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ATakedownController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATakedownController ******************************************************
void ATakedownController::StaticRegisterNativesATakedownController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATakedownController;
UClass* ATakedownController::GetPrivateStaticClass()
{
	using TClass = ATakedownController;
	if (!Z_Registration_Info_UClass_ATakedownController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TakedownController"),
			Z_Registration_Info_UClass_ATakedownController.InnerSingleton,
			StaticRegisterNativesATakedownController,
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
	return Z_Registration_Info_UClass_ATakedownController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATakedownController_NoRegister()
{
	return ATakedownController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATakedownController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/TakedownController.h" },
		{ "ModuleRelativePath", "Player/TakedownController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATakedownController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATakedownController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATakedownController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATakedownController_Statics::ClassParams = {
	&ATakedownController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATakedownController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATakedownController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATakedownController()
{
	if (!Z_Registration_Info_UClass_ATakedownController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATakedownController.OuterSingleton, Z_Construct_UClass_ATakedownController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATakedownController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATakedownController);
ATakedownController::~ATakedownController() {}
// ********** End Class ATakedownController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Player_TakedownController_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATakedownController, ATakedownController::StaticClass, TEXT("ATakedownController"), &Z_Registration_Info_UClass_ATakedownController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATakedownController), 2962148958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Player_TakedownController_h__Script_Project_Relic_v2_2707336322(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Player_TakedownController_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Player_TakedownController_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
