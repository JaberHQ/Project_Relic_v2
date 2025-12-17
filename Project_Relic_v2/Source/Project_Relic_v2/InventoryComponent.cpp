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

	/* Initalise Ammo defaults */
	MaxAmmunitionInCatridgeMap =
	{
		{ EAmmunitionType::Primary,   ammunitionSettings.DefaultMaxPrimaryAmmunition   },
		{ EAmmunitionType::Secondary, ammunitionSettings.DefaultMaxSecondaryAmmunition }
	};

	CurrentAmmunitionCountMap =
	{
		{ EAmmunitionType::Primary,   MaxAmmunitionInCatridgeMap[EAmmunitionType::Primary]   },
		{ EAmmunitionType::Secondary, MaxAmmunitionInCatridgeMap[EAmmunitionType::Secondary] }
	};

	ReserveAmmunitionCountMap =
	{
		{ EAmmunitionType::Primary,   ammunitionSettings.DefaultTotalPrimaryAmmunition },
		{ EAmmunitionType::Secondary, ammunitionSettings.DefaultTotalSecondaryAmmunition }
	};

	//// Set max ammunition of each weapon
	//MaxAmmunitionInCatridgeMap.Add(EAmmunitionType::Primary, ammunitionSettings.DefaultMaxPrimaryAmmunition);
	//MaxAmmunitionInCatridgeMap.Add(EAmmunitionType::Secondary, ammunitionSettings.DefaultMaxSecondaryAmmunition);

	//// Set ammunition count of each weapon
	//CurrentAmmunitionCountMap.Add(EAmmunitionType::Primary, MaxAmmunitionInCatridgeMap[EAmmunitionType::Primary]);
	//CurrentAmmunitionCountMap.Add(EAmmunitionType::Secondary, MaxAmmunitionInCatridgeMap[EAmmunitionType::Secondary]);

	// Set ammunition count of each weapon
	/*ReserveAmmunitionCountMap.Add(EAmmunitionType::Primary, ammunitionSettings.DefaultTotalPrimaryAmmunition);
	ReserveAmmunitionCountMap.Add(EAmmunitionType::Secondary, ammunitionSettings.DefaultTotalSecondaryAmmunition);*/
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

void UInventoryComponent::ReloadWeapon(EAmmunitionType Ammo)
{
	/* If there is enough reserve ammunition to refill a full magazine */
	if(ReserveAmmunitionCountMap[Ammo] >= MaxAmmunitionInCatridgeMap[Ammo])
	{
		ReserveAmmunitionCountMap[Ammo] -= (MaxAmmunitionInCatridgeMap[Ammo] - CurrentAmmunitionCountMap[Ammo]);
		CurrentAmmunitionCountMap[Ammo] = MaxAmmunitionInCatridgeMap[Ammo];
	}

	else if(ReserveAmmunitionCountMap[Ammo] < MaxAmmunitionInCatridgeMap[Ammo] && ReserveAmmunitionCountMap[Ammo] > 0)
	{
		/* If there isn't enough reserve for a full magazine */
		if(ReserveAmmunitionCountMap[Ammo] < (MaxAmmunitionInCatridgeMap[Ammo] - CurrentAmmunitionCountMap[Ammo]))
		{
			CurrentAmmunitionCountMap[Ammo] += ReserveAmmunitionCountMap[Ammo];
			ReserveAmmunitionCountMap[Ammo] = 0;
		}
		/* If there is enough reserve for a full clip */
		else
		{
			ReserveAmmunitionCountMap[Ammo] -= (MaxAmmunitionInCatridgeMap[Ammo] - CurrentAmmunitionCountMap[Ammo]);
			CurrentAmmunitionCountMap[Ammo] = MaxAmmunitionInCatridgeMap[Ammo];
		}
	}

	else
	{
		ReserveAmmunitionCountMap[Ammo] = 0; // Just for safety incase ammunition does go below zero
	}
}

void UInventoryComponent::ConsumeAmmo(EAmmunitionType Ammo)
{
	CurrentAmmunitionCountMap[Ammo]--;
}

int32 UInventoryComponent::GetCurrentAmmoCount(EAmmunitionType Ammo) const
{
	return CurrentAmmunitionCountMap[Ammo];
}

int32 UInventoryComponent::GetReserveAmmoCount(EAmmunitionType Ammo) const
{
	return ReserveAmmunitionCountMap[Ammo];
}

int32 UInventoryComponent::GetMaxAmmoInCatridgeCount(EAmmunitionType Ammo) const
{
	return MaxAmmunitionInCatridgeMap[Ammo];
}