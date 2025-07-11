#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Emoney_BrandButton

#include "Basic.hpp"

#include "AmwPlugin_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_Emoney_BrandButton.WB_Emoney_BrandButton_C.ExecuteUbergraph_WB_Emoney_BrandButton
// 0x0028 (0x0028 - 0x0000)
struct WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAmwEmoneyBrand                               K2Node_CustomEvent_Brand;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAJBGameInstance_bSuccess;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_AJBGameInstance_C*                  CallFunc_GetAJBGameInstance_AJB_Game_Instance;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetEmoneyIcon_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton) == 0x000008, "Wrong alignment on WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton");
static_assert(sizeof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton) == 0x000028, "Wrong size on WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, EntryPoint) == 0x000000, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, Temp_byte_Variable) == 0x000004, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, Temp_byte_Variable1) == 0x000005, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, K2Node_CustomEvent_Brand) == 0x000006, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::K2Node_CustomEvent_Brand' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, CallFunc_GetAJBGameInstance_bSuccess) == 0x000007, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::CallFunc_GetAJBGameInstance_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, CallFunc_GetAJBGameInstance_AJB_Game_Instance) == 0x000008, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::CallFunc_GetAJBGameInstance_AJB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000010, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, CallFunc_GetEmoneyIcon_ReturnValue) == 0x000018, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::CallFunc_GetEmoneyIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, Temp_bool_Variable) == 0x000021, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton, K2Node_Select_Default) == 0x000022, "Member 'WB_Emoney_BrandButton_C_ExecuteUbergraph_WB_Emoney_BrandButton::K2Node_Select_Default' has a wrong offset!");

// Function WB_Emoney_BrandButton.WB_Emoney_BrandButton_C.SetupDisplay
// 0x0001 (0x0001 - 0x0000)
struct WB_Emoney_BrandButton_C_SetupDisplay final
{
public:
	EAmwEmoneyBrand                               Brand_0;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Emoney_BrandButton_C_SetupDisplay) == 0x000001, "Wrong alignment on WB_Emoney_BrandButton_C_SetupDisplay");
static_assert(sizeof(WB_Emoney_BrandButton_C_SetupDisplay) == 0x000001, "Wrong size on WB_Emoney_BrandButton_C_SetupDisplay");
static_assert(offsetof(WB_Emoney_BrandButton_C_SetupDisplay, Brand_0) == 0x000000, "Member 'WB_Emoney_BrandButton_C_SetupDisplay::Brand_0' has a wrong offset!");

// Function WB_Emoney_BrandButton.WB_Emoney_BrandButton_C.GetButton
// 0x0008 (0x0008 - 0x0000)
struct WB_Emoney_BrandButton_C_GetButton final
{
public:
	class UAJBButton*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Emoney_BrandButton_C_GetButton) == 0x000008, "Wrong alignment on WB_Emoney_BrandButton_C_GetButton");
static_assert(sizeof(WB_Emoney_BrandButton_C_GetButton) == 0x000008, "Wrong size on WB_Emoney_BrandButton_C_GetButton");
static_assert(offsetof(WB_Emoney_BrandButton_C_GetButton, ReturnValue) == 0x000000, "Member 'WB_Emoney_BrandButton_C_GetButton::ReturnValue' has a wrong offset!");

}

