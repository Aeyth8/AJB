#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RewardEffect

#include "Basic.hpp"

#include "WB_RewardEffect_classes.hpp"
#include "WB_RewardEffect_parameters.hpp"


namespace SDK
{

// Function WB_RewardEffect.WB_RewardEffect_C.ExecuteUbergraph_WB_RewardEffect
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RewardEffect_C::ExecuteUbergraph_WB_RewardEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RewardEffect_C", "ExecuteUbergraph_WB_RewardEffect");

	Params::WB_RewardEffect_C_ExecuteUbergraph_WB_RewardEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RewardEffect.WB_RewardEffect_C.PlayRewardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RewardEffect_C::PlayRewardAnimation(int32 Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RewardEffect_C", "PlayRewardAnimation");

	Params::WB_RewardEffect_C_PlayRewardAnimation Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RewardEffect.WB_RewardEffect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RewardEffect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RewardEffect_C", "Tick");

	Params::WB_RewardEffect_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RewardEffect.WB_RewardEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_RewardEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RewardEffect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

