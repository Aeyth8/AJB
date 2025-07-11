#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_AJBInGameHUD

#include "Basic.hpp"

#include "BPF_AJBInGameHUD_classes.hpp"
#include "BPF_AJBInGameHUD_parameters.hpp"


namespace SDK
{

// Function BPF_AJBInGameHUD.BPF_AJBInGameHUD_C.GetAJBInGameHUD_BP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AJBInGameHUD_C*               In_Game_HUD                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBInGameHUD_C::GetAJBInGameHUD_BP(class UObject* __WorldContext, bool* bSuccess, class ABP_AJBInGameHUD_C** In_Game_HUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBInGameHUD_C", "GetAJBInGameHUD_BP");

	Params::BPF_AJBInGameHUD_C_GetAJBInGameHUD_BP Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (In_Game_HUD != nullptr)
		*In_Game_HUD = Parms.In_Game_HUD;
}

}

