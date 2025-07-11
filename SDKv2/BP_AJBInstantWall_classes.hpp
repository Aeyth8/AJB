#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInstantWall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BP_AJBPlacementDynamicBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInstantWall.BP_AJBInstantWall_C
// 0x0028 (0x0438 - 0x0410)
class ABP_AJBInstantWall_C final : public ABP_AJBPlacementDynamicBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBInstantWall_C;                // 0x0410(0x0008)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CollisionMesh;                                     // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         StepZScale;                                        // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42C[0x4];                                      // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           BreakingSETag;                                     // 0x0430(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBInstantWall(int32 EntryPoint);
	void UpdateCollisionMesh();
	void ReceiveBeginPlay();
	void OnBeginState_Clearing_OneShot();
	void OnBeginState_Standby();
	void OnBeginState_Clearing();
	void StateTick_Standby(float DeltaSeconds);
	void StateTick_Prepare(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInstantWall_C">();
	}
	static class ABP_AJBInstantWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInstantWall_C>();
	}
};
static_assert(alignof(ABP_AJBInstantWall_C) == 0x000008, "Wrong alignment on ABP_AJBInstantWall_C");
static_assert(sizeof(ABP_AJBInstantWall_C) == 0x000438, "Wrong size on ABP_AJBInstantWall_C");
static_assert(offsetof(ABP_AJBInstantWall_C, UberGraphFrame_BP_AJBInstantWall_C) == 0x000410, "Member 'ABP_AJBInstantWall_C::UberGraphFrame_BP_AJBInstantWall_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBInstantWall_C, Mesh) == 0x000418, "Member 'ABP_AJBInstantWall_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_AJBInstantWall_C, CollisionMesh) == 0x000420, "Member 'ABP_AJBInstantWall_C::CollisionMesh' has a wrong offset!");
static_assert(offsetof(ABP_AJBInstantWall_C, StepZScale) == 0x000428, "Member 'ABP_AJBInstantWall_C::StepZScale' has a wrong offset!");
static_assert(offsetof(ABP_AJBInstantWall_C, BreakingSETag) == 0x000430, "Member 'ABP_AJBInstantWall_C::BreakingSETag' has a wrong offset!");

}

