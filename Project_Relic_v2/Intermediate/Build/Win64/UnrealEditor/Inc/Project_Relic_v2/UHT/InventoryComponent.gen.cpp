// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/InventoryComponent.h"

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
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
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
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type: Struct\n\nName: FAmmunition\n\nAuthor: Jaber Ahmed\n\nPurpose: Handles all default settings for weapon\n\nReferences: N/A\n\nSee Also: N/A\n\nChange Log:\nDate          Initials    Version     Comments\n29/08/2023    JA          V1.0        N/A\n13/12/2025    JA                     V2.0            N/A" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPrimary_MetaData[] = {
		{ "Category", "Ammunition" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSecondary_MetaData[] = {
		{ "Category", "Ammunition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default maximum ammunition in primary weapon\n" },
#endif
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default maximum ammunition in primary weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPrimary_MetaData[] = {
		{ "Category", "Ammunition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default maximum ammunition in secondary weapon\n" },
#endif
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default maximum ammunition in secondary weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalSecondary_MetaData[] = {
		{ "Category", "Ammunition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default reserve ammuntion in primary weapon\n" },
#endif
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default reserve ammuntion in primary weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPrimary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSecondary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPrimary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalSecondary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmunition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_MaxPrimary = { "MaxPrimary", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmunition, MaxPrimary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPrimary_MetaData), NewProp_MaxPrimary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_MaxSecondary = { "MaxSecondary", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmunition, MaxSecondary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSecondary_MetaData), NewProp_MaxSecondary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_TotalPrimary = { "TotalPrimary", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmunition, TotalPrimary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPrimary_MetaData), NewProp_TotalPrimary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_TotalSecondary = { "TotalSecondary", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmunition, TotalSecondary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalSecondary_MetaData), NewProp_TotalSecondary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmunition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_MaxPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_MaxSecondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_TotalPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmunition_Statics::NewProp_TotalSecondary,
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
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmunitionSettings_MetaData[] = {
		{ "Category", "Ammunition" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmmunitionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_AmmunitionSettings = { "AmmunitionSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, AmmunitionSettings), Z_Construct_UScriptStruct_FAmmunition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmunitionSettings_MetaData), NewProp_AmmunitionSettings_MetaData) }; // 4089999347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_AmmunitionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAmmunitionType_StaticEnum, TEXT("EAmmunitionType"), &Z_Registration_Info_UEnum_EAmmunitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4065236383U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAmmunition::StaticStruct, Z_Construct_UScriptStruct_FAmmunition_Statics::NewStructOps, TEXT("Ammunition"), &Z_Registration_Info_UScriptStruct_FAmmunition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmmunition), 4089999347U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 119576985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_3114426632(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Components_InventoryComponent_h__Script_Project_Relic_v2_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
