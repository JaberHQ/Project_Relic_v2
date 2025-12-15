// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Relic_v2GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProject_Relic_v2GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AProject_Relic_v2GameMode();
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AProject_Relic_v2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Relic_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProject_Relic_v2GameMode ************************************************
void AProject_Relic_v2GameMode::StaticRegisterNativesAProject_Relic_v2GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProject_Relic_v2GameMode;
UClass* AProject_Relic_v2GameMode::GetPrivateStaticClass()
{
	using TClass = AProject_Relic_v2GameMode;
	if (!Z_Registration_Info_UClass_AProject_Relic_v2GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Project_Relic_v2GameMode"),
			Z_Registration_Info_UClass_AProject_Relic_v2GameMode.InnerSingleton,
			StaticRegisterNativesAProject_Relic_v2GameMode,
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
	return Z_Registration_Info_UClass_AProject_Relic_v2GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProject_Relic_v2GameMode_NoRegister()
{
	return AProject_Relic_v2GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProject_Relic_v2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_Relic_v2GameMode.h" },
		{ "ModuleRelativePath", "Project_Relic_v2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_Relic_v2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject_Relic_v2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Relic_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_Relic_v2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_Relic_v2GameMode_Statics::ClassParams = {
	&AProject_Relic_v2GameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_Relic_v2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_Relic_v2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_Relic_v2GameMode()
{
	if (!Z_Registration_Info_UClass_AProject_Relic_v2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_Relic_v2GameMode.OuterSingleton, Z_Construct_UClass_AProject_Relic_v2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_Relic_v2GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_Relic_v2GameMode);
AProject_Relic_v2GameMode::~AProject_Relic_v2GameMode() {}
// ********** End Class AProject_Relic_v2GameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2GameMode_h__Script_Project_Relic_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_Relic_v2GameMode, AProject_Relic_v2GameMode::StaticClass, TEXT("AProject_Relic_v2GameMode"), &Z_Registration_Info_UClass_AProject_Relic_v2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_Relic_v2GameMode), 260357499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2GameMode_h__Script_Project_Relic_v2_149636416(TEXT("/Script/Project_Relic_v2"),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2GameMode_h__Script_Project_Relic_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2GameMode_h__Script_Project_Relic_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
