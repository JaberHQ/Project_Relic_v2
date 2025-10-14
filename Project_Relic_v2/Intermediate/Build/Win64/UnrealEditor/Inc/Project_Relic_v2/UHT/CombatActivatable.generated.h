// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Interfaces/CombatActivatable.h"

#ifdef PROJECT_RELIC_V2_CombatActivatable_generated_h
#error "CombatActivatable.generated.h already included, missing '#pragma once' in CombatActivatable.h"
#endif
#define PROJECT_RELIC_V2_CombatActivatable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface UCombatActivatable ***************************************************
#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeactivateInteraction); \
	DECLARE_FUNCTION(execActivateInteraction); \
	DECLARE_FUNCTION(execToggleInteraction);


PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UCombatActivatable_NoRegister();

#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECT_RELIC_V2_API UCombatActivatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatActivatable(UCombatActivatable&&) = delete; \
	UCombatActivatable(const UCombatActivatable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECT_RELIC_V2_API, UCombatActivatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatActivatable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatActivatable) \
	virtual ~UCombatActivatable() = default;


#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatActivatable(); \
	friend struct Z_Construct_UClass_UCombatActivatable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UCombatActivatable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatActivatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_UCombatActivatable_NoRegister) \
	DECLARE_SERIALIZER(UCombatActivatable)


#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatActivatable() {} \
public: \
	typedef UCombatActivatable UClassType; \
	typedef ICombatActivatable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_13_PROLOG
#define FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatActivatable;

// ********** End Interface UCombatActivatable *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_OneDrive_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Variant_Combat_Interfaces_CombatActivatable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
