#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StartPointChip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StartPointChip.BP_StartPointChip_C
// 0x0068 (0x0390 - 0x0328)
class ABP_StartPointChip_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               PS_PairChip;                                       // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSequenceComponent*                ActorSequence_PlayerDrop;                          // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_StartPointSelect_PlaceChip;                     // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_StartPointSelect_DropChip;                      // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Chip_New;                                          // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSequenceComponent*                ActorSequence_EnemyDrop;                           // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnLandingGround;                                   // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*               DMI_Chip_Index0;                                   // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLandedGround;                                    // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnLandingGround__DelegateSignature();
	void ExecuteUbergraph_BP_StartPointChip(int32 EntryPoint);
	void StopPairParticle();
	void PlayChipActionDrop(float RandomDurationMin, float RandomDurationMax);
	void UpdateChipPlayerIcon(const int32& RewardNo);
	void StopPlayerDropParticle();
	void Setup(const struct FST_ChipData& Data);
	void UpdateRotationYaw(float New_Rotation_Z__Yaw_);
	void PlayChipActionThrow();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StartPointChip_C">();
	}
	static class ABP_StartPointChip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StartPointChip_C>();
	}
};
static_assert(alignof(ABP_StartPointChip_C) == 0x000008, "Wrong alignment on ABP_StartPointChip_C");
static_assert(sizeof(ABP_StartPointChip_C) == 0x000390, "Wrong size on ABP_StartPointChip_C");
static_assert(offsetof(ABP_StartPointChip_C, UberGraphFrame) == 0x000328, "Member 'ABP_StartPointChip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, PS_PairChip) == 0x000330, "Member 'ABP_StartPointChip_C::PS_PairChip' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, Decal) == 0x000338, "Member 'ABP_StartPointChip_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, ActorSequence_PlayerDrop) == 0x000340, "Member 'ABP_StartPointChip_C::ActorSequence_PlayerDrop' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, PS_StartPointSelect_PlaceChip) == 0x000348, "Member 'ABP_StartPointChip_C::PS_StartPointSelect_PlaceChip' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, PS_StartPointSelect_DropChip) == 0x000350, "Member 'ABP_StartPointChip_C::PS_StartPointSelect_DropChip' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, Chip_New) == 0x000358, "Member 'ABP_StartPointChip_C::Chip_New' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, ActorSequence_EnemyDrop) == 0x000360, "Member 'ABP_StartPointChip_C::ActorSequence_EnemyDrop' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, DefaultSceneRoot) == 0x000368, "Member 'ABP_StartPointChip_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, OnLandingGround) == 0x000370, "Member 'ABP_StartPointChip_C::OnLandingGround' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, DMI_Chip_Index0) == 0x000380, "Member 'ABP_StartPointChip_C::DMI_Chip_Index0' has a wrong offset!");
static_assert(offsetof(ABP_StartPointChip_C, IsLandedGround) == 0x000388, "Member 'ABP_StartPointChip_C::IsLandedGround' has a wrong offset!");

}

