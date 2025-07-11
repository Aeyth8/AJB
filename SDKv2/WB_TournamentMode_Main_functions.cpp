#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TournamentMode_Main

#include "Basic.hpp"

#include "WB_TournamentMode_Main_classes.hpp"
#include "WB_TournamentMode_Main_parameters.hpp"


namespace SDK
{

// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnChangedWatcherPlayerDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::OnChangedWatcherPlayerDispatcher__DelegateSignature(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnChangedWatcherPlayerDispatcher__DelegateSignature");

	Params::WB_TournamentMode_Main_C_OnChangedWatcherPlayerDispatcher__DelegateSignature Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnReleasedTouchOnPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TouchedPlayerActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::OnReleasedTouchOnPlayer__DelegateSignature(class AActor* TouchedPlayerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnReleasedTouchOnPlayer__DelegateSignature");

	Params::WB_TournamentMode_Main_C_OnReleasedTouchOnPlayer__DelegateSignature Parms{};

	Parms.TouchedPlayerActor = TouchedPlayerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.ExecuteUbergraph_WB_TournamentMode_Main
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::ExecuteUbergraph_WB_TournamentMode_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "ExecuteUbergraph_WB_TournamentMode_Main");

	Params::WB_TournamentMode_Main_C_ExecuteUbergraph_WB_TournamentMode_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnGotoWatcherPlayerByUltimateWindowButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::OnGotoWatcherPlayerByUltimateWindowButton(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnGotoWatcherPlayerByUltimateWindowButton");

	Params::WB_TournamentMode_Main_C_OnGotoWatcherPlayerByUltimateWindowButton Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.RequestShopCompetition_UltimateLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SkillTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::RequestShopCompetition_UltimateLog(int32 PlayerID, const struct FGameplayTag& SkillTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "RequestShopCompetition_UltimateLog");

	Params::WB_TournamentMode_Main_C_RequestShopCompetition_UltimateLog Parms{};

	Parms.PlayerID = PlayerID;
	Parms.SkillTag = std::move(SkillTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.UpdateWatcherNameAndTeamName
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::UpdateWatcherNameAndTeamName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "UpdateWatcherNameAndTeamName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.SetupValidMatchingPlayerIndexList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_ShopCompetitionTeamInfo>TeamInfoList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_TournamentMode_Main_C::SetupValidMatchingPlayerIndexList(const TArray<struct FST_ShopCompetitionTeamInfo>& TeamInfoList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "SetupValidMatchingPlayerIndexList");

	Params::WB_TournamentMode_Main_C_SetupValidMatchingPlayerIndexList Parms{};

	Parms.TeamInfoList = std::move(TeamInfoList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.TogglePlayerList
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::TogglePlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "TogglePlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.ChangedWatcherPlayerID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectedWatcherPlayerID                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::ChangedWatcherPlayerID(int32 SelectedWatcherPlayerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "ChangedWatcherPlayerID");

	Params::WB_TournamentMode_Main_C_ChangedWatcherPlayerID Parms{};

	Parms.SelectedWatcherPlayerID = SelectedWatcherPlayerID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnOpeningFullMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBWindowWidget*                 TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::OnOpeningFullMap(class UAJBWindowWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnOpeningFullMap");

	Params::WB_TournamentMode_Main_C_OnOpeningFullMap Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnClosedFullMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBWindowWidget*                 TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::OnClosedFullMap(class UAJBWindowWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnClosedFullMap");

	Params::WB_TournamentMode_Main_C_OnClosedFullMap Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnHidePlayerList
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::OnHidePlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnHidePlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnGotoWatcherPlayerByPlayerDetailButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TournamentMode_Main_C::OnGotoWatcherPlayerByPlayerDetailButton(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnGotoWatcherPlayerByPlayerDetailButton");

	Params::WB_TournamentMode_Main_C_OnGotoWatcherPlayerByPlayerDetailButton Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_TournamentMode_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.ChangeMode_FreeCamera
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::ChangeMode_FreeCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "ChangeMode_FreeCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.ChangeMode_Watcher
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::ChangeMode_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "ChangeMode_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.HidePlayerList
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::HidePlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "HidePlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.ShowPlayerList
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::ShowPlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "ShowPlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnClosingWindow
// (Event, Public, BlueprintEvent)

void UWB_TournamentMode_Main_C::OnClosingWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnClosingWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnOpeningWindow
// (Event, Public, BlueprintEvent)

void UWB_TournamentMode_Main_C::OnOpeningWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnOpeningWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.BindFullMapWindowEvents
// (BlueprintCallable, BlueprintEvent)

void UWB_TournamentMode_Main_C::BindFullMapWindowEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "BindFullMapWindowEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.IsDisplayWatcherMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bDisplayWatcherMode_0                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TournamentMode_Main_C::IsDisplayWatcherMode(bool* bDisplayWatcherMode_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "IsDisplayWatcherMode");

	Params::WB_TournamentMode_Main_C_IsDisplayWatcherMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDisplayWatcherMode_0 != nullptr)
		*bDisplayWatcherMode_0 = Parms.bDisplayWatcherMode_0;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputTurnRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputTurnRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputTurnRate");

	Params::WB_TournamentMode_Main_C_OnInputTurnRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedUp");

	Params::WB_TournamentMode_Main_C_OnInputReleasedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedTouch
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedTouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedTouch");

	Params::WB_TournamentMode_Main_C_OnInputReleasedTouch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedRight");

	Params::WB_TournamentMode_Main_C_OnInputReleasedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedR2");

	Params::WB_TournamentMode_Main_C_OnInputReleasedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedR1");

	Params::WB_TournamentMode_Main_C_OnInputReleasedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedLeft");

	Params::WB_TournamentMode_Main_C_OnInputReleasedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedL3");

	Params::WB_TournamentMode_Main_C_OnInputReleasedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedL2");

	Params::WB_TournamentMode_Main_C_OnInputReleasedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedL1");

	Params::WB_TournamentMode_Main_C_OnInputReleasedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedDown");

	Params::WB_TournamentMode_Main_C_OnInputReleasedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedDecide");

	Params::WB_TournamentMode_Main_C_OnInputReleasedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputReleasedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputReleasedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputReleasedCancel");

	Params::WB_TournamentMode_Main_C_OnInputReleasedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedUp");

	Params::WB_TournamentMode_Main_C_OnInputPressedUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedTouch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LocationX                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LocationY                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedTouch(const float LocationX, const float LocationY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedTouch");

	Params::WB_TournamentMode_Main_C_OnInputPressedTouch Parms{};

	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedRight");

	Params::WB_TournamentMode_Main_C_OnInputPressedRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedR2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedR2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedR2");

	Params::WB_TournamentMode_Main_C_OnInputPressedR2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedR1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedR1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedR1");

	Params::WB_TournamentMode_Main_C_OnInputPressedR1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedLeft
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedLeft");

	Params::WB_TournamentMode_Main_C_OnInputPressedLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedL3
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedL3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedL3");

	Params::WB_TournamentMode_Main_C_OnInputPressedL3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedL2
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedL2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedL2");

	Params::WB_TournamentMode_Main_C_OnInputPressedL2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedL1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedL1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedL1");

	Params::WB_TournamentMode_Main_C_OnInputPressedL1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedDown");

	Params::WB_TournamentMode_Main_C_OnInputPressedDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedDecide
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedDecide");

	Params::WB_TournamentMode_Main_C_OnInputPressedDecide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputPressedCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputPressedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputPressedCancel");

	Params::WB_TournamentMode_Main_C_OnInputPressedCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputMoveRight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputMoveRight(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputMoveRight");

	Params::WB_TournamentMode_Main_C_OnInputMoveRight Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputMoveForward
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputMoveForward(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputMoveForward");

	Params::WB_TournamentMode_Main_C_OnInputMoveForward Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.OnInputLookupRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::OnInputLookupRate(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "OnInputLookupRate");

	Params::WB_TournamentMode_Main_C_OnInputLookupRate Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TournamentMode_Main.WB_TournamentMode_Main_C.IsModeless
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_TournamentMode_Main_C::IsModeless()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TournamentMode_Main_C", "IsModeless");

	Params::WB_TournamentMode_Main_C_IsModeless Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

