// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/CombatInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UCombatInterface();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCombatInterface Function CanTakedown ********************************
struct CombatInterface_eventCanTakedown_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventCanTakedown_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatInterface::CanTakedown()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanTakedown instead.");
	CombatInterface_eventCanTakedown_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_CanTakedown = FName(TEXT("CanTakedown"));
bool ICombatInterface::Execute_CanTakedown(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventCanTakedown_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_CanTakedown);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanTakedown_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatInterface_eventCanTakedown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventCanTakedown_Parms), &Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "CanTakedown", Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::PropPointers), sizeof(CombatInterface_eventCanTakedown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventCanTakedown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_CanTakedown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_CanTakedown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execCanTakedown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanTakedown_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function CanTakedown **********************************

// ********** Begin Interface UCombatInterface Function Takedown ***********************************
void ICombatInterface::Takedown()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Takedown instead.");
}
static FName NAME_UCombatInterface_Takedown = FName(TEXT("Takedown"));
void ICombatInterface::Execute_Takedown(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_Takedown);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		I->Takedown_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatInterface_Takedown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_Takedown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "Takedown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_Takedown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_Takedown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatInterface_Takedown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_Takedown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execTakedown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Takedown_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function Takedown *************************************

// ********** Begin Interface UCombatInterface *****************************************************
void UCombatInterface::StaticRegisterNativesUCombatInterface()
{
	UClass* Class = UCombatInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanTakedown", &ICombatInterface::execCanTakedown },
		{ "Takedown", &ICombatInterface::execTakedown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatInterface;
UClass* UCombatInterface::GetPrivateStaticClass()
{
	using TClass = UCombatInterface;
	if (!Z_Registration_Info_UClass_UCombatInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatInterface"),
			Z_Registration_Info_UClass_UCombatInterface.InnerSingleton,
			StaticRegisterNativesUCombatInterface,
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
	return Z_Registration_Info_UClass_UCombatInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
{
	return UCombatInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_CanTakedown, "CanTakedown" }, // 871139300
		{ &Z_Construct_UFunction_UCombatInterface_Takedown, "Takedown" }, // 1254203322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
	&UCombatInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatInterface()
{
	if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
}
UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
// ********** End Interface UCombatInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Interfaces_CombatInterface_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 2775213824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Interfaces_CombatInterface_h__Script_Project_Relic_v2_3293588682(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Interfaces_CombatInterface_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Interfaces_CombatInterface_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
