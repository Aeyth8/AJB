#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EmoteTextLabel

#include "Basic.hpp"

#include "WB_EmoteTextLabel_classes.hpp"
#include "WB_EmoteTextLabel_parameters.hpp"


namespace SDK
{

// Function WB_EmoteTextLabel.WB_EmoteTextLabel_C.ExecuteUbergraph_WB_EmoteTextLabel
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_EmoteTextLabel_C::ExecuteUbergraph_WB_EmoteTextLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_EmoteTextLabel_C", "ExecuteUbergraph_WB_EmoteTextLabel");

	Params::WB_EmoteTextLabel_C_ExecuteUbergraph_WB_EmoteTextLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_EmoteTextLabel.WB_EmoteTextLabel_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           VoiceText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_EmoteTextLabel_C::UpdateText(const class FString& VoiceText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_EmoteTextLabel_C", "UpdateText");

	Params::WB_EmoteTextLabel_C_UpdateText Parms{};

	Parms.VoiceText = std::move(VoiceText);

	UObject::ProcessEvent(Func, &Parms);
}

}

