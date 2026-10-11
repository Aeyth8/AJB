#pragma once
#include "../../OffsetBase.h"
#include <string>

namespace SDK
{
	class APlayerController;
	class UPlayerInput;
	struct FInputAxisKeyMapping;
}

/*

	Native mouse look for keyboard & mouse players.

	The game only knows the controller axes TurnRate/LookUpRate, bDebugInputMode maps MouseX/MouseY onto them.
	That pushes the mouse delta through the stick logic (clamped to [-1, 1], JoystickRightPlayHigh curve, multiplied by a rotation rate per second)
	which is why moving the mouse feels like holding a stick in that direction.

	Instead the mouse mappings are dropped and the mouse delta is applied directly as yaw/pitch input, with its own sensitivity.
	Settings are stored in AJBInput.ini next to the game executable and can be changed live through the console (sens, invertmouse, lookspeed).

*/

namespace A8CL
{
	namespace OFF
	{
		extern OFFSET AddAxisMapping;
		extern OFFSET InGameTurnRate;
		extern OFFSET InGameLookUpRate;
	}

	namespace MouseLook
	{
		struct FSettings
		{
			bool  bEnabled{true};			// Requires a restart, the mouse mappings are only dropped when they get added.
			float MouseSensitivity{1.0f};
			bool  bInvertMouseY{false};
			float LookSpeed{1.0f};			// Scales the controller/keyboard camera speed (everything that goes through TurnRate/LookUpRate).
		};

		extern FSettings Settings;

		// AJBInput.ini next to the game executable.
		const std::wstring& SettingsPath();

		void LoadSettings();
		void SaveSettings();

		// Returns true if the command belonged to MouseLook.
		bool ConsoleCommand(const std::string& Command);

		// Hooks

		void __fastcall AddAxisMapping(SDK::UPlayerInput* This, SDK::FInputAxisKeyMapping& KeyMapping);
		void __fastcall TurnRate(SDK::APlayerController* This, float Value);
		void __fastcall LookUpRate(SDK::APlayerController* This, float Value);
	}
}
