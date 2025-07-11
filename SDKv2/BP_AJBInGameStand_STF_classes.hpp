#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameStand_STF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBInGameStand_classes.hpp"
#include "E_StencilDigit_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameStand_STF.BP_AJBInGameStand_STF_C
// 0x00B8 (0x0588 - 0x04D0)
class ABP_AJBInGameStand_STF_C final : public ABP_AJBInGameStand_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBInGameStand_STF_C;            // 0x04D0(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               Head;                                              // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StoneHookShotPoint;                                // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StringJailShotPoint;                               // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               R_Thigh;                                           // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L_Thigh;                                           // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               R_Hand;                                            // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L_Hand;                                            // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               R_Forearm;                                         // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L_Forearm;                                         // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               R_UpperArm;                                        // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L_UpperArm;                                        // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ZipRushArmRoot_L;                                  // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ZipRushArmRoot_R;                                  // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MiddleRange_Attack;                                // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameStandPart_STFArm_C*        RepLaunchArm_R;                                    // 0x0548(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LaunchPart_PairOfOne_C*             Rep_LaunchPart_R;                                  // 0x0550(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameStandPart_STFArm_C*        RepLaunchArm_L;                                    // 0x0558(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LaunchPart_PairOfOne_C*             Rep_LaunchPart_L;                                  // 0x0560(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCurrentAttackArmIsR;                              // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameStandPart_STF_Net_C*       RepLaunchNet;                                      // 0x0570(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LaunchPart_C*                       RepLaunchPartNet;                                  // 0x0578(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameStandPart_STF_String_C*    RepLaunchString;                                   // 0x0580(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBInGameStand_STF(int32 EntryPoint);
	void OnCompleted_C8501FA44DFD3B3E50F8A5B29FBC4659(class FName NotifyName);
	void OnBlendOut_C8501FA44DFD3B3E50F8A5B29FBC4659(class FName NotifyName);
	void OnInterrupted_C8501FA44DFD3B3E50F8A5B29FBC4659(class FName NotifyName);
	void OnNotifyBegin_C8501FA44DFD3B3E50F8A5B29FBC4659(class FName NotifyName);
	void OnNotifyEnd_C8501FA44DFD3B3E50F8A5B29FBC4659(class FName NotifyName);
	void GetDamageActorTargetLocation(struct FVector* Location);
	void GetAttackRange(int32 CloseRangeSkillNo, float* AttackRange);
	void GetAttackCollisionRadius(int32 CloseRangeSkillNo, float* Radius);
	void GetAttackLocation(const struct FVector& TargetLocation, struct FVector* Location);
	void GetStandAttackOffset(int32 CloseRangeSkillNo, struct FVector* StandAttackOffset);
	void GetLaunchedActorHomeLocation(int32 CloseRangeSkillNo, struct FVector* Location);
	void GetCloseRangeLaunchedActor(int32 CloseRangeSkillNo, class AActor** LaunchedActor);
	void ChangeSkin(const class FString& StandName, uint8 SkinID);
	void CleanUp(bool bShouldDestroy);
	void PlayAppearMontage();
	void StandSetup();
	void UserConstructionScript();
	void GetPrimitivesToChangeStencil(E_StencilDigit StencilDigit, TArray<class UPrimitiveComponent*>* PrimitiveComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameStand_STF_C">();
	}
	static class ABP_AJBInGameStand_STF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameStand_STF_C>();
	}
};
static_assert(alignof(ABP_AJBInGameStand_STF_C) == 0x000008, "Wrong alignment on ABP_AJBInGameStand_STF_C");
static_assert(sizeof(ABP_AJBInGameStand_STF_C) == 0x000588, "Wrong size on ABP_AJBInGameStand_STF_C");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, UberGraphFrame_BP_AJBInGameStand_STF_C) == 0x0004D0, "Member 'ABP_AJBInGameStand_STF_C::UberGraphFrame_BP_AJBInGameStand_STF_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, Head) == 0x0004D8, "Member 'ABP_AJBInGameStand_STF_C::Head' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, StoneHookShotPoint) == 0x0004E0, "Member 'ABP_AJBInGameStand_STF_C::StoneHookShotPoint' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, StringJailShotPoint) == 0x0004E8, "Member 'ABP_AJBInGameStand_STF_C::StringJailShotPoint' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, R_Thigh) == 0x0004F0, "Member 'ABP_AJBInGameStand_STF_C::R_Thigh' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, L_Thigh) == 0x0004F8, "Member 'ABP_AJBInGameStand_STF_C::L_Thigh' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, R_Hand) == 0x000500, "Member 'ABP_AJBInGameStand_STF_C::R_Hand' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, L_Hand) == 0x000508, "Member 'ABP_AJBInGameStand_STF_C::L_Hand' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, R_Forearm) == 0x000510, "Member 'ABP_AJBInGameStand_STF_C::R_Forearm' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, L_Forearm) == 0x000518, "Member 'ABP_AJBInGameStand_STF_C::L_Forearm' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, R_UpperArm) == 0x000520, "Member 'ABP_AJBInGameStand_STF_C::R_UpperArm' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, L_UpperArm) == 0x000528, "Member 'ABP_AJBInGameStand_STF_C::L_UpperArm' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, ZipRushArmRoot_L) == 0x000530, "Member 'ABP_AJBInGameStand_STF_C::ZipRushArmRoot_L' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, ZipRushArmRoot_R) == 0x000538, "Member 'ABP_AJBInGameStand_STF_C::ZipRushArmRoot_R' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, MiddleRange_Attack) == 0x000540, "Member 'ABP_AJBInGameStand_STF_C::MiddleRange_Attack' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, RepLaunchArm_R) == 0x000548, "Member 'ABP_AJBInGameStand_STF_C::RepLaunchArm_R' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, Rep_LaunchPart_R) == 0x000550, "Member 'ABP_AJBInGameStand_STF_C::Rep_LaunchPart_R' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, RepLaunchArm_L) == 0x000558, "Member 'ABP_AJBInGameStand_STF_C::RepLaunchArm_L' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, Rep_LaunchPart_L) == 0x000560, "Member 'ABP_AJBInGameStand_STF_C::Rep_LaunchPart_L' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, bCurrentAttackArmIsR) == 0x000568, "Member 'ABP_AJBInGameStand_STF_C::bCurrentAttackArmIsR' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, RepLaunchNet) == 0x000570, "Member 'ABP_AJBInGameStand_STF_C::RepLaunchNet' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, RepLaunchPartNet) == 0x000578, "Member 'ABP_AJBInGameStand_STF_C::RepLaunchPartNet' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStand_STF_C, RepLaunchString) == 0x000580, "Member 'ABP_AJBInGameStand_STF_C::RepLaunchString' has a wrong offset!");

}

