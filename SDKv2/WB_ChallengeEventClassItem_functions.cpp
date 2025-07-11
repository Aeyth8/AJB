#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ChallengeEventClassItem

#include "Basic.hpp"

#include "WB_ChallengeEventClassItem_classes.hpp"
#include "WB_ChallengeEventClassItem_parameters.hpp"


namespace SDK
{

// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_ChallengeEventClassItem_C*    ItemObj                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventClassItem_C::OnFinished__DelegateSignature(class UWB_ChallengeEventClassItem_C* ItemObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "OnFinished__DelegateSignature");

	Params::WB_ChallengeEventClassItem_C_OnFinished__DelegateSignature Parms{};

	Parms.ItemObj = ItemObj;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.OnExpUpFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventClassItem_C::OnExpUpFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "OnExpUpFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.ExecuteUbergraph_WB_ChallengeEventClassItem
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventClassItem_C::ExecuteUbergraph_WB_ChallengeEventClassItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "ExecuteUbergraph_WB_ChallengeEventClassItem");

	Params::WB_ChallengeEventClassItem_C_ExecuteUbergraph_WB_ChallengeEventClassItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.PlayAnimTurnOnClassNumber
// (BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventClassItem_C::PlayAnimTurnOnClassNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "PlayAnimTurnOnClassNumber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.TurnOnClassNumberImmediately
// (BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventClassItem_C::TurnOnClassNumberImmediately()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "TurnOnClassNumberImmediately");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.TickCountUpExp
// (BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventClassItem_C::TickCountUpExp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "TickCountUpExp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.Start
// (BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventClassItem_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChallengeEventProgressContext   ProgressContext_0                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   ClassIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventClassItem_C::Setup(const struct FChallengeEventProgressContext& ProgressContext_0, int32 ClassIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "Setup");

	Params::WB_ChallengeEventClassItem_C_Setup Parms{};

	Parms.ProgressContext_0 = std::move(ProgressContext_0);
	Parms.ClassIndex = ClassIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventClassItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "Tick");

	Params::WB_ChallengeEventClassItem_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ChallengeEventClassItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "PreConstruct");

	Params::WB_ChallengeEventClassItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.OnClassCompletedAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWB_ChallengeEventClassItem_C::OnClassCompletedAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "OnClassCompletedAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.OnLoaded_4C73DBF2420D63F10BEEB78C2007124B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventClassItem_C::OnLoaded_4C73DBF2420D63F10BEEB78C2007124B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "OnLoaded_4C73DBF2420D63F10BEEB78C2007124B");

	Params::WB_ChallengeEventClassItem_C_OnLoaded_4C73DBF2420D63F10BEEB78C2007124B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.OnLoaded_4C73DBF2420D63F10BEEB78C03B5DD41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChallengeEventClassItem_C::OnLoaded_4C73DBF2420D63F10BEEB78C03B5DD41(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "OnLoaded_4C73DBF2420D63F10BEEB78C03B5DD41");

	Params::WB_ChallengeEventClassItem_C_OnLoaded_4C73DBF2420D63F10BEEB78C03B5DD41 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.GetProgressByExp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   EventExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_ChallengeEventClassItem_C::GetProgressByExp(int32 EventExp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "GetProgressByExp");

	Params::WB_ChallengeEventClassItem_C_GetProgressByExp Parms{};

	Parms.EventExp = EventExp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.IsClassExpFulfilledAfterProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ChallengeEventClassItem_C::IsClassExpFulfilledAfterProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "IsClassExpFulfilledAfterProgress");

	Params::WB_ChallengeEventClassItem_C_IsClassExpFulfilledAfterProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.IfNeedsToProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ChallengeEventClassItem_C::IfNeedsToProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "IfNeedsToProgress");

	Params::WB_ChallengeEventClassItem_C_IfNeedsToProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.GetClassContext
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FChallengeEventClassContext      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FChallengeEventClassContext UWB_ChallengeEventClassItem_C::GetClassContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "GetClassContext");

	Params::WB_ChallengeEventClassItem_C_GetClassContext Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.IsProgressStartingClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ChallengeEventClassItem_C::IsProgressStartingClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "IsProgressStartingClass");

	Params::WB_ChallengeEventClassItem_C_IsProgressStartingClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.IsClassFulfilledBeforeProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ChallengeEventClassItem_C::IsClassFulfilledBeforeProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "IsClassFulfilledBeforeProgress");

	Params::WB_ChallengeEventClassItem_C_IsClassFulfilledBeforeProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ChallengeEventClassItem.WB_ChallengeEventClassItem_C.GetExpDiffFromProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWB_ChallengeEventClassItem_C::GetExpDiffFromProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ChallengeEventClassItem_C", "GetExpDiffFromProgress");

	Params::WB_ChallengeEventClassItem_C_GetExpDiffFromProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

