#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameIndoorVolumeComponent

#include "Basic.hpp"

#include "BP_AJBInGameIndoorVolumeComponent_classes.hpp"
#include "BP_AJBInGameIndoorVolumeComponent_parameters.hpp"


namespace SDK
{

// Function BP_AJBInGameIndoorVolumeComponent.BP_AJBInGameIndoorVolumeComponent_C.ExecuteUbergraph_BP_AJBInGameIndoorVolumeComponent
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBInGameIndoorVolumeComponent_C::ExecuteUbergraph_BP_AJBInGameIndoorVolumeComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameIndoorVolumeComponent_C", "ExecuteUbergraph_BP_AJBInGameIndoorVolumeComponent");

	Params::BP_AJBInGameIndoorVolumeComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorVolumeComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameIndoorVolumeComponent.BP_AJBInGameIndoorVolumeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBInGameIndoorVolumeComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameIndoorVolumeComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameIndoorVolumeComponent.BP_AJBInGameIndoorVolumeComponent_C.OnComponentEndOverlap_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBInGameIndoorVolumeComponent_C::OnComponentEndOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameIndoorVolumeComponent_C", "OnComponentEndOverlap_Event");

	Params::BP_AJBInGameIndoorVolumeComponent_C_OnComponentEndOverlap_Event Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameIndoorVolumeComponent.BP_AJBInGameIndoorVolumeComponent_C.OnComponentBeginOverlap_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_AJBInGameIndoorVolumeComponent_C::OnComponentBeginOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameIndoorVolumeComponent_C", "OnComponentBeginOverlap_Event");

	Params::BP_AJBInGameIndoorVolumeComponent_C_OnComponentBeginOverlap_Event Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameIndoorVolumeComponent.BP_AJBInGameIndoorVolumeComponent_C.CopyIndoorVolumeProperty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AJBInGameIndoorVolumeComponent_C*Src                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBInGameIndoorVolumeComponent_C::CopyIndoorVolumeProperty(class UBP_AJBInGameIndoorVolumeComponent_C* Src)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameIndoorVolumeComponent_C", "CopyIndoorVolumeProperty");

	Params::BP_AJBInGameIndoorVolumeComponent_C_CopyIndoorVolumeProperty Parms{};

	Parms.Src = Src;

	UObject::ProcessEvent(Func, &Parms);
}

}

