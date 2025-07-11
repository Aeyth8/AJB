#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AJBBattleGameMode

#include "Basic.hpp"

#include "BI_AJBBattleGameMode_classes.hpp"
#include "BI_AJBBattleGameMode_parameters.hpp"


namespace SDK
{

// Function BI_AJBBattleGameMode.BI_AJBBattleGameMode_C.ChangeGameFlowState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NextStateTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBI_AJBBattleGameMode_C::ChangeGameFlowState(const struct FGameplayTag& NextStateTag, bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AJBBattleGameMode_C", "ChangeGameFlowState");

	Params::BI_AJBBattleGameMode_C_ChangeGameFlowState Parms{};

	Parms.NextStateTag = std::move(NextStateTag);

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}

}

