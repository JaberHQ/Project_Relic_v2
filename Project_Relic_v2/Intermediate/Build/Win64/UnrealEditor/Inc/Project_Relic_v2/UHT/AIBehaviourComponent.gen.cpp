// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AIBehaviourComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIBehaviourComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAIBehaviourComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAIBehaviourComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAIBehaviourComponent ****************************************************
void UAIBehaviourComponent::StaticRegisterNativesUAIBehaviourComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAIBehaviourComponent;
UClass* UAIBehaviourComponent::GetPrivateStaticClass()
{
	using TClass = UAIBehaviourComponent;
	if (!Z_Registration_Info_UClass_UAIBehaviourComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIBehaviourComponent"),
			Z_Registration_Info_UClass_UAIBehaviourComponent.InnerSingleton,
			StaticRegisterNativesUAIBehaviourComponent,
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
	return Z_Registration_Info_UClass_UAIBehaviourComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAIBehaviourComponent_NoRegister()
{
	return UAIBehaviourComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAIBehaviourComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AIBehaviourComponent.h" },
		{ "ModuleRelativePath", "Components/AIBehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "Components/AIBehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolPath_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPath_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PatrolPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBehaviourComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIBehaviourComponent_Statics::NewProp_PatrolPath_ValueProp = { "PatrolPath", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIBehaviourComponent_Statics::NewProp_PatrolPath_Key_KeyProp = { "PatrolPath_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAIPatrolPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAIBehaviourComponent_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIBehaviourComponent, PatrolPath), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPath_MetaData), NewProp_PatrolPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIBehaviourComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBehaviourComponent_Statics::NewProp_PatrolPath_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBehaviourComponent_Statics::NewProp_PatrolPath_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBehaviourComponent_Statics::NewProp_PatrolPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviourComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIBehaviourComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviourComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIBehaviourComponent_Statics::ClassParams = {
	&UAIBehaviourComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIBehaviourComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviourComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviourComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIBehaviourComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIBehaviourComponent()
{
	if (!Z_Registration_Info_UClass_UAIBehaviourComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIBehaviourComponent.OuterSingleton, Z_Construct_UClass_UAIBehaviourComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIBehaviourComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBehaviourComponent);
UAIBehaviourComponent::~UAIBehaviourComponent() {}
// ********** End Class UAIBehaviourComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_AIBehaviourComponent_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIBehaviourComponent, UAIBehaviourComponent::StaticClass, TEXT("UAIBehaviourComponent"), &Z_Registration_Info_UClass_UAIBehaviourComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIBehaviourComponent), 1937849723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_AIBehaviourComponent_h__Script_Project_Relic_v2_1207738212(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_AIBehaviourComponent_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_AIBehaviourComponent_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
