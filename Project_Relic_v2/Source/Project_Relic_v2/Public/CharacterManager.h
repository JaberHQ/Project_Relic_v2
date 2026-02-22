

#pragma once

#include "CoreMinimal.h"
#include "Misc/Guid.h"

// Provide easy access to the instance of the Base Manager
#define CharacterMgr CharacterManager::Instance()

class ABaseCharacter;
/**
 * 
 */
class PROJECT_RELIC_V2_API CharacterManager
{
public:
	CharacterManager();
	~CharacterManager();

public:
	static CharacterManager* Instance()
	{
		static CharacterManager Instance;
		return &Instance;
	}

	void RegisterCharacter(ABaseCharacter* NewCharacter);

	ABaseCharacter* GetCharacterFromID(FGuid ID) const;

	void RemoveCharacter(ABaseCharacter* BaseCharacter);

private:
	typedef TMap<FGuid, ABaseCharacter*> CharacterMap;

private:
	CharacterMap BaseCharacterMap;

public:
	CharacterMap GetCharacterMap() const { return BaseCharacterMap; }
};


