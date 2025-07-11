#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_DamageAffecterInterface

#include "Basic.hpp"

#include "BI_DamageAffecterInterface_classes.hpp"
#include "BI_DamageAffecterInterface_parameters.hpp"


namespace SDK
{

// Function BI_DamageAffecterInterface.BI_DamageAffecterInterface_C.CheckAreaIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PartitionNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCheckUnder                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ValidGroundOffsetZ                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBI_DamageAffecterInterface_C::CheckAreaIn(const struct FVector& Location, const struct FRotator& Rotation, float Radius, float Length, int32 PartitionNum, bool bCheckUnder, float ValidGroundOffsetZ, bool* bTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_DamageAffecterInterface_C", "CheckAreaIn");

	Params::BI_DamageAffecterInterface_C_CheckAreaIn Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.Radius = Radius;
	Parms.Length = Length;
	Parms.PartitionNum = PartitionNum;
	Parms.bCheckUnder = bCheckUnder;
	Parms.ValidGroundOffsetZ = ValidGroundOffsetZ;

	UObject::ProcessEvent(Func, &Parms);

	if (bTarget != nullptr)
		*bTarget = Parms.bTarget;
}


// Function BI_DamageAffecterInterface.BI_DamageAffecterInterface_C.OnAreaIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         OperatorCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     EffectTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SETag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    bNoDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBI_DamageAffecterInterface_C::OnAreaIn(class ABP_AJBInGameCharacter_C* OperatorCharacter, const struct FGameplayTag& EffectTag, const struct FGameplayTag& SETag, bool bNoDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_DamageAffecterInterface_C", "OnAreaIn");

	Params::BI_DamageAffecterInterface_C_OnAreaIn Parms{};

	Parms.OperatorCharacter = OperatorCharacter;
	Parms.EffectTag = std::move(EffectTag);
	Parms.SETag = std::move(SETag);
	Parms.bNoDamage = bNoDamage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_DamageAffecterInterface.BI_DamageAffecterInterface_C.OnAreaOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         OperatorCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     EffectTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SETag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBI_DamageAffecterInterface_C::OnAreaOut(class ABP_AJBInGameCharacter_C* OperatorCharacter, const struct FGameplayTag& EffectTag, const struct FGameplayTag& SETag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_DamageAffecterInterface_C", "OnAreaOut");

	Params::BI_DamageAffecterInterface_C_OnAreaOut Parms{};

	Parms.OperatorCharacter = OperatorCharacter;
	Parms.EffectTag = std::move(EffectTag);
	Parms.SETag = std::move(SETag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_DamageAffecterInterface.BI_DamageAffecterInterface_C.OnNoDamageChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         OperaatorCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNewFlag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                     EffectTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SETag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBI_DamageAffecterInterface_C::OnNoDamageChanged(class ABP_AJBInGameCharacter_C* OperaatorCharacter, bool bNewFlag, const struct FGameplayTag& EffectTag, const struct FGameplayTag& SETag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_DamageAffecterInterface_C", "OnNoDamageChanged");

	Params::BI_DamageAffecterInterface_C_OnNoDamageChanged Parms{};

	Parms.OperaatorCharacter = OperaatorCharacter;
	Parms.bNewFlag = bNewFlag;
	Parms.EffectTag = std::move(EffectTag);
	Parms.SETag = std::move(SETag);

	UObject::ProcessEvent(Func, &Parms);
}

}

