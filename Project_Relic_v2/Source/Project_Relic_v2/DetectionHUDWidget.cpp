// Fill out your copyright notice in the Description page of Project Settings.


#include "DetectionHUDWidget.h"

void UDetectionHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	DetectionMeter->SetVisibility(ESlateVisibility::Hidden);

}

void UDetectionHUDWidget::SetDetectionMeterVisiblity(ESlateVisibility MeterVisibility)
{
	DetectionMeter->SetVisibility(MeterVisibility);
}

void UDetectionHUDWidget::SetDetectionMeterPercent(float Percent)
{
	DetectionMeter->SetPercent(Percent);
}

void UDetectionHUDWidget::SetDetectionMeterColour(FLinearColor Colour)
{
	DetectionMeter->SetFillColorAndOpacity(Colour);
}
