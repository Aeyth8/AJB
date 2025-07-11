#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RoomSelect_Button_Room

#include "Basic.hpp"

#include "WB_RoomSelect_Button_Room_classes.hpp"
#include "WB_RoomSelect_Button_Room_parameters.hpp"


namespace SDK
{

// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.ExecuteUbergraph_WB_RoomSelect_Button_Room
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RoomSelect_Button_Room_C::ExecuteUbergraph_WB_RoomSelect_Button_Room(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "ExecuteUbergraph_WB_RoomSelect_Button_Room");

	Params::WB_RoomSelect_Button_Room_C_ExecuteUbergraph_WB_RoomSelect_Button_Room Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.BndEvt__Anim_Press_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UWB_RoomSelect_Button_Room_C::BndEvt__Anim_Press_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "BndEvt__Anim_Press_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonCancelledEvent__DelegateSignature
// (BlueprintEvent)

void UWB_RoomSelect_Button_Room_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonCancelledEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonCancelledEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_RoomSelect_Button_Room_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.ResetRoomInfo
// (BlueprintCallable, BlueprintEvent)

void UWB_RoomSelect_Button_Room_C::ResetRoomInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "ResetRoomInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.SetRoomInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PairIconID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PairLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             PairName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             PairTitle                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_RoomSelect_Button_Room_C::SetRoomInfo(int32 PairIconID, int32 PairLevel, const class FText& PairName, const class FText& PairTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "SetRoomInfo");

	Params::WB_RoomSelect_Button_Room_C_SetRoomInfo Parms{};

	Parms.PairIconID = PairIconID;
	Parms.PairLevel = PairLevel;
	Parms.PairName = std::move(PairName);
	Parms.PairTitle = std::move(PairTitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_RoomSelect_Button_Room_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "PreConstruct");

	Params::WB_RoomSelect_Button_Room_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.OnButtonReleasedAnimation
// (Event, Public, BlueprintEvent)

void UWB_RoomSelect_Button_Room_C::OnButtonReleasedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "OnButtonReleasedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.OnButtonPressedAnimation
// (Event, Public, BlueprintEvent)

void UWB_RoomSelect_Button_Room_C::OnButtonPressedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "OnButtonPressedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.GetButton
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAJBButton*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAJBButton* UWB_RoomSelect_Button_Room_C::GetButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "GetButton");

	Params::WB_RoomSelect_Button_Room_C_GetButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_RoomSelect_Button_Room.WB_RoomSelect_Button_Room_C.IsEmptyRoom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_RoomSelect_Button_Room_C::IsEmptyRoom() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RoomSelect_Button_Room_C", "IsEmptyRoom");

	Params::WB_RoomSelect_Button_Room_C_IsEmptyRoom Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

