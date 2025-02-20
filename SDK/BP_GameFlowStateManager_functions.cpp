#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameFlowStateManager

#include "Basic.hpp"

#include "BP_GameFlowStateManager_classes.hpp"
#include "BP_GameFlowStateManager_parameters.hpp"


namespace SDK
{

// Function BP_GameFlowStateManager.BP_GameFlowStateManager_C.ExecuteUbergraph_BP_GameFlowStateManager
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameFlowStateManager_C::ExecuteUbergraph_BP_GameFlowStateManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameFlowStateManager_C", "ExecuteUbergraph_BP_GameFlowStateManager");

	Params::BP_GameFlowStateManager_C_ExecuteUbergraph_BP_GameFlowStateManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameFlowStateManager.BP_GameFlowStateManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameFlowStateManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameFlowStateManager_C", "ReceiveTick");

	Params::BP_GameFlowStateManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameFlowStateManager.BP_GameFlowStateManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GameFlowStateManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameFlowStateManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameFlowStateManager.BP_GameFlowStateManager_C.FindStateObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     FindStateTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UStateObj*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStateObj* UBP_GameFlowStateManager_C::FindStateObject(const struct FGameplayTag& FindStateTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameFlowStateManager_C", "FindStateObject");

	Params::BP_GameFlowStateManager_C_FindStateObject Parms{};

	Parms.FindStateTag = std::move(FindStateTag);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameFlowStateManager.BP_GameFlowStateManager_C.ChangeState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NextStateTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_GameFlowStateManager_C::ChangeState(const struct FGameplayTag& NextStateTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameFlowStateManager_C", "ChangeState");

	Params::BP_GameFlowStateManager_C_ChangeState Parms{};

	Parms.NextStateTag = std::move(NextStateTag);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameFlowStateManager.BP_GameFlowStateManager_C.GetCurrentFlowState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                     CurrentFlowState                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_GameFlowStateManager_C::GetCurrentFlowState(struct FGameplayTag* CurrentFlowState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameFlowStateManager_C", "GetCurrentFlowState");

	Params::BP_GameFlowStateManager_C_GetCurrentFlowState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFlowState != nullptr)
		*CurrentFlowState = std::move(Parms.CurrentFlowState);
}

}

