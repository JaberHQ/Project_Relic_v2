// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
/**
 * 
 */
template<class Entity_Type> 
class PROJECT_RELIC_V2_API State
{
public:
	
	virtual ~State() = default;

	virtual void Enter   (Entity_Type* Entity)  = 0;
	virtual void Execute (Entity_Type* Entity)  = 0;
	virtual void Exit    (Entity_Type* Entity)  = 0;


};



