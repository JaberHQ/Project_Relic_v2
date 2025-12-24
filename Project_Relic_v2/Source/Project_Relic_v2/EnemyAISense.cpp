// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAISense.h"
#include "EnemyAISenseConfig.h" 
#include "Perception/AIPerceptionComponent.h" 
#include "Kismet/GameplayStatics.h" 

UEnemyAISense::FDigestedTargetProperties::FDigestedTargetProperties()
{
	TargetRadius = 10.0f;
}

UEnemyAISense::FDigestedTargetProperties::FDigestedTargetProperties(const UEnemyAISenseConfig& SenseConfig)
{
	TargetRadius = SenseConfig.TargetRadius;
}

// Inhertied constructor
UEnemyAISense::UEnemyAISense(const FObjectInitializer& ObjectIntializer)
	:Super(ObjectIntializer)
{
	OnNewListenerDelegate.BindUObject(this, &UEnemyAISense::OnNewListenerImplementation);
	OnListenerUpdateDelegate.BindUObject(this, &UEnemyAISense::OnListenerUpdateImplementation);
	OnListenerRemovedDelegate.BindUObject(this, &UEnemyAISense::OnListenerRemovedImplementation);
}

float UEnemyAISense::Update()
{
	const UWorld* World = GEngine->GetWorldFromContextObject(GetPerceptionSystem()->GetOuter(), EGetWorldErrorMode::LogAndReturnNull);
	if (World == nullptr)
	{
		return SuspendNextUpdate; // Defined in the perception component
									// Returns FLT_MAX
	}

	AIPerception::FListenerMap& ListenersMap = *GetListeners();

	// As we are not using a query system, need to get our listeners from our map 
	for (auto& Target : ListenersMap)
	{
		FPerceptionListener& Listener = Target.Value;
		const AActor* ListenerBodyActor = Listener.GetBodyActor();

		for (size_t DigestedPropertyIndex = 0; DigestedPropertyIndex < DigestedProperties.Num(); DigestedPropertyIndex++)
		{
			// Run detection event
			FCollisionShape DetectionSphere = FCollisionShape::MakeSphere(DigestedProperties[DigestedPropertyIndex].TargetRadius);
			TArray<FHitResult> HitResultsLocal;

			World->SweepMultiByChannel(HitResultsLocal, ListenerBodyActor->GetActorLocation(), 
				ListenerBodyActor->GetActorLocation() + FVector::UpVector * DetectionSphere.GetSphereRadius(), 
				FQuat(), ECollisionChannel::ECC_Pawn, DetectionSphere);

			for (size_t i = 0; i < HitResultsLocal.Num(); i++)
			{
				FHitResult HitLocal = HitResultsLocal[i];
				if (HitLocal.GetActor() == UGameplayStatics::GetPlayerPawn(World, 0))
				{
					if ((HitLocal.GetActor()->GetActorLocation() - ListenerBodyActor->GetActorLocation()).Size() <= DigestedProperties[DigestedPropertyIndex].TargetRadius)
					{
						Target.Value.RegisterStimulus(HitLocal.GetActor(), FAIStimulus(*this, 5.0f, HitLocal.GetActor()->GetActorLocation(), ListenerBodyActor->GetActorLocation()));
					}
				}
			}
		}
	}
	return 0.0f;
}

void UEnemyAISense::OnNewListenerImplementation(const FPerceptionListener& NewListener)
{
	UAIPerceptionComponent* NewListenerPtr = NewListener.Listener.Get();
	check(NewListenerPtr);
	const UEnemyAISenseConfig* SenseConfig = Cast<const UEnemyAISenseConfig>(NewListenerPtr->GetSenseConfig(GetSenseID()));
	check(SenseConfig);
	
	// Consume properties
	FDigestedTargetProperties PropertyDigest(*SenseConfig);
	DigestedProperties.Add(PropertyDigest);
	RequestImmediateUpdate(); // Optional as i f we were using queries you'd strike this for the GenerateQueriesForListener() call instead
}

void UEnemyAISense::OnListenerUpdateImplementation(const FPerceptionListener& UpdatedListener)
{
}

void UEnemyAISense::OnListenerRemovedImplementation(const FPerceptionListener& RemovedListener)
{
}
