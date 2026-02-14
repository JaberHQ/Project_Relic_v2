// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnvironmentQuery/EnvQuery.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "StateMachine.h"
#include "EnemyController.generated.h"

class AEnemyCharacter;
class AProject_Relic_v2Character;
class AAIPatrolPoint;
//class UEnvQuery;

class EnemyGlobalState : public State<AEnemyController>
{
public:
	// Singleton
	static EnemyGlobalState* Instance();

	virtual void Enter(AEnemyController* Enemy) override;
	virtual void Execute(AEnemyController* Enemy) override;
	virtual void Exit(AEnemyController* Enemy) override;

private:
	EnemyGlobalState() {}

	EnemyGlobalState(const EnemyGlobalState&);

	EnemyGlobalState& operator= (const EnemyGlobalState&);
};


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
	void SetCurrentPatrolPoint(int32 NewPatrolPoint) { CurrentPatrolPoint = NewPatrolPoint; }

	int32 GetCurrentPatrolPoint() const { return CurrentPatrolPoint; }

	FORCEINLINE TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; }

	void SetIsMovingToPatrolPoint(bool IsMovingToPatrolPoint) { bIsMovingToPatrolPoint = IsMovingToPatrolPoint; }
	bool GetIsMovingToPatrolPoint() const { return bIsMovingToPatrolPoint; }
	/**********************************************************************************/

	/***************** Enemy seeing and sensing player *******************************/
	UFUNCTION(BlueprintCallable, Category = "AI")
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus); // Called when another actor has been detected by the perception component
	
	FVector GetTargetLastKnownLocation() const;

	void ClearTargetLastKnownLocation();

	bool GetHasLineOfSight() { return bHasLineOfSight; }
	void SetHasLineOfSight(bool HasLineOfSight) { bHasLineOfSight = HasLineOfSight; }
	/*********************************************************************************/

	/********************************* Cover *******************************************/
	void SetIsMovingToCover(bool IsMovingToCover) { bIsMovingToCover = IsMovingToCover; }
	bool GetIsMovingToCover() const { return bIsMovingToCover; }

	void SetIsInCover(bool IsInCover) { bIsInCover = IsInCover; }
	bool GetIsInCover() const { return bIsInCover; }

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

	/* When the Enemy is beginning to attack the player */
	void BeginAttack();

	void FinishAttack();

	void EventsAfterCoverIsFound();

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

	UFUNCTION()
	void RunFindAttackEQS();

protected:
	/* Move to a winning point, defined by an Environmental Search Query (EQS) */
	void MoveToQueryRequest(TSharedPtr<FEnvQueryResult> Result);
/***************************************************************************************/

/********************* Detection *******************************************************************/
public:
	virtual void StartChase_Implementation() override; /**  Inherited from detection interface */

	virtual void StopChase_Implementation() override; /**  Inherited from detection interface */

private:
	void OnDetectionDelayComplete();
/****************************************************************************************************/

public:
	AEnemyCharacter* ControlledEnemyCharacter;
	AProject_Relic_v2Character* PlayerCharacter;
	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AAIPatrolPoint* PatrolLocation;

private:
	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(EditAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UAISenseConfig_Player * AISenseConfig_Player;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AEnemyCharacter* EnemyActor;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FVector TargetLastKnownLocation;

	TArray<AActor*> PatrolPoints;

	bool bIsDetectingPlayer; // If the AI has initially seen the player 

	bool bShouldChase;

	FTimerHandle EQSTimerHandle;

	FTimerHandle DetectionTimerHandle;

	FTimerHandle InvestigateHandle;
	FTimerHandle WaitHandle;
	FTimerHandle ShootHandle;


public:
	void ChangeState(State<AEnemyController>* NewState);

	void RevertToPreviousState();

	virtual void Update();

	void GetToAttackPoint();

	void RotateToFacePlayer();


/***** Variables *****/
public:

protected:
	/********************** EQS ******************/
	UPROPERTY(EditAnywhere, Category = "EQS")
	UEnvQuery* FindCoverQuery;

	FEnvQueryRequest FindCoverQueryRequest;

	UPROPERTY(EditAnywhere, Category = "EQS")
	UEnvQuery* FindAttackQuery;

	FEnvQueryRequest FindAttackQueryRequest;
	/**********************************************/

private:
	//State<AEnemyController>* CurrentState;
	//State<AEnemyController>* PreviousState;
	//State<AEnemyController>* GlobalState;

	int32 CurrentPatrolPoint;


	StateMachine<AEnemyController>* FiniteStateMachine;

	FTimerHandle AttackingTimerHandle;
	FTimerHandle GetToAttackingPointHandle;
	FTimerHandle ShootingTimerHandle;
	FTimerHandle TimerBeforeAttackingHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Attack", meta = (AllowPrivateAccess = "true"))
	float TimeBetweenShooting = 3.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Attack", meta = (AllowPrivateAccess = "true"))
	float AttackDuration = 3.0f;

	bool bHasLineOfSight = false;
	bool bIsMovingToPatrolPoint = false;
	bool bIsMovingToCover = false;
	bool bIsInCover = false;
	bool bIsIdle = false;
	bool bIsAttacking = false;
	bool bIsDead = false;;

};