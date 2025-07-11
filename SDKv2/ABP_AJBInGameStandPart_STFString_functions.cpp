#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBInGameStandPart_STFString

#include "Basic.hpp"

#include "ABP_AJBInGameStandPart_STFString_classes.hpp"
#include "ABP_AJBInGameStandPart_STFString_parameters.hpp"


namespace SDK
{

// Function ABP_AJBInGameStandPart_STFString.ABP_AJBInGameStandPart_STFString_C.ExecuteUbergraph_ABP_AJBInGameStandPart_STFString
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AJBInGameStandPart_STFString_C::ExecuteUbergraph_ABP_AJBInGameStandPart_STFString(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBInGameStandPart_STFString_C", "ExecuteUbergraph_ABP_AJBInGameStandPart_STFString");

	Params::ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_AJBInGameStandPart_STFString.ABP_AJBInGameStandPart_STFString_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AJBInGameStandPart_STFString_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBInGameStandPart_STFString_C", "BlueprintUpdateAnimation");

	Params::ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_AJBInGameStandPart_STFString.ABP_AJBInGameStandPart_STFString_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString_AnimGraphNode_SplineIK_43450B1B43871686F7AD249A2D7C5442
// (BlueprintEvent)

void UABP_AJBInGameStandPart_STFString_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString_AnimGraphNode_SplineIK_43450B1B43871686F7AD249A2D7C5442()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AJBInGameStandPart_STFString_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString_AnimGraphNode_SplineIK_43450B1B43871686F7AD249A2D7C5442");

	UObject::ProcessEvent(Func, nullptr);
}

}

