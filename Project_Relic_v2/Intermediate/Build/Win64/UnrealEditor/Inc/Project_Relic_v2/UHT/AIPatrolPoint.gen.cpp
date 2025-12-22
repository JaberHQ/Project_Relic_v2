// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPatrolPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIPatrolPoint() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAIPatrolPoint();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAIPatrolPoint ***********************************************************
void AAIPatrolPoint::StaticRegisterNativesAAIPatrolPoint()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAIPatrolPoint;
UClass* AAIPatrolPoint::GetPrivateStaticClass()
{
	using TClass = AAIPatrolPoint;
	if (!Z_Registration_Info_UClass_AAIPatrolPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIPatrolPoint"),
			Z_Registration_Info_UClass_AAIPatrolPoint.InnerSingleton,
			StaticRegisterNativesAAIPatrolPoint,
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
	return Z_Registration_Info_UClass_AAIPatrolPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister()
{
	return AAIPatrolPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAIPatrolPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AIPatrolPoint.h" },
		{ "ModuleRelativePath", "AIPatrolPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPatrolPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIPatrolPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATargetPoint,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPatrolPoint_Statics::ClassParams = {
	&AAIPatrolPoint::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIPatrolPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIPatrolPoint()
{
	if (!Z_Registration_Info_UClass_AAIPatrolPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPatrolPoint.OuterSingleton, Z_Construct_UClass_AAIPatrolPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIPatrolPoint.OuterSingleton;
}
AAIPatrolPoint::AAIPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrolPoint);
AAIPatrolPoint::~AAIPatrolPoint() {}
// ********** End Class AAIPatrolPoint *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIPatrolPoint, AAIPatrolPoint::StaticClass, TEXT("AAIPatrolPoint"), &Z_Registration_Info_UClass_AAIPatrolPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPatrolPoint), 4285646377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h__Script_Project_Relic_v2_2515286769(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
