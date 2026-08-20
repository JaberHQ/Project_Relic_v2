// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "WeaponWheelWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UWeaponWheelWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot1;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot2;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot3;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot4;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot5;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot6;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot7;

	UPROPERTY(meta = (BindWidget))
	class UImage* Slot8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultOpacity = 0.3;

private:
	TArray<UImage*> Slots;
};
