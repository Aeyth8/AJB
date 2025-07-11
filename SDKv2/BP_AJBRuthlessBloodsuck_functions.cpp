#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBRuthlessBloodsuck

#include "Basic.hpp"

#include "BP_AJBRuthlessBloodsuck_classes.hpp"
#include "BP_AJBRuthlessBloodsuck_parameters.hpp"


namespace SDK
{

// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.ExecuteUbergraph_BP_AJBRuthlessBloodsuck
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBRuthlessBloodsuck_C::ExecuteUbergraph_BP_AJBRuthlessBloodsuck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "ExecuteUbergraph_BP_AJBRuthlessBloodsuck");

	Params::BP_AJBRuthlessBloodsuck_C_ExecuteUbergraph_BP_AJBRuthlessBloodsuck Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.OnLongPressInteractBegan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractActor_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBRuthlessBloodsuck_C::OnLongPressInteractBegan(class AActor* InteractActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "OnLongPressInteractBegan");

	Params::BP_AJBRuthlessBloodsuck_C_OnLongPressInteractBegan Parms{};

	Parms.InteractActor_0 = InteractActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.PlayLongInteractSE
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBRuthlessBloodsuck_C::PlayLongInteractSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "PlayLongInteractSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.UpdateErrorTypeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   ErrorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBRuthlessBloodsuck_C::UpdateErrorTypeUI(uint8 ErrorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "UpdateErrorTypeUI");

	Params::BP_AJBRuthlessBloodsuck_C_UpdateErrorTypeUI Parms{};

	Parms.ErrorType = ErrorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.OnLongPressInteractEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceCancel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           InteractActor_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBRuthlessBloodsuck_C::OnLongPressInteractEnded(bool bSuccess, bool bForceCancel, class AActor* InteractActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "OnLongPressInteractEnded");

	Params::BP_AJBRuthlessBloodsuck_C_OnLongPressInteractEnded Parms{};

	Parms.bSuccess = bSuccess;
	Parms.bForceCancel = bForceCancel;
	Parms.InteractActor_0 = InteractActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.ActorIsAlreadyInteracted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInteracted                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBRuthlessBloodsuck_C::ActorIsAlreadyInteracted(class AActor* Actor, bool* bInteracted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "ActorIsAlreadyInteracted");

	Params::BP_AJBRuthlessBloodsuck_C_ActorIsAlreadyInteracted Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (bInteracted != nullptr)
		*bInteracted = Parms.bInteracted;
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.TrySpawnEmphasizeActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBRuthlessBloodsuck_C::TrySpawnEmphasizeActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "TrySpawnEmphasizeActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Text                                                   (Parm, OutParm)

void UBP_AJBRuthlessBloodsuck_C::GetText(bool* bSuccess, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "GetText");

	Params::BP_AJBRuthlessBloodsuck_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.CheckInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         OperatorCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseTraceLength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInteractable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBRuthlessBloodsuck_C::CheckInteractable(class ABP_AJBInGameCharacter_C* OperatorCharacter, class AActor* TargetActor, float BaseTraceLength, bool* bInteractable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "CheckInteractable");

	Params::BP_AJBRuthlessBloodsuck_C_CheckInteractable Parms{};

	Parms.OperatorCharacter = OperatorCharacter;
	Parms.TargetActor = TargetActor;
	Parms.BaseTraceLength = BaseTraceLength;

	UObject::ProcessEvent(Func, &Parms);

	if (bInteractable != nullptr)
		*bInteractable = Parms.bInteractable;
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.BeginInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBRuthlessBloodsuck_C::BeginInteract(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "BeginInteract");

	Params::BP_AJBRuthlessBloodsuck_C_BeginInteract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_AJBRuthlessBloodsuck.BP_AJBRuthlessBloodsuck_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBRuthlessBloodsuck_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRuthlessBloodsuck_C", "ReceiveTick");

	Params::BP_AJBRuthlessBloodsuck_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

