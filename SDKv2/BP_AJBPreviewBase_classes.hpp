#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBPreviewBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBPreviewBase.BP_AJBPreviewBase_C
// 0x0040 (0x0368 - 0x0328)
class ABP_AJBPreviewBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MT_OK;                                             // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MT_NG;                                             // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_OK;                                            // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_NG;                                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBPreviewBase(int32 EntryPoint);
	void ChangeVisual(bool bPossiblePlacement);
	void ReceiveBeginPlay();
	void SetVisibility(bool NewVisibility);
	void UserConstructionScript();
	void ChangeMaterial(bool bPossiblePlacement);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBPreviewBase_C">();
	}
	static class ABP_AJBPreviewBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBPreviewBase_C>();
	}
};
static_assert(alignof(ABP_AJBPreviewBase_C) == 0x000008, "Wrong alignment on ABP_AJBPreviewBase_C");
static_assert(sizeof(ABP_AJBPreviewBase_C) == 0x000368, "Wrong size on ABP_AJBPreviewBase_C");
static_assert(offsetof(ABP_AJBPreviewBase_C, UberGraphFrame) == 0x000328, "Member 'ABP_AJBPreviewBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, SkeletalMesh) == 0x000330, "Member 'ABP_AJBPreviewBase_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, StaticMesh) == 0x000338, "Member 'ABP_AJBPreviewBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, DefaultSceneRoot) == 0x000340, "Member 'ABP_AJBPreviewBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, MT_OK) == 0x000348, "Member 'ABP_AJBPreviewBase_C::MT_OK' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, MT_NG) == 0x000350, "Member 'ABP_AJBPreviewBase_C::MT_NG' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, DMI_OK) == 0x000358, "Member 'ABP_AJBPreviewBase_C::DMI_OK' has a wrong offset!");
static_assert(offsetof(ABP_AJBPreviewBase_C, DMI_NG) == 0x000360, "Member 'ABP_AJBPreviewBase_C::DMI_NG' has a wrong offset!");

}

