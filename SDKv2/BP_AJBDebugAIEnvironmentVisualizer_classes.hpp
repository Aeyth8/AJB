#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBDebugAIEnvironmentVisualizer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBDebugAIEnvironmentVisualizer.BP_AJBDebugAIEnvironmentVisualizer_C
// 0x0038 (0x0360 - 0x0328)
class ABP_AJBDebugAIEnvironmentVisualizer_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowDebugStatus;                                  // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339[0x3];                                      // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SaferAreaRadius;                                   // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SaferAreaLocation;                                 // 0x0340(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ServerSafeAreaRadius;                              // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ServerSafeAreaLocation;                            // 0x0350(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBDebugAIEnvironmentVisualizer(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetShowDebugStatus(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBDebugAIEnvironmentVisualizer_C">();
	}
	static class ABP_AJBDebugAIEnvironmentVisualizer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBDebugAIEnvironmentVisualizer_C>();
	}
};
static_assert(alignof(ABP_AJBDebugAIEnvironmentVisualizer_C) == 0x000008, "Wrong alignment on ABP_AJBDebugAIEnvironmentVisualizer_C");
static_assert(sizeof(ABP_AJBDebugAIEnvironmentVisualizer_C) == 0x000360, "Wrong size on ABP_AJBDebugAIEnvironmentVisualizer_C");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, UberGraphFrame) == 0x000328, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, DefaultSceneRoot) == 0x000330, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, bShowDebugStatus) == 0x000338, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::bShowDebugStatus' has a wrong offset!");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, SaferAreaRadius) == 0x00033C, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::SaferAreaRadius' has a wrong offset!");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, SaferAreaLocation) == 0x000340, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::SaferAreaLocation' has a wrong offset!");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, ServerSafeAreaRadius) == 0x00034C, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::ServerSafeAreaRadius' has a wrong offset!");
static_assert(offsetof(ABP_AJBDebugAIEnvironmentVisualizer_C, ServerSafeAreaLocation) == 0x000350, "Member 'ABP_AJBDebugAIEnvironmentVisualizer_C::ServerSafeAreaLocation' has a wrong offset!");

}

