#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBBattleGameState

#include "Basic.hpp"

#include "BP_AJBBattleGameState_classes.hpp"
#include "BP_AJBBattleGameState_parameters.hpp"


namespace SDK
{

// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnChangeLivingPlayerCount__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LivingPlayerRate                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PairCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::OnChangeLivingPlayerCount__DelegateSignature(int32 Count, float LivingPlayerRate, int32 PairCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnChangeLivingPlayerCount__DelegateSignature");

	Params::BP_AJBBattleGameState_C_OnChangeLivingPlayerCount__DelegateSignature Parms{};

	Parms.Count = Count;
	Parms.LivingPlayerRate = LivingPlayerRate;
	Parms.PairCount = PairCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnFinishedGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnFinishedGameDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnFinishedGameDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnStartGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnStartGameDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnStartGameDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnSetLivingPlayerCountForHighlight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LivingPlayerCount_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LivingPairCount_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::OnSetLivingPlayerCountForHighlight__DelegateSignature(int32 LivingPlayerCount_0, int32 LivingPairCount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnSetLivingPlayerCountForHighlight__DelegateSignature");

	Params::BP_AJBBattleGameState_C_OnSetLivingPlayerCountForHighlight__DelegateSignature Parms{};

	Parms.LivingPlayerCount_0 = LivingPlayerCount_0;
	Parms.LivingPairCount_0 = LivingPairCount_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnStartLastSurvivorScene_Server__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnStartLastSurvivorScene_Server__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnStartLastSurvivorScene_Server__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.ExecuteUbergraph_BP_AJBBattleGameState
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::ExecuteUbergraph_BP_AJBBattleGameState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "ExecuteUbergraph_BP_AJBBattleGameState");

	Params::BP_AJBBattleGameState_C_ExecuteUbergraph_BP_AJBBattleGameState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.BattleStart_Local
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::BattleStart_Local()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "BattleStart_Local");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnFinishedBattleGame_Core
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnFinishedBattleGame_Core()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnFinishedBattleGame_Core");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnFinishedBattleGame_OnServer
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnFinishedBattleGame_OnServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnFinishedBattleGame_OnServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.StartLastSurvivorScene(Server)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         LastSurvivorMainCharacter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         LastSurvivorPairCharacter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         LastDefeatedCharacter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           LastDamageCauser                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::StartLastSurvivorScene_Server_(class ABP_AJBInGameCharacter_C* LastSurvivorMainCharacter, class ABP_AJBInGameCharacter_C* LastSurvivorPairCharacter, class ABP_AJBInGameCharacter_C* LastDefeatedCharacter, class AActor* LastDamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "StartLastSurvivorScene(Server)");

	Params::BP_AJBBattleGameState_C_StartLastSurvivorScene_Server_ Parms{};

	Parms.LastSurvivorMainCharacter = LastSurvivorMainCharacter;
	Parms.LastSurvivorPairCharacter = LastSurvivorPairCharacter;
	Parms.LastDefeatedCharacter = LastDefeatedCharacter;
	Parms.LastDamageCauser = LastDamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.MakeActiveCharactersAlwaysRelevant(Svr)
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::MakeActiveCharactersAlwaysRelevant_Svr_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "MakeActiveCharactersAlwaysRelevant(Svr)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.MC_StartLastSurvivorScene
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         LastSurvivorMainCharacter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LastSurvivorMainMatchingPlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         LastSurvivorPairCharacter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         LastDefeatedCharacter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LastDefeatedMatchingPlayerIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldPayAttentionTo2ndOnCut1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBBattleGameState_C::MC_StartLastSurvivorScene(class ABP_AJBInGameCharacter_C* LastSurvivorMainCharacter, int32 LastSurvivorMainMatchingPlayerIndex, class ABP_AJBInGameCharacter_C* LastSurvivorPairCharacter, class ABP_AJBInGameCharacter_C* LastDefeatedCharacter, int32 LastDefeatedMatchingPlayerIndex, bool bShouldPayAttentionTo2ndOnCut1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "MC_StartLastSurvivorScene");

	Params::BP_AJBBattleGameState_C_MC_StartLastSurvivorScene Parms{};

	Parms.LastSurvivorMainCharacter = LastSurvivorMainCharacter;
	Parms.LastSurvivorMainMatchingPlayerIndex = LastSurvivorMainMatchingPlayerIndex;
	Parms.LastSurvivorPairCharacter = LastSurvivorPairCharacter;
	Parms.LastDefeatedCharacter = LastDefeatedCharacter;
	Parms.LastDefeatedMatchingPlayerIndex = LastDefeatedMatchingPlayerIndex;
	Parms.bShouldPayAttentionTo2ndOnCut1 = bShouldPayAttentionTo2ndOnCut1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.MC_SetLivingPlayerCount
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PairCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::MC_SetLivingPlayerCount(int32 PlayerCount, int32 PairCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "MC_SetLivingPlayerCount");

	Params::BP_AJBBattleGameState_C_MC_SetLivingPlayerCount Parms{};

	Parms.PlayerCount = PlayerCount;
	Parms.PairCount = PairCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnBattleStart_Server
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnBattleStart_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnBattleStart_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.MC_OnFinishedBattleGame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::MC_OnFinishedBattleGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "MC_OnFinishedBattleGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UpdateTheWorldRemainingTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::UpdateTheWorldRemainingTime(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UpdateTheWorldRemainingTime");

	Params::BP_AJBBattleGameState_C_UpdateTheWorldRemainingTime Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBBattleGameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UpdateLivingPlayerCount(Svr)
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::UpdateLivingPlayerCount_Svr_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UpdateLivingPlayerCount(Svr)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.SetLivingPlayerCount(Svr)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LivingPlayerCount_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LivingPlayerCountWithoutCPU                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::SetLivingPlayerCount_Svr_(int32 LivingPlayerCount_0, int32 LivingPlayerCountWithoutCPU)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "SetLivingPlayerCount(Svr)");

	Params::BP_AJBBattleGameState_C_SetLivingPlayerCount_Svr_ Parms{};

	Parms.LivingPlayerCount_0 = LivingPlayerCount_0;
	Parms.LivingPlayerCountWithoutCPU = LivingPlayerCountWithoutCPU;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "ReceiveTick");

	Params::BP_AJBBattleGameState_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnEntryPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGamePlayerController_C*  PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::OnEntryPlayer(class ABP_AJBInGamePlayerController_C* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnEntryPlayer");

	Params::BP_AJBBattleGameState_C_OnEntryPlayer Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.MC_OnBattleGameStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        BattleStartGameTime_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::MC_OnBattleGameStart(const struct FDateTime& BattleStartGameTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "MC_OnBattleGameStart");

	Params::BP_AJBBattleGameState_C_MC_OnBattleGameStart Parms{};

	Parms.BattleStartGameTime_0 = std::move(BattleStartGameTime_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBBattleGameState_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "NotifyTheWorld");

	Params::BP_AJBBattleGameState_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetElapsedGameTimespan
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FTimespan ABP_AJBBattleGameState_C::GetElapsedGameTimespan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetElapsedGameTimespan");

	Params::BP_AJBBattleGameState_C_GetElapsedGameTimespan Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetBattleStartGameTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FDateTime ABP_AJBBattleGameState_C::GetBattleStartGameTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetBattleStartGameTime");

	Params::BP_AJBBattleGameState_C_GetBattleStartGameTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetLivingPlayerCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::GetLivingPlayerCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetLivingPlayerCount");

	Params::BP_AJBBattleGameState_C_GetLivingPlayerCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UpdateCurrentTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::UpdateCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UpdateCurrentTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetTheWorldRemainingTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   RemainingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::GetTheWorldRemainingTime(float* RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetTheWorldRemainingTime");

	Params::BP_AJBBattleGameState_C_GetTheWorldRemainingTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RemainingTime != nullptr)
		*RemainingTime = Parms.RemainingTime;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetCurrentGameTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FDateTime ABP_AJBBattleGameState_C::GetCurrentGameTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetCurrentGameTime");

	Params::BP_AJBBattleGameState_C_GetCurrentGameTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetElapsedGameTimespan_FromBeforeCountDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FTimespan ABP_AJBBattleGameState_C::GetElapsedGameTimespan_FromBeforeCountDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetElapsedGameTimespan_FromBeforeCountDown");

	Params::BP_AJBBattleGameState_C_GetElapsedGameTimespan_FromBeforeCountDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UpdateInitialPlayerLivingCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::UpdateInitialPlayerLivingCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UpdateInitialPlayerLivingCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetInitialPlayerLivingCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InitialPlayerLivingCount_0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::GetInitialPlayerLivingCount(bool* bSuccess, int32* InitialPlayerLivingCount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetInitialPlayerLivingCount");

	Params::BP_AJBBattleGameState_C_GetInitialPlayerLivingCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (InitialPlayerLivingCount_0 != nullptr)
		*InitialPlayerLivingCount_0 = Parms.InitialPlayerLivingCount_0;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.IsFinishedBattleGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bFinished                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBBattleGameState_C::IsFinishedBattleGame(bool* bFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "IsFinishedBattleGame");

	Params::BP_AJBBattleGameState_C_IsFinishedBattleGame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bFinished != nullptr)
		*bFinished = Parms.bFinished;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.JudgeFirstBlood
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsFirstBlood                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBBattleGameState_C::JudgeFirstBlood(bool* IsFirstBlood)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "JudgeFirstBlood");

	Params::BP_AJBBattleGameState_C_JudgeFirstBlood Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFirstBlood != nullptr)
		*IsFirstBlood = Parms.IsFirstBlood;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetElapsedInGameTimespan
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FTimespan ABP_AJBBattleGameState_C::GetElapsedInGameTimespan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetElapsedInGameTimespan");

	Params::BP_AJBBattleGameState_C_GetElapsedInGameTimespan Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.Private_IsPlayingReplay
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_AJBBattleGameState_C::Private_IsPlayingReplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "Private_IsPlayingReplay");

	Params::BP_AJBBattleGameState_C_Private_IsPlayingReplay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.IsStartBattleGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBBattleGameState_C::IsStartBattleGame(bool* bStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "IsStartBattleGame");

	Params::BP_AJBBattleGameState_C_IsStartBattleGame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bStart != nullptr)
		*bStart = Parms.bStart;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetLivingPlayerCountWithoutCPU(Server)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::GetLivingPlayerCountWithoutCPU_Server_(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetLivingPlayerCountWithoutCPU(Server)");

	Params::BP_AJBBattleGameState_C_GetLivingPlayerCountWithoutCPU_Server_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UpdateLossTimeBySlomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::UpdateLossTimeBySlomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UpdateLossTimeBySlomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.UpdateRealDeltaTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::UpdateRealDeltaTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "UpdateRealDeltaTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.CallChangeLivingPlayerCountEvent
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::CallChangeLivingPlayerCountEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "CallChangeLivingPlayerCountEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetLivingPairCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::GetLivingPairCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetLivingPairCount");

	Params::BP_AJBBattleGameState_C_GetLivingPairCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetLivingRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AJBBattleGameState_C::GetLivingRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetLivingRate");

	Params::BP_AJBBattleGameState_C_GetLivingRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.CallChangeLivingPlayerCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LivingPlayerCount_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LivingPairCount_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBBattleGameState_C::CallChangeLivingPlayerCount(int32 LivingPlayerCount_0, int32 LivingPairCount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "CallChangeLivingPlayerCount");

	Params::BP_AJBBattleGameState_C_CallChangeLivingPlayerCount Parms{};

	Parms.LivingPlayerCount_0 = LivingPlayerCount_0;
	Parms.LivingPairCount_0 = LivingPairCount_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.InterruptLastSurvivorScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::InterruptLastSurvivorScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "InterruptLastSurvivorScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.OnRep_bLastSurvivorIsDetermined
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBBattleGameState_C::OnRep_bLastSurvivorIsDetermined()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "OnRep_bLastSurvivorIsDetermined");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.DoesCharacterHavePlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAJBInGameCharacterBase*          CharacterBase                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_AJBBattleGameState_C::DoesCharacterHavePlayerController(class AAJBInGameCharacterBase* CharacterBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "DoesCharacterHavePlayerController");

	Params::BP_AJBBattleGameState_C_DoesCharacterHavePlayerController Parms{};

	Parms.CharacterBase = CharacterBase;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetRemainingLimitTimespan_FromAfterOpenTheGame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FTimespan ABP_AJBBattleGameState_C::GetRemainingLimitTimespan_FromAfterOpenTheGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetRemainingLimitTimespan_FromAfterOpenTheGame");

	Params::BP_AJBBattleGameState_C_GetRemainingLimitTimespan_FromAfterOpenTheGame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBBattleGameState.BP_AJBBattleGameState_C.GetElapsedGameTimespanWithoutTheWorld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FTimespan ABP_AJBBattleGameState_C::GetElapsedGameTimespanWithoutTheWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBattleGameState_C", "GetElapsedGameTimespanWithoutTheWorld");

	Params::BP_AJBBattleGameState_C_GetElapsedGameTimespanWithoutTheWorld Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

