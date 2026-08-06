// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnvironmentQuery/EnvQuery.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "AI/FSM/StateMachine.h"
#include "EnemyController.generated.h"

class AEnemyCharacter;
class AProject_Relic_v2Character;
class AAIPatrolPoint;
class UAIBehaviourComponent;
//class UEnvQuery;

//class EnemyGlobalState : public State<AEnemyController>
//{
//public:
//	// Singleton
//	static EnemyGlobalState* Instance()
//	{
//		static EnemyGlobalState Instance;
//		return &Instance;
//	};
//
//	virtual void Enter(AEnemyController* Enemy) override {};
//	virtual void Execute(AEnemyController* Enemy) override {};
//	virtual void Exit(AEnemyController* Enemy) override {};
//
//	virtual bool OnMessage(AEnemyController* EnemyController, const FTelegram& Msg) override;
//	
//
//
//private:
//	EnemyGlobalState() {}
//
//	EnemyGlobalState(const EnemyGlobalState&);
//
//	EnemyGlobalState& operator= (const EnemyGlobalState&);
//};


UINTERFACE( Blueprintable )
class UDetectionInterface : public UInterface
{
	GENERATED_BODY()
};

class IDetectionInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StartDetection(AEnemyCharacter* EnemyCharacter);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StopDetection();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StartChase();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StopChase();
};

//UENUM(BlueprintType)
//enum class EEnemyState : uint8
//{
//	Patrol       UMETA(DisplayName = "Patrol"),
//	Investigate  UMETA(DisplayName = "Investigate"),
//	Reposition  UMETA(DisplayName = "Reposition"),
//	ShootPlayer  UMETA(DisplayName = "ShootPlayer"),
//	HitPlayer	 UMETA(DisplayName = "HitPlayer"),
//	Dead		 UMETA(DisplayName = "Dead")
//};


/**
 *
 */
UCLASS()
class PROJECT_RELIC_V2_API AEnemyController : public AAIController, public IDetectionInterface
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


/************* Shooting ************/
public:
	/* Fire a raycast line, intended to damage or deteriate the health of another actor or object */
	void ShootRaycastBullet();

	void StartShooting();
	void StopShooting();
/***********************************/

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
	
	FVector GetTargetLastKnownLocation() const { return TargetLastKnownLocation; }

	void ClearTargetLastKnownLocation();

	bool GetHasLineOfSight() { return bHasLineOfSight; }
	void SetHasLineOfSight(bool HasLineOfSight) { bHasLineOfSight = HasLineOfSight; }
	/*********************************************************************************/

	/********************************* Cover *******************************************/

	void SetIsMovingToCover(bool IsMovingToCover) { bIsMovingToCover = IsMovingToCover; }
	bool GetIsMovingToCover() const { return bIsMovingToCover; }

	/** Start the events for owning character to take cover behind a wall */
	void BeginToTakeCover();

	/** Finish the events for owning character to take cover behind a wall */
	void FinishTakingCover();

	/************************************************************************************/

	/********************************** Attack ******************************************/
public:
	void SetIsAttacking(bool IsAttacking) { bIsAttacking = IsAttacking; }

	UFUNCTION(BlueprintCallable)
	bool GetIsAttacking() const { return bIsAttacking; }

	void SetAttackDuration(float DurationOfAttack){ AttackDuration = DurationOfAttack; }
	float GetAttackDuration() const { return AttackDuration; }

	void SetTimerBeforeAttacking();

	/* Starts the attack timer */
	void StartAttackingTimer();

	/* Events that occur when the Enemy is beginning to attack the player in the attack state */
	void BeginAttack();

	/* Events that occur when the Enemy is stops attacking the player in the attack state */
	void FinishAttack();

private:
	void OnAttackingTimerComplete();

	void TimerBeforeAttackingCompleted();


	/************************************************************************************/

public:
	/***************** Dead ************************/
	void Death(); 
	bool GetIsDead() const { return bIsDead; }
	/***********************************************/

	/************** Idle ************/
	void SetIsIdle(bool IsIdle){ bIsIdle = IsIdle; }
	bool GetIsIdle() const { return bIsIdle; }

/************************************************* EQS ***********************************/
public:
	UFUNCTION()
	void RunFindCoverEQS();

protected:
	/* Move to a winning point, defined by an Environmental Query Search (EQS) */
	void MoveToQueryRequest(TSharedPtr<FEnvQueryResult> Result);
/***************************************************************************************/

/********************* Detection *******************************************************************/
public:
	void StartDetection();

	virtual void StartChase_Implementation() override; /**  Inherited from detection interface */

	virtual void StopChase_Implementation() override; /**  Inherited from detection interface */

	void SetShouldChase(bool ShouldChase) { bShouldChase = ShouldChase; }
	bool GetShouldChase() const { return bShouldChase; }

	bool GetIsDetectingPlayer() const { return bIsDetectingPlayer; }

private:
	void OnDetectionDelayComplete();
/****************************************************************************************************/

public:
	/******************* FSM ****************************/
	void ChangeState(State<AEnemyController>* NewState);

	bool HandleMessage(const FTelegram& Msg);
	//void RevertToPreviousState();
	/*****************************************************/

	/* Face the player's direction */
	void RotateToFacePlayer();

	/* Send a message to other enemies in the level, telling them that the Player has been detected */
	/** See MessageDispatcher.h */
	void SendPlayerDetectedMessageToAllies();

	/* Actions for when player has been detected by the enemy */
	void OnPlayerDetected(AActor* PlayerActor);

	/* Actions for when the enemy has taken damage by the player */
	void OnDamageTaken();


	void StartInvestigateTimer();
	void InvestigateLastKnownLocation();

private:

/***** Variables *****/
public:
	AEnemyCharacter* ControlledEnemyCharacter;
	AProject_Relic_v2Character* PlayerCharacter;
	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AAIPatrolPoint* PatrolLocation = nullptr;

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
	StateMachine<AEnemyController>* FiniteStateMachine; 
};