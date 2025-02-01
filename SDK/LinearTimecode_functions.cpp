#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LinearTimecode

#include "Basic.hpp"

#include "LinearTimecode_classes.hpp"
#include "LinearTimecode_parameters.hpp"


namespace SDK
{

// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDropTimecode                    Timecode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   FrameNumber                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULinearTimecodeComponent::GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int32* FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LinearTimecodeComponent", "GetDropTimeCodeFrameNumber");

	Params::LinearTimecodeComponent_GetDropTimeCodeFrameNumber Parms{};

	Parms.Timecode = std::move(Timecode);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FrameNumber != nullptr)
		*FrameNumber = Parms.FrameNumber;
}


// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDropTimecode                    Timecode                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   FrameNumber                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDropTimecode                    OutTimecode                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void ULinearTimecodeComponent::SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int32 FrameNumber, struct FDropTimecode* OutTimecode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LinearTimecodeComponent", "SetDropTimecodeFrameNumber");

	Params::LinearTimecodeComponent_SetDropTimecodeFrameNumber Parms{};

	Parms.Timecode = std::move(Timecode);
	Parms.FrameNumber = FrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTimecode != nullptr)
		*OutTimecode = std::move(Parms.OutTimecode);
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULinearTimecodeComponent::GetDropFrameNumber() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearTimecodeComponent", "GetDropFrameNumber");

	Params::LinearTimecodeComponent_GetDropFrameNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDropTimecode                    InTimecode                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDropTimecodeToStringConversion::Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DropTimecodeToStringConversion", "Conv_DropTimecodeToString");

	Params::DropTimecodeToStringConversion_Conv_DropTimecodeToString Parms{};

	Parms.InTimecode = std::move(InTimecode);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

