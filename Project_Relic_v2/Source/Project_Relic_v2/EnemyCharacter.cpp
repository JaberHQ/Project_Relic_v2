// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnemyController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "HealthComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Project_Relic_v2Character.h"
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
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 520.0f, 0.0f);

	// Health defaults
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent" ));

	PerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimulusComponent"));
	if (PerceptionStimuliSourceComponent)
	{
		PerceptionStimuliSourceComponent->RegisterForSense(TSubclassOf<UAISense_Sight>());
		PerceptionStimuliSourceComponent->RegisterWithPerceptionSystem();
	}

	ShootingDistance = 2000.0f;

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

void AEnemyCharacter::RaycastShot()
{
	FVector Location;
	FRotator Rotation;
	FHitResult Hit;

	GetController()->GetPlayerViewPoint(Location, Rotation); // This can be changed to camera ----

	FVector Start = Location;
	FVector End = Start + (Rotation.Vector() * ShootingDistance);

	// Send line trace from players pov
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this);
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f); // DEBUG -----------------------

	// If line trace has hit an object
	if (bHit)
	{
		/* If AI has been hit */
		AProject_Relic_v2Character* PlayerCharacter = Cast<AProject_Relic_v2Character>(Hit.GetActor());
		if (PlayerCharacter)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Enemy has been hit!")); // DEBUG -----------------------
			DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(5, 5, 5), FColor::Blue, false, 2.0f); // DEBUG -----------------------

			PlayerCharacter->GetHealthComponent()->TakeDamage(10.0f);
		}
	}

	if (AnimShoot)
	{
		PlayAnimMontage(AnimShoot);
	}
}

