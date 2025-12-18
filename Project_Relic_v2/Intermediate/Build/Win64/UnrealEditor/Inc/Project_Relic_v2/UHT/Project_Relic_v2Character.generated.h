// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_Relic_v2Character.h"

#ifdef PROJECT_RELIC_V2_Project_Relic_v2Character_generated_h
#error "Project_Relic_v2Character.generated.h already included, missing '#pragma once' in Project_Relic_v2Character.h"
#endif
#define PROJECT_RELIC_V2_Project_Relic_v2Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCharacterMoveSpeed ***********************************************
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMoveSpeed_Statics; \
	PROJECT_RELIC_V2_API static class UScriptStruct* StaticStruct();


struct FCharacterMoveSpeed;
// ********** End ScriptStruct FCharacterMoveSpeed *************************************************

// ********** Begin Class AProject_Relic_v2Character ***********************************************
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCrouchTimelineProgress); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetCurrentStamina); \
	DECLARE_FUNCTION(execGetIsCrouching); \
	DECLARE_FUNCTION(execSetIsCrouching); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execDoSprint); \
	DECLARE_FUNCTION(execDoCrouch); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AProject_Relic_v2Character_NoRegister();

#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_Relic_v2Character(); \
	friend struct Z_Construct_UClass_AProject_Relic_v2Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AProject_Relic_v2Character_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_Relic_v2Character, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_AProject_Relic_v2Character_NoRegister) \
	DECLARE_SERIALIZER(AProject_Relic_v2Character)


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_Relic_v2Character(AProject_Relic_v2Character&&) = delete; \
	AProject_Relic_v2Character(const AProject_Relic_v2Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_Relic_v2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_Relic_v2Character); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProject_Relic_v2Character) \
	NO_API virtual ~AProject_Relic_v2Character();


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_52_PROLOG
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_Relic_v2Character;

// ********** End Class AProject_Relic_v2Character *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_Project_Relic_v2Character_h

// ********** Begin Enum ECharacterMoveSpeed *******************************************************
#define FOREACH_ENUM_ECHARACTERMOVESPEED(op) \
	op(ECharacterMoveSpeed::Slow) \
	op(ECharacterMoveSpeed::Default) \
	op(ECharacterMoveSpeed::Fast) 

enum class ECharacterMoveSpeed : uint8;
template<> struct TIsUEnumClass<ECharacterMoveSpeed> { enum { Value = true }; };
template<> PROJECT_RELIC_V2_API UEnum* StaticEnum<ECharacterMoveSpeed>();
// ********** End Enum ECharacterMoveSpeed *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
