#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBZipper_Base

#include "Basic.hpp"

#include "BP_AJBZipper_Base_classes.hpp"
#include "BP_AJBZipper_Base_parameters.hpp"


namespace SDK
{

// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.OnOpenCloseAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::OnOpenCloseAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "OnOpenCloseAnimationFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.ExecuteUbergraph_BP_AJBZipper_Base
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBZipper_Base_C::ExecuteUbergraph_BP_AJBZipper_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "ExecuteUbergraph_BP_AJBZipper_Base");

	Params::BP_AJBZipper_Base_C_ExecuteUbergraph_BP_AJBZipper_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.StateBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::StateBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "StateBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CloseAndDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::CloseAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CloseAndDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBZipper_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.Close
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.Open
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.OnAreaDamageDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::OnAreaDamageDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "OnAreaDamageDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.OnPassiveDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::OnPassiveDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "OnPassiveDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.OnDamageDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::OnDamageDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "OnDamageDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.DamageOverlapped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPenetrating                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                     FactorTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBZipper_Base_C::DamageOverlapped(class AActor* DamageCauser, const struct FVector& HitLocation, bool bPenetrating, const struct FGameplayTag& FactorTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "DamageOverlapped");

	Params::BP_AJBZipper_Base_C_DamageOverlapped Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.bPenetrating = bPenetrating;
	Parms.FactorTag = std::move(FactorTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.AJBDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DamageForHPAP                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DamageForAAP                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CutDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   SerialNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamagePriority                         DamagePriority                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AttackDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WithSeparatedStandAttack                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HitEnemysSeparatedStand                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPenetrateAP                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bNotUseCollision                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::AJBDamage(class AActor* DamagedActor, int32 DamageForHPAP, int32 DamageForAAP, int32 CutDamage, const struct FGameplayTag& DamageType, int32 SerialNumber, EDamagePriority DamagePriority, float AttackDistance, class AActor* DamageCauser, bool WithSeparatedStandAttack, bool HitEnemysSeparatedStand, bool bPenetrateAP, bool bNotUseCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "AJBDamage");

	Params::BP_AJBZipper_Base_C_AJBDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.DamageForHPAP = DamageForHPAP;
	Parms.DamageForAAP = DamageForAAP;
	Parms.CutDamage = CutDamage;
	Parms.DamageType = std::move(DamageType);
	Parms.SerialNumber = SerialNumber;
	Parms.DamagePriority = DamagePriority;
	Parms.AttackDistance = AttackDistance;
	Parms.DamageCauser = DamageCauser;
	Parms.WithSeparatedStandAttack = WithSeparatedStandAttack;
	Parms.HitEnemysSeparatedStand = HitEnemysSeparatedStand;
	Parms.bPenetrateAP = bPenetrateAP;
	Parms.bNotUseCollision = bNotUseCollision;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.ZipperOpenClose__UpdateFunc
// (BlueprintEvent)

void ABP_AJBZipper_Base_C::ZipperOpenClose__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "ZipperOpenClose__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.ZipperOpenClose__FinishedFunc
// (BlueprintEvent)

void ABP_AJBZipper_Base_C::ZipperOpenClose__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "ZipperOpenClose__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CrateDecalDMI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Base_C::CrateDecalDMI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CrateDecalDMI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.OwnHitParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCharacter                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLeftAP                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                     ParticleTagBlockedByAAP                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SETagBlockedByAAP                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBZipper_Base_C::OwnHitParam(bool* bCharacter, bool* bLeftAP, struct FGameplayTag* ParticleTagBlockedByAAP, struct FGameplayTag* SETagBlockedByAAP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "OwnHitParam");

	Params::BP_AJBZipper_Base_C_OwnHitParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCharacter != nullptr)
		*bCharacter = Parms.bCharacter;

	if (bLeftAP != nullptr)
		*bLeftAP = Parms.bLeftAP;

	if (ParticleTagBlockedByAAP != nullptr)
		*ParticleTagBlockedByAAP = std::move(Parms.ParticleTagBlockedByAAP);

	if (SETagBlockedByAAP != nullptr)
		*SETagBlockedByAAP = std::move(Parms.SETagBlockedByAAP);
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CheckTargetSelf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bForDamageOverlap                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIgnoreMovableStand                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::CheckTargetSelf(class AActor* DamageCauser, bool bForDamageOverlap, bool bIgnoreMovableStand, bool* bTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CheckTargetSelf");

	Params::BP_AJBZipper_Base_C_CheckTargetSelf Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.bForDamageOverlap = bForDamageOverlap;
	Parms.bIgnoreMovableStand = bIgnoreMovableStand;

	UObject::ProcessEvent(Func, &Parms);

	if (bTarget != nullptr)
		*bTarget = Parms.bTarget;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.IfCheckDamageOverlap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_AJBZipper_Base_C::IfCheckDamageOverlap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "IfCheckDamageOverlap");

	Params::BP_AJBZipper_Base_C_IfCheckDamageOverlap Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CheckDisableDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisableDamage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::CheckDisableDamage(class AActor* DamageCauser, bool* bDisableDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CheckDisableDamage");

	Params::BP_AJBZipper_Base_C_CheckDisableDamage Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (bDisableDamage != nullptr)
		*bDisableDamage = Parms.bDisableDamage;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CheckDisablePassive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PassiveCauser                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisablePassive                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::CheckDisablePassive(class AActor* PassiveCauser, const struct FGameplayTag& PassiveTag, bool* bDisablePassive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CheckDisablePassive");

	Params::BP_AJBZipper_Base_C_CheckDisablePassive Parms{};

	Parms.PassiveCauser = PassiveCauser;
	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);

	if (bDisablePassive != nullptr)
		*bDisablePassive = Parms.bDisablePassive;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CheckDisableAreaDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDisableAreadamage                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::CheckDisableAreaDamage(bool* bDisableAreadamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CheckDisableAreaDamage");

	Params::BP_AJBZipper_Base_C_CheckDisableAreaDamage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDisableAreadamage != nullptr)
		*bDisableAreadamage = Parms.bDisableAreadamage;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CheckNoDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNoDamage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::CheckNoDamage(class AActor* DamageCauser, bool* bNoDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CheckNoDamage");

	Params::BP_AJBZipper_Base_C_CheckNoDamage Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (bNoDamage != nullptr)
		*bNoDamage = Parms.bNoDamage;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.IsReactedByReticule
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::IsReactedByReticule(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "IsReactedByReticule");

	Params::BP_AJBZipper_Base_C_IsReactedByReticule Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.IgnoreTrace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIgnore                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::IgnoreTrace(bool* bIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "IgnoreTrace");

	Params::BP_AJBZipper_Base_C_IgnoreTrace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIgnore != nullptr)
		*bIgnore = Parms.bIgnore;
}


// Function BP_AJBZipper_Base.BP_AJBZipper_Base_C.CheckDisableDirectDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisableDirectDamage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Base_C::CheckDisableDirectDamage(class AActor* DamageCauser, bool* bDisableDirectDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Base_C", "CheckDisableDirectDamage");

	Params::BP_AJBZipper_Base_C_CheckDisableDirectDamage Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (bDisableDirectDamage != nullptr)
		*bDisableDirectDamage = Parms.bDisableDirectDamage;
}

}

