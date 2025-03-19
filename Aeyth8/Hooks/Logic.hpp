#pragma once
#include "../../pch.h"
#include "UFunctions.hpp"

namespace A8CL
{

	class AJB
	{
	private:

		inline static std::vector<Hooks::HookStructure> StandaloneHooks =
		{
			{Offsets::UConsole, UFunctions::Func::UConsole, &UFunctions::Decl::FC_UConsole, "UConsole"},
			{Offsets::Browse, UFunctions::Func::Browse, &UFunctions::Decl::FC_Browse, "Browse"},
			{Offsets::AppPreExit, UFunctions::Func::AppPreExit, &UFunctions::Decl::FC_AppPreExit, "AppPreExit"},
		};
	
	public:

		inline static int32* PP{0};

		inline static void InitHooks()
		{
			Hooks::Init();
			Hooks::CreateAndEnableAllHooks(StandaloneHooks);
		}
	

	};


	class Debug
	{
	public:

		class Decl
		{
		public:
			typedef void(__thiscall* PPCutter)(SDK::UAJBGameInstance* This);
			inline static PPCutter FC_StartConsumePP{0};
			inline static PPCutter FC_ResetPP{0};

		};

		class Func
		{
		public:
			// Generic return function hook for calls that modify PP.
			inline static void NoPPForYou(SDK::UAJBGameInstance* This, LPVOID SecondParam) {
				// Doesn't work to differentiate the two, however I checked the values and the SecondParam only from ResetPP - it's base = 001 which is a bool, so in theory this would work if I could grab that base which I don't even know where it comes from.
				LogA("NoPPForYou", (SecondParam != nullptr ? "ResetPP has been called." : "StartConsumePP has been called."));
				return; 			
			}

		};


		inline static bool HookStartConsumePP(const uintptr_t& OverrideOffset = Offsets::StartConsumePP) {
			return Hooks::CreateAndEnableHook((GBA + OverrideOffset), Func::NoPPForYou, &Decl::FC_StartConsumePP, "StartConsumePP");
		}

		inline static bool HookResetPP(const uintptr_t& OverrideOffset = Offsets::ResetPP) {
			return Hooks::CreateAndEnableHook((GBA + OverrideOffset), Func::NoPPForYou, &Decl::FC_ResetPP, "ResetPP");
		}

		inline static void KillPP() { HookStartConsumePP(); HookResetPP(); }


	};




};