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
	AEnemyController();

	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	FORCEINLINE TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; }

	int32 CurrentPatrolPoint;
	
	UFUNCTION(BlueprintCallable, Category = "AI")
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);

	void Death();

	virtual void StartChase_Implementation() override;

	virtual void StopChase_Implementation() override;

	FVector GetTargetLastKnownLocation() const;

	void ClearTargetLastKnownLocation();

	bool GetHasLineOfSight() { return bHasLineOfSight; }
	void SetHasLineOfSight(bool HasLineOfSight) { bHasLineOfSight = HasLineOfSight; }

	UFUNCTION()
	void RunFindCoverEQS();

	UFUNCTION()
	void RunFindAttackEQS();
private:
	bool bHasLineOfSight = false;

private:
	virtual void OnPossess(APawn* InPawn) override;

	void SetupPerceptionSystem();

	void OnDetectionDelayComplete();

	/* Run the finite state machine that determines the AI's current behaviour */
	//void RunStateMachine();

	void Investigate();

	void ShootPlayer();

	void MoveToLastKnownLocation();

protected:
	UPROPERTY(EditAnywhere, Category = "EQS")
	UEnvQuery* FindCoverQuery;

	FEnvQueryRequest FindCoverQueryRequest;


	UPROPERTY(EditAnywhere, Category = "EQS")
	UEnvQuery* FindAttackQuery;

	FEnvQueryRequest FindAttackQueryRequest;


	void MoveToQueryRequest(TSharedPtr<FEnvQueryResult> Result);

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

	/* Blackboard keys */
	

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AEnemyCharacter* EnemyActor;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FVector TargetLastKnownLocation;

	TArray<AActor*> PatrolPoints;

	bool bIsDetectingPlayer; // If the AI has initially seen the player 

	bool bShouldChase;

	//bool bFindCover = false;

	FTimerHandle EQSTimerHandle;

	FTimerHandle DetectionTimerHandle;

	

	//EEnemyState EnemyState;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

	FTimerHandle InvestigateHandle;
	FTimerHandle WaitHandle;
	FTimerHandle ShootHandle;



public:
	int32 GetID() const{ return ID; }

	void ChangeState(State<AEnemyController>* NewState);

	void RevertToPreviousState();

	virtual void Update();

	void SetIsMovingToPatrolPoint(bool IsMovingToPatrolPoint) { bIsMovingToPatrolPoint = IsMovingToPatrolPoint; }
	bool GetIsMovingToPatrolPoint() const { return bIsMovingToPatrolPoint; }

	void SetIsMovingToCover(bool IsMovingToCover) { bIsMovingToCover = IsMovingToCover; }
	bool GetIsMovingToCover() const { return bIsMovingToCover; }

	void SetIsInCover(bool IsInCover) { bIsInCover = IsInCover; }
	bool GetIsInCover() const { return bIsInCover; }

	void SetIsAttacking(bool IsAttacking) { bIsAttacking = IsAttacking; }
	bool GetIsAttacking() const { return bIsAttacking; }

	void GetToAttackPoint();

	void RotateToFacePlayer();

private:
	void SetID(int val);

	void OnAttackingTimerComplete();

private:
	static int32 NextValidID; // For each enemy instantiated, this will increment

	int32 ID; // The Unique identifier for each enemy instantiated
	
	//State<AEnemyController>* CurrentState;
	//State<AEnemyController>* PreviousState;
	//State<AEnemyController>* GlobalState;

	StateMachine<AEnemyController>* FiniteStateMachine;

	FTimerHandle AttackingTimerHandle;
	FTimerHandle GetToAttackingPointHandle;

	bool bIsMovingToPatrolPoint = false;
	bool bIsMovingToCover = false;
	bool bIsInCover = false;
	bool bIsAttacking = false;
};