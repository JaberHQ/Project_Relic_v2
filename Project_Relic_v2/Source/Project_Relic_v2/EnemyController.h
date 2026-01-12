// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnemyController.generated.h"

class AEnemyCharacter;

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

/**
 *
 */
UCLASS()
class PROJECT_RELIC_V2_API AEnemyController : public AAIController, public IDetectionInterface
{
	GENERATED_BODY()

public:
	AEnemyController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	FORCEINLINE UBlackboardComponent* GetBlackBoardComponent() const { return BlackboardComponent; }
	FORCEINLINE UBehaviorTreeComponent* GetBehaviourTree() const { return BehaviourTreeComponent; }
	FORCEINLINE TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; }
	//UBehaviorTree* GetBehaviourTree() const { return BehaviourTree; }

	int32 CurrentPatrolPoint;
	
	/*UFUNCTION(BlueprintCallable, Category = "AI")
	void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);*/
	UFUNCTION(BlueprintCallable, Category = "AI")
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);

	void Death();

	void StartDetection(AEnemyCharacter* EnemyCharacter);
	virtual void StartDetection_Implementation(AEnemyCharacter* EnemyCharacter) override;

	void StopDetection();
	virtual void StopDetection_Implementation() override;

	void StartChase();
	virtual void StartChase_Implementation() override;

	void StopChase();
	virtual void StopChase_Implementation() override;


private:
	virtual void OnPossess(APawn* InPawn) override;

	void SetupPerceptionSystem();

	void OnDetectionDelayComplete();

private:
	UPROPERTY(EditAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTree* BehaviourTree;

	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UBehaviorTreeComponent* BehaviourTreeComponent;

	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(EditAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UAISenseConfig_Sight* SightConfig;

	/* Blackboard keys */
	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName PatrolLocation;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName EnemyActor;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName HasLineOfSight;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName TargetLastKnownLocation;

	TArray<AActor*> PatrolPoints;

	bool bIsDetectingPlayer; // If the AI has initially seen the player 


	FTimerHandle DetectionTimerHandle;

	/*UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UPawnSensingComponent* PawnSensingComponent;*/
	

};