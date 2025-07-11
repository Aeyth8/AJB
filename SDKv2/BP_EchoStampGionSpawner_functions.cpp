#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EchoStampGionSpawner

#include "Basic.hpp"

#include "BP_EchoStampGionSpawner_classes.hpp"
#include "BP_EchoStampGionSpawner_parameters.hpp"


namespace SDK
{

// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.ExecuteUbergraph_BP_EchoStampGionSpawner
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EchoStampGionSpawner_C::ExecuteUbergraph_BP_EchoStampGionSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "ExecuteUbergraph_BP_EchoStampGionSpawner");

	Params::BP_EchoStampGionSpawner_C_ExecuteUbergraph_BP_EchoStampGionSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.MC_RequestEchoGion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GionSpawnWorldLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EchoStampGionSpawner_C::MC_RequestEchoGion(const struct FVector& GionSpawnWorldLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "MC_RequestEchoGion");

	Params::BP_EchoStampGionSpawner_C_MC_RequestEchoGion Parms{};

	Parms.GionSpawnWorldLocation = std::move(GionSpawnWorldLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.ROS_RequestEchoGion
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GionSpawnWorldLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EchoStampGionSpawner_C::ROS_RequestEchoGion(const struct FVector& GionSpawnWorldLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "ROS_RequestEchoGion");

	Params::BP_EchoStampGionSpawner_C_ROS_RequestEchoGion Parms{};

	Parms.GionSpawnWorldLocation = std::move(GionSpawnWorldLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EchoStampGionSpawner_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "NotifyTheWorld");

	Params::BP_EchoStampGionSpawner_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EchoStampGionSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "ReceiveTick");

	Params::BP_EchoStampGionSpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EchoStampGionSpawner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "ReceiveEndPlay");

	Params::BP_EchoStampGionSpawner_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EchoStampGionSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EchoStampGionSpawner.BP_EchoStampGionSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EchoStampGionSpawner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EchoStampGionSpawner_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

