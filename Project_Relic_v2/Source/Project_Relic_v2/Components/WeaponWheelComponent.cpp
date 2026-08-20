// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/WeaponWheelComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UWeaponWheelComponent::UWeaponWheelComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponWheelComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	if (WeaponWheelWidgetClass)
	{
		WeaponWheelWidget = CreateWidget<UWeaponWheelWidget>(GetWorld(), WeaponWheelWidgetClass);
	}
}


// Called every frame
void UWeaponWheelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeaponWheelComponent::Display()
{
	if (!WeaponWheelWidget)
		return;

	// Open Weapon Wheel 
	if (!bIsOpen)
	{
		//WeaponWheelWidget = CreateWidget<UWeaponWheelWidget>(GetWorld(), WeaponWheelWidgetClass);
		WeaponWheelWidget->AddToViewport(0);
		bIsOpen = true;
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(),TimeDilation);

	}

	
}

void UWeaponWheelComponent::Remove()
{
	// Close Weapon Wheel 
	if (bIsOpen)
	{
		WeaponWheelWidget->RemoveFromViewport();
		// When closed, Set global dilation back to normal
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
		bIsOpen = false;
	}
}

