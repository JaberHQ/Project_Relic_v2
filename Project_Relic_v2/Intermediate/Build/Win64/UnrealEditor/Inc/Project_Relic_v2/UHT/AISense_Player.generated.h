// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AISense/AISense_Player.h"

#ifdef PROJECT_RELIC_V2_AISense_Player_generated_h
#error "AISense_Player.generated.h already included, missing '#pragma once' in AISense_Player.h"
#endif
#define PROJECT_RELIC_V2_AISense_Player_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISense_Player **********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISense_Player_NoRegister();

#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Player(); \
	friend struct Z_Construct_UClass_UAISense_Player_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_UAISense_Player_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISense_Player, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_UAISense_Player_NoRegister) \
	DECLARE_SERIALIZER(UAISense_Player) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Player(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Player); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISense_Player(UAISense_Player&&) = delete; \
	UAISense_Player(const UAISense_Player&) = delete; \
	NO_API virtual ~UAISense_Player();


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h_16_PROLOG
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h_19_INCLASS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISense_Player;

// ********** End Class UAISense_Player ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AI_AISense_AISense_Player_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
