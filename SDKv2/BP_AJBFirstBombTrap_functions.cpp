#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBFirstBombTrap

#include "Basic.hpp"

#include "BP_AJBFirstBombTrap_classes.hpp"
#include "BP_AJBFirstBombTrap_parameters.hpp"


namespace SDK
{

// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.ExecuteUbergraph_BP_AJBFirstBombTrap
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBFirstBombTrap_C::ExecuteUbergraph_BP_AJBFirstBombTrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "ExecuteUbergraph_BP_AJBFirstBombTrap");

	Params::BP_AJBFirstBombTrap_C_ExecuteUbergraph_BP_AJBFirstBombTrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.OnSetViewTargetToNewSpectator_Local
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::OnSetViewTargetToNewSpectator_Local()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "OnSetViewTargetToNewSpectator_Local");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.PreInitializeComponentsBP
// (Event, Public, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::PreInitializeComponentsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "PreInitializeComponentsBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBFirstBombTrap_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "ReceiveTick");

	Params::BP_AJBFirstBombTrap_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AJBFirstBombTrap_C::BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_AJBFirstBombTrap_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.Timeline_0__NewTrack_3__EventFunc
// (BlueprintEvent)

void ABP_AJBFirstBombTrap_C::Timeline_0__NewTrack_3__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "Timeline_0__NewTrack_3__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AJBFirstBombTrap_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AJBFirstBombTrap_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.OnRep_CacheFileName
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::OnRep_CacheFileName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "OnRep_CacheFileName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.ChangeDecalEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBFirstBombTrap_C::ChangeDecalEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "ChangeDecalEnable");

	Params::BP_AJBFirstBombTrap_C_ChangeDecalEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.UpdateDecalEnableWhichOne
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::UpdateDecalEnableWhichOne()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "UpdateDecalEnableWhichOne");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.ChangeCollisionEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBFirstBombTrap_C::ChangeCollisionEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "ChangeCollisionEnable");

	Params::BP_AJBFirstBombTrap_C_ChangeCollisionEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.CheckCollisionEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bEnable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBFirstBombTrap_C::CheckCollisionEnable(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "CheckCollisionEnable");

	Params::BP_AJBFirstBombTrap_C_CheckCollisionEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.OnBeginState_Prepare_OneShot
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::OnBeginState_Prepare_OneShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "OnBeginState_Prepare_OneShot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.OnBeginState_Standby
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::OnBeginState_Standby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "OnBeginState_Standby");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.OnBeginState_Triggering_OneShot
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::OnBeginState_Triggering_OneShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "OnBeginState_Triggering_OneShot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBFirstBombTrap_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBFirstBombTrap_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

