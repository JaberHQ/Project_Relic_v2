// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "SingleShotRifle.generated.h"

/*****************************************************************************************************
 * Type: Class
 *
 * Name: ASingleShotRifle
 *
 * Author: Jaber A
 *
 * Purpose: Singleshot gun, derived from the base weapon class 
 *
 * References: N/A
 *
 * See Also: WeaponComponent
 *
 * Change Log:
 * Date          Initials    Version     Comments
 * 29/09/2023    JA          V1.0        N/A
 * 13/12/2025	 JA			 v2.0		 N/A
*****************************************************************************************************/
UCLASS()
class PROJECT_RELIC_V2_API ASingleShotRifle : public ABaseWeapon
{
	GENERATED_BODY()

public:
	ASingleShotRifle();
};
