#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AJBInGameGionScreen

#include "Basic.hpp"

#include "WB_AJBInGameGionScreen_classes.hpp"
#include "WB_AJBInGameGionScreen_parameters.hpp"


namespace SDK
{

// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.OnDisplayGion__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GionType                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOnScreen                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsOwnerGion                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_AJBInGameGionScreen_C::OnDisplayGion__DelegateSignature(const struct FGameplayTag& GionType, bool bIsOnScreen, bool bIsOwnerGion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "OnDisplayGion__DelegateSignature");

	Params::WB_AJBInGameGionScreen_C_OnDisplayGion__DelegateSignature Parms{};

	Parms.GionType = std::move(GionType);
	Parms.bIsOnScreen = bIsOnScreen;
	Parms.bIsOwnerGion = bIsOwnerGion;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.ExecuteUbergraph_WB_AJBInGameGionScreen
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBInGameGionScreen_C::ExecuteUbergraph_WB_AJBInGameGionScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "ExecuteUbergraph_WB_AJBInGameGionScreen");

	Params::WB_AJBInGameGionScreen_C_ExecuteUbergraph_WB_AJBInGameGionScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.StopCallOnDisplayGionDispatcher
// (BlueprintCallable, BlueprintEvent)

void UWB_AJBInGameGionScreen_C::StopCallOnDisplayGionDispatcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "StopCallOnDisplayGionDispatcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBInGameGionScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "Tick");

	Params::WB_AJBInGameGionScreen_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.RequestEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFriend                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_GionSpawnedSpace                      SpanwedSpaceInOwnersEnv                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_GionSpawnedSpace                      SpanwedSpaceInNotOwnersEnv                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameGion_C*              GionActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBInGameGionScreen_C::RequestEffect(bool bIsOwner, class AActor* Owner, bool bIsFriend, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv, class ABP_AJBInGameGion_C* GionActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "RequestEffect");

	Params::WB_AJBInGameGionScreen_C_RequestEffect Parms{};

	Parms.bIsOwner = bIsOwner;
	Parms.Owner = Owner;
	Parms.bIsFriend = bIsFriend;
	Parms.SpanwedSpaceInOwnersEnv = SpanwedSpaceInOwnersEnv;
	Parms.SpanwedSpaceInNotOwnersEnv = SpanwedSpaceInNotOwnersEnv;
	Parms.GionActor = GionActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_AJBInGameGionScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.FindUseEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AJBInGameGionEffect_C*        Output_Get                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBInGameGionScreen_C::FindUseEffect(class UWB_AJBInGameGionEffect_C** Output_Get)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "FindUseEffect");

	Params::WB_AJBInGameGionScreen_C_FindUseEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.UpdateEffectPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AJBInGameGionEffect_C*        UpdateWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     GionType                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOnScreen                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsOwnerGion                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_AJBInGameGionScreen_C::UpdateEffectPosition(class UWB_AJBInGameGionEffect_C* UpdateWidget, struct FGameplayTag* GionType, bool* bIsOnScreen, bool* bIsOwnerGion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "UpdateEffectPosition");

	Params::WB_AJBInGameGionScreen_C_UpdateEffectPosition Parms{};

	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (GionType != nullptr)
		*GionType = std::move(Parms.GionType);

	if (bIsOnScreen != nullptr)
		*bIsOnScreen = Parms.bIsOnScreen;

	if (bIsOwnerGion != nullptr)
		*bIsOwnerGion = Parms.bIsOwnerGion;
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.SetupEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFriend                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_GionSpawnedSpace                      SpanwedSpaceInOwnersEnv                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_GionSpawnedSpace                      SpanwedSpaceInNotOwnersEnv                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AJBInGameGion_C*              GionActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     GionType                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOnScreen                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_AJBInGameGionScreen_C::SetupEffect(bool bIsOwner, class AActor* Owner, bool bIsFriend, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv, class ABP_AJBInGameGion_C* GionActor, struct FGameplayTag* GionType, bool* bIsOnScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "SetupEffect");

	Params::WB_AJBInGameGionScreen_C_SetupEffect Parms{};

	Parms.bIsOwner = bIsOwner;
	Parms.Owner = Owner;
	Parms.bIsFriend = bIsFriend;
	Parms.SpanwedSpaceInOwnersEnv = SpanwedSpaceInOwnersEnv;
	Parms.SpanwedSpaceInNotOwnersEnv = SpanwedSpaceInNotOwnersEnv;
	Parms.GionActor = GionActor;

	UObject::ProcessEvent(Func, &Parms);

	if (GionType != nullptr)
		*GionType = std::move(Parms.GionType);

	if (bIsOnScreen != nullptr)
		*bIsOnScreen = Parms.bIsOnScreen;
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.ToggleShowDebug
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_AJBInGameGionScreen_C::ToggleShowDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "ToggleShowDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.GetViewTargetHearingAbilityRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   HearingAbilityRate                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBInGameGionScreen_C::GetViewTargetHearingAbilityRate(float* HearingAbilityRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "GetViewTargetHearingAbilityRate");

	Params::WB_AJBInGameGionScreen_C_GetViewTargetHearingAbilityRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HearingAbilityRate != nullptr)
		*HearingAbilityRate = Parms.HearingAbilityRate;
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.AdjustEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_GionInfo                     GionInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_AJBInGameGionScreen_C::AdjustEffect(class AActor* Owner, const struct FST_GionInfo& GionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "AdjustEffect");

	Params::WB_AJBInGameGionScreen_C_AdjustEffect Parms{};

	Parms.Owner = Owner;
	Parms.GionInfo = std::move(GionInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBInGameGionScreen.WB_AJBInGameGionScreen_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext                    Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWB_AJBInGameGionScreen_C::OnPaint(struct FPaintContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBInGameGionScreen_C", "OnPaint");

	Params::WB_AJBInGameGionScreen_C_OnPaint Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}

}

