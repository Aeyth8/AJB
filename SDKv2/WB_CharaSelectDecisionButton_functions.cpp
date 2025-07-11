#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharaSelectDecisionButton

#include "Basic.hpp"

#include "WB_CharaSelectDecisionButton_classes.hpp"
#include "WB_CharaSelectDecisionButton_parameters.hpp"


namespace SDK
{

// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature
// (BlueprintEvent)

void UWB_CharaSelectDecisionButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.ExecuteUbergraph_WB_CharaSelectDecisionButton
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CharaSelectDecisionButton_C::ExecuteUbergraph_WB_CharaSelectDecisionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "ExecuteUbergraph_WB_CharaSelectDecisionButton");

	Params::WB_CharaSelectDecisionButton_C_ExecuteUbergraph_WB_CharaSelectDecisionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.GetButton
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAJBButton*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAJBButton* UWB_CharaSelectDecisionButton_C::GetButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "GetButton");

	Params::WB_CharaSelectDecisionButton_C_GetButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.GetTextBlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAJBTextBlock*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAJBTextBlock* UWB_CharaSelectDecisionButton_C::GetTextBlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "GetTextBlock");

	Params::WB_CharaSelectDecisionButton_C_GetTextBlock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.OnButtonPressedAnimation
// (Event, Public, BlueprintEvent)

void UWB_CharaSelectDecisionButton_C::OnButtonPressedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "OnButtonPressedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.OnButtonReleasedAnimation
// (Event, Public, BlueprintEvent)

void UWB_CharaSelectDecisionButton_C::OnButtonReleasedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "OnButtonReleasedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CharaSelectDecisionButton.WB_CharaSelectDecisionButton_C.PlayButtonAnimation
// (BlueprintCallable, BlueprintEvent)

void UWB_CharaSelectDecisionButton_C::PlayButtonAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaSelectDecisionButton_C", "PlayButtonAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

