#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test1_BTT_LookAt_1

#include "Basic.hpp"

#include "Test1_BTT_LookAt_1_classes.hpp"
#include "Test1_BTT_LookAt_1_parameters.hpp"


namespace SDK
{

// Function test1_BTT_LookAt_1.test1_BTT_LookAt_1_C.ExecuteUbergraph_test1_BTT_LookAt_1
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTest1_BTT_LookAt_1_C::ExecuteUbergraph_test1_BTT_LookAt_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("test1_BTT_LookAt_1_C", "ExecuteUbergraph_test1_BTT_LookAt_1");

	Params::Test1_BTT_LookAt_1_C_ExecuteUbergraph_test1_BTT_LookAt_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function test1_BTT_LookAt_1.test1_BTT_LookAt_1_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTest1_BTT_LookAt_1_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("test1_BTT_LookAt_1_C", "ReceiveExecuteAI");

	Params::Test1_BTT_LookAt_1_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

