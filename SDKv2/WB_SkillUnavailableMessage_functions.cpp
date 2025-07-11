#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillUnavailableMessage

#include "Basic.hpp"

#include "WB_SkillUnavailableMessage_classes.hpp"
#include "WB_SkillUnavailableMessage_parameters.hpp"


namespace SDK
{

// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.ExecuteUbergraph_WB_SkillUnavailableMessage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillUnavailableMessage_C::ExecuteUbergraph_WB_SkillUnavailableMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "ExecuteUbergraph_WB_SkillUnavailableMessage");

	Params::WB_SkillUnavailableMessage_C_ExecuteUbergraph_WB_SkillUnavailableMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.OnHideMessage
// (BlueprintCallable, BlueprintEvent)

void UWB_SkillUnavailableMessage_C::OnHideMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "OnHideMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.BndEvt__Disappear_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UWB_SkillUnavailableMessage_C::BndEvt__Disappear_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "BndEvt__Disappear_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.OnUpdateDelayTime
// (BlueprintCallable, BlueprintEvent)

void UWB_SkillUnavailableMessage_C::OnUpdateDelayTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "OnUpdateDelayTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.UnbindAnimation
// (BlueprintCallable, BlueprintEvent)

void UWB_SkillUnavailableMessage_C::UnbindAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "UnbindAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.OnFinishedAnimation
// (BlueprintCallable, BlueprintEvent)

void UWB_SkillUnavailableMessage_C::OnFinishedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "OnFinishedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.HideMessage
// (BlueprintCallable, BlueprintEvent)

void UWB_SkillUnavailableMessage_C::HideMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "HideMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillUnavailableMessage.WB_SkillUnavailableMessage_C.ShowMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   DisplayTimer_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Priority_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillUnavailableMessage_C::ShowMessage(const class FText& InText, float DisplayTimer_0, int32 Priority_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillUnavailableMessage_C", "ShowMessage");

	Params::WB_SkillUnavailableMessage_C_ShowMessage Parms{};

	Parms.InText = std::move(InText);
	Parms.DisplayTimer_0 = DisplayTimer_0;
	Parms.Priority_0 = Priority_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

