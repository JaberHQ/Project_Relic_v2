
#include "AIBehaviourComponent.h"
#include "AI/Enemy/EnemyController.h"

// Sets default values for this component's properties
UAIBehaviourComponent::UAIBehaviourComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAIBehaviourComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAIBehaviourComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FVector UAIBehaviourComponent::GetNextPatrolPointLocation()
{
	TArray<AAIPatrolPoint*> PatrolPoints;
	PatrolPath.GenerateKeyArray(PatrolPoints);

	return PatrolPoints[PatrolPointIndex]->GetActorLocation();
}

float UAIBehaviourComponent::GetTimeToWait()
{
	TArray<AAIPatrolPoint*> PatrolPoints;
	PatrolPath.GenerateKeyArray(PatrolPoints);

	float WaitingTime = *(PatrolPath.Find(PatrolPoints[PatrolPointIndex]));
	return WaitingTime;
}

void UAIBehaviourComponent::WaitAtPatrolPointCompleted()
{
	bIsMovingToPatrolPoint = false;

	// Calculate the next patrol point
	IncrementPatrolPointIndex();
	if (GetPatrolPointIndex() >= GetPatrolPathLength())
	{
		ResetPatrolPointIndex();
	}
}

bool UAIBehaviourComponent::MoveToNextPatrolPoint(AEnemyController* EnemyController)
{
	if (GetPatrolPathLength() < 0) // Ensure path exists
		return false;

	if (!bIsMovingToPatrolPoint)
	{
		bIsMovingToPatrolPoint = true;
		EnemyController->MoveToLocation(GetNextPatrolPointLocation());
		return true;
	}

	return false;

}

void UAIBehaviourComponent::Wait()
{
	// Wait at patrol point for a specified amount of time
	float WaitTime = GetTimeToWait();
	WaitTime == 0.0f ? WaitAtPatrolPointCompleted() : GetWorld()->GetTimerManager().SetTimer(WaitAtPatrolPointHandle, this, &UAIBehaviourComponent::WaitAtPatrolPointCompleted, WaitTime, false);
}
