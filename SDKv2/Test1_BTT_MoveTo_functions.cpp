#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test1_BTT_MoveTo

#include "Basic.hpp"

#include "Test1_BTT_MoveTo_classes.hpp"
#include "Test1_BTT_MoveTo_parameters.hpp"


namespace SDK
{

// Function test1_BTT_MoveTo.test1_BTT_MoveTo_C.ExecuteUbergraph_test1_BTT_MoveTo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTest1_BTT_MoveTo_C::ExecuteUbergraph_test1_BTT_MoveTo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("test1_BTT_MoveTo_C", "ExecuteUbergraph_test1_BTT_MoveTo");

	Params::Test1_BTT_MoveTo_C_ExecuteUbergraph_test1_BTT_MoveTo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function test1_BTT_MoveTo.test1_BTT_MoveTo_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTest1_BTT_MoveTo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("test1_BTT_MoveTo_C", "ReceiveExecuteAI");

	Params::Test1_BTT_MoveTo_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function test1_BTT_MoveTo.test1_BTT_MoveTo_C.OnSuccess_BACE868144046606A3E61B94DD216BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTest1_BTT_MoveTo_C::OnSuccess_BACE868144046606A3E61B94DD216BAB(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("test1_BTT_MoveTo_C", "OnSuccess_BACE868144046606A3E61B94DD216BAB");

	Params::Test1_BTT_MoveTo_C_OnSuccess_BACE868144046606A3E61B94DD216BAB Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function test1_BTT_MoveTo.test1_BTT_MoveTo_C.OnFail_BACE868144046606A3E61B94DD216BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTest1_BTT_MoveTo_C::OnFail_BACE868144046606A3E61B94DD216BAB(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("test1_BTT_MoveTo_C", "OnFail_BACE868144046606A3E61B94DD216BAB");

	Params::Test1_BTT_MoveTo_C_OnFail_BACE868144046606A3E61B94DD216BAB Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

