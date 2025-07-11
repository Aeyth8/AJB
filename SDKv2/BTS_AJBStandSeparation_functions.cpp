#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AJBStandSeparation

#include "Basic.hpp"

#include "BTS_AJBStandSeparation_classes.hpp"
#include "BTS_AJBStandSeparation_parameters.hpp"


namespace SDK
{

// Function BTS_AJBStandSeparation.BTS_AJBStandSeparation_C.ExecuteUbergraph_BTS_AJBStandSeparation
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBStandSeparation_C::ExecuteUbergraph_BTS_AJBStandSeparation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBStandSeparation_C", "ExecuteUbergraph_BTS_AJBStandSeparation");

	Params::BTS_AJBStandSeparation_C_ExecuteUbergraph_BTS_AJBStandSeparation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBStandSeparation.BTS_AJBStandSeparation_C.TrySeparation
// (BlueprintCallable, BlueprintEvent)

void UBTS_AJBStandSeparation_C::TrySeparation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBStandSeparation_C", "TrySeparation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BTS_AJBStandSeparation.BTS_AJBStandSeparation_C.OnExecutionFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBTNodeResult                           NodeResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBStandSeparation_C::OnExecutionFinish(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBStandSeparation_C", "OnExecutionFinish");

	Params::BTS_AJBStandSeparation_C_OnExecutionFinish Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBStandSeparation.BTS_AJBStandSeparation_C.OnExecutionStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBStandSeparation_C::OnExecutionStart(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBStandSeparation_C", "OnExecutionStart");

	Params::BTS_AJBStandSeparation_C_OnExecutionStart Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_AJBStandSeparation.BTS_AJBStandSeparation_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_AJBStandSeparation_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_AJBStandSeparation_C", "ReceiveActivationAI");

	Params::BTS_AJBStandSeparation_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

