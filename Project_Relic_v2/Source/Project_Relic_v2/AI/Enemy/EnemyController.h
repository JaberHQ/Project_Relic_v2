// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "EnvironmentQuery/EnvQuery.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnemyController.generated.h"

class AEnemyCharacter;
class AProject_Relic_v2Character;
class AAIPatrolPoint;
class UAIBehaviourComponent;


/**
 *
 * 11/07/2026 - Deleting the FSM, using BT
 */
UCLASS()
class PROJECT_RELIC_V2_API AEnemyController : public AAIController
{
	GENERATED_BODY()

public:
	/* Constructor */
	AEnemyController();

	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

	/** Called when the game finishes */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

private:
	/** Called after the controller finishes moving the controlled character to a specified location or actor **/
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

/***************** AI Perception component ************************/
private:
	/** Handles the events for when the AI owner is initially controlled by the AI Controller */
	virtual void OnPossess(APawn* InPawn) override;

	/** Handle the perception component defaults */
	void InitPerceptionSystem();
/******************************************************************/
	
public:
	/********************************** Patrol *****************************************/

	/* Starting events for patrol state */
	void BeginPatrol();

	void MoveToNextPatrolPoint();

	void SetIsMovingToPatrolPoint(bool IsMovingToPatrolPoint);
	bool GetIsMovingToPatrolPoint() const;


	/**********************************************************************************/

	/***************** Enemy seeing and sensing player *******************************/
	UFUNCTION(BlueprintCallable, Category = "AI")
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus); // Called when another actor has been detected by the perception component
	
	/************************************************************************************/

public:
	/***************** Dead ************************/
	void Death(); 
	bool GetIsDead() const { return bIsDead; }
	/***********************************************/

/************************************************* EQS ***********************************/
public:
	UFUNCTION()
	void RunFindCoverEQS();

protected:
	/* Move to a winning point, defined by an Environmental Query Search (EQS) */
	void MoveToQueryRequest(TSharedPtr<FEnvQueryResult> Result);
/***************************************************************************************/

public:
	/* Actions for when player has been detected by the enemy */
	void OnPlayerDetected(AActor* PlayerActor);

	/* Actions for when the enemy has taken damage by the player */
	void OnDamageTaken();

private:

/***** Variables *****/
public:
	AEnemyCharacter* ControlledEnemyCharacter;
	AProject_Relic_v2Character* PlayerCharacter;
	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AAIPatrolPoint* PatrolLocation = nullptr;

public:
	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }

private:
	UBehaviorTreeComponent* BehaviourTreeComponent;

	UBlackboardComponent* BlackboardComponent;

	/* Blackboard Keys */
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName PatrolLocationKey;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName PlayerKey;

public:
	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* BehaviourTree;

private:
	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(EditAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UAISenseConfig_Player* AISenseConfig_Player;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FVector TargetLastKnownLocation;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Attack", meta = (AllowPrivateAccess = "true"))
	float ShootingInterval = 1.0f; // Time between enemy shooting a bullet

	UPROPERTY(EditDefaultsOnly, Category = "Attack", meta = (AllowPrivateAccess = "true"))
	float AttackDuration = 3.0f;

private:
	/* Booleans */
	bool bIsDetectingPlayer			= false; 
	bool bShouldChase				= false;
	bool bHasLineOfSight			= false;
	bool bIsMovingToCover			= false;
	bool bIsIdle					= false;
	bool bIsAttacking				= false;
	bool bIsDead					= false;

	/* Patrol */
	TArray<AActor*> PatrolPoints;
	int32 CurrentPatrolPoint; // Can delete this now
	//int32 PatrolPointIndex = 0;

	/* Gameplay timer handles */
	FTimerHandle EQSTimerHandle;
	FTimerHandle DetectionTimerHandle;
	FTimerHandle InvestigateHandle;
	FTimerHandle WaitHandle;
	FTimerHandle ShootHandle;
	FTimerHandle AttackingTimerHandle;
	FTimerHandle GetToAttackingPointHandle;
	FTimerHandle ShootingTimerHandle;
	FTimerHandle TimerBeforeAttackingHandle;
	FTimerHandle InvesigateTimerHandle;

protected:
	/********************** EQS ******************/
	UPROPERTY(EditAnywhere, Category = "EQS")
	UEnvQuery* FindCoverQuery; // Environmental Query Search for finding cover point

	FEnvQueryRequest FindCoverQueryRequest;
	/**********************************************/

/** FSM */
private:
	//State<AEnemyController>* CurrentState;
	//State<AEnemyController>* PreviousState;
	//State<AEnemyController>* GlobalState;

	UAIBehaviourComponent* AIBehaviourComponent = nullptr;
};