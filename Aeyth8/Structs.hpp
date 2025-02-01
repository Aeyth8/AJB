#pragma once
#include "../pch.h"

struct FActorSpawnParameters 
{ 
	SDK::FName Name; 

	SDK::AActor* Template; 

	SDK::AActor* Owner; 

	SDK::APawn* Instigator; 

	class SDK::ULevel* OverrideLevel; 

	SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride; 
};