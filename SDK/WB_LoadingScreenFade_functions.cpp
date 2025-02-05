#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_LoadingScreenFade

#include "Basic.hpp"

#include "WB_LoadingScreenFade_classes.hpp"
#include "WB_LoadingScreenFade_parameters.hpp"


namespace SDK
{

// Function WB_LoadingScreenFade.WB_LoadingScreenFade_C.ExecuteUbergraph_WB_LoadingScreenFade
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadingScreenFade_C::ExecuteUbergraph_WB_LoadingScreenFade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LoadingScreenFade_C", "ExecuteUbergraph_WB_LoadingScreenFade");

	Params::WB_LoadingScreenFade_C_ExecuteUbergraph_WB_LoadingScreenFade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LoadingScreenFade.WB_LoadingScreenFade_C.InitializeLoadingScreen
// (Event, Public, BlueprintEvent)

void UWB_LoadingScreenFade_C::InitializeLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LoadingScreenFade_C", "InitializeLoadingScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LoadingScreenFade.WB_LoadingScreenFade_C.UpdateCredit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_LoadingScreenFade_C::UpdateCredit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LoadingScreenFade_C", "UpdateCredit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LoadingScreenFade.WB_LoadingScreenFade_C.UpdateAllNetIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_LoadingScreenFade_C::UpdateAllNetIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LoadingScreenFade_C", "UpdateAllNetIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LoadingScreenFade.WB_LoadingScreenFade_C.UpdateCreditColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_LoadingScreenFade_C::UpdateCreditColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LoadingScreenFade_C", "UpdateCreditColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LoadingScreenFade.WB_LoadingScreenFade_C.UpdateStoreCloseMessege
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_LoadingScreenFade_C::UpdateStoreCloseMessege()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LoadingScreenFade_C", "UpdateStoreCloseMessege");

	UObject::ProcessEvent(Func, nullptr);
}

}

