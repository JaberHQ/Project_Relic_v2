// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	MaxHealth = 100.0f;
	Health = MaxHealth;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}


void UHealthComponent::TakeDamage(float DamageAmount)
{
	Health = FMath::Clamp(Health - DamageAmount, 0.0f, MaxHealth);

	if (Health <= 0.0f)
	{
		HandleDeath();
	}
}

void UHealthComponent::HandleDeath()
{
	AActor* Owner = GetOwner();

	if (Owner && Owner->Implements<UDeathHandlerInterface>())
	{
		IDeathHandlerInterface::Execute_HandleDeath(Owner);
	}
}


void UHealthComponent::ResetHealth()
{
	Health = MaxHealth;
}

