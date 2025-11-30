// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Relic_v2Character.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProject_Relic_v2Character() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AProject_Relic_v2Character();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AProject_Relic_v2Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProject_Relic_v2Character Function CrouchTimelineFinishedFunction *******
struct Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "CrouchTimelineFinishedFunction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execCrouchTimelineFinishedFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrouchTimelineFinishedFunction();
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function CrouchTimelineFinishedFunction *********

// ********** Begin Class AProject_Relic_v2Character Function CrouchTimelineUpdateFunction *********
struct Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics
{
	struct Project_Relic_v2Character_eventCrouchTimelineUpdateFunction_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Project_Relic_v2Character_eventCrouchTimelineUpdateFunction_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "CrouchTimelineUpdateFunction", Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::Project_Relic_v2Character_eventCrouchTimelineUpdateFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::Project_Relic_v2Character_eventCrouchTimelineUpdateFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execCrouchTimelineUpdateFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrouchTimelineUpdateFunction(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function CrouchTimelineUpdateFunction ***********

// ********** Begin Class AProject_Relic_v2Character Function DoCrouchEnd **************************
struct Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "DoCrouchEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execDoCrouchEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoCrouchEnd();
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function DoCrouchEnd ****************************

// ********** Begin Class AProject_Relic_v2Character Function DoCrouchStart ************************
struct Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "DoCrouchStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execDoCrouchStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoCrouchStart();
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function DoCrouchStart **************************

// ********** Begin Class AProject_Relic_v2Character Function DoJumpEnd ****************************
struct Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function DoJumpEnd ******************************

// ********** Begin Class AProject_Relic_v2Character Function DoJumpStart **************************
struct Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function DoJumpStart ****************************

// ********** Begin Class AProject_Relic_v2Character Function DoLook *******************************
struct Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics
{
	struct Project_Relic_v2Character_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Project_Relic_v2Character_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Project_Relic_v2Character_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "DoLook", Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::Project_Relic_v2Character_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::Project_Relic_v2Character_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function DoLook *********************************

// ********** Begin Class AProject_Relic_v2Character Function DoMove *******************************
struct Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics
{
	struct Project_Relic_v2Character_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Project_Relic_v2Character_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Project_Relic_v2Character_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProject_Relic_v2Character, nullptr, "DoMove", Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::Project_Relic_v2Character_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::Project_Relic_v2Character_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProject_Relic_v2Character_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProject_Relic_v2Character_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProject_Relic_v2Character::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AProject_Relic_v2Character Function DoMove *********************************

// ********** Begin Class AProject_Relic_v2Character ***********************************************
void AProject_Relic_v2Character::StaticRegisterNativesAProject_Relic_v2Character()
{
	UClass* Class = AProject_Relic_v2Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CrouchTimelineFinishedFunction", &AProject_Relic_v2Character::execCrouchTimelineFinishedFunction },
		{ "CrouchTimelineUpdateFunction", &AProject_Relic_v2Character::execCrouchTimelineUpdateFunction },
		{ "DoCrouchEnd", &AProject_Relic_v2Character::execDoCrouchEnd },
		{ "DoCrouchStart", &AProject_Relic_v2Character::execDoCrouchStart },
		{ "DoJumpEnd", &AProject_Relic_v2Character::execDoJumpEnd },
		{ "DoJumpStart", &AProject_Relic_v2Character::execDoJumpStart },
		{ "DoLook", &AProject_Relic_v2Character::execDoLook },
		{ "DoMove", &AProject_Relic_v2Character::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProject_Relic_v2Character;
UClass* AProject_Relic_v2Character::GetPrivateStaticClass()
{
	using TClass = AProject_Relic_v2Character;
	if (!Z_Registration_Info_UClass_AProject_Relic_v2Character.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Project_Relic_v2Character"),
			Z_Registration_Info_UClass_AProject_Relic_v2Character.InnerSingleton,
			StaticRegisterNativesAProject_Relic_v2Character,
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
	return Z_Registration_Info_UClass_AProject_Relic_v2Character.InnerSingleton;
}
UClass* Z_Construct_UClass_AProject_Relic_v2Character_NoRegister()
{
	return AProject_Relic_v2Character::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProject_Relic_v2Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Project_Relic_v2Character.h" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTimelineComp_MetaData[] = {
		{ "Category", "Project_Relic_v2Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchFloatCurve_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Project_Relic_v2Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchTimelineComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchFloatCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineFinishedFunction, "CrouchTimelineFinishedFunction" }, // 2273341118
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_CrouchTimelineUpdateFunction, "CrouchTimelineUpdateFunction" }, // 3661481970
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchEnd, "DoCrouchEnd" }, // 2750799325
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_DoCrouchStart, "DoCrouchStart" }, // 3199976856
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpEnd, "DoJumpEnd" }, // 3753467309
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_DoJumpStart, "DoJumpStart" }, // 2364487555
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_DoLook, "DoLook" }, // 222299045
		{ &Z_Construct_UFunction_AProject_Relic_v2Character_DoMove, "DoMove" }, // 1709244830
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_Relic_v2Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_WeaponComponent = { "WeaponComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, WeaponComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponComponent_MetaData), NewProp_WeaponComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CrouchTimelineComp = { "CrouchTimelineComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, CrouchTimelineComp), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchTimelineComp_MetaData), NewProp_CrouchTimelineComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CrouchFloatCurve = { "CrouchFloatCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_Relic_v2Character, CrouchFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchFloatCurve_MetaData), NewProp_CrouchFloatCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProject_Relic_v2Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_WeaponComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CrouchTimelineComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_Relic_v2Character_Statics::NewProp_CrouchFloatCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_Relic_v2Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProject_Relic_v2Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_Relic_v2Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_Relic_v2Character_Statics::ClassParams = {
	&AProject_Relic_v2Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProject_Relic_v2Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProject_Relic_v2Character_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_Relic_v2Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_Relic_v2Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_Relic_v2Character()
{
	if (!Z_Registration_Info_UClass_AProject_Relic_v2Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_Relic_v2Character.OuterSingleton, Z_Construct_UClass_AProject_Relic_v2Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_Relic_v2Character.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_Relic_v2Character);
AProject_Relic_v2Character::~AProject_Relic_v2Character() {}
// ********** End Class AProject_Relic_v2Character *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_Relic_v2Character, AProject_Relic_v2Character::StaticClass, TEXT("AProject_Relic_v2Character"), &Z_Registration_Info_UClass_AProject_Relic_v2Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_Relic_v2Character), 3767643661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h__Script_Project_Relic_v2_1157814985(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
