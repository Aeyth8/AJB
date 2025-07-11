#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EmptyStar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_EmptyStar.WB_EmptyStar_C
// 0x0018 (0x0220 - 0x0208)
class UWB_EmptyStar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              AJBImage_EmptyStar;                                // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_FillStar;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_EmptyStar(int32 EntryPoint);
	void UpdateFill(bool IsFill);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_EmptyStar_C">();
	}
	static class UWB_EmptyStar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_EmptyStar_C>();
	}
};
static_assert(alignof(UWB_EmptyStar_C) == 0x000008, "Wrong alignment on UWB_EmptyStar_C");
static_assert(sizeof(UWB_EmptyStar_C) == 0x000220, "Wrong size on UWB_EmptyStar_C");
static_assert(offsetof(UWB_EmptyStar_C, UberGraphFrame) == 0x000208, "Member 'UWB_EmptyStar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_EmptyStar_C, AJBImage_EmptyStar) == 0x000210, "Member 'UWB_EmptyStar_C::AJBImage_EmptyStar' has a wrong offset!");
static_assert(offsetof(UWB_EmptyStar_C, AJBImage_FillStar) == 0x000218, "Member 'UWB_EmptyStar_C::AJBImage_FillStar' has a wrong offset!");

}

