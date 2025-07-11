#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_SkillRangeInterface

#include "Basic.hpp"

#include "BI_SkillRangeInterface_classes.hpp"
#include "BI_SkillRangeInterface_parameters.hpp"


namespace SDK
{

// Function BI_SkillRangeInterface.BI_SkillRangeInterface_C.GetSkillAttackRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float IBI_SkillRangeInterface_C::GetSkillAttackRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_SkillRangeInterface_C", "GetSkillAttackRange");

	Params::BI_SkillRangeInterface_C_GetSkillAttackRange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

