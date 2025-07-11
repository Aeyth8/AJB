#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBFirstBombTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBPlacementTrapBase_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBFirstBombTrap.BP_AJBFirstBombTrap_C
// 0x0070 (0x04B0 - 0x0440)
class ABP_AJBFirstBombTrap_C final : public ABP_AJBPlacementTrapBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBFirstBombTrap_C;              // 0x0440(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_FX_Common_Plane1;                               // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_HDR_PinkDarkTrap_Appear;                        // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxCollision;                                      // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Opacity_3793D6F24A5082F04BC588A51D234895; // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3793D6F24A5082F04BC588A51D234895; // 0x0474(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_475[0x3];                                      // 0x0475(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CacheFileName;                                     // 0x0480(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         SphereRadius;                                      // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugDrawSphere;                                  // 0x048C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D[0x3];                                      // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DecalDMI;                                          // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DecalMaxValue;                                     // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DecalScalaraParamName_Opacity;                     // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PlaneDMI;                                          // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBFirstBombTrap(int32 EntryPoint);
	void OnSetViewTargetToNewSpectator_Local();
	void PreInitializeComponentsBP();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Timeline_0__NewTrack_3__EventFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void OnRep_CacheFileName();
	void ChangeDecalEnable(bool bEnable);
	void UpdateDecalEnableWhichOne();
	void ChangeCollisionEnable(bool bEnable);
	void CheckCollisionEnable(bool* bEnable);
	void OnBeginState_Prepare_OneShot();
	void OnBeginState_Standby();
	void OnBeginState_Triggering_OneShot();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBFirstBombTrap_C">();
	}
	static class ABP_AJBFirstBombTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBFirstBombTrap_C>();
	}
};
static_assert(alignof(ABP_AJBFirstBombTrap_C) == 0x000008, "Wrong alignment on ABP_AJBFirstBombTrap_C");
static_assert(sizeof(ABP_AJBFirstBombTrap_C) == 0x0004B0, "Wrong size on ABP_AJBFirstBombTrap_C");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, UberGraphFrame_BP_AJBFirstBombTrap_C) == 0x000440, "Member 'ABP_AJBFirstBombTrap_C::UberGraphFrame_BP_AJBFirstBombTrap_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, SM_FX_Common_Plane1) == 0x000448, "Member 'ABP_AJBFirstBombTrap_C::SM_FX_Common_Plane1' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, ParticleSystem) == 0x000450, "Member 'ABP_AJBFirstBombTrap_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, PS_HDR_PinkDarkTrap_Appear) == 0x000458, "Member 'ABP_AJBFirstBombTrap_C::PS_HDR_PinkDarkTrap_Appear' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, Decal) == 0x000460, "Member 'ABP_AJBFirstBombTrap_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, BoxCollision) == 0x000468, "Member 'ABP_AJBFirstBombTrap_C::BoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, Timeline_0_Opacity_3793D6F24A5082F04BC588A51D234895) == 0x000470, "Member 'ABP_AJBFirstBombTrap_C::Timeline_0_Opacity_3793D6F24A5082F04BC588A51D234895' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, Timeline_0__Direction_3793D6F24A5082F04BC588A51D234895) == 0x000474, "Member 'ABP_AJBFirstBombTrap_C::Timeline_0__Direction_3793D6F24A5082F04BC588A51D234895' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, Timeline_0) == 0x000478, "Member 'ABP_AJBFirstBombTrap_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, CacheFileName) == 0x000480, "Member 'ABP_AJBFirstBombTrap_C::CacheFileName' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, SphereRadius) == 0x000488, "Member 'ABP_AJBFirstBombTrap_C::SphereRadius' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, bDebugDrawSphere) == 0x00048C, "Member 'ABP_AJBFirstBombTrap_C::bDebugDrawSphere' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, DecalDMI) == 0x000490, "Member 'ABP_AJBFirstBombTrap_C::DecalDMI' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, DecalMaxValue) == 0x000498, "Member 'ABP_AJBFirstBombTrap_C::DecalMaxValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, DecalScalaraParamName_Opacity) == 0x0004A0, "Member 'ABP_AJBFirstBombTrap_C::DecalScalaraParamName_Opacity' has a wrong offset!");
static_assert(offsetof(ABP_AJBFirstBombTrap_C, PlaneDMI) == 0x0004A8, "Member 'ABP_AJBFirstBombTrap_C::PlaneDMI' has a wrong offset!");

}

