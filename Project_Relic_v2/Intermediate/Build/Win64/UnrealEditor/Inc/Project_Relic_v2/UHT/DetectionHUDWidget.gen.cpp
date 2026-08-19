// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/DetectionHUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDetectionHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UDetectionHUDWidget();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UDetectionHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDetectionHUDWidget ******************************************************
void UDetectionHUDWidget::StaticRegisterNativesUDetectionHUDWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDetectionHUDWidget;
UClass* UDetectionHUDWidget::GetPrivateStaticClass()
{
	using TClass = UDetectionHUDWidget;
	if (!Z_Registration_Info_UClass_UDetectionHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DetectionHUDWidget"),
			Z_Registration_Info_UClass_UDetectionHUDWidget.InnerSingleton,
			StaticRegisterNativesUDetectionHUDWidget,
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
	return Z_Registration_Info_UClass_UDetectionHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UDetectionHUDWidget_NoRegister()
{
	return UDetectionHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDetectionHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DetectionHUDWidget.h" },
		{ "ModuleRelativePath", "UI/DetectionHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionMeter_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DetectionHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DetectionHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectionMeter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectionHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetectionHUDWidget_Statics::NewProp_DetectionMeter = { "DetectionMeter", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectionHUDWidget, DetectionMeter), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionMeter_MetaData), NewProp_DetectionMeter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetectionHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionHUDWidget_Statics::NewProp_DetectionMeter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDetectionHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetectionHUDWidget_Statics::ClassParams = {
	&UDetectionHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDetectionHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetectionHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetectionHUDWidget()
{
	if (!Z_Registration_Info_UClass_UDetectionHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetectionHUDWidget.OuterSingleton, Z_Construct_UClass_UDetectionHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetectionHUDWidget.OuterSingleton;
}
UDetectionHUDWidget::UDetectionHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectionHUDWidget);
UDetectionHUDWidget::~UDetectionHUDWidget() {}
// ********** End Class UDetectionHUDWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_DetectionHUDWidget_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetectionHUDWidget, UDetectionHUDWidget::StaticClass, TEXT("UDetectionHUDWidget"), &Z_Registration_Info_UClass_UDetectionHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetectionHUDWidget), 31133432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_DetectionHUDWidget_h__Script_Project_Relic_v2_2785335846(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_DetectionHUDWidget_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_UI_DetectionHUDWidget_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
