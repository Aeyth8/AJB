#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_InteractInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_InteractInterface.BI_InteractInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBI_InteractInterface_C final : public IInterface
{
public:
	void OnInteract(class AActor* InteractActor);
	bool Interactable(class ABP_AJBInGameCharacter_C* Character, float TraceLength);
	bool InteractInstantly(class ABP_AJBInGameCharacter_C* Character);
	void OnROSInteract(class AActor* InteractingActor, bool ServerIsInteractingPlayer);
	void OnLocalInteract(class AActor* InteractingActor, bool* bSuccess);
	void TryGetInteractableText(class ABP_AJBInGameCharacter_C* OperatorCharacter, bool* bSuccess, class FText* InteractMessage);
	void OnSucceededLongPress_Local();
	void CheckErrorCondition(bool* bErrorCondition, uint8* ErrorType);
	void GetInteractState(uint8* InteractState);
	void GetInteractPriority(int32* Priority);
	void GetInteractBoundForCulling(class AActor* InteractingActor, struct FVector* Center, float* Radius);
	bool IfNeedsExclusiveInteractStrictly();
	bool IfBlockInteract(class AActor* InteractingActor);
	void OnInteractionBlocked(class AActor* InteractingActor);
	void ShouldPrioritizedThanPrepaidSkillCancel(bool* bShouldPriorirized);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_InteractInterface_C">();
	}
	static class IBI_InteractInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_InteractInterface_C>();
	}
};
static_assert(alignof(IBI_InteractInterface_C) == 0x000008, "Wrong alignment on IBI_InteractInterface_C");
static_assert(sizeof(IBI_InteractInterface_C) == 0x000028, "Wrong size on IBI_InteractInterface_C");

}

