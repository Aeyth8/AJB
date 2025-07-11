#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillGuideText

#include "Basic.hpp"

#include "WB_SkillGuideText_classes.hpp"
#include "WB_SkillGuideText_parameters.hpp"


namespace SDK
{

// Function WB_SkillGuideText.WB_SkillGuideText_C.ExecuteUbergraph_WB_SkillGuideText
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillGuideText_C::ExecuteUbergraph_WB_SkillGuideText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillGuideText_C", "ExecuteUbergraph_WB_SkillGuideText");

	Params::WB_SkillGuideText_C_ExecuteUbergraph_WB_SkillGuideText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillGuideText.WB_SkillGuideText_C.OnChangedPadicon
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SkillGuideText_C::OnChangedPadicon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillGuideText_C", "OnChangedPadicon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillGuideText.WB_SkillGuideText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SkillGuideText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillGuideText_C", "PreConstruct");

	Params::WB_SkillGuideText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillGuideText.WB_SkillGuideText_C.SetParamater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBPadIconType                         PadType_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_SkillGuideText_C::SetParamater(EAJBPadIconType PadType_0, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillGuideText_C", "SetParamater");

	Params::WB_SkillGuideText_C_SetParamater Parms{};

	Parms.PadType_0 = PadType_0;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

