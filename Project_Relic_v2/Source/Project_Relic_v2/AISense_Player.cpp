// Fill out your copyright notice in the Description page of Project Settings.


#include "AISense_Player.h"
#include "AISenseConfig_Player.h"
#include "Perception/AIPerceptionComponent.h" 
#include "Kismet/GameplayStatics.h" 

UAISense_Player::FDigestedTargetProperties::FDigestedTargetProperties()
{
	TargetRadius = 10.0f;
}


UAISense_Player::FDigestedTargetProperties::FDigestedTargetProperties(const UAISenseConfig_Player& SenseConfig)
{
	TargetRadius = SenseConfig.TargetRadius;
}

// Inhertied constructor
UAISense_Player::UAISense_Player(const FObjectInitializer& ObjectIntializer)
	:Super(ObjectIntializer)
{
	OnNewListenerDelegate.BindUObject(this, &UAISense_Player::OnNewListenerImplementation);
	OnListenerUpdateDelegate.BindUObject(this, &UAISense_Player::OnListenerUpdateImplementation);
	OnListenerRemovedDelegate.BindUObject(this, &UAISense_Player::OnListenerRemovedImplementation);
}

float UAISense_Player::Update()
{
	const UWorld* World = GEngine->GetWorldFromContextObject(GetPerceptionSystem()->GetOuter(), EGetWorldErrorMode::LogAndReturnNull);
	if(World == nullptr)
	{
		return SuspendNextUpdate; // Defined in the perception component
		// Returns FLT_MAX
	}

	AIPerception::FListenerMap& ListenersMap = *GetListeners();

	// As we are not using a query system, need to get our listeners from our map 
	for(auto& Target : ListenersMap)
	{
		FPerceptionListener& Listener = Target.Value;
		const AActor* ListenerBodyActor = Listener.GetBodyActor();

		for(size_t DigestedPropertyIndex = 0; DigestedPropertyIndex < DigestedProperties.Num(); DigestedPropertyIndex++)
		{
			// Run detection event
			FCollisionShape DetectionSphere = FCollisionShape::MakeSphere(DigestedProperties[DigestedPropertyIndex].TargetRadius);
			TArray<FHitResult> HitResultsLocal;

			World->SweepMultiByChannel(HitResultsLocal, ListenerBodyActor->GetActorLocation(),
				ListenerBodyActor->GetActorLocation() + FVector::UpVector * DetectionSphere.GetSphereRadius(),
				FQuat(), ECollisionChannel::ECC_Pawn, DetectionSphere);

			for(size_t i = 0; i < HitResultsLocal.Num(); i++)
			{
				FHitResult HitLocal = HitResultsLocal[i];
				if(HitLocal.GetActor() == UGameplayStatics::GetPlayerPawn(World, 0))
				{
					if((HitLocal.GetActor()->GetActorLocation() - ListenerBodyActor->GetActorLocation()).Size() <= DigestedProperties[DigestedPropertyIndex].TargetRadius)
					{
						Target.Value.RegisterStimulus(HitLocal.GetActor(), FAIStimulus(*this, 5.0f, HitLocal.GetActor()->GetActorLocation(), ListenerBodyActor->GetActorLocation()));
					}
				}
			}
		}
	}
	return 0.0f;
}

void UAISense_Player::OnNewListenerImplementation(const FPerceptionListener& NewListener)
{
	UAIPerceptionComponent* NewListenerPtr = NewListener.Listener.Get();
	check(NewListenerPtr);
	const UAISenseConfig_Player* SenseConfig = Cast<const UAISenseConfig_Player>(NewListenerPtr->GetSenseConfig(GetSenseID()));
	check(SenseConfig);

	// Consume properties
	FDigestedTargetProperties PropertyDigest(*SenseConfig);
	DigestedProperties.Add(PropertyDigest);
	RequestImmediateUpdate(); // Optional as i f we were using queries you'd strike this for the GenerateQueriesForListener() call instead
}

void UAISense_Player::OnListenerUpdateImplementation(const FPerceptionListener& UpdatedListener)
{
}

void UAISense_Player::OnListenerRemovedImplementation(const FPerceptionListener& RemovedListener)
{
}