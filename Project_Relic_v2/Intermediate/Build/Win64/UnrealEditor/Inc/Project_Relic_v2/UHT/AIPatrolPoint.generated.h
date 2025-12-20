// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIPatrolPoint.h"

#ifdef PROJECT_RELIC_V2_AIPatrolPoint_generated_h
#error "AIPatrolPoint.generated.h already included, missing '#pragma once' in AIPatrolPoint.h"
#endif
#define PROJECT_RELIC_V2_AIPatrolPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAIPatrolPoint ***********************************************************
PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister();

#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPatrolPoint(); \
	friend struct Z_Construct_UClass_AAIPatrolPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_RELIC_V2_API UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIPatrolPoint, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Relic_v2"), Z_Construct_UClass_AAIPatrolPoint_NoRegister) \
	DECLARE_SERIALIZER(AAIPatrolPoint)


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPatrolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIPatrolPoint(AAIPatrolPoint&&) = delete; \
	AAIPatrolPoint(const AAIPatrolPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrolPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPatrolPoint) \
	NO_API virtual ~AAIPatrolPoint();


#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h_12_PROLOG
#define FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIPatrolPoint;

// ********** End Class AAIPatrolPoint *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_Project_Relic_v2_Project_Relic_v2_Source_Project_Relic_v2_AIPatrolPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
