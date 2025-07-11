#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameGion

#include "Basic.hpp"

#include "BP_AJBInGameGion_classes.hpp"
#include "BP_AJBInGameGion_parameters.hpp"


namespace SDK
{

// Function BP_AJBInGameGion.BP_AJBInGameGion_C.ExecuteUbergraph_BP_AJBInGameGion
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameGion_C::ExecuteUbergraph_BP_AJBInGameGion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "ExecuteUbergraph_BP_AJBInGameGion");

	Params::BP_AJBInGameGion_C_ExecuteUbergraph_BP_AJBInGameGion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameGion.BP_AJBInGameGion_C.OnActiveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameGion_C::OnActiveEffect(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "OnActiveEffect");

	Params::BP_AJBInGameGion_C_OnActiveEffect Parms{};

	Parms.IsOwner = IsOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameGion.BP_AJBInGameGion_C.OnFinishEffectWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameGion_C::OnFinishEffectWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "OnFinishEffectWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameGion.BP_AJBInGameGion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameGion_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "ReceiveTick");

	Params::BP_AJBInGameGion_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameGion.BP_AJBInGameGion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameGion_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameGion.BP_AJBInGameGion_C.SetupEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GionInfo                     GionInfo_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameGion_C::SetupEffect(const struct FST_GionInfo& GionInfo_0, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "SetupEffect");

	Params::BP_AJBInGameGion_C_SetupEffect Parms{};

	Parms.GionInfo_0 = std::move(GionInfo_0);
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameGion.BP_AJBInGameGion_C.GetScaleWidgetFromSameRoom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameGion_C::GetScaleWidgetFromSameRoom(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameGion_C", "GetScaleWidgetFromSameRoom");

	Params::BP_AJBInGameGion_C_GetScaleWidgetFromSameRoom Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;
}

}

