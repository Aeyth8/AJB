#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsMenu

#include "Basic.hpp"

#include "WBP_OptionsMenu_classes.hpp"
#include "WBP_OptionsMenu_parameters.hpp"


namespace SDK
{

// Function WBP_OptionsMenu.WBP_OptionsMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_OptionsMenu_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenu_C", "BndEvt__ResumeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsMenu.WBP_OptionsMenu_C.ExecuteUbergraph_WBP_OptionsMenu
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenu_C::ExecuteUbergraph_WBP_OptionsMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenu_C", "ExecuteUbergraph_WBP_OptionsMenu");

	Params::WBP_OptionsMenu_C_ExecuteUbergraph_WBP_OptionsMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

