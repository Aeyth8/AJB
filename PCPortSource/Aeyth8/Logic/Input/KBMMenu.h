#pragma once
#include "../../OffsetBase.h"
#include <string>

namespace SDK
{
	class UGameEngine;
}

/*

	In-game keyboard & mouse settings overlay (Dear ImGui on top of the D3D11 swapchain), toggled with F1.

	- Mouse sensitivity, invert Y and controller/keyboard look speed (MouseLook settings)
	- Rebinding every keyboard/mouse key mapping of the local UPlayerInput, live and persistent

	Rebinds are stored in the [Bindings] section of AJBInput.ini as "<Action|Axis>|<MappingName>|<DefaultKey>=<NewKey>"
	and are applied again whenever a new PlayerInput shows up or mappings get added.

*/

namespace A8CL
{
	namespace OFF
	{
		// Only hooked by builds that don't hook UGameEngine::Tick themselves, everything else calls KBMMenu::GameThreadTick from their tick hook.
		extern OFFSET KBMEngineTick;

		// UPlayerInput internals (UE 4.20), taken from UPlayerInput::AddActionMapping/AddAxisMapping.
		constexpr ull PlayerInputActionMappings		= 0x140; // TArray<FInputActionKeyMapping>
		constexpr ull PlayerInputAxisMappings		= 0x150; // TArray<FInputAxisKeyMapping>
		constexpr ull PlayerInputActionKeyMap		= 0x1C0; // TMap<FName, FActionKeyDetails>
		constexpr ull PlayerInputAxisKeyMap			= 0x210; // TMap<FName, FAxisKeyDetails>
		constexpr ull PlayerInputKeyMapsBuilt		= 0x2B4; // bKeyMapsBuilt : 1

		constexpr ull ActionKeyMapReset				= 0x17AF620; // TSet<TTuple<FName, FActionKeyDetails>>::Reset
		constexpr ull AxisKeyMapReset				= 0x17AF760; // TSet<TTuple<FName, FAxisKeyDetails>>::Reset
	}

	namespace KBMMenu
	{
		// Must be called once per frame on the game thread (outside of input processing).
		void GameThreadTick();

		// Optional standalone UGameEngine::Tick hook that only calls GameThreadTick.
		void __fastcall EngineTick(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode);

		bool IsOpen();

		// True for every key the menu can bind (keyboard keys, mouse buttons, mouse wheel).
		bool IsKeyboardMouseKey(const std::string& UEName);
	}
}
