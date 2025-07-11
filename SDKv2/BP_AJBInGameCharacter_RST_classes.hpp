#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameCharacter_RST

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBInGameCharacter_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameCharacter_RST.BP_AJBInGameCharacter_RST_C
// 0x00A0 (0x16D0 - 0x1630)
class ABP_AJBInGameCharacter_RST_C final : public ABP_AJBInGameCharacter_C
{
public:
	uint8                                         Pad_1621[0x7];                                     // 0x1621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBInGameCharacter_RST_C;        // 0x1628(0x0008)(Transient, DuplicateTransient)
	class UBP_AJBMagneticSuture_C*                BP_AJBMagneticSuture;                              // 0x1630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BulletParticle5;                                   // 0x1638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BulletParticle4;                                   // 0x1640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BulletParticle3;                                   // 0x1648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BulletParticle2;                                   // 0x1650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BulletParticle1;                                   // 0x1658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bullet5;                                           // 0x1660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bullet4;                                           // 0x1668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bullet3;                                           // 0x1670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bullet2;                                           // 0x1678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bullet1;                                           // 0x1680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ShotPoint5;                                        // 0x1688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ShotPoint4;                                        // 0x1690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ShotPoint3;                                        // 0x1698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ShotPoint2;                                        // 0x16A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ShotPoint1;                                        // 0x16A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInvasionOfMetallicaSkill_C*      BP_AJBInvasionOfMetallicaSkill;                    // 0x16B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBIronsandCamouflageSkill_C*       BP_AJBIronsandCamouflageSkill;                     // 0x16B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBBladeGenerationSkill_C*          BP_AJBBladeGenerationSkill;                        // 0x16C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBAimRSTSkill_C*                   BP_AJBAimRSTSkill;                                 // 0x16C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBInGameCharacter_RST(int32 EntryPoint);
	void ChangeBladeVisibility(int32 Index_0, bool NewVisibility);
	void GetShotPointComponent(int32 Index_0, class USceneComponent** SceneComponent);
	void CheckActiveIronsandCamouflage(bool* bActive);
	void GetDummyShotLocation(struct FVector* Location);
	void ShouldShowNGPoint(bool* bResult);
	void GetShutTraceRadius(float* Radius);
	void GetShotLocation(bool bConsiderCharacterCapsuleRadius, const struct FGameplayTag& SkillTag, TArray<struct FVector>* Locations);
	void CheckLocallyControlled(bool* bLocallyControlled);
	void ReceiveTick(float DeltaSeconds);
	void ReleasedButton_ActiveBase();
	void PressedButton_ActiveBase();
	void ReleasedButton_Ultimate();
	void PressedButton_Ultimate();
	void PressedButton_ActiveSpecial();
	void ReleasedButton_Basic();
	void PressedButton_Basic();
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void OnGainSupportSkillServer();
	void UserConstructionScript();
	void OnBeforeInteract(bool* bShouldInteract);
	void CheckPossibleDash(bool* bPossible);
	void SetMeshRelatedThingsVisibility(bool bNewVisibility);
	void CheckAnySkillActiveOnTiltOneDash(bool* bAnySkillActive);
	void CheckPossibleDetection(bool* bPossibleDetection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameCharacter_RST_C">();
	}
	static class ABP_AJBInGameCharacter_RST_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameCharacter_RST_C>();
	}
};
static_assert(alignof(ABP_AJBInGameCharacter_RST_C) == 0x000010, "Wrong alignment on ABP_AJBInGameCharacter_RST_C");
static_assert(sizeof(ABP_AJBInGameCharacter_RST_C) == 0x0016D0, "Wrong size on ABP_AJBInGameCharacter_RST_C");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, UberGraphFrame_BP_AJBInGameCharacter_RST_C) == 0x001628, "Member 'ABP_AJBInGameCharacter_RST_C::UberGraphFrame_BP_AJBInGameCharacter_RST_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BP_AJBMagneticSuture) == 0x001630, "Member 'ABP_AJBInGameCharacter_RST_C::BP_AJBMagneticSuture' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BulletParticle5) == 0x001638, "Member 'ABP_AJBInGameCharacter_RST_C::BulletParticle5' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BulletParticle4) == 0x001640, "Member 'ABP_AJBInGameCharacter_RST_C::BulletParticle4' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BulletParticle3) == 0x001648, "Member 'ABP_AJBInGameCharacter_RST_C::BulletParticle3' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BulletParticle2) == 0x001650, "Member 'ABP_AJBInGameCharacter_RST_C::BulletParticle2' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BulletParticle1) == 0x001658, "Member 'ABP_AJBInGameCharacter_RST_C::BulletParticle1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, Bullet5) == 0x001660, "Member 'ABP_AJBInGameCharacter_RST_C::Bullet5' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, Bullet4) == 0x001668, "Member 'ABP_AJBInGameCharacter_RST_C::Bullet4' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, Bullet3) == 0x001670, "Member 'ABP_AJBInGameCharacter_RST_C::Bullet3' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, Bullet2) == 0x001678, "Member 'ABP_AJBInGameCharacter_RST_C::Bullet2' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, Bullet1) == 0x001680, "Member 'ABP_AJBInGameCharacter_RST_C::Bullet1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, ShotPoint5) == 0x001688, "Member 'ABP_AJBInGameCharacter_RST_C::ShotPoint5' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, ShotPoint4) == 0x001690, "Member 'ABP_AJBInGameCharacter_RST_C::ShotPoint4' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, ShotPoint3) == 0x001698, "Member 'ABP_AJBInGameCharacter_RST_C::ShotPoint3' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, ShotPoint2) == 0x0016A0, "Member 'ABP_AJBInGameCharacter_RST_C::ShotPoint2' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, ShotPoint1) == 0x0016A8, "Member 'ABP_AJBInGameCharacter_RST_C::ShotPoint1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BP_AJBInvasionOfMetallicaSkill) == 0x0016B0, "Member 'ABP_AJBInGameCharacter_RST_C::BP_AJBInvasionOfMetallicaSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BP_AJBIronsandCamouflageSkill) == 0x0016B8, "Member 'ABP_AJBInGameCharacter_RST_C::BP_AJBIronsandCamouflageSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BP_AJBBladeGenerationSkill) == 0x0016C0, "Member 'ABP_AJBInGameCharacter_RST_C::BP_AJBBladeGenerationSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_RST_C, BP_AJBAimRSTSkill) == 0x0016C8, "Member 'ABP_AJBInGameCharacter_RST_C::BP_AJBAimRSTSkill' has a wrong offset!");

}

