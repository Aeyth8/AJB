#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBCrouchIfNot

#include "Basic.hpp"

#include "BTT_AJBCrouchIfNot_classes.hpp"
#include "BTT_AJBCrouchIfNot_parameters.hpp"


namespace SDK
{

// Function BTT_AJBCrouchIfNot.BTT_AJBCrouchIfNot_C.ExecuteUbergraph_BTT_AJBCrouchIfNot
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AJBCrouchIfNot_C::ExecuteUbergraph_BTT_AJBCrouchIfNot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_AJBCrouchIfNot_C", "ExecuteUbergraph_BTT_AJBCrouchIfNot");

	Params::BTT_AJBCrouchIfNot_C_ExecuteUbergraph_BTT_AJBCrouchIfNot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_AJBCrouchIfNot.BTT_AJBCrouchIfNot_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AJBCrouchIfNot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_AJBCrouchIfNot_C", "ReceiveExecuteAI");

	Params::BTT_AJBCrouchIfNot_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

