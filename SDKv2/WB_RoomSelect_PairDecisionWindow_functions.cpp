#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RoomSelect_PairDecisionWindow

#include "Basic.hpp"

#include "WB_RoomSelect_PairDecisionWindow_classes.hpp"
#include "WB_RoomSelect_PairDecisionWindow_parameters.hpp"


namespace SDK
{

// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.ExecuteUbergraph_WB_RoomSelect_PairDecisionWindow
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RoomSelect_PairDecisionWindow_C::ExecuteUbergraph_WB_RoomSelect_PairDecisionWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "ExecuteUbergraph_WB_RoomSelect_PairDecisionWindow");

	Params::WB_RoomSelect_PairDecisionWindow_C_ExecuteUbergraph_WB_RoomSelect_PairDecisionWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IconID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             PlayerTitle                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_RoomSelect_PairDecisionWindow_C::Setup(int32 IconID, int32 PlayerLevel, const class FText& PlayerName, const class FText& PlayerTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "Setup");

	Params::WB_RoomSelect_PairDecisionWindow_C_Setup Parms{};

	Parms.IconID = IconID;
	Parms.PlayerLevel = PlayerLevel;
	Parms.PlayerName = std::move(PlayerName);
	Parms.PlayerTitle = std::move(PlayerTitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnOpeningWindow
// (Event, Public, BlueprintEvent)

void UWB_RoomSelect_PairDecisionWindow_C::OnOpeningWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnOpeningWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnFinishedOpenCurveAnim
// (BlueprintCallable, BlueprintEvent)

void UWB_RoomSelect_PairDecisionWindow_C::OnFinishedOpenCurveAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnFinishedOpenCurveAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnClosingWindow
// (Event, Public, BlueprintEvent)

void UWB_RoomSelect_PairDecisionWindow_C::OnClosingWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnClosingWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_RoomSelect_PairDecisionWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputTurnRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputTurnRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputTurnRate");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputTurnRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedUp");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedTouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedTouch");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedTouch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedRight");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedLeft");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedDown");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedDecide");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedCancel");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedUp");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LocationX                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LocationY                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedTouch(const float LocationX, const float LocationY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedTouch");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedTouch Parms{};

	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedRight");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedLeft");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedDown");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedDecide");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedCancel");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputMoveRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputMoveRight(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputMoveRight");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputMoveRight Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputMoveForward
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputMoveForward(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputMoveForward");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputMoveForward Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputLookupRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputLookupRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputLookupRate");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputLookupRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.IsModeless
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::IsModeless()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "IsModeless");

	Params::WB_RoomSelect_PairDecisionWindow_C_IsModeless Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedR2");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedR1");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedL2");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedL1");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedR2");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedR1");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedL2");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedL1");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputReleasedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputReleasedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputReleasedL3");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputReleasedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_PairDecisionWindow.WB_RoomSelect_PairDecisionWindow_C.OnInputPressedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_PairDecisionWindow_C::OnInputPressedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_PairDecisionWindow_C", "OnInputPressedL3");

	Params::WB_RoomSelect_PairDecisionWindow_C_OnInputPressedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

