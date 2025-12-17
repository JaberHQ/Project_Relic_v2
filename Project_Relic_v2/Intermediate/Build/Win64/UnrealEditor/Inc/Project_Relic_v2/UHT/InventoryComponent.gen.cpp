// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UInventoryComponent();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROJECT_RELIC_V2_API UEnum* Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType();
PROJECT_RELIC_V2_API UScriptStruct* Z_Construct_UScriptStruct_FAmmunition();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAmmunitionType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmunitionType;
static UEnum* EAmmunitionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAmmunitionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAmmunitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType, (UObject*)Z_Construct_UPackage__Script_Project_Relic_v2(), TEXT("EAmmunitionType"));
	}
	return Z_Registration_Info_UEnum_EAmmunitionType.OuterSingleton;
}
template<> PROJECT_RELIC_V2_API UEnum* StaticEnum<EAmmunitionType>()
{
	return EAmmunitionType_StaticEnum();
}
struct Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************************************************************\n * Type: Enum class\n *\n * Name: EAmmunitionType\n *\n * Author: Jaber A\n *\n * Purpose: Enum for every weapon type\n *\n * References: N/A\n *\n * See Also: WeaponComponent.cpp\n *\n * Change Log:\n * Date          Initials    Version     Comments\n * 28/09/2023    JA          V1.0        N/A\n * 13/12/2025    JA\x09\x09\x09 v2.0\x09\x09 N/A\n*****************************************************************************************************/" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
		{ "Primary.DisplayName", "Primary Ammunition" },
		{ "Primary.Name", "EAmmunitionType::Primary" },
		{ "Secondary.DisplayName", "Secondary Ammunition" },
		{ "Secondary.Name", "EAmmunitionType::Secondary" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type: Enum class\n\nName: EAmmunitionType\n\nAuthor: Jaber A\n\nPurpose: Enum for every weapon type\n\nReferences: N/A\n\nSee Also: WeaponComponent.cpp\n\nChange Log:\nDate          Initials    Version     Comments\n28/09/2023    JA          V1.0        N/A\n13/12/2025    JA                     v2.0            N/A" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAmmunitionType::Primary", (int64)EAmmunitionType::Primary },
		{ "EAmmunitionType::Secondary", (int64)EAmmunitionType::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Project_Relic_v2,
	nullptr,
	"EAmmunitionType",
	"EAmmunitionType",
	Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType()
{
	if (!Z_Registration_Info_UEnum_EAmmunitionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmunitionType.InnerSingleton, Z_Construct_UEnum_Project_Relic_v2_EAmmunitionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAmmunitionType.InnerSingleton;
}
// ********** End Enum EAmmunitionType *************************************************************

// ********** Begin ScriptStruct FAmmunition *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAmmunition;
class UScriptStruct* FAmmunition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAmmunition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAmmunition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmunition, (UObject*)Z_Construct_UPackage__Script_Project_Relic_v2(), TEXT("Ammunition"));
	}
	return Z_Registration_Info_UScriptStruct_FAmmunition.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAmmunition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************************************************************\n * Type: Struct\n *\n * Name: FAmmunition\n *\n * Author: Jaber Ahmed\n *\n * Purpose: Handles all default settings for weapon\n *\n * References: N/A\n *\n * See Also: N/A\n *\n * Change Log:\n * Date          Initials    Version     Comments\n * 29/08/2023    JA          V1.0        N/A\n * 13/12/2025    JA\x09\x09\x09 V2.0\x09\x09 N/A\n*****************************************************************************************************/" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type: Struct\n\nName: FAmmunition\n\nAuthor: Jaber Ahmed\n\nPurpose: Handles all default settings for weapon\n\nReferences: N/A\n\nSee Also: N/A\n\nChange Log:\nDate          Initials    Version     Comments\n29/08/2023    JA          V1.0        N/A\n13/12/2025    JA                     V2.0            N/A" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxPrimaryAmmunition_MetaData[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTotalPrimaryAmmunition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default maximum ammunition in secondary weapon\n" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default maximum ammunition in secondary weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_DefaultMaxPrimaryAmmunition;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_DefaultTotalPrimaryAmmunition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmunition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_DefaultMaxPrimaryAmmunition = { "DefaultMaxPrimaryAmmunition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmunition, DefaultMaxPrimaryAmmunition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxPrimaryAmmunition_MetaData), NewProp_DefaultMaxPrimaryAmmunition_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_DefaultTotalPrimaryAmmunition = { "DefaultTotalPrimaryAmmunition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmunition, DefaultTotalPrimaryAmmunition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTotalPrimaryAmmunition_MetaData), NewProp_DefaultTotalPrimaryAmmunition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmunition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_DefaultMaxPrimaryAmmunition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_DefaultTotalPrimaryAmmunition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmunition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmunition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
	nullptr,
	&NewStructOps,
	"Ammunition",
	Z_Construct_UScriptStruct_FAmmunition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmunition_Statics::PropPointers),
	sizeof(FAmmunition),
	alignof(FAmmunition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmunition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmmunition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmmunition()
{
	if (!Z_Registration_Info_UScriptStruct_FAmmunition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAmmunition.InnerSingleton, Z_Construct_UScriptStruct_FAmmunition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAmmunition.InnerSingleton;
}
// ********** End ScriptStruct FAmmunition *********************************************************

// ********** Begin Class UInventoryComponent ******************************************************
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComponent;
UClass* UInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInventoryComponent;
	if (!Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryComponent"),
			Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton,
			StaticRegisterNativesUInventoryComponent,
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
	return Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// ********** End Class UInventoryComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAmmunitionType_StaticEnum, TEXT("EAmmunitionType"), &Z_Registration_Info_UEnum_EAmmunitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 754121883U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAmmunition::StaticStruct, Z_Construct_UScriptStruct_FAmmunition_Statics::NewStructOps, TEXT("Ammunition"), &Z_Registration_Info_UScriptStruct_FAmmunition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmmunition), 508775050U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 3230481902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_1613018047(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_InventoryComponent_h__Script_Project_Relic_v2_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
