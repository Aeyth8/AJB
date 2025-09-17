#pragma once

class OFFSET;

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
	extern OFFSET SpawnActor;
	extern OFFSET DestroyActor;

	extern OFFSET ActorDestroy;
	extern OFFSET CopyString;

	extern OFFSET IsNonPakFileNameAllowed;
	extern OFFSET FindFileInPakFiles;
	extern OFFSET StaticLoadClass;
	extern OFFSET StaticFindObject;
	extern OFFSET StaticLoadObject;

	// Native Game Functions

	extern OFFSET ChangeState;
}
}