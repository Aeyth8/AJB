#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AJBSignalPinIcon_Instruction

#include "Basic.hpp"

#include "WB_AJBSignalPinIcon_Instruction_classes.hpp"
#include "WB_AJBSignalPinIcon_Instruction_parameters.hpp"


namespace SDK
{

// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.ExecuteUbergraph_WB_AJBSignalPinIcon_Instruction
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBSignalPinIcon_Instruction_C::ExecuteUbergraph_WB_AJBSignalPinIcon_Instruction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "ExecuteUbergraph_WB_AJBSignalPinIcon_Instruction");

	Params::WB_AJBSignalPinIcon_Instruction_C_ExecuteUbergraph_WB_AJBSignalPinIcon_Instruction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.SetIsPair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsPair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_AJBSignalPinIcon_Instruction_C::SetIsPair(bool bIsPair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "SetIsPair");

	Params::WB_AJBSignalPinIcon_Instruction_C_SetIsPair Parms{};

	Parms.bIsPair = bIsPair;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBSignalPinIcon_Instruction_C::UpdateSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "UpdateSize");

	Params::WB_AJBSignalPinIcon_Instruction_C_UpdateSize Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_AJBSignalPinIcon_Instruction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.UpdateBlurOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlurOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBSignalPinIcon_Instruction_C::UpdateBlurOffset(float BlurOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "UpdateBlurOffset");

	Params::WB_AJBSignalPinIcon_Instruction_C_UpdateBlurOffset Parms{};

	Parms.BlurOffset = BlurOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.SetSignalType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     SignalTypeTag                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWB_AJBSignalPinIcon_Instruction_C::SetSignalType(const struct FGameplayTag& SignalTypeTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "SetSignalType");

	Params::WB_AJBSignalPinIcon_Instruction_C_SetSignalType Parms{};

	Parms.SignalTypeTag = std::move(SignalTypeTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AJBSignalPinIcon_Instruction.WB_AJBSignalPinIcon_Instruction_C.PlayVanishAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsTimeUp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   AnimationLength                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AJBSignalPinIcon_Instruction_C::PlayVanishAnimation(bool bIsTimeUp, float* AnimationLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AJBSignalPinIcon_Instruction_C", "PlayVanishAnimation");

	Params::WB_AJBSignalPinIcon_Instruction_C_PlayVanishAnimation Parms{};

	Parms.bIsTimeUp = bIsTimeUp;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationLength != nullptr)
		*AnimationLength = Parms.AnimationLength;
}

}

