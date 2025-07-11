#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameIndoorManageComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.ExecuteUbergraph_BP_AJBInGameIndoorManageComponent
// 0x0020 (0x0020 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UPrimitiveComponent*              K2Node_CustomEvent_volume1;                        // 0x0008(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UPrimitiveComponent*              K2Node_CustomEvent_volume;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent) == 0x000020, "Wrong size on BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent, EntryPoint) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent, K2Node_CustomEvent_volume1) == 0x000008, "Member 'BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent::K2Node_CustomEvent_volume1' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent, K2Node_CustomEvent_volume) == 0x000010, "Member 'BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent::K2Node_CustomEvent_volume' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent, CallFunc_Array_RemoveItem_ReturnValue) == 0x000018, "Member 'BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent, CallFunc_Array_AddUnique_ReturnValue) == 0x00001C, "Member 'BP_AJBInGameIndoorManageComponent_C_ExecuteUbergraph_BP_AJBInGameIndoorManageComponent::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.OnEndIndoor
// 0x0008 (0x0008 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_OnEndIndoor final
{
public:
	const class UPrimitiveComponent*              Volume;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_OnEndIndoor) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_OnEndIndoor");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_OnEndIndoor) == 0x000008, "Wrong size on BP_AJBInGameIndoorManageComponent_C_OnEndIndoor");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_OnEndIndoor, Volume) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_OnEndIndoor::Volume' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.OnBeginIndoor
// 0x0008 (0x0008 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor final
{
public:
	const class UPrimitiveComponent*              Volume;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor) == 0x000008, "Wrong size on BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor, Volume) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_OnBeginIndoor::Volume' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.IsInDoor
// 0x0002 (0x0002 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_IsInDoor final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_IsInDoor) == 0x000001, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_IsInDoor");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_IsInDoor) == 0x000002, "Wrong size on BP_AJBInGameIndoorManageComponent_C_IsInDoor");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoor, Result) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoor::Result' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoor, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000001, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoor::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.IsSameRoom
// 0x0050 (0x0050 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_IsSameRoom final
{
public:
	class AActor*                                 CheckActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsRoomTarget;                                     // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsRoomSelf;                                       // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBInGameIndoorManageComponent_C*   CheckComponent;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBInGameIndoorManageComponent_C*   CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInDoor_Result;                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInDoor_Result1;                         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_IsSameRoom");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom) == 0x000050, "Wrong size on BP_AJBInGameIndoorManageComponent_C_IsSameRoom");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CheckActor) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CheckActor' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, Result) == 0x000008, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::Result' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, bIsRoomTarget) == 0x000009, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::bIsRoomTarget' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, bIsRoomSelf) == 0x00000A, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::bIsRoomSelf' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CheckComponent) == 0x000010, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CheckComponent' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_IsInDoor_Result) == 0x000028, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_IsInDoor_Result' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_IsInDoor_Result1) == 0x00002A, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_IsInDoor_Result1' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_Not_PreBool_ReturnValue) == 0x000034, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_Array_Find_ReturnValue) == 0x000044, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000049, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsSameRoom, CallFunc_BooleanOR_ReturnValue) == 0x00004A, "Member 'BP_AJBInGameIndoorManageComponent_C_IsSameRoom::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.GetEffectScaleFromSameRoom
// 0x0018 (0x0018 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom final
{
public:
	class AActor*                                 CheckActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameRoom_Result;                        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom) == 0x000018, "Wrong size on BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom, CheckActor) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom::CheckActor' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom, Scale) == 0x000008, "Member 'BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom::Scale' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom, CallFunc_IsSameRoom_Result) == 0x00000C, "Member 'BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom::CallFunc_IsSameRoom_Result' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'BP_AJBInGameIndoorManageComponent_C_GetEffectScaleFromSameRoom::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.GetOverlapVolumes
// 0x0010 (0x0010 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes final
{
public:
	TArray<class UPrimitiveComponent*>            OverlapVolume_0;                                   // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes) == 0x000010, "Wrong size on BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes, OverlapVolume_0) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_GetOverlapVolumes::OverlapVolume_0' has a wrong offset!");

// Function BP_AJBInGameIndoorManageComponent.BP_AJBInGameIndoorManageComponent_C.IsInDoorCeilingHeight
// 0x0040 (0x0040 - 0x0000)
struct BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameIndoorVolume_CeilingHeight_C* K2Node_DynamicCast_AsBP_AJBIn_Game_Indoor_Volume_Ceiling_Height; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight) == 0x000008, "Wrong alignment on BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight");
static_assert(sizeof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight) == 0x000040, "Wrong size on BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, bResult) == 0x000000, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, K2Node_DynamicCast_AsBP_AJBIn_Game_Indoor_Volume_Ceiling_Height) == 0x000030, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::K2Node_DynamicCast_AsBP_AJBIn_Game_Indoor_Volume_Ceiling_Height' has a wrong offset!");
static_assert(offsetof(BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_AJBInGameIndoorManageComponent_C_IsInDoorCeilingHeight::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

