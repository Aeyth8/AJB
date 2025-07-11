#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AJBInGameHUD

#include "Basic.hpp"

#include "BI_AJBInGameHUD_classes.hpp"
#include "BI_AJBInGameHUD_parameters.hpp"


namespace SDK
{

// Function BI_AJBInGameHUD.BI_AJBInGameHUD_C.GetUIMapManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBUIMapManager_C*            Manager                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_AJBInGameHUD_C::GetUIMapManager(class ABP_AJBUIMapManager_C** Manager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AJBInGameHUD_C", "GetUIMapManager");

	Params::BI_AJBInGameHUD_C_GetUIMapManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Manager != nullptr)
		*Manager = Parms.Manager;
}


// Function BI_AJBInGameHUD.BI_AJBInGameHUD_C.RegisterNewPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AJBPassiveSkillBase_C*        NewPassiveSkill                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBI_AJBInGameHUD_C::RegisterNewPassiveSkill(class UBP_AJBPassiveSkillBase_C* NewPassiveSkill, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AJBInGameHUD_C", "RegisterNewPassiveSkill");

	Params::BI_AJBInGameHUD_C_RegisterNewPassiveSkill Parms{};

	Parms.NewPassiveSkill = NewPassiveSkill;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}

}

