// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "DetectionHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UDetectionHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	UProgressBar* GetDetectionMeter() const { return DetectionMeter; }

	void SetDetectionMeterVisiblity(ESlateVisibility MeterVisibility);

	void SetDetectionMeterPercent(float Percent);
	void SetDetectionMeterColour(FLinearColor Colour);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* DetectionMeter;
};
