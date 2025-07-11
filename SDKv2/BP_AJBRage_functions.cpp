#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBRage

#include "Basic.hpp"

#include "BP_AJBRage_classes.hpp"
#include "BP_AJBRage_parameters.hpp"


namespace SDK
{

// Function BP_AJBRage.BP_AJBRage_C.ExecuteUbergraph_BP_AJBRage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBRage_C::ExecuteUbergraph_BP_AJBRage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "ExecuteUbergraph_BP_AJBRage");

	Params::BP_AJBRage_C_ExecuteUbergraph_BP_AJBRage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRage.BP_AJBRage_C.ActiveRageUI
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBRage_C::ActiveRageUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "ActiveRageUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBRage.BP_AJBRage_C.SpawnEndEffect
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBRage_C::SpawnEndEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "SpawnEndEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBRage.BP_AJBRage_C.ChangeRageStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBRage_C::ChangeRageStatus(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "ChangeRageStatus");

	Params::BP_AJBRage_C_ChangeRageStatus Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRage.BP_AJBRage_C.OnContinuedParticleActivated
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBRage_C::OnContinuedParticleActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "OnContinuedParticleActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBRage.BP_AJBRage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBRage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBRage.BP_AJBRage_C.OnActionInactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTriggeredByStand                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBRage_C::OnActionInactivate(bool bTriggeredByStand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "OnActionInactivate");

	Params::BP_AJBRage_C_OnActionInactivate Parms{};

	Parms.bTriggeredByStand = bTriggeredByStand;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBRage.BP_AJBRage_C.OnActionActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTriggeredByStand                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBRage_C::OnActionActivate(bool bTriggeredByStand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBRage_C", "OnActionActivate");

	Params::BP_AJBRage_C_OnActionActivate Parms{};

	Parms.bTriggeredByStand = bTriggeredByStand;

	UObject::ProcessEvent(Func, &Parms);
}

}

