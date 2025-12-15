// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseWeapon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ABaseWeapon();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseWeapon Function GetWeaponSkeletalMeshComponent **********************
struct Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics
{
	struct BaseWeapon_eventGetWeaponSkeletalMeshComponent_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the skeletal mesh component of the weapon */" },
#endif
		{ "ModuleRelativePath", "BaseWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the skeletal mesh component of the weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWeapon_eventGetWeaponSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "GetWeaponSkeletalMeshComponent", Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::BaseWeapon_eventGetWeaponSkeletalMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::BaseWeapon_eventGetWeaponSkeletalMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseWeapon::execGetWeaponSkeletalMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetWeaponSkeletalMeshComponent();
	P_NATIVE_END;
}
// ********** End Class ABaseWeapon Function GetWeaponSkeletalMeshComponent ************************

// ********** Begin Class ABaseWeapon **************************************************************
void ABaseWeapon::StaticRegisterNativesABaseWeapon()
{
	UClass* Class = ABaseWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeaponSkeletalMeshComponent", &ABaseWeapon::execGetWeaponSkeletalMeshComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseWeapon;
UClass* ABaseWeapon::GetPrivateStaticClass()
{
	using TClass = ABaseWeapon;
	if (!Z_Registration_Info_UClass_ABaseWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseWeapon"),
			Z_Registration_Info_UClass_ABaseWeapon.InnerSingleton,
			StaticRegisterNativesABaseWeapon,
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
	return Z_Registration_Info_UClass_ABaseWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
{
	return ABaseWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseWeapon.h" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skeletal mesh of weapon */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal mesh of weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseWeapon_GetWeaponSkeletalMeshComponent, "GetWeaponSkeletalMeshComponent" }, // 3679226809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponSkeletalMeshComponent = { "WeaponSkeletalMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseWeapon, WeaponSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSkeletalMeshComponent_MetaData), NewProp_WeaponSkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponSkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
	&ABaseWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseWeapon()
{
	if (!Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
ABaseWeapon::~ABaseWeapon() {}
// ********** End Class ABaseWeapon ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BaseWeapon_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseWeapon, ABaseWeapon::StaticClass, TEXT("ABaseWeapon"), &Z_Registration_Info_UClass_ABaseWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseWeapon), 1248625698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BaseWeapon_h__Script_Project_Relic_v2_1448014743(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BaseWeapon_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_BaseWeapon_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
