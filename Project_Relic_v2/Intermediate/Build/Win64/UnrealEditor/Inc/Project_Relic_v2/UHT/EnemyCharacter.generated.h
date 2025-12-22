// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyCharacter.h"

#ifdef PROJECT_RELIC_V2_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define PROJECT_RELIC_V2_EnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyCharacter **********************************************************
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateWalkSpeed);


PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();

#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_AEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyCharacter(AEnemyCharacter&&) = delete; \
	AEnemyCharacter(const AEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_10_PROLOG
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyCharacter;

// ********** End Class AEnemyCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_EnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
