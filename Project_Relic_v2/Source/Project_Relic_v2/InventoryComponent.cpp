// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// Reference to struct that holds the ammunitions default variables 
	const FAmmunition ammunitionSettings;

	// Set max ammunition of each weapon
	MaxAmmunitionInCatridge.Add(EAmmunitionType::AE_Primary, ammunitionSettings.DefaultMaxPrimaryAmmunition);
	MaxAmmunitionInCatridge.Add(EAmmunitionType::AE_Secondary, ammunitionSettings.DefaultMaxSecondaryAmmunition);

	// Set ammunition count of each weapon
	CurrentAmmunitionCount.Add(EAmmunitionType::AE_Primary, MaxAmmunitionInCatridge[EAmmunitionType::AE_Primary]);
	CurrentAmmunitionCount.Add(EAmmunitionType::AE_Secondary, MaxAmmunitionInCatridge[EAmmunitionType::AE_Secondary]);

	// Set ammunition count of each weapon
	ReserveAmmunitionCount.Add(EAmmunitionType::AE_Primary, ammunitionSettings.DefaultTotalPrimaryAmmunition);
	ReserveAmmunitionCount.Add(EAmmunitionType::AE_Secondary, ammunitionSettings.DefaultTotalSecondaryAmmunition);
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::ReloadWeapon(EAmmunitionType ammo)
{
	/* If there is enough reserve ammunition to refill a full magazine */
	if(ReserveAmmunitionCount[ammo] >= MaxAmmunitionInCatridge[ammo])
	{
		ReserveAmmunitionCount[ammo] -= (MaxAmmunitionInCatridge[ammo] - CurrentAmmunitionCount[ammo]);
		CurrentAmmunitionCount[ammo] = MaxAmmunitionInCatridge[ammo];
	}

	else if(ReserveAmmunitionCount[ammo] < MaxAmmunitionInCatridge[ammo] && ReserveAmmunitionCount[ammo] > 0)
	{
		/* If there isn't enough reserve for a full magazine */
		if(ReserveAmmunitionCount[ammo] < (MaxAmmunitionInCatridge[ammo] - CurrentAmmunitionCount[ammo]))
		{
			CurrentAmmunitionCount[ammo] += ReserveAmmunitionCount[ammo];
			ReserveAmmunitionCount[ammo] = 0;
		}
		/* If there is enough reserve for a full clip */
		else
		{
			ReserveAmmunitionCount[ammo] -= (MaxAmmunitionInCatridge[ammo] - CurrentAmmunitionCount[ammo]);
			CurrentAmmunitionCount[ammo] = MaxAmmunitionInCatridge[ammo];
		}
	}

	else
	{
		ReserveAmmunitionCount[ammo] = 0; // Just for safety incase ammunition does go below zero
	}
}

void UInventoryComponent::ConsumeAmmo(EAmmunitionType ammo)
{
	CurrentAmmunitionCount[ammo]--;
}

int32 UInventoryComponent::GetCurrentAmmoCount(EAmmunitionType ammo) const
{
	return CurrentAmmunitionCount[ammo];
}

int32 UInventoryComponent::GetReserveAmmoCount(EAmmunitionType ammo) const
{
	return ReserveAmmunitionCount[ammo];
}

int32 UInventoryComponent::GetMaxAmmoInCatridgeCount(EAmmunitionType ammo) const
{
	return MaxAmmunitionInCatridge[ammo];
}