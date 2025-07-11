#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameProjectileTrailBase

#include "Basic.hpp"

#include "BP_AJBInGameProjectileTrailBase_classes.hpp"
#include "BP_AJBInGameProjectileTrailBase_parameters.hpp"


namespace SDK
{

// Function BP_AJBInGameProjectileTrailBase.BP_AJBInGameProjectileTrailBase_C.ExecuteUbergraph_BP_AJBInGameProjectileTrailBase
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameProjectileTrailBase_C::ExecuteUbergraph_BP_AJBInGameProjectileTrailBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameProjectileTrailBase_C", "ExecuteUbergraph_BP_AJBInGameProjectileTrailBase");

	Params::BP_AJBInGameProjectileTrailBase_C_ExecuteUbergraph_BP_AJBInGameProjectileTrailBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameProjectileTrailBase.BP_AJBInGameProjectileTrailBase_C.OnOwnerDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameProjectileTrailBase_C::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameProjectileTrailBase_C", "OnOwnerDestroyed");

	Params::BP_AJBInGameProjectileTrailBase_C_OnOwnerDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameProjectileTrailBase.BP_AJBInGameProjectileTrailBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBInGameProjectileTrailBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameProjectileTrailBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameProjectileTrailBase.BP_AJBInGameProjectileTrailBase_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameProjectileTrailBase_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameProjectileTrailBase_C", "NotifyTheWorld");

	Params::BP_AJBInGameProjectileTrailBase_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameProjectileTrailBase.BP_AJBInGameProjectileTrailBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameProjectileTrailBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameProjectileTrailBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

