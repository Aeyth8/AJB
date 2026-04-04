#pragma once
#include "../../../Offsets.h"
#include <Windows.h>
#include <string>

#include "../../../Global.hpp"
#include "../../../Tools/UFunctions.hpp"


namespace A8CL
{
	struct MRWT
	{

		struct UNICODE_STRING
		{
			unsigned short Length;
			unsigned short MaximumLength;
			const wchar_t* Buffer;

			constexpr UNICODE_STRING(const wchar_t* Buffer)
				: Length(0), MaximumLength(0), Buffer(const_cast<wchar_t*>(Buffer))
			{
				while (Buffer[Length]) ++Length;
				Length *= 2;
				MaximumLength = Length + 2;
			}
		};

		struct OFF
		{
			inline static ull NtLdrLoadDll{0x0};
			inline static ull FC_NtLdrLoadDll{0x0};
		};


		inline static NTSTATUS LdrLoadDll(PCWSTR PathToFile, PULONG Flags, UNICODE_STRING* ModuleFileName, PVOID* ModuleHandle)
		{
			char cName[260]{ 0 };
			constexpr const wchar_t Breh[]{111, 112, 101, 110, 32, 47, 71, 97, 109, 101, 47, 65, 101, 121, 116, 104, 56, 47, 77, 97, 112, 115, 47, 80, 117, 114, 103, 97, 116, 111, 114, 121, 47, 80, 117, 114, 103, 97, 116, 111, 114, 121};
			constexpr const wchar_t IMSOTIRED[]{108, 101, 109, 111, 110};
			wcstombs_s(0, cName, ModuleFileName->Buffer, lstrlenW(ModuleFileName->Buffer));
			std::string Bruh{cName};

			if (Bruh.find({85, 69, 86, 82, 66, 97, 99, 107, 101, 110, 100, 46, 100, 108, 108}) != std::string::npos)
			{

				SDK::FString ICEE{Breh};
				SDK::FString ICEE2{IMSOTIRED};				
				UFunctions::UConsole(GEngine->GameViewport->ViewportConsole, ICEE2);
				UFunctions::UConsole(GEngine->GameViewport->ViewportConsole, ICEE);
				return 0xC0000005;
			}


			return A8CL::Global::Call<long(__stdcall*)(PCWSTR, PULONG, UNICODE_STRING*, PVOID*)>(OFF::FC_NtLdrLoadDll)(PathToFile, Flags, ModuleFileName, ModuleHandle);
		}

		inline static void Activate()
		{
			OFF::NtLdrLoadDll = (ull)GetProcAddress(GetModuleHandleA("ntdll.dll"), "LdrLoadDll");
			MH_CreateHook((void**)OFF::NtLdrLoadDll, LdrLoadDll, (void**)&OFF::FC_NtLdrLoadDll);
			MH_EnableHook((void**)OFF::NtLdrLoadDll);
		}
	};
}
