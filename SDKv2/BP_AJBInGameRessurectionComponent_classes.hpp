#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameRessurectionComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameRessurectionComponent.BP_AJBInGameRessurectionComponent_C
// 0x0048 (0x0138 - 0x00F0)
class UBP_AJBInGameRessurectionComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(Transient, DuplicateTransient)
	TArray<class ABP_AJBInGameStartPoint_C*>      StartPointCandidates;                              // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                StartLocationOffset;                               // 0x0108(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InvincibleTimeSecAfterResurrection;                // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           RessurectionVoiceTag;                              // 0x0118(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnable;                                           // 0x0120(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           DarbysVoice;                                       // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLastSurvivorSceneHasStarted;                      // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBInGameRessurectionComponent(int32 EntryPoint);
	void ROS_MovingIntoSafeArea(bool bDiedOfKillZ);
	void ROS_OnDie(bool bDiedOfKillZ);
	void ROC_Resurrection();
	void ROC_Comeback(bool bDiedOfKillZ);
	void OnEndLastSurvivorSceneCut1();
	void OnDie(bool bWillRessurect, bool bIsLastDefeated, bool bDiedOfKillZ);
	void PlayDarbysVoice(bool bDiedOfKillZ);
	void OnOpenTheGame();
	void ReceiveBeginPlay();
	void GetWorldLocationAndRotationForRestart(bool bDiedOfKillZ, struct FVector* Location, struct FRotator* Rotation, bool* bShouldTeleportToStartPoint, bool* bShouldLookAtTargetPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameRessurectionComponent_C">();
	}
	static class UBP_AJBInGameRessurectionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBInGameRessurectionComponent_C>();
	}
};
static_assert(alignof(UBP_AJBInGameRessurectionComponent_C) == 0x000008, "Wrong alignment on UBP_AJBInGameRessurectionComponent_C");
static_assert(sizeof(UBP_AJBInGameRessurectionComponent_C) == 0x000138, "Wrong size on UBP_AJBInGameRessurectionComponent_C");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, UberGraphFrame) == 0x0000F0, "Member 'UBP_AJBInGameRessurectionComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, StartPointCandidates) == 0x0000F8, "Member 'UBP_AJBInGameRessurectionComponent_C::StartPointCandidates' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, StartLocationOffset) == 0x000108, "Member 'UBP_AJBInGameRessurectionComponent_C::StartLocationOffset' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, InvincibleTimeSecAfterResurrection) == 0x000114, "Member 'UBP_AJBInGameRessurectionComponent_C::InvincibleTimeSecAfterResurrection' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, RessurectionVoiceTag) == 0x000118, "Member 'UBP_AJBInGameRessurectionComponent_C::RessurectionVoiceTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, bEnable) == 0x000120, "Member 'UBP_AJBInGameRessurectionComponent_C::bEnable' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, DarbysVoice) == 0x000128, "Member 'UBP_AJBInGameRessurectionComponent_C::DarbysVoice' has a wrong offset!");
static_assert(offsetof(UBP_AJBInGameRessurectionComponent_C, bLastSurvivorSceneHasStarted) == 0x000130, "Member 'UBP_AJBInGameRessurectionComponent_C::bLastSurvivorSceneHasStarted' has a wrong offset!");

}

