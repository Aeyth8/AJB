#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSHASkill

#include "Basic.hpp"

#include "BP_AJBSHASkill_classes.hpp"
#include "BP_AJBSHASkill_parameters.hpp"


namespace SDK
{

// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ExecuteUbergraph_BP_AJBSHASkill
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::ExecuteUbergraph_BP_AJBSHASkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ExecuteUbergraph_BP_AJBSHASkill");

	Params::BP_AJBSHASkill_C_ExecuteUbergraph_BP_AJBSHASkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnPassiveRemoved_SHA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     RemoveCondition                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnPassiveRemoved_SHA(const struct FGameplayTag& RemoveCondition, class ABP_AJBInGameCharacter_C* CharacterBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnPassiveRemoved_SHA");

	Params::BP_AJBSHASkill_C_OnPassiveRemoved_SHA Parms{};

	Parms.RemoveCondition = std::move(RemoveCondition);
	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnPassiveAddedAfterSetCauser_SHA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     AddCondition                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnPassiveAddedAfterSetCauser_SHA(const struct FGameplayTag& AddCondition, class UObject* Causer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnPassiveAddedAfterSetCauser_SHA");

	Params::BP_AJBSHASkill_C_OnPassiveAddedAfterSetCauser_SHA Parms{};

	Parms.AddCondition = std::move(AddCondition);
	Parms.Causer = Causer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnSHARegistered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_SHA_C*     SHA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnSHARegistered(class ABP_AJBInGameCharacter_SHA_C* SHA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnSHARegistered");

	Params::BP_AJBSHASkill_C_OnSHARegistered Parms{};

	Parms.SHA = SHA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnPassiveAddedAfterSetCauser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     AddCondition                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnPassiveAddedAfterSetCauser(const struct FGameplayTag& AddCondition, class UObject* Causer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnPassiveAddedAfterSetCauser");

	Params::BP_AJBSHASkill_C_OnPassiveAddedAfterSetCauser Parms{};

	Parms.AddCondition = std::move(AddCondition);
	Parms.Causer = Causer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnPassiveRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     RemoveCondition                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnPassiveRemoved(const struct FGameplayTag& RemoveCondition, class ABP_AJBInGameCharacter_C* CharacterBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnPassiveRemoved");

	Params::BP_AJBSHASkill_C_OnPassiveRemoved Parms{};

	Parms.RemoveCondition = std::move(RemoveCondition);
	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ROS_DebugChangeLoiteringTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::ROS_DebugChangeLoiteringTime(int32 NewTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ROS_DebugChangeLoiteringTime");

	Params::BP_AJBSHASkill_C_ROS_DebugChangeLoiteringTime Parms{};

	Parms.NewTime = NewTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnCritical
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::OnCritical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnCritical");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnBecomeLastSurvivor
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::OnBecomeLastSurvivor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnBecomeLastSurvivor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnCharacterDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DeadActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnCharacterDead(const struct FGameplayTag& DamageType, class AActor* DeadActor, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnCharacterDead");

	Params::BP_AJBSHASkill_C_OnCharacterDead Parms{};

	Parms.DamageType = std::move(DamageType);
	Parms.DeadActor = DeadActor;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.MC_ConfigureBullet
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::MC_ConfigureBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "MC_ConfigureBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.DestroyPreviewObject_Local
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::DestroyPreviewObject_Local()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "DestroyPreviewObject_Local");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.SpawnPreviewObject_Local
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::SpawnPreviewObject_Local()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "SpawnPreviewObject_Local");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TickState_Ready
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::TickState_Ready()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TickState_Ready");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.MC_BeginState_Action
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::MC_BeginState_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "MC_BeginState_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ROS_BeginState_Action
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::ROS_BeginState_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ROS_BeginState_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.BeginStateAction
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::BeginStateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "BeginStateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnCompleted_821E4A124DAD86922FF9ECB404191777
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnCompleted_821E4A124DAD86922FF9ECB404191777(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnCompleted_821E4A124DAD86922FF9ECB404191777");

	Params::BP_AJBSHASkill_C_OnCompleted_821E4A124DAD86922FF9ECB404191777 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnBlendOut_821E4A124DAD86922FF9ECB404191777
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnBlendOut_821E4A124DAD86922FF9ECB404191777(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnBlendOut_821E4A124DAD86922FF9ECB404191777");

	Params::BP_AJBSHASkill_C_OnBlendOut_821E4A124DAD86922FF9ECB404191777 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnInterrupted_821E4A124DAD86922FF9ECB404191777
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnInterrupted_821E4A124DAD86922FF9ECB404191777(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnInterrupted_821E4A124DAD86922FF9ECB404191777");

	Params::BP_AJBSHASkill_C_OnInterrupted_821E4A124DAD86922FF9ECB404191777 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnNotifyBegin_821E4A124DAD86922FF9ECB404191777
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnNotifyBegin_821E4A124DAD86922FF9ECB404191777(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnNotifyBegin_821E4A124DAD86922FF9ECB404191777");

	Params::BP_AJBSHASkill_C_OnNotifyBegin_821E4A124DAD86922FF9ECB404191777 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnNotifyEnd_821E4A124DAD86922FF9ECB404191777
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::OnNotifyEnd_821E4A124DAD86922FF9ECB404191777(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnNotifyEnd_821E4A124DAD86922FF9ECB404191777");

	Params::BP_AJBSHASkill_C_OnNotifyEnd_821E4A124DAD86922FF9ECB404191777 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TryDestroyPreviewObject
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::TryDestroyPreviewObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TryDestroyPreviewObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TrySpawnPreviewObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::TrySpawnPreviewObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TrySpawnPreviewObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ApplyTraceInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::ApplyTraceInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ApplyTraceInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.UpdateTraceInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::UpdateTraceInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "UpdateTraceInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.UpdateShotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::UpdateShotInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "UpdateShotInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TryChangeSHAClearing
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::TryChangeSHAClearing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TryChangeSHAClearing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TryAddPassiveSHA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::TryAddPassiveSHA(const struct FGameplayTag& PassiveTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TryAddPassiveSHA");

	Params::BP_AJBSHASkill_C_TryAddPassiveSHA Parms{};

	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TryRemovePassiveSHA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::TryRemovePassiveSHA(const struct FGameplayTag& PassiveTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TryRemovePassiveSHA");

	Params::BP_AJBSHASkill_C_TryRemovePassiveSHA Parms{};

	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TryAddPassiveKIR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::TryAddPassiveKIR(const struct FGameplayTag& PassiveTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TryAddPassiveKIR");

	Params::BP_AJBSHASkill_C_TryAddPassiveKIR Parms{};

	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.TryRemovePassiveKIR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::TryRemovePassiveKIR(const struct FGameplayTag& PassiveTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "TryRemovePassiveKIR");

	Params::BP_AJBSHASkill_C_TryRemovePassiveKIR Parms{};

	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBSHASkill_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ConfigureBullet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameProjectile_C*        Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::ConfigureBullet(class ABP_AJBInGameProjectile_C* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ConfigureBullet");

	Params::BP_AJBSHASkill_C_ConfigureBullet Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnStateAction
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::OnStateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnStateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnStateReady
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::OnStateReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnStateReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnInactive
// (Event, Public, BlueprintEvent)

void UBP_AJBSHASkill_C::OnInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnInactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnReady
// (Event, Public, BlueprintEvent)

void UBP_AJBSHASkill_C::OnReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.OnActive
// (Event, Public, BlueprintEvent)

void UBP_AJBSHASkill_C::OnActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "OnActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBSHASkill_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "ReceiveTick");

	Params::BP_AJBSHASkill_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.InitializeVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBSHASkill_C::InitializeVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "InitializeVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHASkill.BP_AJBSHASkill_C.IsInPreview
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_AJBSHASkill_C::IsInPreview() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHASkill_C", "IsInPreview");

	Params::BP_AJBSHASkill_C_IsInPreview Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

