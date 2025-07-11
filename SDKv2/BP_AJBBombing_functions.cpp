#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBBombing

#include "Basic.hpp"

#include "BP_AJBBombing_classes.hpp"
#include "BP_AJBBombing_parameters.hpp"


namespace SDK
{

// Function BP_AJBBombing.BP_AJBBombing_C.ExecuteUbergraph_BP_AJBBombing
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBBombing_C::ExecuteUbergraph_BP_AJBBombing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "ExecuteUbergraph_BP_AJBBombing");

	Params::BP_AJBBombing_C_ExecuteUbergraph_BP_AJBBombing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.MC_SetShouldUpdateLectActiveTime
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldUpdateLeftActiveTime                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBBombing_C::MC_SetShouldUpdateLectActiveTime(bool bShouldUpdateLeftActiveTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "MC_SetShouldUpdateLectActiveTime");

	Params::BP_AJBBombing_C_MC_SetShouldUpdateLectActiveTime Parms{};

	Parms.bShouldUpdateLeftActiveTime = bShouldUpdateLeftActiveTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.OnReceiveDamage_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRemainHP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDamageIsCut                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bNotUseCollision                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBBombing_C::OnReceiveDamage_Server(int32 Damage, const struct FGameplayTag& DamageType, class AActor* DamageCauser, bool bRemainHP, bool bDamageIsCut, bool bNotUseCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "OnReceiveDamage_Server");

	Params::BP_AJBBombing_C_OnReceiveDamage_Server Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = std::move(DamageType);
	Parms.DamageCauser = DamageCauser;
	Parms.bRemainHP = bRemainHP;
	Parms.bDamageIsCut = bDamageIsCut;
	Parms.bNotUseCollision = bNotUseCollision;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.OnMC_ActivePassive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     CauserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   SerialNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBBombing_C::OnMC_ActivePassive(class UObject* Causer, const struct FGameplayTag& CauserType, int32 SerialNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "OnMC_ActivePassive");

	Params::BP_AJBBombing_C_OnMC_ActivePassive Parms{};

	Parms.Causer = Causer;
	Parms.CauserType = std::move(CauserType);
	Parms.SerialNumber = SerialNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.ChangeParticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBBombing_C::ChangeParticleVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "ChangeParticleVisibility");

	Params::BP_AJBBombing_C_ChangeParticleVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.NotifyChangeFXVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FXVisibilityInfo             PrevFXVisibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_FXVisibilityInfo             FXVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_AJBBombing_C::NotifyChangeFXVisibility(const struct FST_FXVisibilityInfo& PrevFXVisibility, const struct FST_FXVisibilityInfo& FXVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "NotifyChangeFXVisibility");

	Params::BP_AJBBombing_C_NotifyChangeFXVisibility Parms{};

	Parms.PrevFXVisibility = std::move(PrevFXVisibility);
	Parms.FXVisibility = std::move(FXVisibility);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.OnTimeup
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBBombing_C::OnTimeup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "OnTimeup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBBombing.BP_AJBBombing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBBombing_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "ReceiveTick");

	Params::BP_AJBBombing_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.OnActionInactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTriggeredByStand                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBBombing_C::OnActionInactivate(bool bTriggeredByStand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "OnActionInactivate");

	Params::BP_AJBBombing_C_OnActionInactivate Parms{};

	Parms.bTriggeredByStand = bTriggeredByStand;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBBombing.BP_AJBBombing_C.OnActionActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTriggeredByStand                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBBombing_C::OnActionActivate(bool bTriggeredByStand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBBombing_C", "OnActionActivate");

	Params::BP_AJBBombing_C_OnActionActivate Parms{};

	Parms.bTriggeredByStand = bTriggeredByStand;

	UObject::ProcessEvent(Func, &Parms);
}

}

