// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UI/WeaponWheelWidget.h"
#include "WeaponWheelComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_RELIC_V2_API UWeaponWheelComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponWheelComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Display();

	void Remove();

public:
	UWeaponWheelWidget* WeaponWheelWidget;

	UFUNCTION(BlueprintCallable)
	bool GetIsOpen() const { return bIsOpen; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	float TimeDilation = 0.3f;

private:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UWeaponWheelWidget> WeaponWheelWidgetClass;

	bool bIsOpen;
};
