#include "TickHook.h"
#include "../../Global.hpp"
#include "../../Logic/AJB.h"


std::vector<A8CL::TickHook::FTimerHandlerEntry> A8CL::TickHook::CallbackTimers{};

void A8CL::TickHook::Tick(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode)
{
	const static bool bDebug = AJB::bDebugModeFromCMLA;

	for (int i{0}; i < CallbackTimers.size(); ++i)
	{
		FTimerHandlerEntry& Entry = CallbackTimers[i];

		if (Entry.bSetForCallback)
		{
			reinterpret_cast<void(*)()>(Entry.pFunctionAddress)();

			if (Entry.bInfiniteLoop) Entry.fTimeElapsed = 0.0f;
			else if (Entry.nLoopFor > 0)
			{
				--Entry.nLoopFor;
				Entry.fTimeElapsed = 0.0f;
			}
			else
			{
				CallbackTimers.erase(CallbackTimers.begin() + i);
				--i;
			}

			continue;
		}

		if (bDebug) Global::LogA("CallbackTimer", std::format("[Address]: {} | [fTimeElapsed]: {} | [fWaitFor]: {}", Global::HexToString(Entry.pFunctionAddress), Entry.fTimeElapsed, Entry.fWaitFor));

		if (Entry.fTimeElapsed >= Entry.fWaitFor)
		{
			if (bDebug) Global::LogA("CallbackTimer", std::format("FINISHED! ||| [Address]: {} | [fTimeElapsed]: {} | [fWaitFor]: {}", Global::HexToString(Entry.pFunctionAddress), Entry.fTimeElapsed, Entry.fWaitFor));
			
			Entry.bSetForCallback = true;
			// Can't safely do this in the same thread or atleast the same tickframe.
			/*reinterpret_cast<void(*)()>(Entry.pFunctionAddress)(); 
			
			CallbackTimers.erase(CallbackTimers.begin() + i);*/

			continue;
		}
		
		Entry.fTimeElapsed += DeltaSeconds;
	}

	OFF::Tick.VerifyFC<Decl::Tick>()(This, DeltaSeconds, bIdleMode);
}