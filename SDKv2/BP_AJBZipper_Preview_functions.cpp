#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBZipper_Preview

#include "Basic.hpp"

#include "BP_AJBZipper_Preview_classes.hpp"
#include "BP_AJBZipper_Preview_parameters.hpp"


namespace SDK
{

// Function BP_AJBZipper_Preview.BP_AJBZipper_Preview_C.ExecuteUbergraph_BP_AJBZipper_Preview
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBZipper_Preview_C::ExecuteUbergraph_BP_AJBZipper_Preview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Preview_C", "ExecuteUbergraph_BP_AJBZipper_Preview");

	Params::BP_AJBZipper_Preview_C_ExecuteUbergraph_BP_AJBZipper_Preview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Preview.BP_AJBZipper_Preview_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Preview_C::SetVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Preview_C", "SetVisibility");

	Params::BP_AJBZipper_Preview_C_SetVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Preview.BP_AJBZipper_Preview_C.ChangeVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPossiblePlacement                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Preview_C::ChangeVisual(bool bPossiblePlacement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Preview_C", "ChangeVisual");

	Params::BP_AJBZipper_Preview_C_ChangeVisual Parms{};

	Parms.bPossiblePlacement = bPossiblePlacement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Preview.BP_AJBZipper_Preview_C.ChangeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBZipper_Preview_C::ChangeMaterial(bool bCanSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Preview_C", "ChangeMaterial");

	Params::BP_AJBZipper_Preview_C_ChangeMaterial Parms{};

	Parms.bCanSetting = bCanSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBZipper_Preview.BP_AJBZipper_Preview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBZipper_Preview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Preview_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBZipper_Preview.BP_AJBZipper_Preview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBZipper_Preview_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBZipper_Preview_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

