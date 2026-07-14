#pragma once

namespace UC
{
	class FString;
}
namespace A8CL
{
namespace AJB
{
	namespace Callbacks
	{
		// Le-le-le-lemon po-po-po-session, lemon possession yeah it's stupid as hell
		void LemonPossession();	

		// Called externally by a callback timer, should not be manually called!
		void TranslateSimpleMatch();

		// Cache for the error popup since the original function destroys the string after the call.
		extern UC::FString CacheErrorPopupString;

		// Used for a generic blueprint popup screen.
		void CallbackErrorPopup();

		// Deferred Screenshotting.
		void ScreenshotBoth();
		void Screenshot();
		void ScreenshotWithHUD();
	}
}
}
