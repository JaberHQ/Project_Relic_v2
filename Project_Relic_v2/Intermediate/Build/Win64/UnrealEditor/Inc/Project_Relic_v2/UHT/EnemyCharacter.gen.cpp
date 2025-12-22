// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyCharacter();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyCharacter Function OnPlayerDetected ********************************
struct Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics
{
	struct EnemyCharacter_eventOnPlayerDetected_Parms
	{
		APawn* DetectedPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::NewProp_DetectedPawn = { "DetectedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_eventOnPlayerDetected_Parms, DetectedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::NewProp_DetectedPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "OnPlayerDetected", Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::EnemyCharacter_eventOnPlayerDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::EnemyCharacter_eventOnPlayerDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter::execOnPlayerDetected)
{
	P_GET_OBJECT(APawn,Z_Param_DetectedPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDetected(Z_Param_DetectedPawn);
	P_NATIVE_END;
}
// ********** End Class AEnemyCharacter Function OnPlayerDetected **********************************

// ********** Begin Class AEnemyCharacter Function UpdateWalkSpeed *********************************
struct Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics
{
	struct EnemyCharacter_eventUpdateWalkSpeed_Parms
	{
		float NewWalkSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::NewProp_NewWalkSpeed = { "NewWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_eventUpdateWalkSpeed_Parms, NewWalkSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::NewProp_NewWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "UpdateWalkSpeed", Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::EnemyCharacter_eventUpdateWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::EnemyCharacter_eventUpdateWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter::execUpdateWalkSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWalkSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWalkSpeed(Z_Param_NewWalkSpeed);
	P_NATIVE_END;
}
// ********** End Class AEnemyCharacter Function UpdateWalkSpeed ***********************************

// ********** Begin Class AEnemyCharacter **********************************************************
void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
{
	UClass* Class = AEnemyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerDetected", &AEnemyCharacter::execOnPlayerDetected },
		{ "UpdateWalkSpeed", &AEnemyCharacter::execUpdateWalkSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyCharacter;
UClass* AEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = AEnemyCharacter;
	if (!Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyCharacter"),
			Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton,
			StaticRegisterNativesAEnemyCharacter,
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
	return Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
{
	return AEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_OnPlayerDetected, "OnPlayerDetected" }, // 2932070883
		{ &Z_Construct_UFunction_AEnemyCharacter_UpdateWalkSpeed, "UpdateWalkSpeed" }, // 4067734349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviourTree = { "BehaviourTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourTree_MetaData), NewProp_BehaviourTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviourTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
	&AEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
AEnemyCharacter::~AEnemyCharacter() {}
// ********** End Class AEnemyCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 2785145644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h__Script_Project_Relic_v2_3608145042(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
