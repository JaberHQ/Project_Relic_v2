// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UWeaponComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponComponent Function ADSCameraOffsetProgress ************************
struct Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics
{
	struct WeaponComponent_eventADSCameraOffsetProgress_Parms
	{
		float CameraOffsetX;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraOffsetX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::NewProp_CameraOffsetX = { "CameraOffsetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventADSCameraOffsetProgress_Parms, CameraOffsetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::NewProp_CameraOffsetX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ADSCameraOffsetProgress", Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::WeaponComponent_eventADSCameraOffsetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::WeaponComponent_eventADSCameraOffsetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execADSCameraOffsetProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CameraOffsetX);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ADSCameraOffsetProgress(Z_Param_CameraOffsetX);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function ADSCameraOffsetProgress **************************

// ********** Begin Class UWeaponComponent Function ADSFieldOfViewProgress *************************
struct Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics
{
	struct WeaponComponent_eventADSFieldOfViewProgress_Parms
	{
		float FOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventADSFieldOfViewProgress_Parms, FOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::NewProp_FOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ADSFieldOfViewProgress", Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::WeaponComponent_eventADSFieldOfViewProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::WeaponComponent_eventADSFieldOfViewProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execADSFieldOfViewProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ADSFieldOfViewProgress(Z_Param_FOV);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function ADSFieldOfViewProgress ***************************

// ********** Begin Class UWeaponComponent Function DoAim ******************************************
struct Z_Construct_UFunction_UWeaponComponent_DoAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "DoAim", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_DoAim_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponComponent_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execDoAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function DoAim ********************************************

// ********** Begin Class UWeaponComponent Function GetIsAiming ************************************
struct Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics
{
	struct WeaponComponent_eventGetIsAiming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponComponent_eventGetIsAiming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventGetIsAiming_Parms), &Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetIsAiming", Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::WeaponComponent_eventGetIsAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::WeaponComponent_eventGetIsAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetIsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetIsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetIsAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAiming();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function GetIsAiming **************************************

// ********** Begin Class UWeaponComponent Function SetIsAiming ************************************
struct Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics
{
	struct WeaponComponent_eventSetIsAiming_Parms
	{
		bool isAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_isAiming_SetBit(void* Obj)
{
	((WeaponComponent_eventSetIsAiming_Parms*)Obj)->isAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_isAiming = { "isAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventSetIsAiming_Parms), &Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_isAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_isAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "SetIsAiming", Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::WeaponComponent_eventSetIsAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::WeaponComponent_eventSetIsAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_SetIsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execSetIsAiming)
{
	P_GET_UBOOL(Z_Param_isAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAiming(Z_Param_isAiming);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function SetIsAiming **************************************

// ********** Begin Class UWeaponComponent *********************************************************
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ADSCameraOffsetProgress", &UWeaponComponent::execADSCameraOffsetProgress },
		{ "ADSFieldOfViewProgress", &UWeaponComponent::execADSFieldOfViewProgress },
		{ "DoAim", &UWeaponComponent::execDoAim },
		{ "GetIsAiming", &UWeaponComponent::execGetIsAiming },
		{ "SetIsAiming", &UWeaponComponent::execSetIsAiming },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponComponent;
UClass* UWeaponComponent::GetPrivateStaticClass()
{
	using TClass = UWeaponComponent;
	if (!Z_Registration_Info_UClass_UWeaponComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponComponent"),
			Z_Registration_Info_UClass_UWeaponComponent.InnerSingleton,
			StaticRegisterNativesUWeaponComponent,
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
	return Z_Registration_Info_UClass_UWeaponComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
{
	return UWeaponComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponComponent.h" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSCameraOffsetCurveFloat_MetaData[] = {
		{ "Category", "Curve Float" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSFieldOfViewCurveFloat_MetaData[] = {
		{ "Category", "Curve Float" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSCurveTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSCameraOffsetCurveFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSFieldOfViewCurveFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSCurveTimeline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_ADSCameraOffsetProgress, "ADSCameraOffsetProgress" }, // 1991742677
		{ &Z_Construct_UFunction_UWeaponComponent_ADSFieldOfViewProgress, "ADSFieldOfViewProgress" }, // 992585735
		{ &Z_Construct_UFunction_UWeaponComponent_DoAim, "DoAim" }, // 162737349
		{ &Z_Construct_UFunction_UWeaponComponent_GetIsAiming, "GetIsAiming" }, // 3759279808
		{ &Z_Construct_UFunction_UWeaponComponent_SetIsAiming, "SetIsAiming" }, // 416651007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAction_MetaData), NewProp_AimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAction_MetaData), NewProp_ShootAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ADSCameraOffsetCurveFloat = { "ADSCameraOffsetCurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ADSCameraOffsetCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSCameraOffsetCurveFloat_MetaData), NewProp_ADSCameraOffsetCurveFloat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ADSFieldOfViewCurveFloat = { "ADSFieldOfViewCurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ADSFieldOfViewCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSFieldOfViewCurveFloat_MetaData), NewProp_ADSFieldOfViewCurveFloat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_FireMappingContext = { "FireMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, FireMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMappingContext_MetaData), NewProp_FireMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", nullptr, (EPropertyFlags)0x0040000000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, PrimaryWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryWeapon_MetaData), NewProp_PrimaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ADSCurveTimeline = { "ADSCurveTimeline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ADSCurveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSCurveTimeline_MetaData), NewProp_ADSCurveTimeline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ADSCameraOffsetCurveFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ADSFieldOfViewCurveFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_FireMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ADSCurveTimeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
	&UWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
UWeaponComponent::~UWeaponComponent() {}
// ********** End Class UWeaponComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 3290158901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_601170647(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
