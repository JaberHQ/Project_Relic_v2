// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnemyController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "HealthComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	GetCharacterMovement()->MaxWalkSpeed = 120.0f;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Health defaults
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent" ));

	PerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimulusComponent"));
	if (PerceptionStimuliSourceComponent)
	{
		PerceptionStimuliSourceComponent->RegisterForSense(TSubclassOf<UAISense_Sight>());
		PerceptionStimuliSourceComponent->RegisterWithPerceptionSystem();
	}

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyCharacter::UpdateWalkSpeed(float NewWalkSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = NewWalkSpeed;
}

void AEnemyCharacter::HandleDeath_Implementation()
{
	SetActorEnableCollision(false);
	PlayAnimMontage(AnimDeath);

	AEnemyController* EnemyController = Cast<AEnemyController>(GetController());
	if (EnemyController)
	{
		EnemyController->Death();
	}
}

