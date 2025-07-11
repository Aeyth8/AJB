#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBDevMouseCursorController

#include "Basic.hpp"

#include "BP_AJBDevMouseCursorController_classes.hpp"
#include "BP_AJBDevMouseCursorController_parameters.hpp"


namespace SDK
{

// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.ExecuteUbergraph_BP_AJBDevMouseCursorController
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBDevMouseCursorController_C::ExecuteUbergraph_BP_AJBDevMouseCursorController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "ExecuteUbergraph_BP_AJBDevMouseCursorController");

	Params::BP_AJBDevMouseCursorController_C_ExecuteUbergraph_BP_AJBDevMouseCursorController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.ForceRemoveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBUserWidget*                   TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBDevMouseCursorController_C::ForceRemoveWidget(class UAJBUserWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "ForceRemoveWidget");

	Params::BP_AJBDevMouseCursorController_C_ForceRemoveWidget Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.ForceAddWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBUserWidget*                   TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBDevMouseCursorController_C::ForceAddWidget(class UAJBUserWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "ForceAddWidget");

	Params::BP_AJBDevMouseCursorController_C_ForceAddWidget Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.SwitchingMouseCursor
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBDevMouseCursorController_C::SwitchingMouseCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "SwitchingMouseCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.OnClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBWindowWidget*                 TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBDevMouseCursorController_C::OnClosed(class UAJBWindowWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "OnClosed");

	Params::BP_AJBDevMouseCursorController_C_OnClosed Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.OnOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBWindowWidget*                 TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBDevMouseCursorController_C::OnOpened(class UAJBWindowWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "OnOpened");

	Params::BP_AJBDevMouseCursorController_C_OnOpened Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AJBDevMouseCursorController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBDevMouseCursorController.BP_AJBDevMouseCursorController_C.IsRegisterWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAJBWindowWidget*                 Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRegister                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AJBDevMouseCursorController_C::IsRegisterWidget(class UAJBWindowWidget* Widget, bool* bRegister)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBDevMouseCursorController_C", "IsRegisterWidget");

	Params::BP_AJBDevMouseCursorController_C_IsRegisterWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (bRegister != nullptr)
		*bRegister = Parms.bRegister;
}

}

