#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SequencerLipTrack

#include "Basic.hpp"

#include "BP_SequencerLipTrack_classes.hpp"
#include "BP_SequencerLipTrack_parameters.hpp"


namespace SDK
{

// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.ExecuteUbergraph_BP_SequencerLipTrack
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SequencerLipTrack_C::ExecuteUbergraph_BP_SequencerLipTrack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "ExecuteUbergraph_BP_SequencerLipTrack");

	Params::BP_SequencerLipTrack_C_ExecuteUbergraph_BP_SequencerLipTrack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.SkipTrack
// (BlueprintCallable, BlueprintEvent)

void ABP_SequencerLipTrack_C::SkipTrack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "SkipTrack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.PreviewCheckTargetActor
// (BlueprintCallable, BlueprintEvent)

void ABP_SequencerLipTrack_C::PreviewCheckTargetActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "PreviewCheckTargetActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SequencerLipTrack_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "ReceiveEndPlay");

	Params::BP_SequencerLipTrack_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SequencerLipTrack_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "ReceiveTick");

	Params::BP_SequencerLipTrack_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SequencerLipTrack_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SequencerLipTrack.BP_SequencerLipTrack_C.FindPreviewTargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*               TargetActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SequencerLipTrack_C::FindPreviewTargetActor(class ASkeletalMeshActor** TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequencerLipTrack_C", "FindPreviewTargetActor");

	Params::BP_SequencerLipTrack_C_FindPreviewTargetActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;
}

}

