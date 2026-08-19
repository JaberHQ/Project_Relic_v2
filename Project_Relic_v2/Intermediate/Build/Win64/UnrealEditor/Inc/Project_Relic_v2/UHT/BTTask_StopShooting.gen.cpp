// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/Tasks/BTTask_StopShooting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_StopShooting() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_StopShooting();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_StopShooting_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_StopShooting *****************************************************
void UBTTask_StopShooting::StaticRegisterNativesUBTTask_StopShooting()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_StopShooting;
UClass* UBTTask_StopShooting::GetPrivateStaticClass()
{
	using TClass = UBTTask_StopShooting;
	if (!Z_Registration_Info_UClass_UBTTask_StopShooting.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_StopShooting"),
			Z_Registration_Info_UClass_UBTTask_StopShooting.InnerSingleton,
			StaticRegisterNativesUBTTask_StopShooting,
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
	return Z_Registration_Info_UClass_UBTTask_StopShooting.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_StopShooting_NoRegister()
{
	return UBTTask_StopShooting::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_StopShooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/BTTask_StopShooting.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTTask_StopShooting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_StopShooting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_StopShooting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopShooting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_StopShooting_Statics::ClassParams = {
	&UBTTask_StopShooting::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopShooting_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_StopShooting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_StopShooting()
{
	if (!Z_Registration_Info_UClass_UBTTask_StopShooting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_StopShooting.OuterSingleton, Z_Construct_UClass_UBTTask_StopShooting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_StopShooting.OuterSingleton;
}
UBTTask_StopShooting::UBTTask_StopShooting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_StopShooting);
UBTTask_StopShooting::~UBTTask_StopShooting() {}
// ********** End Class UBTTask_StopShooting *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StopShooting_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_StopShooting, UBTTask_StopShooting::StaticClass, TEXT("UBTTask_StopShooting"), &Z_Registration_Info_UClass_UBTTask_StopShooting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_StopShooting), 19439564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StopShooting_h__Script_Project_Relic_v2_4202694711(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StopShooting_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_StopShooting_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
