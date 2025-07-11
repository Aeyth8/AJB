#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameStandPart_DDWLeg

#include "Basic.hpp"

#include "BP_AJBInGameStandPart_DDWLeg_classes.hpp"
#include "BP_AJBInGameStandPart_DDWLeg_parameters.hpp"


namespace SDK
{

// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.ExecuteUbergraph_BP_AJBInGameStandPart_DDWLeg
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::ExecuteUbergraph_BP_AJBInGameStandPart_DDWLeg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "ExecuteUbergraph_BP_AJBInGameStandPart_DDWLeg");

	Params::BP_AJBInGameStandPart_DDWLeg_C_ExecuteUbergraph_BP_AJBInGameStandPart_DDWLeg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBInGameStandPart_DDWLeg_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.DetachFromOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_AJBInGameStandPart_DDWLeg_C::DetachFromOwner(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "DetachFromOwner");

	Params::BP_AJBInGameStandPart_DDWLeg_C_DetachFromOwner Parms{};

	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.AttachForOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_AJBInGameStandPart_DDWLeg_C::AttachForOwner(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "AttachForOwner");

	Params::BP_AJBInGameStandPart_DDWLeg_C_AttachForOwner Parms{};

	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.Disappear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameStandPart_DDWLeg_C::Disappear(bool bAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "Disappear");

	Params::BP_AJBInGameStandPart_DDWLeg_C_Disappear Parms{};

	Parms.bAnimation = bAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.Appear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameStandPart_DDWLeg_C::Appear(bool bAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "Appear");

	Params::BP_AJBInGameStandPart_DDWLeg_C_Appear Parms{};

	Parms.bAnimation = bAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.SetLegVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AJBInGameStandPart_DDWLeg_C::SetLegVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "SetLegVisibility");

	Params::BP_AJBInGameStandPart_DDWLeg_C_SetLegVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnCompleted_9749DC52433D60649DD8CC991FEC9526
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnCompleted_9749DC52433D60649DD8CC991FEC9526(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnCompleted_9749DC52433D60649DD8CC991FEC9526");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnCompleted_9749DC52433D60649DD8CC991FEC9526 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnBlendOut_9749DC52433D60649DD8CC991FEC9526
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnBlendOut_9749DC52433D60649DD8CC991FEC9526(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnBlendOut_9749DC52433D60649DD8CC991FEC9526");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnBlendOut_9749DC52433D60649DD8CC991FEC9526 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnInterrupted_9749DC52433D60649DD8CC991FEC9526
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnInterrupted_9749DC52433D60649DD8CC991FEC9526(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnInterrupted_9749DC52433D60649DD8CC991FEC9526");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnInterrupted_9749DC52433D60649DD8CC991FEC9526 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnNotifyBegin_9749DC52433D60649DD8CC991FEC9526
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnNotifyBegin_9749DC52433D60649DD8CC991FEC9526(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnNotifyBegin_9749DC52433D60649DD8CC991FEC9526");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnNotifyBegin_9749DC52433D60649DD8CC991FEC9526 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnNotifyEnd_9749DC52433D60649DD8CC991FEC9526
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnNotifyEnd_9749DC52433D60649DD8CC991FEC9526(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnNotifyEnd_9749DC52433D60649DD8CC991FEC9526");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnNotifyEnd_9749DC52433D60649DD8CC991FEC9526 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnCompleted_C835400E473C71A629AFEBBDCDB01BAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnCompleted_C835400E473C71A629AFEBBDCDB01BAD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnCompleted_C835400E473C71A629AFEBBDCDB01BAD");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnCompleted_C835400E473C71A629AFEBBDCDB01BAD Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnBlendOut_C835400E473C71A629AFEBBDCDB01BAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnBlendOut_C835400E473C71A629AFEBBDCDB01BAD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnBlendOut_C835400E473C71A629AFEBBDCDB01BAD");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnBlendOut_C835400E473C71A629AFEBBDCDB01BAD Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnInterrupted_C835400E473C71A629AFEBBDCDB01BAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnInterrupted_C835400E473C71A629AFEBBDCDB01BAD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnInterrupted_C835400E473C71A629AFEBBDCDB01BAD");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnInterrupted_C835400E473C71A629AFEBBDCDB01BAD Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnNotifyBegin_C835400E473C71A629AFEBBDCDB01BAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnNotifyBegin_C835400E473C71A629AFEBBDCDB01BAD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnNotifyBegin_C835400E473C71A629AFEBBDCDB01BAD");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnNotifyBegin_C835400E473C71A629AFEBBDCDB01BAD Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.OnNotifyEnd_C835400E473C71A629AFEBBDCDB01BAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBInGameStandPart_DDWLeg_C::OnNotifyEnd_C835400E473C71A629AFEBBDCDB01BAD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "OnNotifyEnd_C835400E473C71A629AFEBBDCDB01BAD");

	Params::BP_AJBInGameStandPart_DDWLeg_C_OnNotifyEnd_C835400E473C71A629AFEBBDCDB01BAD Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameStandPart_DDWLeg_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameStandPart_DDWLeg.BP_AJBInGameStandPart_DDWLeg_C.CreateDMIFlow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameStandPart_DDWLeg_C::CreateDMIFlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameStandPart_DDWLeg_C", "CreateDMIFlow");

	UObject::ProcessEvent(Func, nullptr);
}

}

