#include "CharacterManager.h"
#include "BaseCharacter.h"


CharacterManager::CharacterManager()
{
}

CharacterManager::~CharacterManager()
{
}


void CharacterManager::RegisterCharacter(ABaseCharacter* NewCharacter)
{
	BaseCharacterMap.Add(NewCharacter->GetID(), NewCharacter);
}

ABaseCharacter* CharacterManager::GetCharacterFromID(FGuid ID) const
{
	//CharacterMap.Find(ID);
	ABaseCharacter* const* FoundCharacter = BaseCharacterMap.Find(ID);
	return FoundCharacter ? *FoundCharacter : nullptr;
}

void CharacterManager::RemoveCharacter(ABaseCharacter* BaseCharacter)
{
	BaseCharacterMap.Remove(BaseCharacter->GetID());
}
