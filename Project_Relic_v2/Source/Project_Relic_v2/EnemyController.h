// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnvironmentQuery/EnvQuery.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnemyController.generated.h"

class AEnemyCharacter;
class AProject_Relic_v2Character;
class AAIPatrolPoint;
//class UEnvQuery;

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

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Patrol       UMETA(DisplayName = "Patrol"),
	Investigate  UMETA(DisplayName = "Investigate"),
	Reposition  UMETA(DisplayName = "Reposition"),
	ShootPlayer  UMETA(DisplayName = "ShootPlayer"),
	HitPlayer	 UMETA(DisplayName = "HitPlayer"),
	Dead		 UMETA(DisplayName = "Dead")
};



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


private:
	virtual void OnPossess(APawn* InPawn) override;

	void SetupPerceptionSystem();

	void OnDetectionDelayComplete();

	/* Run the finite state machine that determines the AI's current behaviour */
	void RunStateMachine();

	/* State machine functions */
	void Patrol();

	void Investigate();

	void GetToPosition();

	void ShootPlayer();

	void MoveToLastKnownLocation();

protected:
	UPROPERTY(EditAnywhere, Category = "EQS")
	UEnvQuery* FindCoverQuery;

	FEnvQueryRequest FindCoverQueryRequest;

	void FindCoverQueryRequestFinished(TSharedPtr<FEnvQueryResult> Result);

	UFUNCTION()
	void RunEQS();

private:
	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(EditAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UAISenseConfig_Player * AISenseConfig_Player;

	/* Blackboard keys */
	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AAIPatrolPoint* PatrolLocation;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	AEnemyCharacter* EnemyActor;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FVector TargetLastKnownLocation;

	TArray<AActor*> PatrolPoints;

	bool bIsDetectingPlayer; // If the AI has initially seen the player 

	bool bShouldChase;

	bool bFindCover = false;

	FTimerHandle DetectionTimerHandle;

	AEnemyCharacter* ControlledEnemyCharacter;
	AProject_Relic_v2Character* PlayerCharacter;

	EEnemyState EnemyState;


	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

	FTimerHandle InvestigateHandle;
	FTimerHandle WaitHandle;
	FTimerHandle ShootHandle;



};