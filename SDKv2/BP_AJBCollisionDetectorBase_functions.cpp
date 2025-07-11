#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBCollisionDetectorBase

#include "Basic.hpp"

#include "BP_AJBCollisionDetectorBase_classes.hpp"
#include "BP_AJBCollisionDetectorBase_parameters.hpp"


namespace SDK
{

// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.ExecuteUbergraph_BP_AJBCollisionDetectorBase
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBCollisionDetectorBase_C::ExecuteUbergraph_BP_AJBCollisionDetectorBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "ExecuteUbergraph_BP_AJBCollisionDetectorBase");

	Params::BP_AJBCollisionDetectorBase_C_ExecuteUbergraph_BP_AJBCollisionDetectorBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBCollisionDetectorBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.ChangeEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBCollisionDetectorBase_C::ChangeEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "ChangeEnable");

	Params::BP_AJBCollisionDetectorBase_C_ChangeEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBCollisionDetectorBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "ReceiveTick");

	Params::BP_AJBCollisionDetectorBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AJBCollisionDetectorBase_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_AJBCollisionDetectorBase_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBCollisionDetectorBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.CheckPossibleOverlapDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPossible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBCollisionDetectorBase_C::CheckPossibleOverlapDistance(bool* bPossible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "CheckPossibleOverlapDistance");

	Params::BP_AJBCollisionDetectorBase_C_CheckPossibleOverlapDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPossible != nullptr)
		*bPossible = Parms.bPossible;
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.SetLeftOverlapDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBCollisionDetectorBase_C::SetLeftOverlapDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "SetLeftOverlapDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.UpdateLeftOverlapDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AJBCollisionDetectorBase_C::UpdateLeftOverlapDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "UpdateLeftOverlapDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.UpdatePreLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AJBCollisionDetectorBase_C::UpdatePreLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "UpdatePreLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBCollisionDetectorBase.BP_AJBCollisionDetectorBase_C.ResetLeftOverlapDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBCollisionDetectorBase_C::ResetLeftOverlapDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBCollisionDetectorBase_C", "ResetLeftOverlapDistance");

	UObject::ProcessEvent(Func, nullptr);
}

}

