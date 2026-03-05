

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/AIPatrolPoint.h"
#include "AIBehaviourComponent.generated.h"

class AEnemyController;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_RELIC_V2_API UAIBehaviourComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAIBehaviourComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	TMap<AAIPatrolPoint*, float> GetPatrolPath(){ return PatrolPath; }

	int32 GetPatrolPathLength(){ return PatrolPath.Num(); }

	FVector GetNextPatrolPointLocation();

	int32 GetPatrolPointIndex() const { return PatrolPointIndex; }

	float GetTimeToWait();

	void IncrementPatrolPointIndex(){ PatrolPointIndex++; }

	void ResetPatrolPointIndex() { PatrolPointIndex = 0; }

	void WaitAtPatrolPointCompleted();

	bool MoveToNextPatrolPoint(AEnemyController* EnemyController);

	void Wait();

	void SetIsMovingToPatrolPoint(bool IsMovingToPatrolPoint) { bIsMovingToPatrolPoint = IsMovingToPatrolPoint; }
	bool GetIsMovingToPatrolPoint() const { return bIsMovingToPatrolPoint; }

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrol", meta = (AllowPrivateAccess = "true"))
	TMap<AAIPatrolPoint*, float> PatrolPath;

	int32 PatrolPointIndex = 0;

	bool bIsMovingToPatrolPoint = false;

	FTimerHandle WaitAtPatrolPointHandle;

};
