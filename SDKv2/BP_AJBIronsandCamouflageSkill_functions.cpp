#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBIronsandCamouflageSkill

#include "Basic.hpp"

#include "BP_AJBIronsandCamouflageSkill_classes.hpp"
#include "BP_AJBIronsandCamouflageSkill_parameters.hpp"


namespace SDK
{

// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnCanceledCamouflageByReceiveDamageLocal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBIronsandCamouflageSkill_C::OnCanceledCamouflageByReceiveDamageLocal__DelegateSignature(const struct FGameplayTag& DamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnCanceledCamouflageByReceiveDamageLocal__DelegateSignature");

	Params::BP_AJBIronsandCamouflageSkill_C_OnCanceledCamouflageByReceiveDamageLocal__DelegateSignature Parms{};

	Parms.DamageType = std::move(DamageType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.ExecuteUbergraph_BP_AJBIronsandCamouflageSkill
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBIronsandCamouflageSkill_C::ExecuteUbergraph_BP_AJBIronsandCamouflageSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "ExecuteUbergraph_BP_AJBIronsandCamouflageSkill");

	Params::BP_AJBIronsandCamouflageSkill_C_ExecuteUbergraph_BP_AJBIronsandCamouflageSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.MC_ReceiveDamage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldRemovePassive                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBIronsandCamouflageSkill_C::MC_ReceiveDamage(bool bShouldRemovePassive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "MC_ReceiveDamage");

	Params::BP_AJBIronsandCamouflageSkill_C_MC_ReceiveDamage Parms{};

	Parms.bShouldRemovePassive = bShouldRemovePassive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.ROS_ReceiveDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::ROS_ReceiveDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "ROS_ReceiveDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnReceiveDamageLocalCore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBIronsandCamouflageSkill_C::OnReceiveDamageLocalCore(const struct FGameplayTag& DamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnReceiveDamageLocalCore");

	Params::BP_AJBIronsandCamouflageSkill_C_OnReceiveDamageLocalCore Parms{};

	Parms.DamageType = std::move(DamageType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnReceiveDamageLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Damage_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRemainHP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDamageIsCutByStatus                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDamageIsCutByAAP                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBIronsandCamouflageSkill_C::OnReceiveDamageLocal(int32 Damage_0, const struct FGameplayTag& DamageType, class AActor* DamageCauser, bool bRemainHP, bool bDamageIsCutByStatus, bool bDamageIsCutByAAP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnReceiveDamageLocal");

	Params::BP_AJBIronsandCamouflageSkill_C_OnReceiveDamageLocal Parms{};

	Parms.Damage_0 = Damage_0;
	Parms.DamageType = std::move(DamageType);
	Parms.DamageCauser = DamageCauser;
	Parms.bRemainHP = bRemainHP;
	Parms.bDamageIsCutByStatus = bDamageIsCutByStatus;
	Parms.bDamageIsCutByAAP = bDamageIsCutByAAP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.UnbindOnReceiveDamage
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::UnbindOnReceiveDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "UnbindOnReceiveDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.BindOnReceiveDamage
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::BindOnReceiveDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "BindOnReceiveDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.ChangeGuideUIVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBIronsandCamouflageSkill_C::ChangeGuideUIVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "ChangeGuideUIVisibility");

	Params::BP_AJBIronsandCamouflageSkill_C_ChangeGuideUIVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.MC_BeginStateAction
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::MC_BeginStateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "MC_BeginStateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.ROS_BeginStateAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::ROS_BeginStateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "ROS_BeginStateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.BeginStateActionLocal
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::BeginStateActionLocal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "BeginStateActionLocal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnBeginStateAction
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::OnBeginStateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnBeginStateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.StateTick
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::StateTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "StateTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.TickStateReady
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::TickStateReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "TickStateReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnBeginStateReady
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::OnBeginStateReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnBeginStateReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnInactive
// (Event, Public, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::OnInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnInactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBIronsandCamouflageSkill_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "ReceiveTick");

	Params::BP_AJBIronsandCamouflageSkill_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.OnActive
// (Event, Public, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::OnActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "OnActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBIronsandCamouflageSkill_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "NotifyTheWorld");

	Params::BP_AJBIronsandCamouflageSkill_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C.InitializeVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBIronsandCamouflageSkill_C::InitializeVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBIronsandCamouflageSkill_C", "InitializeVariables");

	UObject::ProcessEvent(Func, nullptr);
}

}

