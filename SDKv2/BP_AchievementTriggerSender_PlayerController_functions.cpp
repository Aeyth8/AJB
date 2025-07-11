#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AchievementTriggerSender_PlayerController

#include "Basic.hpp"

#include "BP_AchievementTriggerSender_PlayerController_classes.hpp"
#include "BP_AchievementTriggerSender_PlayerController_parameters.hpp"


namespace SDK
{

// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementTriggerSender_PlayerController_C::ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementTriggerSender_PlayerController_C", "ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController");

	Params::BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.BindOwnerActorEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_AchievementTriggerSender_PlayerController_C::BindOwnerActorEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementTriggerSender_PlayerController_C", "BindOwnerActorEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnDetermineBattleGameRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BattleGameRank                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BattleGameRankWithoutCPU                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementTriggerSender_PlayerController_C::OnDetermineBattleGameRank(int32 BattleGameRank, int32 BattleGameRankWithoutCPU)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementTriggerSender_PlayerController_C", "OnDetermineBattleGameRank");

	Params::BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank Parms{};

	Parms.BattleGameRank = BattleGameRank;
	Parms.BattleGameRankWithoutCPU = BattleGameRankWithoutCPU;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnDetermineLivingTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        LivingTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementTriggerSender_PlayerController_C::OnDetermineLivingTime(const struct FTimespan& LivingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementTriggerSender_PlayerController_C", "OnDetermineLivingTime");

	Params::BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime Parms{};

	Parms.LivingTime = std::move(LivingTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnDetermineWatchingTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        WatchingTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementTriggerSender_PlayerController_C::OnDetermineWatchingTime(const struct FTimespan& WatchingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementTriggerSender_PlayerController_C", "OnDetermineWatchingTime");

	Params::BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime Parms{};

	Parms.WatchingTime = std::move(WatchingTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnOpenTheGame
// (BlueprintCallable, BlueprintEvent)

void UBP_AchievementTriggerSender_PlayerController_C::OnOpenTheGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementTriggerSender_PlayerController_C", "OnOpenTheGame");

	UObject::ProcessEvent(Func, nullptr);
}

}

