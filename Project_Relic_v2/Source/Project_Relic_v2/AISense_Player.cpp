// Fill out your copyright notice in the Description page of Project Settings.


#include "AISense_Player.h"
#include "AISenseConfig_Player.h"
#include "Perception/AIPerceptionComponent.h" 
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h" 

UAISense_Player::FDigestedTargetProperties::FDigestedTargetProperties()
{
	TargetRadius = 10.0f;
	DetectionRate = 0.15f;
	LoseRate = 0.2f;
	PeripheralVisionCos = FMath::Cos(FMath::DegreesToRadians(60.0f));
}


UAISense_Player::FDigestedTargetProperties::FDigestedTargetProperties(const UAISenseConfig_Player& SenseConfig)
{
	TargetRadius = SenseConfig.TargetRadius;
	DetectionRate = SenseConfig.DetectionRate;
	LoseRate = SenseConfig.LoseRate;
	PeripheralVisionCos = FMath::Cos(FMath::DegreesToRadians(SenseConfig.PeripheralVisionAngle));
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

			AActor* PlayerActor = UGameplayStatics::GetPlayerPawn(World, 0);
			if(!PlayerActor)
				continue;

			for (size_t i = 0; i < HitResultsLocal.Num(); i++)
			{
				FHitResult HitLocal = HitResultsLocal[i];
				if (HitLocal.GetActor() != PlayerActor)
					continue;
				
				FVector ListenerLocation = ListenerBodyActor->GetActorLocation();
				FVector PlayerLocation = PlayerActor->GetActorLocation();

				FHitResult LOSHit; // Line of sight
				FCollisionQueryParams TraceParams;
				TraceParams.AddIgnoredActor(ListenerBodyActor);
				TraceParams.AddIgnoredActor(PlayerActor);

				bool bBlocked = World->LineTraceSingleByChannel(LOSHit, ListenerLocation, PlayerLocation, ECC_Visibility, TraceParams);

				if (bBlocked && LOSHit.GetActor() != PlayerActor)
					continue;


				float Distance = FVector::Dist(ListenerLocation, PlayerLocation);
				if (Distance > DigestedProperties[DigestedPropertyIndex].TargetRadius)
					continue;

				float MaxRange = DigestedProperties[DigestedPropertyIndex].TargetRadius;
				float DistanceAlpha = 1.0f - (Distance / MaxRange);
				DistanceAlpha = FMath::Clamp(DistanceAlpha, 0.0f, 1.0f);

				const auto& Props = DigestedProperties[DigestedPropertyIndex];

				// Vision Cone Check
				FVector Forward = ListenerBodyActor->GetActorForwardVector();
				FVector ToPlayer = (PlayerLocation - ListenerLocation).GetSafeNormal();

				float Dot = FVector::DotProduct(Forward, ToPlayer);

				if (Dot < Props.PeripheralVisionCos)
					continue;

				DrawDebugDirectionalArrow(World, ListenerLocation, ListenerLocation + Forward * 150.0f, 40.0f, FColor::Green, false, 0.05f, 0, 2.0f);

				//float DetectionStrength = 0.15f * DistanceAlpha;
				float DetectionStrength = Props.DetectionRate * DistanceAlpha;

				FAIStimulus Stimulus(*this, DetectionStrength, PlayerLocation, ListenerLocation);

				Stimulus.SetExpirationAge(1.0f);

				Target.Value.RegisterStimulus(PlayerActor, Stimulus);

				DrawDebugLine(World, ListenerLocation, PlayerLocation, FColor::Yellow, false, 0.05f, 0, 1.0f);

					/*if ((HitLocal.GetActor()->GetActorLocation() - ListenerBodyActor->GetActorLocation()).Size() <= DigestedProperties[DigestedPropertyIndex].TargetRadius)
					{
						Target.Value.RegisterStimulus(HitLocal.GetActor(), FAIStimulus(*this, 5.0f, HitLocal.GetActor()->GetActorLocation(), ListenerBodyActor->GetActorLocation()));
					}*/
				
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