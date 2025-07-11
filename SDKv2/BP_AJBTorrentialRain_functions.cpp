#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBTorrentialRain

#include "Basic.hpp"

#include "BP_AJBTorrentialRain_classes.hpp"
#include "BP_AJBTorrentialRain_parameters.hpp"


namespace SDK
{

// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ExecuteUbergraph_BP_AJBTorrentialRain
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::ExecuteUbergraph_BP_AJBTorrentialRain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ExecuteUbergraph_BP_AJBTorrentialRain");

	Params::BP_AJBTorrentialRain_C_ExecuteUbergraph_BP_AJBTorrentialRain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ChangeEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBTorrentialRain_C::ChangeEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ChangeEnable");

	Params::BP_AJBTorrentialRain_C_ChangeEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.OnMC_ActivePassive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     CauserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   SerialNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::OnMC_ActivePassive(class UObject* Causer, const struct FGameplayTag& CauserType, int32 SerialNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "OnMC_ActivePassive");

	Params::BP_AJBTorrentialRain_C_OnMC_ActivePassive Parms{};

	Parms.Causer = Causer;
	Parms.CauserType = std::move(CauserType);
	Parms.SerialNumber = SerialNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ChangeEnableVisual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBTorrentialRain_C::ChangeEnableVisual(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ChangeEnableVisual");

	Params::BP_AJBTorrentialRain_C_ChangeEnableVisual Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ReceiveEndPlay");

	Params::BP_AJBTorrentialRain_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.TryGetTorrentialRainCloud
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_AJBTorrentialRainCloud_C*     TorrentialRainCloud_0                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::TryGetTorrentialRainCloud(class ABP_AJBTorrentialRainCloud_C** TorrentialRainCloud_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "TryGetTorrentialRainCloud");

	Params::BP_AJBTorrentialRain_C_TryGetTorrentialRainCloud Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TorrentialRainCloud_0 != nullptr)
		*TorrentialRainCloud_0 = Parms.TorrentialRainCloud_0;
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.OnRep_Rep_Phase(Server)
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBTorrentialRain_C::OnRep_Rep_Phase_Server_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "OnRep_Rep_Phase(Server)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.SetPoliticMoveSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBTorrentialRain_C::SetPoliticMoveSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "SetPoliticMoveSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.GetGameplayTagTorrentialRain
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PhaseNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     GameplayTag                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::GetGameplayTagTorrentialRain(int32 PhaseNum, struct FGameplayTag* GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "GetGameplayTagTorrentialRain");

	Params::BP_AJBTorrentialRain_C_GetGameplayTagTorrentialRain Parms{};

	Parms.PhaseNum = PhaseNum;

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayTag != nullptr)
		*GameplayTag = std::move(Parms.GameplayTag);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.SetPoliticMoveDistance
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBTorrentialRain_C::SetPoliticMoveDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "SetPoliticMoveDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.SetPoliticStandLaunchVelocityScale
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBTorrentialRain_C::SetPoliticStandLaunchVelocityScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "SetPoliticStandLaunchVelocityScale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.SetPoliticMoveSpeedByStand
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBTorrentialRain_C::SetPoliticMoveSpeedByStand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "SetPoliticMoveSpeedByStand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ChangeParticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBTorrentialRain_C::ChangeParticleVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ChangeParticleVisibility");

	Params::BP_AJBTorrentialRain_C_ChangeParticleVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ActivePassive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTriggeredByStand                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                     CauserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   SerialNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::ActivePassive(class UObject* Causer, bool bTriggeredByStand, const struct FGameplayTag& CauserType, int32 SerialNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ActivePassive");

	Params::BP_AJBTorrentialRain_C_ActivePassive Parms{};

	Parms.Causer = Causer;
	Parms.bTriggeredByStand = bTriggeredByStand;
	Parms.CauserType = std::move(CauserType);
	Parms.SerialNumber = SerialNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.NotifyChangeFXVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FXVisibilityInfo             PrevFXVisibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_FXVisibilityInfo             FXVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::NotifyChangeFXVisibility(const struct FST_FXVisibilityInfo& PrevFXVisibility, const struct FST_FXVisibilityInfo& FXVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "NotifyChangeFXVisibility");

	Params::BP_AJBTorrentialRain_C_NotifyChangeFXVisibility Parms{};

	Parms.PrevFXVisibility = std::move(PrevFXVisibility);
	Parms.FXVisibility = std::move(FXVisibility);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.GetCurrentPhase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Phase                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBTorrentialRain_C::GetCurrentPhase(int32* Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "GetCurrentPhase");

	Params::BP_AJBTorrentialRain_C_GetCurrentPhase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Phase != nullptr)
		*Phase = Parms.Phase;
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBTorrentialRain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.InactiveAction
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBTorrentialRain_C::InactiveAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "InactiveAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBTorrentialRain.BP_AJBTorrentialRain_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBTorrentialRain_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBTorrentialRain_C", "NotifyTheWorld");

	Params::BP_AJBTorrentialRain_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

}

