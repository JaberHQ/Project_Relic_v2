// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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
};
