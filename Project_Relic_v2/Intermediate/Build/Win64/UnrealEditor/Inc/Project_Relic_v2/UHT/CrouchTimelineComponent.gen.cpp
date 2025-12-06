// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchTimelineComponent.h"
#include "Components/TimelineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCrouchTimelineComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UCrouchTimelineComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UCrouchTimelineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCrouchTimelineComponent Function Play ***********************************
struct Z_Construct_UFunction_UCrouchTimelineComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrouchTimelineComponent_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrouchTimelineComponent, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrouchTimelineComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrouchTimelineComponent_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrouchTimelineComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrouchTimelineComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrouchTimelineComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UCrouchTimelineComponent Function Play *************************************

// ********** Begin Class UCrouchTimelineComponent Function Reverse ********************************
struct Z_Construct_UFunction_UCrouchTimelineComponent_Reverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrouchTimelineComponent_Reverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrouchTimelineComponent, nullptr, "Reverse", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrouchTimelineComponent_Reverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrouchTimelineComponent_Reverse_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrouchTimelineComponent_Reverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrouchTimelineComponent_Reverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrouchTimelineComponent::execReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reverse();
	P_NATIVE_END;
}
// ********** End Class UCrouchTimelineComponent Function Reverse **********************************

// ********** Begin Class UCrouchTimelineComponent Function TimelineFinishedFunction ***************
struct Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrouchTimelineComponent, nullptr, "TimelineFinishedFunction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrouchTimelineComponent::execTimelineFinishedFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineFinishedFunction();
	P_NATIVE_END;
}
// ********** End Class UCrouchTimelineComponent Function TimelineFinishedFunction *****************

// ********** Begin Class UCrouchTimelineComponent *************************************************
void UCrouchTimelineComponent::StaticRegisterNativesUCrouchTimelineComponent()
{
	UClass* Class = UCrouchTimelineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Play", &UCrouchTimelineComponent::execPlay },
		{ "Reverse", &UCrouchTimelineComponent::execReverse },
		{ "TimelineFinishedFunction", &UCrouchTimelineComponent::execTimelineFinishedFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCrouchTimelineComponent;
UClass* UCrouchTimelineComponent::GetPrivateStaticClass()
{
	using TClass = UCrouchTimelineComponent;
	if (!Z_Registration_Info_UClass_UCrouchTimelineComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CrouchTimelineComponent"),
			Z_Registration_Info_UClass_UCrouchTimelineComponent.InnerSingleton,
			StaticRegisterNativesUCrouchTimelineComponent,
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
	return Z_Registration_Info_UClass_UCrouchTimelineComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCrouchTimelineComponent_NoRegister()
{
	return UCrouchTimelineComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCrouchTimelineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CrouchTimelineComponent.h" },
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTimelineComp_MetaData[] = {
		{ "Category", "CrouchTimelineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTimeline_MetaData[] = {
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchCurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "CrouchTimelineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchTimelineComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchCurveFloat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrouchTimelineComponent_Play, "Play" }, // 1161770100
		{ &Z_Construct_UFunction_UCrouchTimelineComponent_Reverse, "Reverse" }, // 509178898
		{ &Z_Construct_UFunction_UCrouchTimelineComponent_TimelineFinishedFunction, "TimelineFinishedFunction" }, // 332182717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrouchTimelineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrouchTimelineComponent_Statics::NewProp_CrouchTimelineComp = { "CrouchTimelineComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrouchTimelineComponent, CrouchTimelineComp), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchTimelineComp_MetaData), NewProp_CrouchTimelineComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrouchTimelineComponent_Statics::NewProp_CrouchTimeline = { "CrouchTimeline", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrouchTimelineComponent, CrouchTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchTimeline_MetaData), NewProp_CrouchTimeline_MetaData) }; // 1826369284
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrouchTimelineComponent_Statics::NewProp_CrouchCurveFloat = { "CrouchCurveFloat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrouchTimelineComponent, CrouchCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchCurveFloat_MetaData), NewProp_CrouchCurveFloat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrouchTimelineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrouchTimelineComponent_Statics::NewProp_CrouchTimelineComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrouchTimelineComponent_Statics::NewProp_CrouchTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrouchTimelineComponent_Statics::NewProp_CrouchCurveFloat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchTimelineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrouchTimelineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchTimelineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrouchTimelineComponent_Statics::ClassParams = {
	&UCrouchTimelineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCrouchTimelineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchTimelineComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchTimelineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrouchTimelineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrouchTimelineComponent()
{
	if (!Z_Registration_Info_UClass_UCrouchTimelineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrouchTimelineComponent.OuterSingleton, Z_Construct_UClass_UCrouchTimelineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrouchTimelineComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrouchTimelineComponent);
UCrouchTimelineComponent::~UCrouchTimelineComponent() {}
// ********** End Class UCrouchTimelineComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineComponent_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrouchTimelineComponent, UCrouchTimelineComponent::StaticClass, TEXT("UCrouchTimelineComponent"), &Z_Registration_Info_UClass_UCrouchTimelineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrouchTimelineComponent), 2337020932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineComponent_h__Script_Project_Relic_v2_3150385147(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineComponent_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineComponent_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
