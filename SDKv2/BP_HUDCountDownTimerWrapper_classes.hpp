#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDCountDownTimerWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HUDCountDownTimerWrapper.BP_HUDCountDownTimerWrapper_C
// 0x0030 (0x0058 - 0x0028)
class UBP_HUDCountDownTimerWrapper_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(Transient, DuplicateTransient)
	float                                         MaxTime;                                           // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentTime;                                       // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SuspendRequestCount;                               // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBHUDBase*                            AJBHUDBase;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnCountExpired;                                    // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCountExpired__DelegateSignature();
	void ExecuteUbergraph_BP_HUDCountDownTimerWrapper(int32 EntryPoint);
	void SetVisibility(bool IsVisible);
	void RequestResume();
	void RequestSuspend();
	void UpdateTime(float InDeltaTime);
	void Init(float MaxTime_0, class AAJBHUDBase* AJBHUDBase_0);
	class AAJBHUDBase* GetAJBHUDBase();
	float GetMaxTime();
	float GetCurrentTime();
	bool IsSuspended();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HUDCountDownTimerWrapper_C">();
	}
	static class UBP_HUDCountDownTimerWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HUDCountDownTimerWrapper_C>();
	}
};
static_assert(alignof(UBP_HUDCountDownTimerWrapper_C) == 0x000008, "Wrong alignment on UBP_HUDCountDownTimerWrapper_C");
static_assert(sizeof(UBP_HUDCountDownTimerWrapper_C) == 0x000058, "Wrong size on UBP_HUDCountDownTimerWrapper_C");
static_assert(offsetof(UBP_HUDCountDownTimerWrapper_C, UberGraphFrame) == 0x000028, "Member 'UBP_HUDCountDownTimerWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HUDCountDownTimerWrapper_C, MaxTime) == 0x000030, "Member 'UBP_HUDCountDownTimerWrapper_C::MaxTime' has a wrong offset!");
static_assert(offsetof(UBP_HUDCountDownTimerWrapper_C, CurrentTime) == 0x000034, "Member 'UBP_HUDCountDownTimerWrapper_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(UBP_HUDCountDownTimerWrapper_C, SuspendRequestCount) == 0x000038, "Member 'UBP_HUDCountDownTimerWrapper_C::SuspendRequestCount' has a wrong offset!");
static_assert(offsetof(UBP_HUDCountDownTimerWrapper_C, AJBHUDBase) == 0x000040, "Member 'UBP_HUDCountDownTimerWrapper_C::AJBHUDBase' has a wrong offset!");
static_assert(offsetof(UBP_HUDCountDownTimerWrapper_C, OnCountExpired) == 0x000048, "Member 'UBP_HUDCountDownTimerWrapper_C::OnCountExpired' has a wrong offset!");

}

