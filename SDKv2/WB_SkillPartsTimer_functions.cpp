#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillPartsTimer

#include "Basic.hpp"

#include "WB_SkillPartsTimer_classes.hpp"
#include "WB_SkillPartsTimer_parameters.hpp"


namespace SDK
{

// Function WB_SkillPartsTimer.WB_SkillPartsTimer_C.ExecuteUbergraph_WB_SkillPartsTimer
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillPartsTimer_C::ExecuteUbergraph_WB_SkillPartsTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillPartsTimer_C", "ExecuteUbergraph_WB_SkillPartsTimer");

	Params::WB_SkillPartsTimer_C_ExecuteUbergraph_WB_SkillPartsTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillPartsTimer.WB_SkillPartsTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SkillPartsTimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillPartsTimer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillPartsTimer.WB_SkillPartsTimer_C.ResetColor
// (BlueprintCallable, BlueprintEvent)

void UWB_SkillPartsTimer_C::ResetColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillPartsTimer_C", "ResetColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillPartsTimer.WB_SkillPartsTimer_C.ChangeColorType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bColorTypeRed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SkillPartsTimer_C::ChangeColorType(bool bColorTypeRed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillPartsTimer_C", "ChangeColorType");

	Params::WB_SkillPartsTimer_C_ChangeColorType Parms{};

	Parms.bColorTypeRed = bColorTypeRed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillPartsTimer.WB_SkillPartsTimer_C.UpdateTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillPartsTimer_C::UpdateTimer(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillPartsTimer_C", "UpdateTimer");

	Params::WB_SkillPartsTimer_C_UpdateTimer Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

