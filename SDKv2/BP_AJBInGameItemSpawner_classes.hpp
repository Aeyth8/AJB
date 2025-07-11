#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameItemSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameItemSpawner.BP_AJBInGameItemSpawner_C
// 0x0028 (0x0350 - 0x0328)
class ABP_AJBInGameItemSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameItem_C*                    SpawnedItem;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FixedItemToSpawn;                                  // 0x0340(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnZOffset;                                      // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugShowInfoOnEditor;                            // 0x034C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDebugShowInfoOnGame;                              // 0x034D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDebugShowVeryLargeArrow;                          // 0x034E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBInGameItemSpawner(int32 EntryPoint);
	void DebugShowText();
	void DebugShowArrow();
	void SpawnFixedItem();
	void ClearItem();
	void SpawnItem(class UClass* ItemClass);
	void UserConstructionScript();
	bool HasFixedItemToSpawn();
	bool IsItemValid();
	class UArrowComponent* GetOrCreateArrowComponent();
	class UTextRenderComponent* GetOrCreateTextRenderComponent();
	class ABP_AJBInGameItem_C* GetSpawnedItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameItemSpawner_C">();
	}
	static class ABP_AJBInGameItemSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameItemSpawner_C>();
	}
};
static_assert(alignof(ABP_AJBInGameItemSpawner_C) == 0x000008, "Wrong alignment on ABP_AJBInGameItemSpawner_C");
static_assert(sizeof(ABP_AJBInGameItemSpawner_C) == 0x000350, "Wrong size on ABP_AJBInGameItemSpawner_C");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, UberGraphFrame) == 0x000328, "Member 'ABP_AJBInGameItemSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, DefaultSceneRoot) == 0x000330, "Member 'ABP_AJBInGameItemSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, SpawnedItem) == 0x000338, "Member 'ABP_AJBInGameItemSpawner_C::SpawnedItem' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, FixedItemToSpawn) == 0x000340, "Member 'ABP_AJBInGameItemSpawner_C::FixedItemToSpawn' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, SpawnZOffset) == 0x000348, "Member 'ABP_AJBInGameItemSpawner_C::SpawnZOffset' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, bDebugShowInfoOnEditor) == 0x00034C, "Member 'ABP_AJBInGameItemSpawner_C::bDebugShowInfoOnEditor' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, bDebugShowInfoOnGame) == 0x00034D, "Member 'ABP_AJBInGameItemSpawner_C::bDebugShowInfoOnGame' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameItemSpawner_C, bDebugShowVeryLargeArrow) == 0x00034E, "Member 'ABP_AJBInGameItemSpawner_C::bDebugShowVeryLargeArrow' has a wrong offset!");

}

