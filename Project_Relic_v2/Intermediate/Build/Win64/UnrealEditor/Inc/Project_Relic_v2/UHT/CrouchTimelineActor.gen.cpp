// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchTimelineActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCrouchTimelineActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ACrouchTimelineActor();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ACrouchTimelineActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACrouchTimelineActor Function TimelineFinishedFunction *******************
struct Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrouchTimelineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACrouchTimelineActor, nullptr, "TimelineFinishedFunction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACrouchTimelineActor::execTimelineFinishedFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineFinishedFunction();
	P_NATIVE_END;
}
// ********** End Class ACrouchTimelineActor Function TimelineFinishedFunction *********************

// ********** Begin Class ACrouchTimelineActor *****************************************************
void ACrouchTimelineActor::StaticRegisterNativesACrouchTimelineActor()
{
	UClass* Class = ACrouchTimelineActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TimelineFinishedFunction", &ACrouchTimelineActor::execTimelineFinishedFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACrouchTimelineActor;
UClass* ACrouchTimelineActor::GetPrivateStaticClass()
{
	using TClass = ACrouchTimelineActor;
	if (!Z_Registration_Info_UClass_ACrouchTimelineActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CrouchTimelineActor"),
			Z_Registration_Info_UClass_ACrouchTimelineActor.InnerSingleton,
			StaticRegisterNativesACrouchTimelineActor,
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
	return Z_Registration_Info_UClass_ACrouchTimelineActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ACrouchTimelineActor_NoRegister()
{
	return ACrouchTimelineActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACrouchTimelineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CrouchTimelineActor.h" },
		{ "ModuleRelativePath", "CrouchTimelineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTimelineComp_MetaData[] = {
		{ "Category", "CrouchTimelineActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrouchTimelineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchTimelineComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrouchTimelineActor_TimelineFinishedFunction, "TimelineFinishedFunction" }, // 2850689248
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrouchTimelineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrouchTimelineActor_Statics::NewProp_CrouchTimelineComp = { "CrouchTimelineComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrouchTimelineActor, CrouchTimelineComp), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchTimelineComp_MetaData), NewProp_CrouchTimelineComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrouchTimelineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrouchTimelineActor_Statics::NewProp_CrouchTimelineComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrouchTimelineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACrouchTimelineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrouchTimelineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrouchTimelineActor_Statics::ClassParams = {
	&ACrouchTimelineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACrouchTimelineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACrouchTimelineActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrouchTimelineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrouchTimelineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACrouchTimelineActor()
{
	if (!Z_Registration_Info_UClass_ACrouchTimelineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrouchTimelineActor.OuterSingleton, Z_Construct_UClass_ACrouchTimelineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACrouchTimelineActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACrouchTimelineActor);
ACrouchTimelineActor::~ACrouchTimelineActor() {}
// ********** End Class ACrouchTimelineActor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineActor_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACrouchTimelineActor, ACrouchTimelineActor::StaticClass, TEXT("ACrouchTimelineActor"), &Z_Registration_Info_UClass_ACrouchTimelineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrouchTimelineActor), 4290885103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineActor_h__Script_Project_Relic_v2_1623441967(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineActor_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_CrouchTimelineActor_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
