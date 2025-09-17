#include "Hooks/Hooks.hpp"

class OFFSET;

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	OFFSET GEngine("GEngine", 0x32553B8);
	OFFSET GWorld("GWorld", 0x3257AF0);

	OFFSET FMalloc("FMemory::Malloc", 0x5C75B0);
	OFFSET FRealloc("FMemory::Realloc", 0x5C9790);
	OFFSET FFree("FMemory::Free", 0x5BC5E0);
	
	OFFSET ProcessEvent("UObject::ProcessEvent", 0x823B30);
	OFFSET Invoke("UFunction::Invoke", 0x70DBF0);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x1E3380);

	OFFSET PreLogin("AGameModeBase::PreLogin", 0x13D7710);
	OFFSET AJBPreLogin("AJBPreLogin", 0x04A4060);						// Used in the AJB GameMode(s)
	OFFSET Login("AGameModeBase::Login", 0x13D2A20);
	OFFSET InitListen("UIpNetDriver::InitListen", 0x3FBE40);

	OFFSET UConsole("UConsole::ConsoleCommand", 0x1796230);	
	OFFSET ConsoleCommand("APlayerController::ConsoleCommand", 0x16077D0);
	OFFSET Browse("UEngine::Browse", 0x175C530);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x1494440);
	OFFSET DestroyActor("UWorld::DestroyActor", 0x1484190);

	OFFSET ActorDestroy("AActor::Destroy", 0x11AC5E0);
	OFFSET CopyString("FString::FString", 0x1E0EE0);
	
	OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x191F540);
	OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x191C430);
	OFFSET StaticLoadClass("StaticLoadClass", 0x84B1A0);
	OFFSET StaticFindObject("StaticFindObject", 0x84A3D0);
	OFFSET StaticLoadObject("StaticLoadObject", 0x84B620);

	/*
	
	UWorld::DestroyActor 0x1484190 (lowest level)
	AActor::Destroy 0x11AC5E0
	FString::FString 0x1E0EE0 (some sort of FString Copy-To function) 
	FMemory::Malloc 0x5C75B0
	FMemory::QuantizeSize 0x5C91A0
	FMemory::Realloc 0x5C9790
	FMemory::Free 0x5BC5E0

	*/

	// Native Game Functions

	OFFSET ChangeState("UFlowStateUtil::ChangeState", 0x21CF10);

	/*
	
	nbamsavdatread - 0x2233A0 
	This is the offset for the game, in only one function it calls the externs from nbamsavdat.dll
	
	*/

	
}
}