// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "AIPatrolPoint.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "BehaviorTree/BehaviorTree.h"
#include "AISense_Player.h"
#include "AISenseConfig_Player.h"
#include "Project_Relic_v2Character.h"
#include <Perception/AISenseConfig_Sight.h>
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	/* Initialise blackboard and BT */
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	//AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
	SetupPerceptionSystem();

	// Set AI peripheral
	// 500.0f

	// Sensing interval = 0.2

	/* Initialise blackboard keys */
	PatrolLocation = "PatrolLocation";
	EnemyActor = "EnemyActor";
	TargetLastKnownLocation = "TargetLastKnownLocation";

	CurrentPatrolPoint = 0;
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	/*if (AIPerceptionComponent)
	{
		AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnTargetDetected);
	}*/
}

void AEnemyController::Death()
{
	UBrainComponent* BrainComp = GetBrainComponent();
	if(BrainComp)
		BrainComp->PauseLogic(TEXT("Enemy Dead"));
}

//void AEnemyController::StartDetection(AEnemyCharacter* EnemyCharacter)
//{
//	AActor* OwnerActor = GetOwner();
//
//	if (OwnerActor && OwnerActor->Implements<UDetectionInterface>())
//	{
//		IDetectionInterface::Execute_StartDetection(OwnerActor, EnemyCharacter);
//	}
//}
//
//void AEnemyController::StartDetection_Implementation(AEnemyCharacter* EnemyCharacter)
//{
//}
//
//void AEnemyController::StopDetection()
//{
//	AActor* OwnerActor = GetOwner();
//
//	if(OwnerActor && OwnerActor->Implements<UDetectionInterface>())
//	{
//		IDetectionInterface::Execute_StopDetection(OwnerActor);
//	}
//}
//
//void AEnemyController::StopDetection_Implementation()
//{
//}
//
//void AEnemyController::StartChase()
//{
//	AActor* OwnerActor = GetOwner();
//
//	if (OwnerActor && OwnerActor->Implements<UDetectionInterface>())
//	{
//		IDetectionInterface::Execute_StartChase(OwnerActor);
//	}
//}
//
void AEnemyController::StartChase_Implementation()
{
	bShouldChase = true;
}

void AEnemyController::StopChase_Implementation()
{
	bShouldChase = false;
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (BehaviourTree && BlackboardComponent)
	{
		UBlackboardData* BlackboardAsset = BehaviourTree->BlackboardAsset;
		if (BlackboardAsset)
		{
			BlackboardComponent->InitializeBlackboard(*BlackboardAsset);
		}

		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);

		RunBehaviorTree(BehaviourTree);
		BehaviourTreeComponent->StartTree(*BehaviourTree);

		ControlledEnemyCharacter = Cast<AEnemyCharacter>(InPawn);
	}
}

void AEnemyController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	if (SightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

		SightConfig->SightRadius = 500.0f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 25.0f;
		SightConfig->PeripheralVisionAngleDegrees = 90.0f;
		SightConfig->SetMaxAge(5.0f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense(*SightConfig);
	}
}

void AEnemyController::OnDetectionDelayComplete()
{
	if (PlayerCharacter)
	{
		IDetectionInterface::Execute_StopDetection(PlayerCharacter);
	}
	bIsDetectingPlayer = false;
}


void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if(Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			if(!bIsDetectingPlayer)
			{
				bIsDetectingPlayer = true;

				PlayerCharacter = Cast<AProject_Relic_v2Character>(Actor);
				if(ControlledEnemyCharacter && PlayerCharacter)
				{
					//PlayerCharacter->Execute_StartDetection(PlayerCharacter,ControlledEnemyCharacter);
					IDetectionInterface::Execute_StartDetection(PlayerCharacter, ControlledEnemyCharacter);
					GetWorld()->GetTimerManager().ClearTimer(DetectionTimerHandle);
					GetWorld()->GetTimerManager().SetTimer(DetectionTimerHandle, this, &AEnemyController::OnDetectionDelayComplete, 0.5f, false);

					if(bShouldChase)
					{
						FVector ReceiverLocation = Stimulus.ReceiverLocation;
						FVector TargetLocation = Stimulus.StimulusLocation;

						if(BlackboardComponent)
						{
							BlackboardComponent->SetValueAsObject(EnemyActor, Actor);
							BlackboardComponent->SetValueAsBool(HasLineOfSight, true);
							BlackboardComponent->SetValueAsVector(TargetLastKnownLocation, TargetLocation);
						}
					}
				}
			}
		}

		//else if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		//{
		//		//FVector ReceiverLocation = Stimulus.ReceiverLocation;
		//	FVector TargetLocation = Stimulus.StimulusLocation;

		//	if (BlackboardComponent)
		//	{
		//		BlackboardComponent->SetValueAsObject(EnemyActor, Actor);
		//		BlackboardComponent->SetValueAsBool(HasLineOfSight, true);
		//		BlackboardComponent->SetValueAsVector(TargetLastKnownLocation, TargetLocation);
		//	}
		//}
	}
}

