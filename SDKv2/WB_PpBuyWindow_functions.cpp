#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PpBuyWindow

#include "Basic.hpp"

#include "WB_PpBuyWindow_classes.hpp"
#include "WB_PpBuyWindow_parameters.hpp"


namespace SDK
{

// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnResetedTimeCountdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_PpBuyWindow_C::OnResetedTimeCountdown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnResetedTimeCountdown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnFinishedOpening__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_PpBuyWindow_C::OnFinishedOpening__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnFinishedOpening__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.ExecuteUbergraph_WB_PpBuyWindow
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::ExecuteUbergraph_WB_PpBuyWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "ExecuteUbergraph_WB_PpBuyWindow");

	Params::WB_PpBuyWindow_C_ExecuteUbergraph_WB_PpBuyWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.BndEvt__WB_Title_Button_EMoney_K2Node_ComponentBoundEvent_4_OnAJBButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAJBButtonWidget*                 OwnerWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAJBButton*                       TargetButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::BndEvt__WB_Title_Button_EMoney_K2Node_ComponentBoundEvent_4_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "BndEvt__WB_Title_Button_EMoney_K2Node_ComponentBoundEvent_4_OnAJBButtonEvent__DelegateSignature");

	Params::WB_PpBuyWindow_C_BndEvt__WB_Title_Button_EMoney_K2Node_ComponentBoundEvent_4_OnAJBButtonEvent__DelegateSignature Parms{};

	Parms.OwnerWidget = OwnerWidget;
	Parms.TargetButton = TargetButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnOpeningGameOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBWindowWidget*                 TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::OnOpeningGameOver(class UAJBWindowWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnOpeningGameOver");

	Params::WB_PpBuyWindow_C_OnOpeningGameOver Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.TakeOverCountDownTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ElapsedTime_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CountDownTime_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::TakeOverCountDownTime(float ElapsedTime_0, float CountDownTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "TakeOverCountDownTime");

	Params::WB_PpBuyWindow_C_TakeOverCountDownTime Parms{};

	Parms.ElapsedTime_0 = ElapsedTime_0;
	Parms.CountDownTime_0 = CountDownTime_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PpBuyWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "Tick");

	Params::WB_PpBuyWindow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.BndEvt__WB_CommonButton_K2Node_ComponentBoundEvent_3_OnAJBButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAJBButtonWidget*                 OwnerWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAJBButton*                       TargetButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::BndEvt__WB_CommonButton_K2Node_ComponentBoundEvent_3_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "BndEvt__WB_CommonButton_K2Node_ComponentBoundEvent_3_OnAJBButtonEvent__DelegateSignature");

	Params::WB_PpBuyWindow_C_BndEvt__WB_CommonButton_K2Node_ComponentBoundEvent_3_OnAJBButtonEvent__DelegateSignature Parms{};

	Parms.OwnerWidget = OwnerWidget;
	Parms.TargetButton = TargetButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.BndEvt__Button_Credit_5_K2Node_ComponentBoundEvent_2_OnAJBButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAJBButtonWidget*                 OwnerWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAJBButton*                       TargetButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::BndEvt__Button_Credit_5_K2Node_ComponentBoundEvent_2_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "BndEvt__Button_Credit_5_K2Node_ComponentBoundEvent_2_OnAJBButtonEvent__DelegateSignature");

	Params::WB_PpBuyWindow_C_BndEvt__Button_Credit_5_K2Node_ComponentBoundEvent_2_OnAJBButtonEvent__DelegateSignature Parms{};

	Parms.OwnerWidget = OwnerWidget;
	Parms.TargetButton = TargetButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.BndEvt__Button_Credit_2_K2Node_ComponentBoundEvent_1_OnAJBButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAJBButtonWidget*                 OwnerWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAJBButton*                       TargetButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::BndEvt__Button_Credit_2_K2Node_ComponentBoundEvent_1_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "BndEvt__Button_Credit_2_K2Node_ComponentBoundEvent_1_OnAJBButtonEvent__DelegateSignature");

	Params::WB_PpBuyWindow_C_BndEvt__Button_Credit_2_K2Node_ComponentBoundEvent_1_OnAJBButtonEvent__DelegateSignature Parms{};

	Parms.OwnerWidget = OwnerWidget;
	Parms.TargetButton = TargetButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.BndEvt__Button_Credit_1_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAJBButtonWidget*                 OwnerWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAJBButton*                       TargetButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::BndEvt__Button_Credit_1_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "BndEvt__Button_Credit_1_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature");

	Params::WB_PpBuyWindow_C_BndEvt__Button_Credit_1_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature Parms{};

	Parms.OwnerWidget = OwnerWidget;
	Parms.TargetButton = TargetButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnOpeningWindow
// (Event, Public, BlueprintEvent)

void UWB_PpBuyWindow_C::OnOpeningWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnOpeningWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnClosingWindow
// (Event, Public, BlueprintEvent)

void UWB_PpBuyWindow_C::OnClosingWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnClosingWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnFinishedOpenCurveAnim
// (BlueprintCallable, BlueprintEvent)

void UWB_PpBuyWindow_C::OnFinishedOpenCurveAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnFinishedOpenCurveAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.GetAJBHUDBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAJBHUDBase*                      HUDBase                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PpBuyWindow_C::GetAJBHUDBase(bool* bSuccess, class AAJBHUDBase** HUDBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "GetAJBHUDBase");

	Params::WB_PpBuyWindow_C_GetAJBHUDBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (HUDBase != nullptr)
		*HUDBase = Parms.HUDBase;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.UpdateTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_PpBuyWindow_C::UpdateTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "UpdateTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.IsSelectedBuy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bSelected                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PpBuyWindow_C::IsSelectedBuy(bool* bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "IsSelectedBuy");

	Params::WB_PpBuyWindow_C_IsSelectedBuy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSelected != nullptr)
		*bSelected = Parms.bSelected;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedUp");

	Params::WB_PpBuyWindow_C_OnInputReleasedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedRight");

	Params::WB_PpBuyWindow_C_OnInputReleasedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedLeft");

	Params::WB_PpBuyWindow_C_OnInputReleasedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedDown");

	Params::WB_PpBuyWindow_C_OnInputReleasedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedDecide");

	Params::WB_PpBuyWindow_C_OnInputReleasedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedCancel");

	Params::WB_PpBuyWindow_C_OnInputReleasedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedUp");

	Params::WB_PpBuyWindow_C_OnInputPressedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedRight");

	Params::WB_PpBuyWindow_C_OnInputPressedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedLeft");

	Params::WB_PpBuyWindow_C_OnInputPressedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedDown");

	Params::WB_PpBuyWindow_C_OnInputPressedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedDecide");

	Params::WB_PpBuyWindow_C_OnInputPressedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedCancel");

	Params::WB_PpBuyWindow_C_OnInputPressedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputTurnRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputTurnRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputTurnRate");

	Params::WB_PpBuyWindow_C_OnInputTurnRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputMoveRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputMoveRight(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputMoveRight");

	Params::WB_PpBuyWindow_C_OnInputMoveRight Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputMoveForward
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputMoveForward(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputMoveForward");

	Params::WB_PpBuyWindow_C_OnInputMoveForward Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputLookupRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputLookupRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputLookupRate");

	Params::WB_PpBuyWindow_C_OnInputLookupRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.IsModeless
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::IsModeless()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "IsModeless");

	Params::WB_PpBuyWindow_C_IsModeless Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedTouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedTouch");

	Params::WB_PpBuyWindow_C_OnInputReleasedTouch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LocationX                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LocationY                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedTouch(const float LocationX, const float LocationY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedTouch");

	Params::WB_PpBuyWindow_C_OnInputPressedTouch Parms{};

	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedR2");

	Params::WB_PpBuyWindow_C_OnInputReleasedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedR1");

	Params::WB_PpBuyWindow_C_OnInputReleasedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedL2");

	Params::WB_PpBuyWindow_C_OnInputReleasedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedL1");

	Params::WB_PpBuyWindow_C_OnInputReleasedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedR2");

	Params::WB_PpBuyWindow_C_OnInputPressedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedR1");

	Params::WB_PpBuyWindow_C_OnInputPressedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedL2");

	Params::WB_PpBuyWindow_C_OnInputPressedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedL1");

	Params::WB_PpBuyWindow_C_OnInputPressedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputReleasedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputReleasedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputReleasedL3");

	Params::WB_PpBuyWindow_C_OnInputReleasedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PpBuyWindow.WB_PpBuyWindow_C.OnInputPressedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PpBuyWindow_C::OnInputPressedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PpBuyWindow_C", "OnInputPressedL3");

	Params::WB_PpBuyWindow_C_OnInputPressedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

