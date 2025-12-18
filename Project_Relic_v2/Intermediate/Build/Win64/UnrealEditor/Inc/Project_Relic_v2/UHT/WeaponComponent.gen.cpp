// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponComponent.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UWeaponComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponComponent Function AimingCameraOffsetProgress *********************
struct Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics
{
	struct WeaponComponent_eventAimingCameraOffsetProgress_Parms
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::NewProp_CameraOffsetX = { "CameraOffsetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventAimingCameraOffsetProgress_Parms, CameraOffsetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::NewProp_CameraOffsetX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "AimingCameraOffsetProgress", Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::WeaponComponent_eventAimingCameraOffsetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::WeaponComponent_eventAimingCameraOffsetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execAimingCameraOffsetProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CameraOffsetX);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AimingCameraOffsetProgress(Z_Param_CameraOffsetX);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function AimingCameraOffsetProgress ***********************

// ********** Begin Class UWeaponComponent Function AimingFieldOfViewProgress **********************
struct Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics
{
	struct WeaponComponent_eventAimingFieldOfViewProgress_Parms
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventAimingFieldOfViewProgress_Parms, FOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::NewProp_FOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "AimingFieldOfViewProgress", Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::WeaponComponent_eventAimingFieldOfViewProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::WeaponComponent_eventAimingFieldOfViewProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execAimingFieldOfViewProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AimingFieldOfViewProgress(Z_Param_FOV);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function AimingFieldOfViewProgress ************************

// ********** Begin Class UWeaponComponent Function AttachWeapon ***********************************
struct Z_Construct_UFunction_UWeaponComponent_AttachWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attaches the actor to a FirstPersonCharacter */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches the actor to a FirstPersonCharacter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_AttachWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "AttachWeapon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponComponent_AttachWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_AttachWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execAttachWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachWeapon();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function AttachWeapon *************************************

// ********** Begin Class UWeaponComponent Function GetCurrentAmmoOfCurrentWeapon ******************
struct Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics
{
	struct WeaponComponent_eventGetCurrentAmmoOfCurrentWeapon_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get the current ammunition count of the current weapon from inventory component */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current ammunition count of the current weapon from inventory component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventGetCurrentAmmoOfCurrentWeapon_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetCurrentAmmoOfCurrentWeapon", Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::WeaponComponent_eventGetCurrentAmmoOfCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::WeaponComponent_eventGetCurrentAmmoOfCurrentWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetCurrentAmmoOfCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmoOfCurrentWeapon();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function GetCurrentAmmoOfCurrentWeapon ********************

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

// ********** Begin Class UWeaponComponent Function GetIsReloading *********************************
struct Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics
{
	struct WeaponComponent_eventGetIsReloading_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get the boolean to see if player is reloading */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the boolean to see if player is reloading" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponComponent_eventGetIsReloading_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventGetIsReloading_Parms), &Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetIsReloading", Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::WeaponComponent_eventGetIsReloading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::WeaponComponent_eventGetIsReloading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetIsReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetIsReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetIsReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsReloading();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function GetIsReloading ***********************************

// ********** Begin Class UWeaponComponent Function GetIsShooting **********************************
struct Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics
{
	struct WeaponComponent_eventGetIsShooting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get boolean to see if player is firing */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get boolean to see if player is firing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponComponent_eventGetIsShooting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventGetIsShooting_Parms), &Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetIsShooting", Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::WeaponComponent_eventGetIsShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::WeaponComponent_eventGetIsShooting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetIsShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetIsShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetIsShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsShooting();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function GetIsShooting ************************************

// ********** Begin Class UWeaponComponent Function GetReserveAmmoOfCurrentWeapon ******************
struct Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics
{
	struct WeaponComponent_eventGetReserveAmmoOfCurrentWeapon_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get the total ammunition count of the current weapon from inventory component */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the total ammunition count of the current weapon from inventory component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventGetReserveAmmoOfCurrentWeapon_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetReserveAmmoOfCurrentWeapon", Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::WeaponComponent_eventGetReserveAmmoOfCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::WeaponComponent_eventGetReserveAmmoOfCurrentWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetReserveAmmoOfCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetReserveAmmoOfCurrentWeapon();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function GetReserveAmmoOfCurrentWeapon ********************

// ********** Begin Class UWeaponComponent Function SetIsAiming ************************************
struct Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics
{
	struct WeaponComponent_eventSetIsAiming_Parms
	{
		bool IsAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_IsAiming_SetBit(void* Obj)
{
	((WeaponComponent_eventSetIsAiming_Parms*)Obj)->IsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_IsAiming = { "IsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventSetIsAiming_Parms), &Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_IsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_SetIsAiming_Statics::NewProp_IsAiming,
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
	P_GET_UBOOL(Z_Param_IsAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAiming(Z_Param_IsAiming);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function SetIsAiming **************************************

// ********** Begin Class UWeaponComponent Function StartAiming ************************************
struct Z_Construct_UFunction_UWeaponComponent_StartAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles the Aim down sights (ADS) actions */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles the Aim down sights (ADS) actions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_StartAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "StartAiming", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_StartAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_StartAiming_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponComponent_StartAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_StartAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execStartAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAiming();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function StartAiming **************************************

// ********** Begin Class UWeaponComponent Function StopAiming *************************************
struct Z_Construct_UFunction_UWeaponComponent_StopAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles the actions after the Aim Down Sights (ADS) input is complete */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles the actions after the Aim Down Sights (ADS) input is complete" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_StopAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "StopAiming", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_StopAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_StopAiming_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponComponent_StopAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_StopAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execStopAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAiming();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function StopAiming ***************************************

// ********** Begin Class UWeaponComponent Function SwitchWeapons **********************************
struct Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics
{
	struct WeaponComponent_eventSwitchWeapons_Parms
	{
		FInputActionValue index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Calculate the correct weapon index */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate the correct weapon index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventSwitchWeapons_Parms, index), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_index_MetaData), NewProp_index_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "SwitchWeapons", Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::WeaponComponent_eventSwitchWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::WeaponComponent_eventSwitchWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_SwitchWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_SwitchWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execSwitchWeapons)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchWeapons(Z_Param_Out_index);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function SwitchWeapons ************************************

// ********** Begin Class UWeaponComponent *********************************************************
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AimingCameraOffsetProgress", &UWeaponComponent::execAimingCameraOffsetProgress },
		{ "AimingFieldOfViewProgress", &UWeaponComponent::execAimingFieldOfViewProgress },
		{ "AttachWeapon", &UWeaponComponent::execAttachWeapon },
		{ "GetCurrentAmmoOfCurrentWeapon", &UWeaponComponent::execGetCurrentAmmoOfCurrentWeapon },
		{ "GetIsAiming", &UWeaponComponent::execGetIsAiming },
		{ "GetIsReloading", &UWeaponComponent::execGetIsReloading },
		{ "GetIsShooting", &UWeaponComponent::execGetIsShooting },
		{ "GetReserveAmmoOfCurrentWeapon", &UWeaponComponent::execGetReserveAmmoOfCurrentWeapon },
		{ "SetIsAiming", &UWeaponComponent::execSetIsAiming },
		{ "StartAiming", &UWeaponComponent::execStartAiming },
		{ "StopAiming", &UWeaponComponent::execStopAiming },
		{ "SwitchWeapons", &UWeaponComponent::execSwitchWeapons },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponsAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire Input Action */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingCameraOffsetCurveFloat_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingFieldOfViewCurveFloat_MetaData[] = {
		{ "Category", "Gameplay" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Secondary gun */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secondary gun" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingCurveTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Seconds to wait between shots */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds to wait between shots" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Line trace distance (how far the player can shoot) */" },
#endif
		{ "ModuleRelativePath", "WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line trace distance (how far the player can shoot)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponsAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingCameraOffsetCurveFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingFieldOfViewCurveFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingCurveTimeline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_AimingCameraOffsetProgress, "AimingCameraOffsetProgress" }, // 2129994467
		{ &Z_Construct_UFunction_UWeaponComponent_AimingFieldOfViewProgress, "AimingFieldOfViewProgress" }, // 2164636631
		{ &Z_Construct_UFunction_UWeaponComponent_AttachWeapon, "AttachWeapon" }, // 1281466438
		{ &Z_Construct_UFunction_UWeaponComponent_GetCurrentAmmoOfCurrentWeapon, "GetCurrentAmmoOfCurrentWeapon" }, // 2710833412
		{ &Z_Construct_UFunction_UWeaponComponent_GetIsAiming, "GetIsAiming" }, // 3759279808
		{ &Z_Construct_UFunction_UWeaponComponent_GetIsReloading, "GetIsReloading" }, // 822242970
		{ &Z_Construct_UFunction_UWeaponComponent_GetIsShooting, "GetIsShooting" }, // 1763653920
		{ &Z_Construct_UFunction_UWeaponComponent_GetReserveAmmoOfCurrentWeapon, "GetReserveAmmoOfCurrentWeapon" }, // 3087907869
		{ &Z_Construct_UFunction_UWeaponComponent_SetIsAiming, "SetIsAiming" }, // 3343256913
		{ &Z_Construct_UFunction_UWeaponComponent_StartAiming, "StartAiming" }, // 4268346913
		{ &Z_Construct_UFunction_UWeaponComponent_StopAiming, "StopAiming" }, // 1159162497
		{ &Z_Construct_UFunction_UWeaponComponent_SwitchWeapons, "SwitchWeapons" }, // 560802459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAction_MetaData), NewProp_AimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAction_MetaData), NewProp_ShootAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAction_MetaData), NewProp_ReloadAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SwitchWeaponsAction = { "SwitchWeaponsAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, SwitchWeaponsAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchWeaponsAction_MetaData), NewProp_SwitchWeaponsAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimingCameraOffsetCurveFloat = { "AimingCameraOffsetCurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AimingCameraOffsetCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingCameraOffsetCurveFloat_MetaData), NewProp_AimingCameraOffsetCurveFloat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimingFieldOfViewCurveFloat = { "AimingFieldOfViewCurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AimingFieldOfViewCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingFieldOfViewCurveFloat_MetaData), NewProp_AimingFieldOfViewCurveFloat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_FireMappingContext = { "FireMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, FireMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMappingContext_MetaData), NewProp_FireMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", nullptr, (EPropertyFlags)0x0040000000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, PrimaryWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryWeapon_MetaData), NewProp_PrimaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0040000000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, SecondaryWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryWeapon_MetaData), NewProp_SecondaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimingCurveTimeline = { "AimingCurveTimeline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AimingCurveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingCurveTimeline_MetaData), NewProp_AimingCurveTimeline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTime_MetaData), NewProp_ReloadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, TimeBetweenShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBetweenShots_MetaData), NewProp_TimeBetweenShots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootingDistance = { "ShootingDistance", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ShootingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingDistance_MetaData), NewProp_ShootingDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ReloadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SwitchWeaponsAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimingCameraOffsetCurveFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimingFieldOfViewCurveFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_FireMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimingCurveTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ReloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_TimeBetweenShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootingDistance,
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
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 2715265346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_1614022977(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
