// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTFindRandomPatrol.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTFindRandomPatrol() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTFindRandomPatrol();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UBTTFindRandomPatrol_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTFindRandomPatrol *****************************************************
void UBTTFindRandomPatrol::StaticRegisterNativesUBTTFindRandomPatrol()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTFindRandomPatrol;
UClass* UBTTFindRandomPatrol::GetPrivateStaticClass()
{
	using TClass = UBTTFindRandomPatrol;
	if (!Z_Registration_Info_UClass_UBTTFindRandomPatrol.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTFindRandomPatrol"),
			Z_Registration_Info_UClass_UBTTFindRandomPatrol.InnerSingleton,
			StaticRegisterNativesUBTTFindRandomPatrol,
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
	return Z_Registration_Info_UClass_UBTTFindRandomPatrol.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTFindRandomPatrol_NoRegister()
{
	return UBTTFindRandomPatrol::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTFindRandomPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTFindRandomPatrol.h" },
		{ "ModuleRelativePath", "BTTFindRandomPatrol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpeed_MetaData[] = {
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "BTTFindRandomPatrol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "BTTFindRandomPatrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTFindRandomPatrol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTFindRandomPatrol_Statics::NewProp_PatrolSpeed = { "PatrolSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTFindRandomPatrol, PatrolSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpeed_MetaData), NewProp_PatrolSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTFindRandomPatrol_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTFindRandomPatrol, PatrolRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRadius_MetaData), NewProp_PatrolRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTFindRandomPatrol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTFindRandomPatrol_Statics::NewProp_PatrolSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTFindRandomPatrol_Statics::NewProp_PatrolRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTFindRandomPatrol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTFindRandomPatrol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTFindRandomPatrol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTFindRandomPatrol_Statics::ClassParams = {
	&UBTTFindRandomPatrol::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTFindRandomPatrol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTFindRandomPatrol_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTFindRandomPatrol_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTFindRandomPatrol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTFindRandomPatrol()
{
	if (!Z_Registration_Info_UClass_UBTTFindRandomPatrol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTFindRandomPatrol.OuterSingleton, Z_Construct_UClass_UBTTFindRandomPatrol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTFindRandomPatrol.OuterSingleton;
}
UBTTFindRandomPatrol::UBTTFindRandomPatrol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTFindRandomPatrol);
UBTTFindRandomPatrol::~UBTTFindRandomPatrol() {}
// ********** End Class UBTTFindRandomPatrol *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTFindRandomPatrol_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTFindRandomPatrol, UBTTFindRandomPatrol::StaticClass, TEXT("UBTTFindRandomPatrol"), &Z_Registration_Info_UClass_UBTTFindRandomPatrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTFindRandomPatrol), 4121626864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTFindRandomPatrol_h__Script_Project_Relic_v2_2409624719(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTFindRandomPatrol_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BTTFindRandomPatrol_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
