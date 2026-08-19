// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/AISense/AISense_Player.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAISense_Player() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISense_Player();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISense_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAISense_Player **********************************************************
void UAISense_Player::StaticRegisterNativesUAISense_Player()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAISense_Player;
UClass* UAISense_Player::GetPrivateStaticClass()
{
	using TClass = UAISense_Player;
	if (!Z_Registration_Info_UClass_UAISense_Player.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AISense_Player"),
			Z_Registration_Info_UClass_UAISense_Player.InnerSingleton,
			StaticRegisterNativesUAISense_Player,
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
	return Z_Registration_Info_UClass_UAISense_Player.InnerSingleton;
}
UClass* Z_Construct_UClass_UAISense_Player_NoRegister()
{
	return UAISense_Player::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAISense_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/AISense/AISense_Player.h" },
		{ "ModuleRelativePath", "AI/AISense/AISense_Player.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAISense_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Player_Statics::ClassParams = {
	&UAISense_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Player()
{
	if (!Z_Registration_Info_UClass_UAISense_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Player.OuterSingleton, Z_Construct_UClass_UAISense_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Player.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Player);
UAISense_Player::~UAISense_Player() {}
// ********** End Class UAISense_Player ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Player, UAISense_Player::StaticClass, TEXT("UAISense_Player"), &Z_Registration_Info_UClass_UAISense_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Player), 3828493748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h__Script_Project_Relic_v2_3464250721(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
