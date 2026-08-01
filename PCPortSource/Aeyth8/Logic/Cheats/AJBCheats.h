#pragma once
#include "../AJB.h"
#include "../../Tools/StringTables.inl"

namespace A8CL
{
namespace AJB
{
	namespace Cheats
	{
		// Since most cheats require both the server and client to be aware- nevermind I'll come back to this later

		/*enum ECheatStatus : unsigned char
		{

		};*/

		/* bForce is used as a means to tell the client it's *able* to execute the cheat even if server authority will not allow or execute it.
		 * Aka there will be desync.
		 */

		// Generic Unreal Engine cheats

		bool Fly(SDK::APlayerController* This, bool bForce = false);
		bool Ghost(SDK::APlayerController* This, bool bForce = false);
		bool God(SDK::APlayerController* This, bool bForce = false);


		constexpr TPair<const char*, void*> CheatPairTable[] =
		{
			{"fly", Fly},
			{"ghost", Ghost},
			{"god", God}
		};
	}
}
}