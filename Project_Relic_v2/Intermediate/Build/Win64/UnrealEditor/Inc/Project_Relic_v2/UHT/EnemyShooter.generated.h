// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Enemy/EnemyShooter.h"

#ifdef PROJECT_RELIC_V2_EnemyShooter_generated_h
#error "EnemyShooter.generated.h already included, missing '#pragma once' in EnemyShooter.h"
#endif
#define PROJECT_RELIC_V2_EnemyShooter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyShooter ************************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyShooter_NoRegister();

#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyShooter(); \
	friend struct Z_Construct_UClass_AEnemyShooter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AEnemyShooter_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyShooter, AEnemyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_AEnemyShooter_NoRegister) \
	DECLARE_SERIALIZER(AEnemyShooter)


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyShooter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyShooter(AEnemyShooter&&) = delete; \
	AEnemyShooter(const AEnemyShooter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyShooter) \
	NO_API virtual ~AEnemyShooter();


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h_12_PROLOG
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyShooter;

// ********** End Class AEnemyShooter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_Enemy_EnemyShooter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
