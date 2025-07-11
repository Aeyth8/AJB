#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSimpleMatchHUD

#include "Basic.hpp"

#include "BP_AJBSimpleMatchHUD_classes.hpp"
#include "BP_AJBSimpleMatchHUD_parameters.hpp"


namespace SDK
{

// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.ExecuteUbergraph_BP_AJBSimpleMatchHUD
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AJBSimpleMatchHUD_C::ExecuteUbergraph_BP_AJBSimpleMatchHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "ExecuteUbergraph_BP_AJBSimpleMatchHUD");

	Params::BP_AJBSimpleMatchHUD_C_ExecuteUbergraph_BP_AJBSimpleMatchHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.BeginplayFadeInOut
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBSimpleMatchHUD_C::BeginplayFadeInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "BeginplayFadeInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.Finished_AED095FE4FD6B8CEBAC02496C9F278F7
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBSimpleMatchHUD_C::Finished_AED095FE4FD6B8CEBAC02496C9F278F7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "Finished_AED095FE4FD6B8CEBAC02496C9F278F7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.Finished_B844E74940F3A4CBD672FCA63F12DE8F
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBSimpleMatchHUD_C::Finished_B844E74940F3A4CBD672FCA63F12DE8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "Finished_B844E74940F3A4CBD672FCA63F12DE8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.OnBegin_SelectCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PrevState                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AJBSimpleMatchHUD_C::OnBegin_SelectCharacter(const struct FGameplayTag& PrevState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "OnBegin_SelectCharacter");

	Params::BP_AJBSimpleMatchHUD_C_OnBegin_SelectCharacter Parms{};

	Parms.PrevState = std::move(PrevState);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.OnFinishedIntro
// (BlueprintCallable, BlueprintEvent)

void ABP_AJBSimpleMatchHUD_C::OnFinishedIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "OnFinishedIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AJBSimpleMatchHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBSimpleMatchHUD_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSimpleMatchHUD_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

