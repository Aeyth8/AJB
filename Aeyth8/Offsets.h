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

		extern OFFSET GEngine;
		extern OFFSET GWorld;

		extern OFFSET FMalloc;
		extern OFFSET FRealloc;
		extern OFFSET FFree;

		extern OFFSET ProcessEvent;
		extern OFFSET Invoke;
		extern OFFSET AppPreExit;

		extern OFFSET PreLogin;
		extern OFFSET AJBPreLogin;
		extern OFFSET Login;
		extern OFFSET InitListen;

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

		extern OFFSET ChangeState;
		extern OFFSET TryGetMatchingMyPairInfo;
		extern OFFSET GetUsername;
		extern OFFSET GetNationalMatchSchedule;
	}


	// Designed to automatically get and set global pointer variables obtained by offsets so that the syntax is equivalent to the original source (when it isn't)
	template <class Class, OFFSET& Offset>
	struct GPointerWrapper
	{
		inline static Class* GPointer{nullptr};

		inline bool IsInitialized() const
		{
			return this->GPointer != nullptr;
		}

		inline Class* GetPointer() const
		{
			return this->GPointer = *reinterpret_cast<Class**>(Offset.PlusBase());
		}

		inline Class* operator->() const
		{
			return this->IsInitialized() ? this->GPointer : this->GetPointer();
		}

		inline operator Class* () const
		{
			return this->IsInitialized() ? this->GPointer : this->GetPointer();
		}
	};

	inline static GPointerWrapper<SDK::UEngine, OFF::GEngine> GEngine;
	inline static GPointerWrapper<SDK::UWorld, OFF::GWorld> GWorld;
}