#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Usio

#include "Basic.hpp"

#include "Usio_classes.hpp"
#include "Usio_parameters.hpp"


namespace SDK
{

// Function Usio.UsioFunctionLibrary.ClearUsioSram
// (Final, Native, Static, Public, BlueprintCallable)

void UUsioFunctionLibrary::ClearUsioSram()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "ClearUsioSram");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.CloseUsio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::CloseUsio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "CloseUsio");

	Params::UsioFunctionLibrary_CloseUsio Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.DecCoin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Slot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::DecCoin(int32 Slot, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "DecCoin");

	Params::UsioFunctionLibrary_DecCoin Parms{};

	Parms.Slot = Slot;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.DecService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Slot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::DecService(int32 Slot, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "DecService");

	Params::UsioFunctionLibrary_DecService Parms{};

	Parms.Slot = Slot;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetCoin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   Slot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::GetCoin(int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetCoin");

	Params::UsioFunctionLibrary_GetCoin Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetCoinError
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   Slot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECoinError                              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECoinError UUsioFunctionLibrary::GetCoinError(int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetCoinError");

	Params::UsioFunctionLibrary_GetCoinError Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetCoinLock
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                                   Channel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UUsioFunctionLibrary::GetCoinLock(uint8 Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetCoinLock");

	Params::UsioFunctionLibrary_GetCoinLock Parms{};

	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetConnectCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::GetConnectCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetConnectCount");

	Params::UsioFunctionLibrary_GetConnectCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetErrorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::GetErrorCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetErrorCount");

	Params::UsioFunctionLibrary_GetErrorCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetIoBoardName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUsioFunctionLibrary::GetIoBoardName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetIoBoardName");

	Params::UsioFunctionLibrary_GetIoBoardName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetService
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   Slot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::GetService(int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetService");

	Params::UsioFunctionLibrary_GetService Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetServiceError
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   Slot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECoinError                              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECoinError UUsioFunctionLibrary::GetServiceError(int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetServiceError");

	Params::UsioFunctionLibrary_GetServiceError Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetUsioAnalogIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ChannelNo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::GetUsioAnalogIn(int32 ChannelNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetUsioAnalogIn");

	Params::UsioFunctionLibrary_GetUsioAnalogIn Parms{};

	Parms.ChannelNo = ChannelNo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetUsioEncoder
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::GetUsioEncoder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetUsioEncoder");

	Params::UsioFunctionLibrary_GetUsioEncoder Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetUsioSwitchIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUsioInputKeyNames                      UsioInputKey                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::GetUsioSwitchIn(EUsioInputKeyNames UsioInputKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetUsioSwitchIn");

	Params::UsioFunctionLibrary_GetUsioSwitchIn Parms{};

	Parms.UsioInputKey = UsioInputKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.GetUsioSystemError
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    bBackupError                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFirmwareError                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bMemoryError                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOtherError                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUsioFunctionLibrary::GetUsioSystemError(bool* bBackupError, bool* bFirmwareError, bool* bMemoryError, bool* bOtherError)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "GetUsioSystemError");

	Params::UsioFunctionLibrary_GetUsioSystemError Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bBackupError != nullptr)
		*bBackupError = Parms.bBackupError;

	if (bFirmwareError != nullptr)
		*bFirmwareError = Parms.bFirmwareError;

	if (bMemoryError != nullptr)
		*bMemoryError = Parms.bMemoryError;

	if (bOtherError != nullptr)
		*bOtherError = Parms.bOtherError;
}


// Function Usio.UsioFunctionLibrary.IsUsioConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::IsUsioConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "IsUsioConnected");

	Params::UsioFunctionLibrary_IsUsioConnected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.OpenUsio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ThreadPriority                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::OpenUsio(int32 ThreadPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "OpenUsio");

	Params::UsioFunctionLibrary_OpenUsio Parms{};

	Parms.ThreadPriority = ThreadPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.ResetCoin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::ResetCoin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "ResetCoin");

	Params::UsioFunctionLibrary_ResetCoin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.ResetUsioBoard
// (Final, Native, Static, Public, BlueprintCallable)

void UUsioFunctionLibrary::ResetUsioBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "ResetUsioBoard");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.SetAnalogCenter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ChannelNo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Center                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUsioFunctionLibrary::SetAnalogCenter(int32 ChannelNo, int32 Center)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetAnalogCenter");

	Params::UsioFunctionLibrary_SetAnalogCenter Parms{};

	Parms.ChannelNo = ChannelNo;
	Parms.Center = Center;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.SetAnalogPlayHigh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ChannelNo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   High                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUsioFunctionLibrary::SetAnalogPlayHigh(int32 ChannelNo, float High)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetAnalogPlayHigh");

	Params::UsioFunctionLibrary_SetAnalogPlayHigh Parms{};

	Parms.ChannelNo = ChannelNo;
	Parms.High = High;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.SetAnalogPlayLow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ChannelNo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Low                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUsioFunctionLibrary::SetAnalogPlayLow(int32 ChannelNo, float Low)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetAnalogPlayLow");

	Params::UsioFunctionLibrary_SetAnalogPlayLow Parms{};

	Parms.ChannelNo = ChannelNo;
	Parms.Low = Low;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.SetAnalogRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ChannelNo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Min                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Max                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUsioFunctionLibrary::SetAnalogRange(int32 ChannelNo, int32 Min, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetAnalogRange");

	Params::UsioFunctionLibrary_SetAnalogRange Parms{};

	Parms.ChannelNo = ChannelNo;
	Parms.Min = Min;
	Parms.Max = Max;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.SetCoinLock
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// uint8                                   Channel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::SetCoinLock(uint8 Channel, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetCoinLock");

	Params::UsioFunctionLibrary_SetCoinLock Parms{};

	Parms.Channel = Channel;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.SetUsioGout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ChannelNo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OutValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUsioFunctionLibrary::SetUsioGout(int32 ChannelNo, int32 OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetUsioGout");

	Params::UsioFunctionLibrary_SetUsioGout Parms{};

	Parms.ChannelNo = ChannelNo;
	Parms.OutValue = OutValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.SetUsioPLCounter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   TimeoutMilliseconds                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUsioFunctionLibrary::SetUsioPLCounter(int32 TimeoutMilliseconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetUsioPLCounter");

	Params::UsioFunctionLibrary_SetUsioPLCounter Parms{};

	Parms.TimeoutMilliseconds = TimeoutMilliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Usio.UsioFunctionLibrary.SetUsioSystemError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ErrorBit                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::SetUsioSystemError(int32 ErrorBit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetUsioSystemError");

	Params::UsioFunctionLibrary_SetUsioSystemError Parms{};

	Parms.ErrorBit = ErrorBit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Usio.UsioFunctionLibrary.SetUsioSystemErrorByBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bBackupError                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFirmwareError                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bMemoryError                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsioFunctionLibrary::SetUsioSystemErrorByBool(bool bBackupError, bool bFirmwareError, bool bMemoryError)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UsioFunctionLibrary", "SetUsioSystemErrorByBool");

	Params::UsioFunctionLibrary_SetUsioSystemErrorByBool Parms{};

	Parms.bBackupError = bBackupError;
	Parms.bFirmwareError = bFirmwareError;
	Parms.bMemoryError = bMemoryError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

