#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PPBuyButton

#include "Basic.hpp"

#include "WB_PPBuyButton_classes.hpp"
#include "WB_PPBuyButton_parameters.hpp"


namespace SDK
{

// Function WB_PPBuyButton.WB_PPBuyButton_C.ExecuteUbergraph_WB_PPBuyButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PPBuyButton_C::ExecuteUbergraph_WB_PPBuyButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "ExecuteUbergraph_WB_PPBuyButton");

	Params::WB_PPBuyButton_C_ExecuteUbergraph_WB_PPBuyButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature
// (BlueprintEvent)

void UWB_PPBuyButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PPBuyButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.GetButton
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAJBButton*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAJBButton* UWB_PPBuyButton_C::GetButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "GetButton");

	Params::WB_PPBuyButton_C_GetButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.OnButtonPressedAnimation
// (Event, Public, BlueprintEvent)

void UWB_PPBuyButton_C::OnButtonPressedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "OnButtonPressedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.OnButtonReleasedAnimation
// (Event, Public, BlueprintEvent)

void UWB_PPBuyButton_C::OnButtonReleasedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "OnButtonReleasedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.OnCheckPP
// (BlueprintCallable, BlueprintEvent)

void UWB_PPBuyButton_C::OnCheckPP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "OnCheckPP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PPBuyButton.WB_PPBuyButton_C.OnFinishedButtonAnimation
// (BlueprintCallable, BlueprintEvent)

void UWB_PPBuyButton_C::OnFinishedButtonAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PPBuyButton_C", "OnFinishedButtonAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

