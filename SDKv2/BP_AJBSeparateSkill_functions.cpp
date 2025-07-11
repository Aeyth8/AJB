#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSeparateSkill

#include "Basic.hpp"

#include "BP_AJBSeparateSkill_classes.hpp"
#include "BP_AJBSeparateSkill_parameters.hpp"


namespace SDK
{

// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ExecuteUbergraph_BP_AJBSeparateSkill
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::ExecuteUbergraph_BP_AJBSeparateSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ExecuteUbergraph_BP_AJBSeparateSkill");

	Params::BP_AJBSeparateSkill_C_ExecuteUbergraph_BP_AJBSeparateSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnDisconnected
// (Event, Public, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnDisconnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnStandClientRestarted
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnStandClientRestarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnStandClientRestarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnPawnClientRestarted
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnPawnClientRestarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnPawnClientRestarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnCharacterClientRestarted
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnCharacterClientRestarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnCharacterClientRestarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.UpdateMP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::UpdateMP(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "UpdateMP");

	Params::BP_AJBSeparateSkill_C_UpdateMP Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ROS_CheckCancelFlinch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::ROS_CheckCancelFlinch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ROS_CheckCancelFlinch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateEndCore
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::StateEndCore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateEndCore");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.MC_StateEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::MC_StateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "MC_StateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ROS_StateEnd
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::ROS_StateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ROS_StateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ROS_Possess
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::ROS_Possess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ROS_Possess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.MC_Possess
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::MC_Possess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "MC_Possess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateBeginDisappearCore
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::StateBeginDisappearCore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateBeginDisappearCore");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ROC_Possess
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::ROC_Possess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ROC_Possess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.MC_StateBegin_Disappear
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSkipOwningClient                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBSeparateSkill_C::MC_StateBegin_Disappear(bool bSkipOwningClient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "MC_StateBegin_Disappear");

	Params::BP_AJBSeparateSkill_C_MC_StateBegin_Disappear Parms{};

	Parms.bSkipOwningClient = bSkipOwningClient;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ROS_StateBegin_Disappear
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::ROS_StateBegin_Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ROS_StateBegin_Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateTick_Separate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::StateTick_Separate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateTick_Separate");

	Params::BP_AJBSeparateSkill_C_StateTick_Separate Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::StateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateBegin_Separate
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::StateBegin_Separate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateBegin_Separate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateBegin_Disappear
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::StateBegin_Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateBegin_Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateBegin_Appear
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::StateBegin_Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateBegin_Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateTick_Disappear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::StateTick_Disappear(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateTick_Disappear");

	Params::BP_AJBSeparateSkill_C_StateTick_Disappear Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateTick_Appear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::StateTick_Appear(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateTick_Appear");

	Params::BP_AJBSeparateSkill_C_StateTick_Appear Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.StateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::StateTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "StateTick");

	Params::BP_AJBSeparateSkill_C_StateTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.SetEnablePostProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBSeparateSkill_C::SetEnablePostProcess(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "SetEnablePostProcess");

	Params::BP_AJBSeparateSkill_C_SetEnablePostProcess Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ReserveImeidiateInactive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::ReserveImeidiateInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ReserveImeidiateInactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnCancel
// (Event, Public, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSeparateSkill_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "ReceiveTick");

	Params::BP_AJBSeparateSkill_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnInactive
// (Event, Public, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnInactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.OnActive
// (Event, Public, BlueprintEvent)

void UBP_AJBSeparateSkill_C::OnActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "OnActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSeparateSkill.BP_AJBSeparateSkill_C.InitializeVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBSeparateSkill_C::InitializeVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSeparateSkill_C", "InitializeVariables");

	UObject::ProcessEvent(Func, nullptr);
}

}

