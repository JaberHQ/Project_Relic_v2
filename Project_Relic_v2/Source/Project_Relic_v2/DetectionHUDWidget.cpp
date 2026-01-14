// Fill out your copyright notice in the Description page of Project Settings.


#include "DetectionHUDWidget.h"
#include "Project_Relic_v2Character.h"
#include "Kismet/GameplayStatics.h" 
#include <Kismet/KismetMathLibrary.h>
#include "EnemyCharacter.h"


void UDetectionHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	DetectionMeter->SetVisibility(ESlateVisibility::Hidden);
	
	PlayerCharacter = Cast<AProject_Relic_v2Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	
}

void UDetectionHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	
	if(PlayerCharacter && EnemyCharacter)
	{
		FVector PlayerLocation = PlayerCharacter->GetActorLocation();
		FVector EnemyLocation = EnemyCharacter->GetActorLocation();
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, EnemyLocation);
		float RenderTransformAngle = LookAtRotation.Yaw - PlayerCharacter->GetControlRotation().Yaw;
		DetectionMeter->SetRenderTransformAngle(RenderTransformAngle);

	}
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
