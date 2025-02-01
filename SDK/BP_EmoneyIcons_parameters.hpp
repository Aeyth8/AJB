#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmoneyIcons

#include "Basic.hpp"

#include "AmwPlugin_structs.hpp"


namespace SDK::Params
{

// Function BP_EmoneyIcons.BP_EmoneyIcons_C.GetEmoneyIcon
// 0x00F0 (0x00F0 - 0x0000)
struct BP_EmoneyIcons_C_GetEmoneyIcon final
{
public:
	EAmwEmoneyBrand                               Brand;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LPath;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_TryGetAmwEmoneyBrandInfo_OutName;         // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_TryGetAmwEmoneyBrandInfo_OutFilePath;     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetAmwEmoneyBrandInfo_ReturnValue;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable1;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable2;         // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable2;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable2;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item1;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue1;               // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue1;                    // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAmwBuildType                                 CallFunc_AmwGetBuildType_ReturnValue;              // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item2;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue2;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue2;                    // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EmoneyIcons_C_GetEmoneyIcon) == 0x000008, "Wrong alignment on BP_EmoneyIcons_C_GetEmoneyIcon");
static_assert(sizeof(BP_EmoneyIcons_C_GetEmoneyIcon) == 0x0000F0, "Wrong size on BP_EmoneyIcons_C_GetEmoneyIcon");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Brand) == 0x000000, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Brand' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, ReturnValue) == 0x000008, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, LPath) == 0x000010, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::LPath' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_TryGetAmwEmoneyBrandInfo_OutName) == 0x000028, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_TryGetAmwEmoneyBrandInfo_OutName' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_TryGetAmwEmoneyBrandInfo_OutFilePath) == 0x000038, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_TryGetAmwEmoneyBrandInfo_OutFilePath' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_TryGetAmwEmoneyBrandInfo_ReturnValue) == 0x000048, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_TryGetAmwEmoneyBrandInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000050, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_int_Array_Index_Variable) == 0x000054, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_int_Array_Index_Variable1) == 0x00005C, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_bool_True_if_break_was_hit_Variable1) == 0x000060, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_bool_True_if_break_was_hit_Variable1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Not_PreBool_ReturnValue1) == 0x000061, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_int_Loop_Counter_Variable1) == 0x000064, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Add_IntInt_ReturnValue1) == 0x000068, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_bool_True_if_break_was_hit_Variable2) == 0x00006C, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_bool_True_if_break_was_hit_Variable2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Not_PreBool_ReturnValue2) == 0x00006D, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_int_Array_Index_Variable2) == 0x000070, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_int_Array_Index_Variable2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, Temp_int_Loop_Counter_Variable2) == 0x000074, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::Temp_int_Loop_Counter_Variable2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_GetObjectName_ReturnValue) == 0x000088, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_BooleanAND_ReturnValue) == 0x000098, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Add_IntInt_ReturnValue2) == 0x00009C, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Array_Get_Item1) == 0x0000A0, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Contains_ReturnValue) == 0x0000A8, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_GetObjectName_ReturnValue1) == 0x0000B0, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_GetObjectName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Array_Length_ReturnValue1) == 0x0000C0, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Less_IntInt_ReturnValue1) == 0x0000C4, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Contains_ReturnValue1) == 0x0000C5, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Contains_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_BooleanAND_ReturnValue1) == 0x0000C6, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_AmwGetBuildType_ReturnValue) == 0x0000C7, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_AmwGetBuildType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Array_Get_Item2) == 0x0000C8, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_GetObjectName_ReturnValue2) == 0x0000D8, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_GetObjectName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Array_Length_ReturnValue2) == 0x0000E8, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Contains_ReturnValue2) == 0x0000EC, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Contains_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_Less_IntInt_ReturnValue2) == 0x0000ED, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_EmoneyIcons_C_GetEmoneyIcon, CallFunc_BooleanAND_ReturnValue2) == 0x0000EE, "Member 'BP_EmoneyIcons_C_GetEmoneyIcon::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");

}

