// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyController();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyController Function OnPlayerDetected *******************************
struct Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics
{
	struct EnemyController_eventOnPlayerDetected_Parms
	{
		APawn* DetectedPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::NewProp_DetectedPawn = { "DetectedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyController_eventOnPlayerDetected_Parms, DetectedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::NewProp_DetectedPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "OnPlayerDetected", Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::EnemyController_eventOnPlayerDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::EnemyController_eventOnPlayerDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyController_OnPlayerDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyController_OnPlayerDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyController::execOnPlayerDetected)
{
	P_GET_OBJECT(APawn,Z_Param_DetectedPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDetected(Z_Param_DetectedPawn);
	P_NATIVE_END;
}
// ********** End Class AEnemyController Function OnPlayerDetected *********************************

// ********** Begin Class AEnemyController *********************************************************
void AEnemyController::StaticRegisterNativesAEnemyController()
{
	UClass* Class = AEnemyController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerDetected", &AEnemyController::execOnPlayerDetected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyController;
UClass* AEnemyController::GetPrivateStaticClass()
{
	using TClass = AEnemyController;
	if (!Z_Registration_Info_UClass_AEnemyController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyController"),
			Z_Registration_Info_UClass_AEnemyController.InnerSingleton,
			StaticRegisterNativesAEnemyController,
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
	return Z_Registration_Info_UClass_AEnemyController.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyController_NoRegister()
{
	return AEnemyController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blackboard keys */" },
#endif
		{ "ModuleRelativePath", "EnemyController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blackboard keys" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasLineOfSight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PatrolLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HasLineOfSight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyController_OnPlayerDetected, "OnPlayerDetected" }, // 2244612066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_PatrolLocation = { "PatrolLocation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, PatrolLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolLocation_MetaData), NewProp_PatrolLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_EnemyActor = { "EnemyActor", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, EnemyActor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyActor_MetaData), NewProp_EnemyActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_HasLineOfSight = { "HasLineOfSight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, HasLineOfSight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasLineOfSight_MetaData), NewProp_HasLineOfSight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_PatrolLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_EnemyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_HasLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_PawnSensingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
	&AEnemyController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyController()
{
	if (!Z_Registration_Info_UClass_AEnemyController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyController.OuterSingleton, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
AEnemyController::~AEnemyController() {}
// ********** End Class AEnemyController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyController_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyController, AEnemyController::StaticClass, TEXT("AEnemyController"), &Z_Registration_Info_UClass_AEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyController), 738474804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyController_h__Script_Project_Relic_v2_3996002089(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyController_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyController_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
