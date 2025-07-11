#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_GameIconUtil

#include "Basic.hpp"

#include "BPF_GameIconUtil_classes.hpp"
#include "BPF_GameIconUtil_parameters.hpp"


namespace SDK
{

// Function BPF_GameIconUtil.BPF_GameIconUtil_C.GetAJBPadIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAJBPadIconType                         PadType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_GameIconUtil_C::GetAJBPadIcon(EAJBPadIconType PadType, class UObject* __WorldContext, class UTexture2D** OutTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_GameIconUtil_C", "GetAJBPadIcon");

	Params::BPF_GameIconUtil_C_GetAJBPadIcon Parms{};

	Parms.PadType = PadType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTexture != nullptr)
		*OutTexture = Parms.OutTexture;
}


// Function BPF_GameIconUtil.BPF_GameIconUtil_C.GetAJBRewardItemTypeCommonIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ERewardItemType                         Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_GameIconUtil_C::GetAJBRewardItemTypeCommonIcon(ERewardItemType Type, class UObject* __WorldContext, class UTexture2D** OutTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_GameIconUtil_C", "GetAJBRewardItemTypeCommonIcon");

	Params::BPF_GameIconUtil_C_GetAJBRewardItemTypeCommonIcon Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTexture != nullptr)
		*OutTexture = Parms.OutTexture;
}


// Function BPF_GameIconUtil.BPF_GameIconUtil_C.GetAJBRewardCharaProfileCommonIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_GameIconUtil_C::GetAJBRewardCharaProfileCommonIcon(class UObject* __WorldContext, class UTexture2D** OutTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_GameIconUtil_C", "GetAJBRewardCharaProfileCommonIcon");

	Params::BPF_GameIconUtil_C_GetAJBRewardCharaProfileCommonIcon Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTexture != nullptr)
		*OutTexture = Parms.OutTexture;
}


// Function BPF_GameIconUtil.BPF_GameIconUtil_C.GetAJBPadIcon_KeyAssignConsidering
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAJBPadIconType                         DefaultUIPadType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_GameIconUtil_C::GetAJBPadIcon_KeyAssignConsidering(EAJBPadIconType DefaultUIPadType, class UObject* __WorldContext, class UTexture2D** OutTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_GameIconUtil_C", "GetAJBPadIcon_KeyAssignConsidering");

	Params::BPF_GameIconUtil_C_GetAJBPadIcon_KeyAssignConsidering Parms{};

	Parms.DefaultUIPadType = DefaultUIPadType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTexture != nullptr)
		*OutTexture = Parms.OutTexture;
}

}

