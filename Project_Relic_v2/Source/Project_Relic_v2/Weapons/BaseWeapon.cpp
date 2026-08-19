// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"


// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComponent"));
	SetRootComponent(WeaponSkeletalMeshComponent);

	WeaponMuzzleComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMuzzleComponent"));
	WeaponMuzzleComponent->SetupAttachment(WeaponSkeletalMeshComponent);
}

USkeletalMeshComponent* ABaseWeapon::GetWeaponSkeletalMeshComponent() const
{
	return WeaponSkeletalMeshComponent;
}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseWeapon::PlayMuzzleFlash()
{
	if (FireEffectMuzzle)
	{
		// This spawns the chosen effect on the owning WeaponMuzzle SceneComponent
		UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAttached
		(
			FireEffectMuzzle, WeaponMuzzleComponent, NAME_None, FVector(0.f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true, true, ENCPoolMethod::AutoRelease
		);
		// Parameters can be set like this (see documentation for further info) - the names and type must match the user exposed parameter in the Niagara System
		NiagaraComp->SetNiagaraVariableFloat(FString("StrengthCoef"), CoefStrength);
	}
}

