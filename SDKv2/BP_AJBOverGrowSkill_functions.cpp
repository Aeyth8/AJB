#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBOverGrowSkill

#include "Basic.hpp"

#include "BP_AJBOverGrowSkill_classes.hpp"
#include "BP_AJBOverGrowSkill_parameters.hpp"


namespace SDK
{

// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.Server_OnStateEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBInGameSkillComponent*         SkillComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::Server_OnStateEnd__DelegateSignature(class UAJBInGameSkillComponent* SkillComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "Server_OnStateEnd__DelegateSignature");

	Params::BP_AJBOverGrowSkill_C_Server_OnStateEnd__DelegateSignature Parms{};

	Parms.SkillComponent = SkillComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ExecuteUbergraph_BP_AJBOverGrowSkill
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::ExecuteUbergraph_BP_AJBOverGrowSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ExecuteUbergraph_BP_AJBOverGrowSkill");

	Params::BP_AJBOverGrowSkill_C_ExecuteUbergraph_BP_AJBOverGrowSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.UpdateOwnerGetOnServer
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::UpdateOwnerGetOnServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "UpdateOwnerGetOnServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.HideGuideUI
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::HideGuideUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "HideGuideUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ShowGuideUI
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::ShowGuideUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ShowGuideUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnDisconnected
// (Event, Public, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnDisconnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnCompletedClearing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBGrowTree_C*                Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnCompletedClearing(class ABP_AJBGrowTree_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnCompletedClearing");

	Params::BP_AJBOverGrowSkill_C_OnCompletedClearing Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.SpawnGrowTree
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GrowLocation_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GroWSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GrowDistanceLimit_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         TargetCharacterBP_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::SpawnGrowTree(const struct FVector& GrowLocation_0, float GroWSpeed, float GrowDistanceLimit_0, class ABP_AJBInGameCharacter_C* TargetCharacterBP_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "SpawnGrowTree");

	Params::BP_AJBOverGrowSkill_C_SpawnGrowTree Parms{};

	Parms.GrowLocation_0 = std::move(GrowLocation_0);
	Parms.GroWSpeed = GroWSpeed;
	Parms.GrowDistanceLimit_0 = GrowDistanceLimit_0;
	Parms.TargetCharacterBP_0 = TargetCharacterBP_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnImpactFloor
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnImpactFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnImpactFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.MC_ImpactFloor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::MC_ImpactFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "MC_ImpactFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ROS_ImpactFloor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GrowLocation_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GrowDistanceLimit_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GrowSpeed_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameCharacter_C*         TargetCharacterBP_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::ROS_ImpactFloor(const struct FVector& GrowLocation_0, float GrowDistanceLimit_0, float GrowSpeed_0, class ABP_AJBInGameCharacter_C* TargetCharacterBP_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ROS_ImpactFloor");

	Params::BP_AJBOverGrowSkill_C_ROS_ImpactFloor Parms{};

	Parms.GrowLocation_0 = std::move(GrowLocation_0);
	Parms.GrowDistanceLimit_0 = GrowDistanceLimit_0;
	Parms.GrowSpeed_0 = GrowSpeed_0;
	Parms.TargetCharacterBP_0 = TargetCharacterBP_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ImpactFloor
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::ImpactFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ImpactFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.MC_BeginState_Waiting
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::MC_BeginState_Waiting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "MC_BeginState_Waiting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ROS_BeginState_Waiting
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::ROS_BeginState_Waiting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ROS_BeginState_Waiting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnBeginState_Waiting
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnBeginState_Waiting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnBeginState_Waiting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.MC_StateEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::MC_StateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "MC_StateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ROS_StateEnd
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::ROS_StateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ROS_StateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnStateEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnStateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnStateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.MC_BeginState_Action
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::MC_BeginState_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "MC_BeginState_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ROS_BeginState_Action
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::ROS_BeginState_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ROS_BeginState_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnBeginState_Action
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnBeginState_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnBeginState_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnMovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   PreviousCustomMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnMovementModeChanged");

	Params::BP_AJBOverGrowSkill_C_OnMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.TickState_Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::TickState_Action(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "TickState_Action");

	Params::BP_AJBOverGrowSkill_C_TickState_Action Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.TickState_Waiting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::TickState_Waiting(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "TickState_Waiting");

	Params::BP_AJBOverGrowSkill_C_TickState_Waiting Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.StateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::StateTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "StateTick");

	Params::BP_AJBOverGrowSkill_C_StateTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.BeginState_Action
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::BeginState_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "BeginState_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.StateEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::StateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "StateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.BeginState_Waiting
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::BeginState_Waiting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "BeginState_Waiting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnCompleted_7B45FB9D406D5826C78546BC19EA63D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnCompleted_7B45FB9D406D5826C78546BC19EA63D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnCompleted_7B45FB9D406D5826C78546BC19EA63D7");

	Params::BP_AJBOverGrowSkill_C_OnCompleted_7B45FB9D406D5826C78546BC19EA63D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnBlendOut_7B45FB9D406D5826C78546BC19EA63D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnBlendOut_7B45FB9D406D5826C78546BC19EA63D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnBlendOut_7B45FB9D406D5826C78546BC19EA63D7");

	Params::BP_AJBOverGrowSkill_C_OnBlendOut_7B45FB9D406D5826C78546BC19EA63D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnInterrupted_7B45FB9D406D5826C78546BC19EA63D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnInterrupted_7B45FB9D406D5826C78546BC19EA63D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnInterrupted_7B45FB9D406D5826C78546BC19EA63D7");

	Params::BP_AJBOverGrowSkill_C_OnInterrupted_7B45FB9D406D5826C78546BC19EA63D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnNotifyBegin_7B45FB9D406D5826C78546BC19EA63D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnNotifyBegin_7B45FB9D406D5826C78546BC19EA63D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnNotifyBegin_7B45FB9D406D5826C78546BC19EA63D7");

	Params::BP_AJBOverGrowSkill_C_OnNotifyBegin_7B45FB9D406D5826C78546BC19EA63D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnNotifyEnd_7B45FB9D406D5826C78546BC19EA63D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnNotifyEnd_7B45FB9D406D5826C78546BC19EA63D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnNotifyEnd_7B45FB9D406D5826C78546BC19EA63D7");

	Params::BP_AJBOverGrowSkill_C_OnNotifyEnd_7B45FB9D406D5826C78546BC19EA63D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnCompleted_7B45FB9D406D5826C78546BCC7F10B06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnCompleted_7B45FB9D406D5826C78546BCC7F10B06(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnCompleted_7B45FB9D406D5826C78546BCC7F10B06");

	Params::BP_AJBOverGrowSkill_C_OnCompleted_7B45FB9D406D5826C78546BCC7F10B06 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnBlendOut_7B45FB9D406D5826C78546BCC7F10B06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnBlendOut_7B45FB9D406D5826C78546BCC7F10B06(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnBlendOut_7B45FB9D406D5826C78546BCC7F10B06");

	Params::BP_AJBOverGrowSkill_C_OnBlendOut_7B45FB9D406D5826C78546BCC7F10B06 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnInterrupted_7B45FB9D406D5826C78546BCC7F10B06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnInterrupted_7B45FB9D406D5826C78546BCC7F10B06(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnInterrupted_7B45FB9D406D5826C78546BCC7F10B06");

	Params::BP_AJBOverGrowSkill_C_OnInterrupted_7B45FB9D406D5826C78546BCC7F10B06 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnNotifyBegin_7B45FB9D406D5826C78546BCC7F10B06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnNotifyBegin_7B45FB9D406D5826C78546BCC7F10B06(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnNotifyBegin_7B45FB9D406D5826C78546BCC7F10B06");

	Params::BP_AJBOverGrowSkill_C_OnNotifyBegin_7B45FB9D406D5826C78546BCC7F10B06 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnNotifyEnd_7B45FB9D406D5826C78546BCC7F10B06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::OnNotifyEnd_7B45FB9D406D5826C78546BCC7F10B06(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnNotifyEnd_7B45FB9D406D5826C78546BCC7F10B06");

	Params::BP_AJBOverGrowSkill_C_OnNotifyEnd_7B45FB9D406D5826C78546BCC7F10B06 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.GetGrownTreeCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::GetGrownTreeCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "GetGrownTreeCount");

	Params::BP_AJBOverGrowSkill_C_GetGrownTreeCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.CalcGrowDistanceLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   In_GrowDistanceLimit                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Out_GrowDistanceLimit                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bError_NotGrow                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBOverGrowSkill_C::CalcGrowDistanceLimit(float In_GrowDistanceLimit, float* Out_GrowDistanceLimit, bool* bError_NotGrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "CalcGrowDistanceLimit");

	Params::BP_AJBOverGrowSkill_C_CalcGrowDistanceLimit Parms{};

	Parms.In_GrowDistanceLimit = In_GrowDistanceLimit;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_GrowDistanceLimit != nullptr)
		*Out_GrowDistanceLimit = Parms.Out_GrowDistanceLimit;

	if (bError_NotGrow != nullptr)
		*bError_NotGrow = Parms.bError_NotGrow;
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.CalcGrowLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          GrowLocation_0                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::CalcGrowLocation(class ABP_AJBInGameCharacter_C* CharacterBP, struct FVector* GrowLocation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "CalcGrowLocation");

	Params::BP_AJBOverGrowSkill_C_CalcGrowLocation Parms{};

	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);

	if (GrowLocation_0 != nullptr)
		*GrowLocation_0 = std::move(Parms.GrowLocation_0);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.UpdateGrowInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::UpdateGrowInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "UpdateGrowInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.CalcDefaultGrowDistanceLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   GrowSpeed_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GrowDistanceLimit_0                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::CalcDefaultGrowDistanceLimit(float* GrowSpeed_0, float* GrowDistanceLimit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "CalcDefaultGrowDistanceLimit");

	Params::BP_AJBOverGrowSkill_C_CalcDefaultGrowDistanceLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GrowSpeed_0 != nullptr)
		*GrowSpeed_0 = Parms.GrowSpeed_0;

	if (GrowDistanceLimit_0 != nullptr)
		*GrowDistanceLimit_0 = Parms.GrowDistanceLimit_0;
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ExtendGrowDistanceLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::ExtendGrowDistanceLimit(float Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ExtendGrowDistanceLimit");

	Params::BP_AJBOverGrowSkill_C_ExtendGrowDistanceLimit Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.GetPlacementFloatValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ValueName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::GetPlacementFloatValue(class FName ValueName, bool* bSuccess, float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "GetPlacementFloatValue");

	Params::BP_AJBOverGrowSkill_C_GetPlacementFloatValue Parms{};

	Parms.ValueName = ValueName;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.TryGetLandscapeActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   LandScapeActors_0                                      (Parm, OutParm, ZeroConstructor)

void UBP_AJBOverGrowSkill_C::TryGetLandscapeActors(TArray<class AActor*>* LandScapeActors_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "TryGetLandscapeActors");

	Params::BP_AJBOverGrowSkill_C_TryGetLandscapeActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LandScapeActors_0 != nullptr)
		*LandScapeActors_0 = std::move(Parms.LandScapeActors_0);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.UpdateTargetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::UpdateTargetCharacter(class ABP_AJBInGameCharacter_C* CharacterBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "UpdateTargetCharacter");

	Params::BP_AJBOverGrowSkill_C_UpdateTargetCharacter Parms{};

	Parms.CharacterBP = CharacterBP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.UpdateGrownTreeCountServer
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::UpdateGrownTreeCountServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "UpdateGrownTreeCountServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnCancel
// (Event, Public, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "ReceiveTick");

	Params::BP_AJBOverGrowSkill_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.OnActive
// (Event, Public, BlueprintEvent)

void UBP_AJBOverGrowSkill_C::OnActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "OnActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.Increase_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::Increase_Local(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "Increase_Local");

	Params::BP_AJBOverGrowSkill_C_Increase_Local Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBOverGrowSkill.BP_AJBOverGrowSkill_C.Increase_Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBOverGrowSkill_C::Increase_Server(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBOverGrowSkill_C", "Increase_Server");

	Params::BP_AJBOverGrowSkill_C_Increase_Server Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}

}

