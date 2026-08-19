// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/TakedownWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTakedownWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UTakedownWidget();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UTakedownWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTakedownWidget **********************************************************
void UTakedownWidget::StaticRegisterNativesUTakedownWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTakedownWidget;
UClass* UTakedownWidget::GetPrivateStaticClass()
{
	using TClass = UTakedownWidget;
	if (!Z_Registration_Info_UClass_UTakedownWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TakedownWidget"),
			Z_Registration_Info_UClass_UTakedownWidget.InnerSingleton,
			StaticRegisterNativesUTakedownWidget,
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
	return Z_Registration_Info_UClass_UTakedownWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTakedownWidget_NoRegister()
{
	return UTakedownWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTakedownWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/TakedownWidget.h" },
		{ "ModuleRelativePath", "UI/TakedownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakedownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TakedownWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TakedownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TakedownText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakedownWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakedownWidget_Statics::NewProp_TakedownText = { "TakedownText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakedownWidget, TakedownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakedownText_MetaData), NewProp_TakedownText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakedownWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakedownWidget_Statics::NewProp_TakedownText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTakedownWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakedownWidget_Statics::ClassParams = {
	&UTakedownWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTakedownWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakedownWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTakedownWidget()
{
	if (!Z_Registration_Info_UClass_UTakedownWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakedownWidget.OuterSingleton, Z_Construct_UClass_UTakedownWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTakedownWidget.OuterSingleton;
}
UTakedownWidget::UTakedownWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTakedownWidget);
UTakedownWidget::~UTakedownWidget() {}
// ********** End Class UTakedownWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_TakedownWidget_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTakedownWidget, UTakedownWidget::StaticClass, TEXT("UTakedownWidget"), &Z_Registration_Info_UClass_UTakedownWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakedownWidget), 3962608718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_TakedownWidget_h__Script_Project_Relic_v2_3447427706(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_TakedownWidget_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_TakedownWidget_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
