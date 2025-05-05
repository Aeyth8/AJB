#pragma once
#include "../SDK/AJB_classes.hpp"
#include "../../SDK/BP_AJBGameInstance_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{

// Hooks, functions, variables, and other elements specific to the game.
namespace AJB
{
	// -- Pointers

	extern SDK::UBP_AJBGameInstance_C* Instance; // Originally SDK::UAJBGameInstance but this is a parent class. 
	extern SDK::UAJBAMSystemSettings* Settings;
	extern SDK::AAJBAMErrorObserverActor* Garbage;
	extern SDK::UAJBAMSystemObject* System;
	extern SDK::AAJBOutGameProxy* OutGameProxy;


	// -- Functions

	static void Init_Hooks();
	static void Init_Vars();





}









































}