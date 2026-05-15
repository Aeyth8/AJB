#pragma once
#include "OffsetBase.h"

class OFFSET;

namespace SDK
{
	class UWorld;
	class UEngine;
}
namespace A8CL
{
	namespace OFF
	{
		// Basic UE Functions

		extern OFFSET Tick;

		extern OFFSET GEngine;
		extern OFFSET GWorld;

		extern OFFSET FMalloc;
		extern OFFSET FRealloc;
		extern OFFSET FFree;
		extern OFFSET FNameW;
		extern OFFSET FNameA;
		//extern OFFSET Logf;
		extern OFFSET OutputText;

		extern OFFSET ProcessEvent;
		extern OFFSET Invoke;
		extern OFFSET AppPreExit;

		extern OFFSET SetClientTravel;
		extern OFFSET ClientTravelInternal;
		extern OFFSET StartLoadingDestination;
		extern OFFSET PreLogin;
		extern OFFSET AJBPreLogin;
		extern OFFSET Login;
		extern OFFSET PostLogin;
		extern OFFSET Logout;
		extern OFFSET BeginPlay;
		extern OFFSET HandleStartingNewPlayer;

		extern OFFSET InitListen;
		extern OFFSET InitLocalConnection;
		extern OFFSET NotifyControlMessage;

		extern OFFSET Close;

		extern OFFSET UConsole;	
		extern OFFSET ConsoleCommand;
		extern OFFSET Browse;
		extern OFFSET RequestLevel;
		extern OFFSET PrepareMapChange;
		extern OFFSET IsTimeLimitedExceeded;
		extern OFFSET AddToWorld;
		extern OFFSET RemoveFromWorld;
		extern OFFSET SpawnActor;
		extern OFFSET DestroyActor;
		extern OFFSET ProcessMulticastDelegate;

		extern OFFSET ClientTeamMessage;
		extern OFFSET ClientTeamMessageImplementation;

		extern OFFSET ActorDestroy;
		extern OFFSET CopyString;

		extern OFFSET IsNonPakFileNameAllowed;
		extern OFFSET FindFileInPakFiles;
		extern OFFSET StaticLoadClass;
		extern OFFSET StaticFindObject;
		extern OFFSET StaticLoadObject;
		extern OFFSET CreateDefaultObject;
		extern OFFSET StaticConstructObject;
		extern OFFSET BroadcastDelegate;

		extern OFFSET ALevelScriptActorConstructor;
		extern OFFSET ToFormattedString;

		extern OFFSET SetInputGameOnly;
		extern OFFSET SetInputMode_GameAndUIEx;

		// Native Game Functions

		extern OFFSET PostEventAtLocation;
		extern OFFSET ChangeState;
		extern OFFSET TryGetMatchingMyPairInfo;
		extern OFFSET TryGetMatchingPlayerInfo;
		extern OFFSET GetUsername;
		extern OFFSET GetNationalMatchSchedule;
		extern OFFSET AJBWindowWidget;

		extern OFFSET IsTenpoHost;
		extern OFFSET IsAJBOfflineMode;
		extern OFFSET IsOfflineMode;

		// Byte Patches

		constexpr ull HideCursorCaller			= 0x04A04A0;
		constexpr ull AJBGetMaxTickRate			= 0x13CCB43;
		constexpr ull AJBGetMaxTickRateCap		= 0x13CCBD8;
		constexpr ull ResetPP					= 0x04840B0;
		constexpr ull StartConsumePP			= 0x0522CE0;
		constexpr ull LogVerbosity				= 0x300D3C8;
		constexpr ull NetDriverGetNetMode		= 0x14F90F0;
		constexpr ull WorldInternalGetNetMode	= 0x17C4820;
		constexpr ull ActorInternalGetNetMode	= 0x11BA5C0;

		// VFTable Functions

		/*
		
		#### NOTE!!! Until I add a proper object system for VFT Hooks I cannot use them unless I change the whole system, since I have to plus base separately.
		
		*/

		constexpr ull VFT_GameEngineTick		= 0x4F;	// UGameEngine::Tick
		constexpr ull VFT_GetMaxFPS				= 0x51;	// UEngine::GetMaxFPS
		constexpr ull VFT_FindWidgetOfClass		= 0xFE; // AAJBHUDBase::FindAJBWidgetOfClass
	}


	// Designed to automatically get and set global pointer variables obtained by offsets so that the syntax is equivalent to the original source (when it isn't)
	template <class Class, OFFSET& Offset>
	struct GPointerWrapper
	{
		inline static Class** GAddress{nullptr};
		
		inline bool IsInitialized() const
		{
			return this->GAddress != nullptr;
		}

		inline Class* GetPointer() const
		{
			return IsInitialized() ? *this->GAddress : *(this->GAddress = reinterpret_cast<Class**>(Offset.PlusBase()));
		}

		inline Class* operator->() const
		{
			return this->GetPointer();
		}

		inline operator Class* () const
		{
			return this->GetPointer();
		}

		inline Class* operator&() const
		{
			return this->GetPointer();
		}


	};

	inline static GPointerWrapper<SDK::UEngine, OFF::GEngine> GEngine;
	inline static GPointerWrapper<SDK::UWorld, OFF::GWorld> GWorld;
}