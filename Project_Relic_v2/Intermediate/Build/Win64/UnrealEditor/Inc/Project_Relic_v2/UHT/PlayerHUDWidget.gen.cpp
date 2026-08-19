// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PlayerHUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UDetectionHUDWidget_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UTakedownWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerHUDWidget *********************************************************
void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerHUDWidget;
UClass* UPlayerHUDWidget::GetPrivateStaticClass()
{
	using TClass = UPlayerHUDWidget;
	if (!Z_Registration_Info_UClass_UPlayerHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerHUDWidget"),
			Z_Registration_Info_UClass_UPlayerHUDWidget.InnerSingleton,
			StaticRegisterNativesUPlayerHUDWidget,
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
	return Z_Registration_Info_UClass_UPlayerHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
{
	return UPlayerHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakedownWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TakedownWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectionWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TakedownWidget = { "TakedownWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, TakedownWidget), Z_Construct_UClass_UTakedownWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakedownWidget_MetaData), NewProp_TakedownWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_DetectionWidget = { "DetectionWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, DetectionWidget), Z_Construct_UClass_UDetectionHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionWidget_MetaData), NewProp_DetectionWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TakedownWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_DetectionWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
	&UPlayerHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHUDWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton;
}
UPlayerHUDWidget::UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
UPlayerHUDWidget::~UPlayerHUDWidget() {}
// ********** End Class UPlayerHUDWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_PlayerHUDWidget_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUDWidget, UPlayerHUDWidget::StaticClass, TEXT("UPlayerHUDWidget"), &Z_Registration_Info_UClass_UPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUDWidget), 2733323049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_PlayerHUDWidget_h__Script_Project_Relic_v2_1362638324(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_PlayerHUDWidget_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_PlayerHUDWidget_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
