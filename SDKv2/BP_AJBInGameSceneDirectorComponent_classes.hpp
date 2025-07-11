#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameSceneDirectorComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "E_LastSurvivorCut_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameSceneDirectorComponent.BP_AJBInGameSceneDirectorComponent_C
// 0x00A0 (0x0190 - 0x00F0)
class UBP_AJBInGameSceneDirectorComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(Transient, DuplicateTransient)
	float                                         CurrentCutRealTimeSec;                             // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RealDeltaTimeSec;                                  // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CurrentCut;                                        // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              BeforeTickDateTime;                                // 0x0108(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class ABP_AJBInGameSceneCamera_C*> SceneCameraMap;                                    // 0x0110(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_AJBInGameSceneCamera_C*             CurrentSceneCamera;                                // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnBeginCut;                                        // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnEndCut;                                          // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                         BeforeCut;                                         // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBeginCut__DelegateSignature(uint8 CurrentCut_0, uint8 BeforeCut_0);
	void OnEndCut__DelegateSignature(uint8 CurrentCut_0, uint8 NextCut);
	void ExecuteUbergraph_BP_AJBInGameSceneDirectorComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void CutEnd(uint8 CurrentCut_0, uint8 NextCut);
	void CutBegin(uint8 CurrentCut_0, uint8 BeforeCut_0);
	void ChangeCut(E_LastSurvivorCut NextCut);
	void CutTick(uint8 Cut);
	void UpdateRealDeltaTime();
	void SwitchSceneCamera(const struct FGameplayTag& SceneCameraTag, const class UClass* SceneCameraClass, bool bCreateCameraWhenIsNotFound, bool* bSwitched, class ABP_AJBInGameSceneCamera_C** SceneCamera);
	void CreateSceneCamera(const struct FGameplayTag& SceneCameraTag, class UClass* SceneCameraClass, class ABP_AJBInGameSceneCamera_C** Camera);
	void MoveCamera(float Rate);
	void EnableTargetFollowing(bool bLookAtTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameSceneDirectorComponent_C">();
	}
	static class UBP_AJBInGameSceneDirectorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBInGameSceneDirectorComponent_C>();
	}
};
static_assert(alignof(UBP_AJBInGameSceneDirectorComponent_C) == 0x000008, "Wrong alignment on UBP_AJBInGameSceneDirectorComponent_C");
static_assert(sizeof(UBP_AJBInGameSceneDirectorComponent_C) == 0x000190, "Wrong size on UBP_AJBInGameSceneDirectorComponent_C");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, UberGraphFrame) == 0x0000F0, "Member 'UBP_AJBInGameSceneDirectorComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, CurrentCutRealTimeSec) == 0x0000F8, "Member 'UBP_AJBInGameSceneDirectorComponent_C::CurrentCutRealTimeSec' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, RealDeltaTimeSec) == 0x0000FC, "Member 'UBP_AJBInGameSceneDirectorComponent_C::RealDeltaTimeSec' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, CurrentCut) == 0x000100, "Member 'UBP_AJBInGameSceneDirectorComponent_C::CurrentCut' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, BeforeTickDateTime) == 0x000108, "Member 'UBP_AJBInGameSceneDirectorComponent_C::BeforeTickDateTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, SceneCameraMap) == 0x000110, "Member 'UBP_AJBInGameSceneDirectorComponent_C::SceneCameraMap' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, CurrentSceneCamera) == 0x000160, "Member 'UBP_AJBInGameSceneDirectorComponent_C::CurrentSceneCamera' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, OnBeginCut) == 0x000168, "Member 'UBP_AJBInGameSceneDirectorComponent_C::OnBeginCut' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, OnEndCut) == 0x000178, "Member 'UBP_AJBInGameSceneDirectorComponent_C::OnEndCut' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameSceneDirectorComponent_C, BeforeCut) == 0x000188, "Member 'UBP_AJBInGameSceneDirectorComponent_C::BeforeCut' has a wrong offset!");

}

