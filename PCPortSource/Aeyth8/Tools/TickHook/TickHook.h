#pragma once
#include "../../../Dumper-7/SDK/Engine_classes.hpp"
#include "../../../Dumper-7/SDK/OnlineSubsystemUtils_classes.hpp"
#include "../../Offsets.h"
#include <vector>	// Temporary (maybe?)
#include <format>

namespace A8CL
{
	namespace TickHook
	{
		struct FTimerHandlerEntry 
		{
			unsigned long long pFunctionAddress;
			float			   fWaitFor;
			float			   fTimeElapsed;
			bool			   bSetForCallback;
			bool			   bInfiniteLoop;
			unsigned		   nLoopFor;
		};
		
		namespace Decl
		{
			typedef void(__fastcall* Tick)(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode);
		}

		extern std::vector<FTimerHandlerEntry> CallbackTimers;

		void Tick(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode);

	}
}