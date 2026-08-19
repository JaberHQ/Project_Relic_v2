// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/Tasks/BTTaskNode_FindPatrol.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTaskNode_FindPatrol() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTaskNode_FindPatrol();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTaskNode_FindPatrol_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTaskNode_FindPatrol ***************************************************
void UBTTaskNode_FindPatrol::StaticRegisterNativesUBTTaskNode_FindPatrol()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTaskNode_FindPatrol;
UClass* UBTTaskNode_FindPatrol::GetPrivateStaticClass()
{
	using TClass = UBTTaskNode_FindPatrol;
	if (!Z_Registration_Info_UClass_UBTTaskNode_FindPatrol.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTaskNode_FindPatrol"),
			Z_Registration_Info_UClass_UBTTaskNode_FindPatrol.InnerSingleton,
			StaticRegisterNativesUBTTaskNode_FindPatrol,
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
	return Z_Registration_Info_UClass_UBTTaskNode_FindPatrol.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTaskNode_FindPatrol_NoRegister()
{
	return UBTTaskNode_FindPatrol::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/BTTaskNode_FindPatrol.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTTaskNode_FindPatrol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_FindPatrol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics::ClassParams = {
	&UBTTaskNode_FindPatrol::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_FindPatrol()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_FindPatrol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_FindPatrol.OuterSingleton, Z_Construct_UClass_UBTTaskNode_FindPatrol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_FindPatrol.OuterSingleton;
}
UBTTaskNode_FindPatrol::UBTTaskNode_FindPatrol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_FindPatrol);
UBTTaskNode_FindPatrol::~UBTTaskNode_FindPatrol() {}
// ********** End Class UBTTaskNode_FindPatrol *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTaskNode_FindPatrol_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_FindPatrol, UBTTaskNode_FindPatrol::StaticClass, TEXT("UBTTaskNode_FindPatrol"), &Z_Registration_Info_UClass_UBTTaskNode_FindPatrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_FindPatrol), 794951024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTaskNode_FindPatrol_h__Script_Project_Relic_v2_3215600271(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTaskNode_FindPatrol_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Tasks_BTTaskNode_FindPatrol_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
