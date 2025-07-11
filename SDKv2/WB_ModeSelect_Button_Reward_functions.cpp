#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ModeSelect_Button_Reward

#include "Basic.hpp"

#include "WB_ModeSelect_Button_Reward_classes.hpp"
#include "WB_ModeSelect_Button_Reward_parameters.hpp"


namespace SDK
{

// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.ExecuteUbergraph_WB_ModeSelect_Button_Reward
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ModeSelect_Button_Reward_C::ExecuteUbergraph_WB_ModeSelect_Button_Reward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "ExecuteUbergraph_WB_ModeSelect_Button_Reward");

	Params::WB_ModeSelect_Button_Reward_C_ExecuteUbergraph_WB_ModeSelect_Button_Reward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.BndEvt__Anim_Release_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UWB_ModeSelect_Button_Reward_C::BndEvt__Anim_Release_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "BndEvt__Anim_Release_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.UpdateTicketAndRewardNum
// (BlueprintCallable, BlueprintEvent)

void UWB_ModeSelect_Button_Reward_C::UpdateTicketAndRewardNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "UpdateTicketAndRewardNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ModeSelect_Button_Reward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.GetButton
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAJBButton*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAJBButton* UWB_ModeSelect_Button_Reward_C::GetButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "GetButton");

	Params::WB_ModeSelect_Button_Reward_C_GetButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.GetRewardNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWB_ModeSelect_Button_Reward_C::GetRewardNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "GetRewardNum");

	Params::WB_ModeSelect_Button_Reward_C_GetRewardNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.GetTicketNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWB_ModeSelect_Button_Reward_C::GetTicketNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "GetTicketNum");

	Params::WB_ModeSelect_Button_Reward_C_GetTicketNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.ResetPressAndReleaseAnimation
// (BlueprintCallable, BlueprintEvent)

void UWB_ModeSelect_Button_Reward_C::ResetPressAndReleaseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "ResetPressAndReleaseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.SetEnableSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelectable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ModeSelect_Button_Reward_C::SetEnableSelect(bool bSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "SetEnableSelect");

	Params::WB_ModeSelect_Button_Reward_C_SetEnableSelect Parms{};

	Parms.bSelectable = bSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.OnButtonReleasedAnimation
// (Event, Public, BlueprintEvent)

void UWB_ModeSelect_Button_Reward_C::OnButtonReleasedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "OnButtonReleasedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.OnButtonPressedAnimation
// (Event, Public, BlueprintEvent)

void UWB_ModeSelect_Button_Reward_C::OnButtonPressedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "OnButtonPressedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.IsEnableSelect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bEnable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ModeSelect_Button_Reward_C::IsEnableSelect(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "IsEnableSelect");

	Params::WB_ModeSelect_Button_Reward_C_IsEnableSelect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.IsButtonDecisioning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsDecisioning                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ModeSelect_Button_Reward_C::IsButtonDecisioning(bool* IsDecisioning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "IsButtonDecisioning");

	Params::WB_ModeSelect_Button_Reward_C_IsButtonDecisioning Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDecisioning != nullptr)
		*IsDecisioning = Parms.IsDecisioning;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.IsBonusUpPeriod
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBonusUp                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ModeSelect_Button_Reward_C::IsBonusUpPeriod(bool* bBonusUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "IsBonusUpPeriod");

	Params::WB_ModeSelect_Button_Reward_C_IsBonusUpPeriod Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bBonusUp != nullptr)
		*bBonusUp = Parms.bBonusUp;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.GetAuraImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                           AuraImage                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ModeSelect_Button_Reward_C::GetAuraImage(class UImage** AuraImage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "GetAuraImage");

	Params::WB_ModeSelect_Button_Reward_C_GetAuraImage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AuraImage != nullptr)
		*AuraImage = Parms.AuraImage;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.GetRetainerEffectMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*         EffectMaterial                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ModeSelect_Button_Reward_C::GetRetainerEffectMaterial(class UMaterialInstanceDynamic** EffectMaterial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "GetRetainerEffectMaterial");

	Params::WB_ModeSelect_Button_Reward_C_GetRetainerEffectMaterial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EffectMaterial != nullptr)
		*EffectMaterial = Parms.EffectMaterial;
}


// Function WB_ModeSelect_Button_Reward.WB_ModeSelect_Button_Reward_C.GetButtonCenterPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        ScreenPosition                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ModeSelect_Button_Reward_C::GetButtonCenterPosition(struct FVector2D* ScreenPosition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModeSelect_Button_Reward_C", "GetButtonCenterPosition");

	Params::WB_ModeSelect_Button_Reward_C_GetButtonCenterPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);
}

}

