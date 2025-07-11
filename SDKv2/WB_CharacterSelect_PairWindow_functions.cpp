#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharacterSelect_PairWindow

#include "Basic.hpp"

#include "WB_CharacterSelect_PairWindow_classes.hpp"
#include "WB_CharacterSelect_PairWindow_parameters.hpp"


namespace SDK
{

// Function WB_CharacterSelect_PairWindow.WB_CharacterSelect_PairWindow_C.ExecuteUbergraph_WB_CharacterSelect_PairWindow
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CharacterSelect_PairWindow_C::ExecuteUbergraph_WB_CharacterSelect_PairWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharacterSelect_PairWindow_C", "ExecuteUbergraph_WB_CharacterSelect_PairWindow");

	Params::WB_CharacterSelect_PairWindow_C_ExecuteUbergraph_WB_CharacterSelect_PairWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharacterSelect_PairWindow.WB_CharacterSelect_PairWindow_C.SetPairCharaInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TitleName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             PairPlayerName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAJBCharacterInfo                InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_CharacterSelect_PairWindow_C::SetPairCharaInfo(const class FText& TitleName, const class FText& PairPlayerName, const struct FAJBCharacterInfo& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharacterSelect_PairWindow_C", "SetPairCharaInfo");

	Params::WB_CharacterSelect_PairWindow_C_SetPairCharaInfo Parms{};

	Parms.TitleName = std::move(TitleName);
	Parms.PairPlayerName = std::move(PairPlayerName);
	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharacterSelect_PairWindow.WB_CharacterSelect_PairWindow_C.IsShowingUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bShow                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CharacterSelect_PairWindow_C::IsShowingUI(bool* bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharacterSelect_PairWindow_C", "IsShowingUI");

	Params::WB_CharacterSelect_PairWindow_C_IsShowingUI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bShow != nullptr)
		*bShow = Parms.bShow;
}

}

