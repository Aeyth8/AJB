#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_AJBWwiseFunctionLibrary

#include "Basic.hpp"

#include "BPF_AJBWwiseFunctionLibrary_classes.hpp"
#include "BPF_AJBWwiseFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventOnLocal
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAutoPost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAutoDestroy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     AkComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::RequestWwiseEventOnLocal(const struct FGameplayTag& EventTag, const struct FVector& Location, bool bAutoPost, bool bAutoDestroy, class UObject* __WorldContext, class UAkComponent** AkComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "RequestWwiseEventOnLocal");

	Params::BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.Location = std::move(Location);
	Parms.bAutoPost = bAutoPost;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AkComponent != nullptr)
		*AkComponent = Parms.AkComponent;
}


// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventAttachedOnLocal
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAutoPost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAutoDestroy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bKeepRelative                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  AttachToComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     AkComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::RequestWwiseEventAttachedOnLocal(const struct FGameplayTag& EventTag, const struct FVector& Location, bool bAutoPost, bool bAutoDestroy, bool bKeepRelative, class USceneComponent* AttachToComponent, class UObject* __WorldContext, class UAkComponent** AkComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "RequestWwiseEventAttachedOnLocal");

	Params::BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.Location = std::move(Location);
	Parms.bAutoPost = bAutoPost;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bKeepRelative = bKeepRelative;
	Parms.AttachToComponent = AttachToComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AkComponent != nullptr)
		*AkComponent = Parms.AkComponent;
}


// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventOnAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::RequestWwiseEventOnAll(const struct FGameplayTag& EventTag, const struct FVector& Location, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "RequestWwiseEventOnAll");

	Params::BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventAttachedOnAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bKeepRelative                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  SceneComponentToAttach                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::RequestWwiseEventAttachedOnAll(const struct FGameplayTag& EventTag, const struct FVector& Location, bool bKeepRelative, class USceneComponent* SceneComponentToAttach, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "RequestWwiseEventAttachedOnAll");

	Params::BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.Location = std::move(Location);
	Parms.bKeepRelative = bKeepRelative;
	Parms.SceneComponentToAttach = SceneComponentToAttach;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseBGM_Event
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldPlayFromStart                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::RequestWwiseBGM_Event(const struct FGameplayTag& EventTag, bool bShouldPlayFromStart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "RequestWwiseBGM_Event");

	Params::BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.bShouldPlayFromStart = bShouldPlayFromStart;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseBGM_StopEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::RequestWwiseBGM_StopEvent(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "RequestWwiseBGM_StopEvent");

	Params::BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.ChangeWwisePlayMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WwiseManagerPlayMode                  PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_AJBWwiseFunctionLibrary_C::ChangeWwisePlayMode(E_WwiseManagerPlayMode PlayMode, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_AJBWwiseFunctionLibrary_C", "ChangeWwisePlayMode");

	Params::BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode Parms{};

	Parms.PlayMode = PlayMode;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

