#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_TestModeMenuPageInterface

#include "Basic.hpp"

#include "BI_TestModeMenuPageInterface_classes.hpp"


namespace SDK
{

// Function BI_TestModeMenuPageInterface.BI_TestModeMenuPageInterface_C.OnOpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void IBI_TestModeMenuPageInterface_C::OnOpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_TestModeMenuPageInterface_C", "OnOpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_TestModeMenuPageInterface.BI_TestModeMenuPageInterface_C.OnCloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void IBI_TestModeMenuPageInterface_C::OnCloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_TestModeMenuPageInterface_C", "OnCloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}

