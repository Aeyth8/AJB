#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ChallengeEventProgressHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ChallengeEventProgressHeader.WB_ChallengeEventProgressHeader_C
// 0x0068 (0x02B0 - 0x0248)
class UWB_ChallengeEventProgressHeader_C final : public UAJBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UAJBTextBlock*                          TextEventName;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FChallengeEventProgressContext         ProgressContext;                                   // 0x0258(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WB_ChallengeEventProgressHeader(int32 EntryPoint);
	void Setup(const struct FChallengeEventProgressContext& ProgressContext_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ChallengeEventProgressHeader_C">();
	}
	static class UWB_ChallengeEventProgressHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ChallengeEventProgressHeader_C>();
	}
};
static_assert(alignof(UWB_ChallengeEventProgressHeader_C) == 0x000008, "Wrong alignment on UWB_ChallengeEventProgressHeader_C");
static_assert(sizeof(UWB_ChallengeEventProgressHeader_C) == 0x0002B0, "Wrong size on UWB_ChallengeEventProgressHeader_C");
static_assert(offsetof(UWB_ChallengeEventProgressHeader_C, UberGraphFrame) == 0x000248, "Member 'UWB_ChallengeEventProgressHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ChallengeEventProgressHeader_C, TextEventName) == 0x000250, "Member 'UWB_ChallengeEventProgressHeader_C::TextEventName' has a wrong offset!");
static_assert(offsetof(UWB_ChallengeEventProgressHeader_C, ProgressContext) == 0x000258, "Member 'UWB_ChallengeEventProgressHeader_C::ProgressContext' has a wrong offset!");

}

