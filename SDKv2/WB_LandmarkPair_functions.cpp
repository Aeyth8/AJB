#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_LandmarkPair

#include "Basic.hpp"

#include "WB_LandmarkPair_classes.hpp"
#include "WB_LandmarkPair_parameters.hpp"


namespace SDK
{

// Function WB_LandmarkPair.WB_LandmarkPair_C.ExecuteUbergraph_WB_LandmarkPair
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LandmarkPair_C::ExecuteUbergraph_WB_LandmarkPair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "ExecuteUbergraph_WB_LandmarkPair");

	Params::WB_LandmarkPair_C_ExecuteUbergraph_WB_LandmarkPair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.ChangeIconMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PairHP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LandmarkPair_C::ChangeIconMaterial(int32 PairHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "ChangeIconMaterial");

	Params::WB_LandmarkPair_C_ChangeIconMaterial Parms{};

	Parms.PairHP = PairHP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.SetupBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnableBlink                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_LandmarkPair_C::SetupBlink(bool bEnableBlink)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "SetupBlink");

	Params::WB_LandmarkPair_C_SetupBlink Parms{};

	Parms.bEnableBlink = bEnableBlink;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LandmarkPair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "Tick");

	Params::WB_LandmarkPair_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.SetInnerScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InnerScale_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LandmarkPair_C::SetInnerScale(float InnerScale_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "SetInnerScale");

	Params::WB_LandmarkPair_C_SetInnerScale Parms{};

	Parms.InnerScale_0 = InnerScale_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.GetContentWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ContentWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LandmarkPair_C::GetContentWidget(class UWidget** ContentWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "GetContentWidget");

	Params::WB_LandmarkPair_C_GetContentWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ContentWidget != nullptr)
		*ContentWidget = Parms.ContentWidget;
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.GetResizerWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USizeBox*                         SizeBox                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LandmarkPair_C::GetResizerWidget(class USizeBox** SizeBox) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "GetResizerWidget");

	Params::WB_LandmarkPair_C_GetResizerWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SizeBox != nullptr)
		*SizeBox = Parms.SizeBox;
}


// Function WB_LandmarkPair.WB_LandmarkPair_C.GetRetainerBoxWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URetainerBox*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class URetainerBox* UWB_LandmarkPair_C::GetRetainerBoxWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LandmarkPair_C", "GetRetainerBoxWidget");

	Params::WB_LandmarkPair_C_GetRetainerBoxWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

