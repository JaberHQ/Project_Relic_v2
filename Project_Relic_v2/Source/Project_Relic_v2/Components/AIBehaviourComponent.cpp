


#include "AIBehaviourComponent.h"


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


