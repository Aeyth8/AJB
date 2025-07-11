#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_InteractProgressBar

#include "Basic.hpp"

#include "WB_InteractProgressBar_classes.hpp"
#include "WB_InteractProgressBar_parameters.hpp"


namespace SDK
{

// Function WB_InteractProgressBar.WB_InteractProgressBar_C.ExecuteUbergraph_WB_InteractProgressBar
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InteractProgressBar_C::ExecuteUbergraph_WB_InteractProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InteractProgressBar_C", "ExecuteUbergraph_WB_InteractProgressBar");

	Params::WB_InteractProgressBar_C_ExecuteUbergraph_WB_InteractProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InteractProgressBar.WB_InteractProgressBar_C.OnChangedPadicon
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_InteractProgressBar_C::OnChangedPadicon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InteractProgressBar_C", "OnChangedPadicon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InteractProgressBar.WB_InteractProgressBar_C.UpdateBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InteractProgressBar_C::UpdateBar(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InteractProgressBar_C", "UpdateBar");

	Params::WB_InteractProgressBar_C_UpdateBar Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InteractProgressBar.WB_InteractProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_InteractProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InteractProgressBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InteractProgressBar.WB_InteractProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InteractProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InteractProgressBar_C", "PreConstruct");

	Params::WB_InteractProgressBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

