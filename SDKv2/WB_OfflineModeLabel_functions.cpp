#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_OfflineModeLabel

#include "Basic.hpp"

#include "WB_OfflineModeLabel_classes.hpp"
#include "WB_OfflineModeLabel_parameters.hpp"


namespace SDK
{

// Function WB_OfflineModeLabel.WB_OfflineModeLabel_C.ExecuteUbergraph_WB_OfflineModeLabel
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_OfflineModeLabel_C::ExecuteUbergraph_WB_OfflineModeLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OfflineModeLabel_C", "ExecuteUbergraph_WB_OfflineModeLabel");

	Params::WB_OfflineModeLabel_C_ExecuteUbergraph_WB_OfflineModeLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OfflineModeLabel.WB_OfflineModeLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_OfflineModeLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OfflineModeLabel_C", "PreConstruct");

	Params::WB_OfflineModeLabel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OfflineModeLabel.WB_OfflineModeLabel_C.ChangeDisplayType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PPBuyMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_OfflineModeLabel_C::ChangeDisplayType(bool PPBuyMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OfflineModeLabel_C", "ChangeDisplayType");

	Params::WB_OfflineModeLabel_C_ChangeDisplayType Parms{};

	Parms.PPBuyMode = PPBuyMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

