#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AJBInGameGionEffect

#include "Basic.hpp"

#include "E_GionSpawnedSpace_structs.hpp"
#include "Engine_structs.hpp"
#include "E_GionState_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_AJBInGameGionEffect.WB_AJBInGameGionEffect_C
// 0x0090 (0x0298 - 0x0208)
class UWB_AJBInGameGionEffect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade_OutAnim;                                      // 0x0210(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Shake_LoopAnim;                                    // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade_InAnim;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EffectPanel;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsOwner;                                          // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFriend;                                         // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_GionSpawnedSpace                            SpanwedSpaceInOwnersEnv;                           // 0x0232(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GionSpawnedSpace                            SpanwedSpaceInNotOwnersEnv;                        // 0x0233(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseSize;                                          // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnFinishEffect;                                    // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_AJBInGameGion_C*                    GionActor;                                         // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GionState                                   GionState;                                         // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetAnimation*>               InAnimations;                                      // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWidgetAnimation*>               LoopAnimations;                                    // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWidgetAnimation*>               OutAnimations;                                     // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                           TimerHandleOnFinished;                             // 0x0288(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                 Owner;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinishEffect__DelegateSignature();
	void ExecuteUbergraph_WB_AJBInGameGionEffect(int32 EntryPoint);
	void OnActiveEffect(bool bIsOwner_0, class AActor* Owner_0, bool bIsFriend_0, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv_0, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv_0, class ABP_AJBInGameGion_C* GionActor_0);
	void Construct();
	void OnFinishIdleAnim();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void CanActiveEffect(bool* Result);
	void IsNeedUpdatePosition(bool* Result);
	void SetEffectPositionAndScale(const struct FVector2D& Translation, float Scale);
	void ChangeState(E_GionState NextState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AJBInGameGionEffect_C">();
	}
	static class UWB_AJBInGameGionEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AJBInGameGionEffect_C>();
	}
};
static_assert(alignof(UWB_AJBInGameGionEffect_C) == 0x000008, "Wrong alignment on UWB_AJBInGameGionEffect_C");
static_assert(sizeof(UWB_AJBInGameGionEffect_C) == 0x000298, "Wrong size on UWB_AJBInGameGionEffect_C");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, UberGraphFrame) == 0x000208, "Member 'UWB_AJBInGameGionEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, Fade_OutAnim) == 0x000210, "Member 'UWB_AJBInGameGionEffect_C::Fade_OutAnim' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, Shake_LoopAnim) == 0x000218, "Member 'UWB_AJBInGameGionEffect_C::Shake_LoopAnim' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, Fade_InAnim) == 0x000220, "Member 'UWB_AJBInGameGionEffect_C::Fade_InAnim' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, EffectPanel) == 0x000228, "Member 'UWB_AJBInGameGionEffect_C::EffectPanel' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, bIsOwner) == 0x000230, "Member 'UWB_AJBInGameGionEffect_C::bIsOwner' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, bIsFriend) == 0x000231, "Member 'UWB_AJBInGameGionEffect_C::bIsFriend' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, SpanwedSpaceInOwnersEnv) == 0x000232, "Member 'UWB_AJBInGameGionEffect_C::SpanwedSpaceInOwnersEnv' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, SpanwedSpaceInNotOwnersEnv) == 0x000233, "Member 'UWB_AJBInGameGionEffect_C::SpanwedSpaceInNotOwnersEnv' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, BaseSize) == 0x000234, "Member 'UWB_AJBInGameGionEffect_C::BaseSize' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, OnFinishEffect) == 0x000238, "Member 'UWB_AJBInGameGionEffect_C::OnFinishEffect' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, GionActor) == 0x000248, "Member 'UWB_AJBInGameGionEffect_C::GionActor' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, GionState) == 0x000250, "Member 'UWB_AJBInGameGionEffect_C::GionState' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, InAnimations) == 0x000258, "Member 'UWB_AJBInGameGionEffect_C::InAnimations' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, LoopAnimations) == 0x000268, "Member 'UWB_AJBInGameGionEffect_C::LoopAnimations' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, OutAnimations) == 0x000278, "Member 'UWB_AJBInGameGionEffect_C::OutAnimations' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, TimerHandleOnFinished) == 0x000288, "Member 'UWB_AJBInGameGionEffect_C::TimerHandleOnFinished' has a wrong offset!");
static_assert(offsetof(UWB_AJBInGameGionEffect_C, Owner) == 0x000290, "Member 'UWB_AJBInGameGionEffect_C::Owner' has a wrong offset!");

}

