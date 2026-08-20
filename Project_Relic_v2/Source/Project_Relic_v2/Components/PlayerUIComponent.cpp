// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/PlayerUIComponent.h"
#include "Player/Project_Relic_v2Character.h"


// Sets default values for this component's properties
UPlayerUIComponent::UPlayerUIComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	WeaponWheelComponent = CreateDefaultSubobject<UWeaponWheelComponent>(TEXT("WeaponWheelComponent"));

}


// Called when the game starts
void UPlayerUIComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Character = Cast<AProject_Relic_v2Character>(GetOwner());
	if (Character)
	{
		InitInputs();
	}

	
}


// Called every frame
void UPlayerUIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerUIComponent::InitInputs()
{
	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(UIMappingContext, 1);
		}
		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			/* ADS (Aim Down Sights) input actions
				As the aim button should be held and not toggled, two actions are bound */
			EnhancedInputComponent->BindAction(WeaponWheelAction, ETriggerEvent::Triggered, this, &UPlayerUIComponent::ActivateWeaponWheel);
			EnhancedInputComponent->BindAction(WeaponWheelAction, ETriggerEvent::Completed, this, &UPlayerUIComponent::DeactivateWeaponWheel);

			
		}
	}

		
}

void UPlayerUIComponent::ActivateWeaponWheel()
{
	WeaponWheelComponent->Display();

	if (WeaponWheelComponent->GetIsOpen())
	{
		Character->GetController()->SetIgnoreLookInput(true);
	}
}

void UPlayerUIComponent::DeactivateWeaponWheel()
{
	WeaponWheelComponent->Remove();

	if (!WeaponWheelComponent->GetIsOpen())
	{
		Character->GetController()->ResetIgnoreLookInput();
		//Character->GetController()->SetIgnoreLookInput(false);
	}

}

