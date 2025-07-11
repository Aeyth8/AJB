#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBPartsMaker

#include "Basic.hpp"

#include "BP_AJBPartsMaker_classes.hpp"
#include "BP_AJBPartsMaker_parameters.hpp"


namespace SDK
{

// Function BP_AJBPartsMaker.BP_AJBPartsMaker_C.GetPriority
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Priority                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBPartsMaker_C::GetPriority(int32* Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBPartsMaker_C", "GetPriority");

	Params::BP_AJBPartsMaker_C_GetPriority Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Priority != nullptr)
		*Priority = Parms.Priority;
}


// Function BP_AJBPartsMaker.BP_AJBPartsMaker_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Text                                                   (Parm, OutParm)

void UBP_AJBPartsMaker_C::GetText(bool* bSuccess, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBPartsMaker_C", "GetText");

	Params::BP_AJBPartsMaker_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_AJBPartsMaker.BP_AJBPartsMaker_C.CheckInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         OperatorCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseTraceLength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInteractable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBPartsMaker_C::CheckInteractable(class ABP_AJBInGameCharacter_C* OperatorCharacter, class AActor* TargetActor, float BaseTraceLength, bool* bInteractable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBPartsMaker_C", "CheckInteractable");

	Params::BP_AJBPartsMaker_C_CheckInteractable Parms{};

	Parms.OperatorCharacter = OperatorCharacter;
	Parms.TargetActor = TargetActor;
	Parms.BaseTraceLength = BaseTraceLength;

	UObject::ProcessEvent(Func, &Parms);

	if (bInteractable != nullptr)
		*bInteractable = Parms.bInteractable;
}

}

