// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponComponent.h"

#ifdef PROJECT_RELIC_V2_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define PROJECT_RELIC_V2_WeaponComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class UWeaponComponent *********************************************************
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchWeapons); \
	DECLARE_FUNCTION(execAttachWeapon); \
	DECLARE_FUNCTION(execADSFieldOfViewProgress); \
	DECLARE_FUNCTION(execADSCameraOffsetProgress); \
	DECLARE_FUNCTION(execStopADS); \
	DECLARE_FUNCTION(execADS); \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execGetIsReloading); \
	DECLARE_FUNCTION(execGetIsShooting); \
	DECLARE_FUNCTION(execGetReserveAmmoOfCurrentWeapon); \
	DECLARE_FUNCTION(execGetCurrentAmmoOfCurrentWeapon); \
	DECLARE_FUNCTION(execGetIsAiming); \
	DECLARE_FUNCTION(execSetIsAiming);


PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();

#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_UWeaponComponent_NoRegister) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponComponent(UWeaponComponent&&) = delete; \
	UWeaponComponent(const UWeaponComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_18_PROLOG
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponComponent;

// ********** End Class UWeaponComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_WeaponComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
