#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AJBNOTICE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_AJBNOTICE.WB_AJBNOTICE_C
// 0x0018 (0x0220 - 0x0208)
class UWB_AJBNOTICE_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UProgressBar*                           ProgressBar_Wait;                                  // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         WaitTime;                                          // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_AJBNOTICE(int32 EntryPoint);
	void OnEnd_NOTICE(const struct FGameplayTag& NextState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnBegin_NOTICE(const struct FGameplayTag& PrevState);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AJBNOTICE_C">();
	}
	static class UWB_AJBNOTICE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AJBNOTICE_C>();
	}
};
static_assert(alignof(UWB_AJBNOTICE_C) == 0x000008, "Wrong alignment on UWB_AJBNOTICE_C");
static_assert(sizeof(UWB_AJBNOTICE_C) == 0x000220, "Wrong size on UWB_AJBNOTICE_C");
static_assert(offsetof(UWB_AJBNOTICE_C, UberGraphFrame) == 0x000208, "Member 'UWB_AJBNOTICE_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_AJBNOTICE_C, ProgressBar_Wait) == 0x000210, "Member 'UWB_AJBNOTICE_C::ProgressBar_Wait' has a wrong offset!");
static_assert(offsetof(UWB_AJBNOTICE_C, WaitTime) == 0x000218, "Member 'UWB_AJBNOTICE_C::WaitTime' has a wrong offset!");

}

