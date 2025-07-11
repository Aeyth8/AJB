#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TestModeMenuItem_StatusLockButton

#include "Basic.hpp"

#include "WB_TestModeMenuItem_StatusLockButton_classes.hpp"
#include "WB_TestModeMenuItem_StatusLockButton_parameters.hpp"


namespace SDK
{

// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.OnCheckStatusTick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::OnCheckStatusTick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "OnCheckStatusTick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.ExecuteUbergraph_WB_TestModeMenuItem_StatusLockButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TestModeMenuItem_StatusLockButton_C::ExecuteUbergraph_WB_TestModeMenuItem_StatusLockButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "ExecuteUbergraph_WB_TestModeMenuItem_StatusLockButton");

	Params::WB_TestModeMenuItem_StatusLockButton_C_ExecuteUbergraph_WB_TestModeMenuItem_StatusLockButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.StatusBlinkAnim
// (BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::StatusBlinkAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "StatusBlinkAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.CheckStatusTick
// (BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::CheckStatusTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "CheckStatusTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.OnDecide
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::OnDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "OnDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.Unlock
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::Unlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "Unlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.SetStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_TestModeMenuItem_StatusLockButton_C::SetStatusText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "SetStatusText");

	Params::WB_TestModeMenuItem_StatusLockButton_C_SetStatusText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.SetStatusColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     BaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     DarkColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TestModeMenuItem_StatusLockButton_C::SetStatusColor(const struct FLinearColor& BaseColor, const struct FLinearColor& DarkColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "SetStatusColor");

	Params::WB_TestModeMenuItem_StatusLockButton_C_SetStatusColor Parms{};

	Parms.BaseColor = std::move(BaseColor);
	Parms.DarkColor = std::move(DarkColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.StartStatusBlink
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::StartStatusBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "StartStatusBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.StopStatusBlink
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::StopStatusBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "StopStatusBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TestModeMenuItem_StatusLockButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "PreConstruct");

	Params::WB_TestModeMenuItem_StatusLockButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.ModifyLabelColor
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_TestModeMenuItem_StatusLockButton_C::ModifyLabelColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "ModifyLabelColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TestModeMenuItem_StatusLockButton.WB_TestModeMenuItem_StatusLockButton_C.IsLock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TestModeMenuItem_StatusLockButton_C::IsLock(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TestModeMenuItem_StatusLockButton_C", "IsLock");

	Params::WB_TestModeMenuItem_StatusLockButton_C_IsLock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

