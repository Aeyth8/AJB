#include "../../../Dumper-7/SDK/Engine_classes.hpp"
#include "../../../Dumper-7/SDK/BP_AJBInGamePlayerController_classes.hpp"
#include "../../../Dumper-7/SDK/BP_AJBInGameCharacter_classes.hpp"

#include "AJBCheats.h"


using namespace A8CL;





__forceinline bool AllowedToCheat(bool bForced)
{
	return AJB::IsServer();
}

template <class Type>
__forceinline Type* GetCharacter(SDK::APlayerController* This)
{
	return (This && This->Character && This->Character->IsA(Type::StaticClass())) ? static_cast<Type>(This->Character) : nullptr;
}

__forceinline SDK::ACharacter* GetCharacter(SDK::APlayerController* This)
{
	return (This && This->Character) ? This->Character : nullptr;
}


bool AJB::Cheats::Fly(SDK::APlayerController* This, bool bForce)
{
	if (This && This->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
	{
		SDK::ABP_AJBInGamePlayerController_C* Player = reinterpret_cast<SDK::ABP_AJBInGamePlayerController_C*>(This);
		if (Player->CharacterBPRef)
		{
			bool bIsFlying = Player->CharacterBPRef->JumpMaxCount > 1;
			Player->ROS_DebugEnableAirJump(!bIsFlying);
		}
	}

	return true;
}

bool AJB::Cheats::Ghost(SDK::APlayerController* This, bool bForce)
{
	if (This && This->Character)
	{
		SDK::EMovementMode& Mode = This->Character->CharacterMovement->MovementMode;
		bool bFlying = Mode == SDK::EMovementMode::MOVE_Flying;

		Mode = bFlying ? SDK::EMovementMode::MOVE_Walking : SDK::EMovementMode::MOVE_Flying;
		This->Character->bActorEnableCollision = bFlying;
	}

	return true;
}

bool AJB::Cheats::God(SDK::APlayerController* This, bool bForce)
{
	return false;
}
