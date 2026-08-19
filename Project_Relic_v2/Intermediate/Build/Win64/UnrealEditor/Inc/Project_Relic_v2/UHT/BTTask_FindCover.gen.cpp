// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/Tasks/BTTask_FindCover.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_FindCover() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_FindCover();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTask_FindCover_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_FindCover ********************************************************
void UBTTask_FindCover::StaticRegisterNativesUBTTask_FindCover()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_FindCover;
UClass* UBTTask_FindCover::GetPrivateStaticClass()
{
	using TClass = UBTTask_FindCover;
	if (!Z_Registration_Info_UClass_UBTTask_FindCover.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_FindCover"),
			Z_Registration_Info_UClass_UBTTask_FindCover.InnerSingleton,
			StaticRegisterNativesUBTTask_FindCover,
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
	return Z_Registration_Info_UClass_UBTTask_FindCover.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_FindCover_NoRegister()
{
	return UBTTask_FindCover::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_FindCover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/BTTask_FindCover.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTTask_FindCover.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindCover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_FindCover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindCover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindCover_Statics::ClassParams = {
	&UBTTask_FindCover::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindCover_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindCover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindCover()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindCover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindCover.OuterSingleton, Z_Construct_UClass_UBTTask_FindCover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindCover.OuterSingleton;
}
UBTTask_FindCover::UBTTask_FindCover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindCover);
UBTTask_FindCover::~UBTTask_FindCover() {}
// ********** End Class UBTTask_FindCover **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_FindCover_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindCover, UBTTask_FindCover::StaticClass, TEXT("UBTTask_FindCover"), &Z_Registration_Info_UClass_UBTTask_FindCover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindCover), 757282983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_FindCover_h__Script_Project_Relic_v2_3531762578(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_FindCover_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTask_FindCover_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
