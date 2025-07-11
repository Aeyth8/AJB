#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ChallengeEventProgressFooter

#include "Basic.hpp"

#include "WB_ChallengeEventProgressFooter_classes.hpp"
#include "WB_ChallengeEventProgressFooter_parameters.hpp"


namespace SDK
{

// Function WB_ChallengeEventProgressFooter.WB_ChallengeEventProgressFooter_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventProgressFooter_C::OnFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventProgressFooter_C", "OnFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventProgressFooter.WB_ChallengeEventProgressFooter_C.ExecuteUbergraph_WB_ChallengeEventProgressFooter
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventProgressFooter_C::ExecuteUbergraph_WB_ChallengeEventProgressFooter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventProgressFooter_C", "ExecuteUbergraph_WB_ChallengeEventProgressFooter");

	Params::WB_ChallengeEventProgressFooter_C_ExecuteUbergraph_WB_ChallengeEventProgressFooter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventProgressFooter.WB_ChallengeEventProgressFooter_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChallengeEventProgressContext   ProgressContext_0                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_ChallengeEventProgressFooter_C::Setup(const struct FChallengeEventProgressContext& ProgressContext_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventProgressFooter_C", "Setup");

	Params::WB_ChallengeEventProgressFooter_C_Setup Parms{};

	Parms.ProgressContext_0 = std::move(ProgressContext_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventProgressFooter.WB_ChallengeEventProgressFooter_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RestExpToNextClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventProgressFooter_C::Start(int32 RestExpToNextClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventProgressFooter_C", "Start");

	Params::WB_ChallengeEventProgressFooter_C_Start Parms{};

	Parms.RestExpToNextClass = RestExpToNextClass;

	UObject::ProcessEvent(Func, &Parms);
}

}

