#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBPostProcessHuman_RBControlled_ANS

#include "Basic.hpp"

#include "ABP_AJBPostProcessHuman_RBControlled_ANS_classes.hpp"
#include "ABP_AJBPostProcessHuman_RBControlled_ANS_parameters.hpp"


namespace SDK
{

// Function ABP_AJBPostProcessHuman_RBControlled_ANS.ABP_AJBPostProcessHuman_RBControlled_ANS_C.ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AJBPostProcessHuman_RBControlled_ANS_C::ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBPostProcessHuman_RBControlled_ANS_C", "ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS");

	Params::ABP_AJBPostProcessHuman_RBControlled_ANS_C_ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_AJBPostProcessHuman_RBControlled_ANS.ABP_AJBPostProcessHuman_RBControlled_ANS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS_AnimGraphNode_RigidBody_A3E530C7482F806232D034B31E3484E3
// (BlueprintEvent)

void UABP_AJBPostProcessHuman_RBControlled_ANS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS_AnimGraphNode_RigidBody_A3E530C7482F806232D034B31E3484E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBPostProcessHuman_RBControlled_ANS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AJBPostProcessHuman_RBControlled_ANS_AnimGraphNode_RigidBody_A3E530C7482F806232D034B31E3484E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_AJBPostProcessHuman_RBControlled_ANS.ABP_AJBPostProcessHuman_RBControlled_ANS_C.OnJump
// (BlueprintCallable, BlueprintEvent)

void UABP_AJBPostProcessHuman_RBControlled_ANS_C::OnJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBPostProcessHuman_RBControlled_ANS_C", "OnJump");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_AJBPostProcessHuman_RBControlled_ANS.ABP_AJBPostProcessHuman_RBControlled_ANS_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AJBPostProcessHuman_RBControlled_ANS_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBPostProcessHuman_RBControlled_ANS_C", "BlueprintUpdateAnimation");

	Params::ABP_AJBPostProcessHuman_RBControlled_ANS_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

}

