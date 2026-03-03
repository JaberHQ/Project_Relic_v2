#include "CharacterManager.h"
#include "BaseCharacter.h"


CharacterManager::CharacterManager()
{
}

CharacterManager::~CharacterManager()
{
}

CharacterManager* CharacterManager::Instance()
{
	static CharacterManager Instance;
	return &Instance;
}


void CharacterManager::RegisterCharacter(ABaseCharacter* NewCharacter)
{
	BaseCharacterMap.Add(NewCharacter->GetID(), NewCharacter);
}

ABaseCharacter* CharacterManager::GetCharacterFromID(FGuid ID) const
{
	//CharacterMap.Find(ID);
	const TWeakObjectPtr<ABaseCharacter>* Found = BaseCharacterMap.Find(ID);
	return (Found && Found->IsValid()) ? Found->Get() : nullptr;
}

void CharacterManager::RemoveCharacter(ABaseCharacter* BaseCharacter)
{
	BaseCharacterMap.Remove(BaseCharacter->GetID());
}
