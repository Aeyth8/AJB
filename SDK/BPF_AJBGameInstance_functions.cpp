#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_AJBGameInstance

#include "Basic.hpp"

#include "BPF_AJBGameInstance_classes.hpp"
#include "BPF_AJBGameInstance_parameters.hpp"


namespace SDK
{

// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.GetAJBGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_AJBGameInstance_C*            AJB_Game_Instance                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBGameInstance_C::GetAJBGameInstance(class UObject* __WorldContext, bool* bSuccess, class UBP_AJBGameInstance_C** AJB_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "GetAJBGameInstance");

	Params::BPF_AJBGameInstance_C_GetAJBGameInstance Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (AJB_Game_Instance != nullptr)
		*AJB_Game_Instance = Parms.AJB_Game_Instance;
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.PlayModeEquals
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPlayMode                               PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPF_AJBGameInstance_C::PlayModeEquals(EPlayMode PlayMode, class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "PlayModeEquals");

	Params::BPF_AJBGameInstance_C_PlayModeEquals Parms{};

	Parms.PlayMode = PlayMode;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.GetPlayMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPlayMode                               PlayMode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBGameInstance_C::GetPlayMode(class UObject* __WorldContext, EPlayMode* PlayMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "GetPlayMode");

	Params::BPF_AJBGameInstance_C_GetPlayMode Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayMode != nullptr)
		*PlayMode = Parms.PlayMode;
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.SetPlayMode
// (Static, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPlayMode                               PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBGameInstance_C::SetPlayMode(EPlayMode PlayMode, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "SetPlayMode");

	Params::BPF_AJBGameInstance_C_SetPlayMode Parms{};

	Parms.PlayMode = PlayMode;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.GetHighlightManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAJBHighlightManager*             HighlightManager                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBGameInstance_C::GetHighlightManager(class UObject* __WorldContext, class UAJBHighlightManager** HighlightManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "GetHighlightManager");

	Params::BPF_AJBGameInstance_C_GetHighlightManager Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HighlightManager != nullptr)
		*HighlightManager = Parms.HighlightManager;
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.PlayModeIsPair
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPF_AJBGameInstance_C::PlayModeIsPair(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "PlayModeIsPair");

	Params::BPF_AJBGameInstance_C_PlayModeIsPair Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.PlayModeIsShopCompetition
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPF_AJBGameInstance_C::PlayModeIsShopCompetition(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "PlayModeIsShopCompetition");

	Params::BPF_AJBGameInstance_C_PlayModeIsShopCompetition Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPF_AJBGameInstance.BPF_AJBGameInstance_C.PlayModeIsSupportingCharacterAchievement
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPF_AJBGameInstance_C::PlayModeIsSupportingCharacterAchievement(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBGameInstance_C", "PlayModeIsSupportingCharacterAchievement");

	Params::BPF_AJBGameInstance_C_PlayModeIsSupportingCharacterAchievement Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

