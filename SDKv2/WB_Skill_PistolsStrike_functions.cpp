#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Skill_PistolsStrike

#include "Basic.hpp"

#include "WB_Skill_PistolsStrike_classes.hpp"
#include "WB_Skill_PistolsStrike_parameters.hpp"


namespace SDK
{

// Function WB_Skill_PistolsStrike.WB_Skill_PistolsStrike_C.ExecuteUbergraph_WB_Skill_PistolsStrike
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Skill_PistolsStrike_C::ExecuteUbergraph_WB_Skill_PistolsStrike(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Skill_PistolsStrike_C", "ExecuteUbergraph_WB_Skill_PistolsStrike");

	Params::WB_Skill_PistolsStrike_C_ExecuteUbergraph_WB_Skill_PistolsStrike Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Skill_PistolsStrike.WB_Skill_PistolsStrike_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Skill_PistolsStrike_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Skill_PistolsStrike_C", "Tick");

	Params::WB_Skill_PistolsStrike_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

