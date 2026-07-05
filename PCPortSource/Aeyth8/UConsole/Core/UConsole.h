#pragma once
#include "../../../Dumper-7/SDK/Engine_classes.hpp"

namespace A8CL
{
	namespace UConsole
	{
		namespace Decl
		{
			// UConsole::OutputText
			typedef void(__thiscall* OutputText)(SDK::UConsole* This, SDK::FString* Text);

			// UConsole::ConsoleCommand
			typedef void(__thiscall* UConsole)(SDK::UConsole* This, SDK::FString& Command);			

			// APlayerController::ConsoleCommand
			typedef SDK::FString*(__thiscall* ConsoleCommand)(SDK::APlayerController* This, SDK::FString* result, const SDK::FString* Cmd, bool bWriteToLog);
		}

		// Helpers

		struct ConsoleOutput
		{
			static constexpr unsigned int CACHE_SIZE = 4096;

			inline static wchar_t TextCache[CACHE_SIZE]{0};
			inline static bool bShouldOutput{false};

			inline static void InternalText(void* Buffer, bool bIsWide)
			{
				bShouldOutput = true;

				if (bIsWide)
				{
					const wchar_t* WCharBuffer = (const wchar_t*)Buffer;

					int i{0};
					//for (int i{0}; i < StringSize; ++i)
					while (i < CACHE_SIZE)
					{
						TextCache[i] = (WCharBuffer[i] ? WCharBuffer[i] : 0);
						++i;
					}
				}
				else
				{
					const char* CharBuffer = (const char*)Buffer;
					
					//for (int i{0}; i < StringSize; i += 2)
					int i{0};
					while (i < CACHE_SIZE)
					{
						TextCache[i] = (CharBuffer[i] ? static_cast<wchar_t>(CharBuffer[i]) : 0);
						++i;
					}
				}
			}

			inline static void Text(const wchar_t* NewText) { InternalText((void*)NewText, true);  }
			inline static void Text(const char* NewText)	{ InternalText((void*)NewText, false); }
		};

		// Hooks

		void OutputText(SDK::UConsole* This, SDK::FString* Text);
		void UConsole(SDK::UConsole* This, SDK::FString& Command);
		SDK::FString* ConsoleCommand(SDK::APlayerController* This, SDK::FString* Result, SDK::FString* Command, bool bWriteToLog);
	}
}