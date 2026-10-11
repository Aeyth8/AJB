#pragma once
#include <string>

/*

	Keyboard & mouse button prompts.

	Every pad icon the game draws ends up in UImage::SetBrushFromTexture/SetBrush with one of the textures
	from BPF_GameIconUtil::GetAJBPadIcon, so both exec functions are hooked and the pad texture is swapped
	for a keycap icon (KeyIcons\<EKeys name>.png next to the executable) of the key that is currently bound
	to the matching action (UAJBUtilityFunctionLibrary::GetAJBInGamePadIconByKeyAction).

	The icons follow the last used input device, touching the gamepad brings the pad icons back.

*/

namespace A8CL
{
	namespace KBMIcons
	{
		// Game thread, once per frame.
		void GameThreadTick();

		// Called from the window procedure whenever keyboard or mouse input arrives.
		void NotifyKeyboardMouseInput();

		// Bindings changed, re-resolves every tracked icon.
		void RefreshAll();
	}
}
