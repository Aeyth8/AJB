#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_AJBInGameMessage

#include "Basic.hpp"

#include "BPF_AJBInGameMessage_classes.hpp"
#include "BPF_AJBInGameMessage_parameters.hpp"


namespace SDK
{

// Function BPF_AJBInGameMessage.BPF_AJBInGameMessage_C.ConvertActionLogTypeByMessageType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ActionLogType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBInGameMessage_C::ConvertActionLogTypeByMessageType(int32 Type, class UObject* __WorldContext, int32* ActionLogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBInGameMessage_C", "ConvertActionLogTypeByMessageType");

	Params::BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ActionLogType != nullptr)
		*ActionLogType = Parms.ActionLogType;
}


// Function BPF_AJBInGameMessage.BPF_AJBInGameMessage_C.IsActionLogMessageType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPF_AJBInGameMessage_C::IsActionLogMessageType(int32 Type, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBInGameMessage_C", "IsActionLogMessageType");

	Params::BPF_AJBInGameMessage_C_IsActionLogMessageType Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPF_AJBInGameMessage.BPF_AJBInGameMessage_C.ConvertMessageTypeByActionLogType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ActionLogType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBInGameMessage_C::ConvertMessageTypeByActionLogType(int32 ActionLogType, class UObject* __WorldContext, int32* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBInGameMessage_C", "ConvertMessageTypeByActionLogType");

	Params::BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType Parms{};

	Parms.ActionLogType = ActionLogType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}

}

