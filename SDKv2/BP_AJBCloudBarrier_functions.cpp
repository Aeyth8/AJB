#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBCloudBarrier

#include "Basic.hpp"

#include "BP_AJBCloudBarrier_classes.hpp"
#include "BP_AJBCloudBarrier_parameters.hpp"


namespace SDK
{

// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.ExecuteUbergraph_BP_AJBCloudBarrier
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::ExecuteUbergraph_BP_AJBCloudBarrier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "ExecuteUbergraph_BP_AJBCloudBarrier");

	Params::BP_AJBCloudBarrier_C_ExecuteUbergraph_BP_AJBCloudBarrier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.BindPairPassiveAddedLocal
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBCloudBarrier_C::BindPairPassiveAddedLocal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "BindPairPassiveAddedLocal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.OnPassiveAddedLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     AddCondition                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::OnPassiveAddedLocal(const struct FGameplayTag& AddCondition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "OnPassiveAddedLocal");

	Params::BP_AJBCloudBarrier_C_OnPassiveAddedLocal Parms{};

	Parms.AddCondition = std::move(AddCondition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.UpdateErrorTypeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   ErrorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::UpdateErrorTypeUI(uint8 ErrorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "UpdateErrorTypeUI");

	Params::BP_AJBCloudBarrier_C_UpdateErrorTypeUI Parms{};

	Parms.ErrorType = ErrorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.OnCharacterDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DeadActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::OnCharacterDead(const struct FGameplayTag& DamageType, class AActor* DeadActor, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "OnCharacterDead");

	Params::BP_AJBCloudBarrier_C_OnCharacterDead Parms{};

	Parms.DamageType = std::move(DamageType);
	Parms.DeadActor = DeadActor;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.TryVanishMyCP
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBCloudBarrier_C::TryVanishMyCP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "TryVanishMyCP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.OnPassiveAddedServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     AddCondition                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::OnPassiveAddedServer(const struct FGameplayTag& AddCondition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "OnPassiveAddedServer");

	Params::BP_AJBCloudBarrier_C_OnPassiveAddedServer Parms{};

	Parms.AddCondition = std::move(AddCondition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.ChangeEnableSelfAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBCloudBarrier_C::ChangeEnableSelfAdded(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "ChangeEnableSelfAdded");

	Params::BP_AJBCloudBarrier_C_ChangeEnableSelfAdded Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.AddCloudPointContinued
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBCloudBarrier_C::AddCloudPointContinued()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "AddCloudPointContinued");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.TryDestroyAccompanyParticle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBCloudBarrier_C::TryDestroyAccompanyParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "TryDestroyAccompanyParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.TrySpawnAccompanyParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBCloudBarrier_C::TrySpawnAccompanyParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "TrySpawnAccompanyParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.CheckCondition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPossibleSelfAdded                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBCloudBarrier_C::CheckCondition(bool* bPossibleSelfAdded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "CheckCondition");

	Params::BP_AJBCloudBarrier_C_CheckCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPossibleSelfAdded != nullptr)
		*bPossibleSelfAdded = Parms.bPossibleSelfAdded;
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.GetAccompanyParticleTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                     AccompanyParticleTag_0                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::GetAccompanyParticleTag(struct FGameplayTag* AccompanyParticleTag_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "GetAccompanyParticleTag");

	Params::BP_AJBCloudBarrier_C_GetAccompanyParticleTag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AccompanyParticleTag_0 != nullptr)
		*AccompanyParticleTag_0 = std::move(Parms.AccompanyParticleTag_0);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.TryVanishCP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::TryVanishCP(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "TryVanishCP");

	Params::BP_AJBCloudBarrier_C_TryVanishCP Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.CheckPossibleAddCPServer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPossible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBCloudBarrier_C::CheckPossibleAddCPServer(class AActor* HitActor, bool* bPossible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "CheckPossibleAddCPServer");

	Params::BP_AJBCloudBarrier_C_CheckPossibleAddCPServer Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

	if (bPossible != nullptr)
		*bPossible = Parms.bPossible;
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.OnLongPressInteractEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceCancel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           InteractActor_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::OnLongPressInteractEnded(bool bSuccess, bool bForceCancel, class AActor* InteractActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "OnLongPressInteractEnded");

	Params::BP_AJBCloudBarrier_C_OnLongPressInteractEnded Parms{};

	Parms.bSuccess = bSuccess;
	Parms.bForceCancel = bForceCancel;
	Parms.InteractActor_0 = InteractActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.CheckInteractableTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPossibleInteract                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBCloudBarrier_C::CheckInteractableTarget(class AActor* TargetActor, bool* bPossibleInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "CheckInteractableTarget");

	Params::BP_AJBCloudBarrier_C_CheckInteractableTarget Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (bPossibleInteract != nullptr)
		*bPossibleInteract = Parms.bPossibleInteract;
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.DecideSpawnParticleInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
// class USceneComponent*                  SceneComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::DecideSpawnParticleInfo(struct FVector* Location, struct FRotator* Rotation, class USceneComponent** SceneComponent, class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "DecideSpawnParticleInfo");

	Params::BP_AJBCloudBarrier_C_DecideSpawnParticleInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (SceneComponent != nullptr)
		*SceneComponent = Parms.SceneComponent;

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Text                                                   (Parm, OutParm)

void UBP_AJBCloudBarrier_C::GetText(bool* bSuccess, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "GetText");

	Params::BP_AJBCloudBarrier_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBCloudBarrier_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBCloudBarrier_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "ReceiveTick");

	Params::BP_AJBCloudBarrier_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCloudBarrier.BP_AJBCloudBarrier_C.NotifyTheWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacter*              Operator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGeneralTiming                          Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOperatorIsEmpty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBCloudBarrier_C::NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCloudBarrier_C", "NotifyTheWorld");

	Params::BP_AJBCloudBarrier_C_NotifyTheWorld Parms{};

	Parms.Operator = Operator;
	Parms.Time = Time;
	Parms.Timing = Timing;
	Parms.bEnable = bEnable;
	Parms.bOperatorIsEmpty = bOperatorIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

}

