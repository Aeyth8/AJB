#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lottery_SelectCardWindow

#include "Basic.hpp"

#include "WB_Lottery_SelectCardWindow_classes.hpp"
#include "WB_Lottery_SelectCardWindow_parameters.hpp"


namespace SDK
{

// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.ExecuteUbergraph_WB_Lottery_SelectCardWindow
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lottery_SelectCardWindow_C::ExecuteUbergraph_WB_Lottery_SelectCardWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "ExecuteUbergraph_WB_Lottery_SelectCardWindow");

	Params::WB_Lottery_SelectCardWindow_C_ExecuteUbergraph_WB_Lottery_SelectCardWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.SetupParam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPremiumMode_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TicketNum_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentRewardNum_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxRewardNum_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lottery_SelectCardWindow_C::SetupParam(bool bPremiumMode_0, int32 TicketNum_0, int32 CurrentRewardNum_0, int32 MaxRewardNum_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "SetupParam");

	Params::WB_Lottery_SelectCardWindow_C_SetupParam Parms{};

	Parms.bPremiumMode_0 = bPremiumMode_0;
	Parms.TicketNum_0 = TicketNum_0;
	Parms.CurrentRewardNum_0 = CurrentRewardNum_0;
	Parms.MaxRewardNum_0 = MaxRewardNum_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnFinishedAppearAnim
// (BlueprintCallable, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::OnFinishedAppearAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnFinishedAppearAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.LotteryCard_2
// (BlueprintCallable, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::LotteryCard_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "LotteryCard_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.LotteryCard_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::LotteryCard_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "LotteryCard_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.LotteryCard_0
// (BlueprintCallable, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::LotteryCard_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "LotteryCard_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.ResetTimeOutCheck
// (BlueprintCallable, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::ResetTimeOutCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "ResetTimeOutCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lottery_SelectCardWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "Tick");

	Params::WB_Lottery_SelectCardWindow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnClickedCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_Lottery_Card_C*               ClickCardWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lottery_SelectCardWindow_C::OnClickedCard(class UWB_Lottery_Card_C* ClickCardWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnClickedCard");

	Params::WB_Lottery_SelectCardWindow_C_OnClickedCard Parms{};

	Parms.ClickCardWidget = ClickCardWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnClosingWindow
// (Event, Public, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::OnClosingWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnClosingWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnOpeningWindow
// (Event, Public, BlueprintEvent)

void UWB_Lottery_SelectCardWindow_C::OnOpeningWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnOpeningWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputTurnRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputTurnRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputTurnRate");

	Params::WB_Lottery_SelectCardWindow_C_OnInputTurnRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedUp");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedTouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedTouch");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedTouch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedRight");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedR2");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedR1");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedLeft");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedL3");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedL2");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedL1");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedDown");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedDecide");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputReleasedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputReleasedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputReleasedCancel");

	Params::WB_Lottery_SelectCardWindow_C_OnInputReleasedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedUp");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LocationX                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LocationY                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedTouch(const float LocationX, const float LocationY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedTouch");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedTouch Parms{};

	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedRight");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedR2");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedR1");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedLeft");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedL3");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedL2");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedL1");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedDown");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedDecide");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputPressedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputPressedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputPressedCancel");

	Params::WB_Lottery_SelectCardWindow_C_OnInputPressedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputMoveRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputMoveRight(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputMoveRight");

	Params::WB_Lottery_SelectCardWindow_C_OnInputMoveRight Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputMoveForward
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputMoveForward(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputMoveForward");

	Params::WB_Lottery_SelectCardWindow_C_OnInputMoveForward Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.OnInputLookupRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::OnInputLookupRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "OnInputLookupRate");

	Params::WB_Lottery_SelectCardWindow_C_OnInputLookupRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lottery_SelectCardWindow.WB_Lottery_SelectCardWindow_C.IsModeless
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_Lottery_SelectCardWindow_C::IsModeless()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lottery_SelectCardWindow_C", "IsModeless");

	Params::WB_Lottery_SelectCardWindow_C_IsModeless Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

