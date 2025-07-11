#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AJBReachToLocationByPath

#include "Basic.hpp"

#include "BTS_AJBReachToLocationByPath_classes.hpp"
#include "BTS_AJBReachToLocationByPath_parameters.hpp"


namespace SDK
{

// Function BTS_AJBReachToLocationByPath.BTS_AJBReachToLocationByPath_C.ExecuteUbergraph_BTS_AJBReachToLocationByPath
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBReachToLocationByPath_C::ExecuteUbergraph_BTS_AJBReachToLocationByPath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBReachToLocationByPath_C", "ExecuteUbergraph_BTS_AJBReachToLocationByPath");

	Params::BTS_AJBReachToLocationByPath_C_ExecuteUbergraph_BTS_AJBReachToLocationByPath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBReachToLocationByPath.BTS_AJBReachToLocationByPath_C.OnTrapAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Trap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBReachToLocationByPath_C::OnTrapAdded(class AActor* Trap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBReachToLocationByPath_C", "OnTrapAdded");

	Params::BTS_AJBReachToLocationByPath_C_OnTrapAdded Parms{};

	Parms.Trap = Trap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBReachToLocationByPath.BTS_AJBReachToLocationByPath_C.OnExecutionFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBTNodeResult                           NodeResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBReachToLocationByPath_C::OnExecutionFinish(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBReachToLocationByPath_C", "OnExecutionFinish");

	Params::BTS_AJBReachToLocationByPath_C_OnExecutionFinish Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBReachToLocationByPath.BTS_AJBReachToLocationByPath_C.OnExecutionStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBReachToLocationByPath_C::OnExecutionStart(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBReachToLocationByPath_C", "OnExecutionStart");

	Params::BTS_AJBReachToLocationByPath_C_OnExecutionStart Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBReachToLocationByPath.BTS_AJBReachToLocationByPath_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBReachToLocationByPath_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBReachToLocationByPath_C", "ReceiveActivationAI");

	Params::BTS_AJBReachToLocationByPath_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBReachToLocationByPath.BTS_AJBReachToLocationByPath_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBReachToLocationByPath_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBReachToLocationByPath_C", "ReceiveTickAI");

	Params::BTS_AJBReachToLocationByPath_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

