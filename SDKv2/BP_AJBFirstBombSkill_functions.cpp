#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBFirstBombSkill

#include "Basic.hpp"

#include "BP_AJBFirstBombSkill_classes.hpp"
#include "BP_AJBFirstBombSkill_parameters.hpp"


namespace SDK
{

// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.ExecuteUbergraph_BP_AJBFirstBombSkill
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::ExecuteUbergraph_BP_AJBFirstBombSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "ExecuteUbergraph_BP_AJBFirstBombSkill");

	Params::BP_AJBFirstBombSkill_C_ExecuteUbergraph_BP_AJBFirstBombSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.OnBecomeLastSurvivor
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBFirstBombSkill_C::OnBecomeLastSurvivor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "OnBecomeLastSurvivor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.OnCharacterDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DeadActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::OnCharacterDead(const struct FGameplayTag& DamageType, class AActor* DeadActor, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "OnCharacterDead");

	Params::BP_AJBFirstBombSkill_C_OnCharacterDead Parms{};

	Parms.DamageType = std::move(DamageType);
	Parms.DeadActor = DeadActor;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.ROC_SendEffectiveValue
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::ROC_SendEffectiveValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "ROC_SendEffectiveValue");

	Params::BP_AJBFirstBombSkill_C_ROC_SendEffectiveValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.SendEffectiveValue_Server
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBFirstBombSkill_C::SendEffectiveValue_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "SendEffectiveValue_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.OnPassiveAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     AddCondition                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::OnPassiveAdded(const struct FGameplayTag& AddCondition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "OnPassiveAdded");

	Params::BP_AJBFirstBombSkill_C_OnPassiveAdded Parms{};

	Parms.AddCondition = std::move(AddCondition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.OnReadyToDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBPlacementBase_C*           SelfObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::OnReadyToDestroy(class ABP_AJBPlacementBase_C* SelfObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "OnReadyToDestroy");

	Params::BP_AJBFirstBombSkill_C_OnReadyToDestroy Parms{};

	Parms.SelfObject = SelfObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.OnPassiveRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     RemoveCondition                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::OnPassiveRemoved(const struct FGameplayTag& RemoveCondition, class ABP_AJBInGameCharacter_C* CharacterBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "OnPassiveRemoved");

	Params::BP_AJBFirstBombSkill_C_OnPassiveRemoved Parms{};

	Parms.RemoveCondition = std::move(RemoveCondition);
	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.ClearingOldObject
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBFirstBombSkill_C::ClearingOldObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "ClearingOldObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.SpawnNewObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::SpawnNewObject(const struct FTransform& Transform, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "SpawnNewObject");

	Params::BP_AJBFirstBombSkill_C_SpawnNewObject Parms{};

	Parms.Transform = std::move(Transform);
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.GetValidatedObjects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  Objects                                                (Parm, OutParm, ZeroConstructor)

void UBP_AJBFirstBombSkill_C::GetValidatedObjects(TArray<class UObject*>* Objects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "GetValidatedObjects");

	Params::BP_AJBFirstBombSkill_C_GetValidatedObjects Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Objects != nullptr)
		*Objects = std::move(Parms.Objects);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.RemoveBombing(Server)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::RemoveBombing_Server_(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "RemoveBombing(Server)");

	Params::BP_AJBFirstBombSkill_C_RemoveBombing_Server_ Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.CheckAnyExclusionPassiveActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBFirstBombSkill_C::CheckAnyExclusionPassiveActive(class ABP_AJBInGameCharacter_C* CharacterBP, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "CheckAnyExclusionPassiveActive");

	Params::BP_AJBFirstBombSkill_C_CheckAnyExclusionPassiveActive Parms{};

	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.CacheBombingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::CacheBombingTarget(class ABP_AJBInGameCharacter_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "CacheBombingTarget");

	Params::BP_AJBFirstBombSkill_C_CacheBombingTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.ChangeEnableShouldUpdateBombing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         IngameCharacterBP                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIgnoreActiveCheck                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBFirstBombSkill_C::ChangeEnableShouldUpdateBombing(class ABP_AJBInGameCharacter_C* IngameCharacterBP, bool bEnable, bool bIgnoreActiveCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "ChangeEnableShouldUpdateBombing");

	Params::BP_AJBFirstBombSkill_C_ChangeEnableShouldUpdateBombing Parms{};

	Parms.IngameCharacterBP = IngameCharacterBP;
	Parms.bEnable = bEnable;
	Parms.bIgnoreActiveCheck = bIgnoreActiveCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBFirstBombSkill_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.TraceObjectTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPossiblePlacement_0                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
// class AActor*                           TargetActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::TraceObjectTransform(bool* bPossiblePlacement_0, struct FTransform* Transform, class AActor** TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "TraceObjectTransform");

	Params::BP_AJBFirstBombSkill_C_TraceObjectTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPossiblePlacement_0 != nullptr)
		*bPossiblePlacement_0 = Parms.bPossiblePlacement_0;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.AddToObjectList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::AddToObjectList(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "AddToObjectList");

	Params::BP_AJBFirstBombSkill_C_AddToObjectList Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.CalcValidatedObjectNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::CalcValidatedObjectNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "CalcValidatedObjectNum");

	Params::BP_AJBFirstBombSkill_C_CalcValidatedObjectNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.CalcMostOldestObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Object                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBFirstBombSkill_C::CalcMostOldestObject(class AActor** Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "CalcMostOldestObject");

	Params::BP_AJBFirstBombSkill_C_CalcMostOldestObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.TryToSpeakPlacementVoice
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBFirstBombSkill_C::TryToSpeakPlacementVoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "TryToSpeakPlacementVoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.CheckCharacterCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIgnore                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBFirstBombSkill_C::CheckCharacterCondition(class ABP_AJBInGameCharacter_C* CharacterBP, bool* bIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "CheckCharacterCondition");

	Params::BP_AJBFirstBombSkill_C_CheckCharacterCondition Parms{};

	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);

	if (bIgnore != nullptr)
		*bIgnore = Parms.bIgnore;
}


// Function BP_AJBFirstBombSkill.BP_AJBFirstBombSkill_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBFirstBombSkill_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombSkill_C", "NotifyTheWorld");

	Params::BP_AJBFirstBombSkill_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

}

