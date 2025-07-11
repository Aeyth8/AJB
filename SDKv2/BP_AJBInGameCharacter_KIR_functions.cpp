#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameCharacter_KIR

#include "Basic.hpp"

#include "BP_AJBInGameCharacter_KIR_classes.hpp"
#include "BP_AJBInGameCharacter_KIR_parameters.hpp"


namespace SDK
{

// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.ExecuteUbergraph_BP_AJBInGameCharacter_KIR
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::ExecuteUbergraph_BP_AJBInGameCharacter_KIR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "ExecuteUbergraph_BP_AJBInGameCharacter_KIR");

	Params::BP_AJBInGameCharacter_KIR_C_ExecuteUbergraph_BP_AJBInGameCharacter_KIR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.MC_RegisterSHA
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::MC_RegisterSHA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "MC_RegisterSHA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.UnregisterSHA_Server
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::UnregisterSHA_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "UnregisterSHA_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.RegisterSHA_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         InSHA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::RegisterSHA_Server(class ABP_AJBInGameCharacter_C* InSHA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "RegisterSHA_Server");

	Params::BP_AJBInGameCharacter_KIR_C_RegisterSHA_Server Parms{};

	Parms.InSHA = InSHA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.OnSpecialNPCSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SpecialTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::OnSpecialNPCSpawned(class ABP_AJBInGameCharacter_C* Character, const struct FGameplayTag& SpecialTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "OnSpecialNPCSpawned");

	Params::BP_AJBInGameCharacter_KIR_C_OnSpecialNPCSpawned Parms{};

	Parms.Character = Character;
	Parms.SpecialTag = std::move(SpecialTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.TryAddPassive_Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::TryAddPassive_Server(const struct FGameplayTag& PassiveTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "TryAddPassive_Server");

	Params::BP_AJBInGameCharacter_KIR_C_TryAddPassive_Server Parms{};

	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.TryRemovePassive_Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PassiveTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::TryRemovePassive_Server(const struct FGameplayTag& PassiveTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "TryRemovePassive_Server");

	Params::BP_AJBInGameCharacter_KIR_C_TryRemovePassive_Server Parms{};

	Parms.PassiveTag = std::move(PassiveTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.ChangeSHASkillLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LockEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameCharacter_KIR_C::ChangeSHASkillLock(bool LockEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "ChangeSHASkillLock");

	Params::BP_AJBInGameCharacter_KIR_C_ChangeSHASkillLock Parms{};

	Parms.LockEnable = LockEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.CheckDuringInjectionSHA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bDuringInjectionSHA                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameCharacter_KIR_C::CheckDuringInjectionSHA(bool* bDuringInjectionSHA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "CheckDuringInjectionSHA");

	Params::BP_AJBInGameCharacter_KIR_C_CheckDuringInjectionSHA Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDuringInjectionSHA != nullptr)
		*bDuringInjectionSHA = Parms.bDuringInjectionSHA;
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.OnRep_SHA
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::OnRep_SHA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "OnRep_SHA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.GetDummyShotLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::GetDummyShotLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "GetDummyShotLocation");

	Params::BP_AJBInGameCharacter_KIR_C_GetDummyShotLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.ShouldShowNGPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameCharacter_KIR_C::ShouldShowNGPoint(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "ShouldShowNGPoint");

	Params::BP_AJBInGameCharacter_KIR_C_ShouldShowNGPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.GetShutTraceRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameCharacter_KIR_C::GetShutTraceRadius(float* Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "GetShutTraceRadius");

	Params::BP_AJBInGameCharacter_KIR_C_GetShutTraceRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.GetShotLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConsiderCharacterCapsuleRadius                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                     SkillTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  Locations                                              (Parm, OutParm, ZeroConstructor)

void ABP_AJBInGameCharacter_KIR_C::GetShotLocation(bool bConsiderCharacterCapsuleRadius, const struct FGameplayTag& SkillTag, TArray<struct FVector>* Locations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "GetShotLocation");

	Params::BP_AJBInGameCharacter_KIR_C_GetShotLocation Parms{};

	Parms.bConsiderCharacterCapsuleRadius = bConsiderCharacterCapsuleRadius;
	Parms.SkillTag = std::move(SkillTag);

	UObject::ProcessEvent(Func, &Parms);

	if (Locations != nullptr)
		*Locations = std::move(Parms.Locations);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.CheckLocallyControlled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLocallyControlled                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameCharacter_KIR_C::CheckLocallyControlled(bool* bLocallyControlled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "CheckLocallyControlled");

	Params::BP_AJBInGameCharacter_KIR_C_CheckLocallyControlled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bLocallyControlled != nullptr)
		*bLocallyControlled = Parms.bLocallyControlled;
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.CharacterSetup
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::CharacterSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "CharacterSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.PressedButton_ActiveBase
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::PressedButton_ActiveBase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "PressedButton_ActiveBase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.ReleasedButton_Ultimate
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::ReleasedButton_Ultimate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "ReleasedButton_Ultimate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.PressedButton_Ultimate
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::PressedButton_Ultimate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "PressedButton_Ultimate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.ReleasedButton_ActiveSpecial
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::ReleasedButton_ActiveSpecial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "ReleasedButton_ActiveSpecial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.PressedButton_ActiveSpecial
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::PressedButton_ActiveSpecial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "PressedButton_ActiveSpecial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.ReleasedButton_Basic
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::ReleasedButton_Basic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "ReleasedButton_Basic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.PressedButton_Basic
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::PressedButton_Basic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "PressedButton_Basic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameCharacter_KIR_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "NotifyTheWorld");

	Params::BP_AJBInGameCharacter_KIR_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameCharacter_KIR_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameCharacter_KIR.BP_AJBInGameCharacter_KIR_C.OnBeforeInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldInteract                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameCharacter_KIR_C::OnBeforeInteract(bool* bShouldInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameCharacter_KIR_C", "OnBeforeInteract");

	Params::BP_AJBInGameCharacter_KIR_C_OnBeforeInteract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldInteract != nullptr)
		*bShouldInteract = Parms.bShouldInteract;
}

}

