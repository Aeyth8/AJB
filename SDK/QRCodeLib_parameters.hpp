#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QRCodeLib

#include "Basic.hpp"

#include "QRCodeLib_structs.hpp"


namespace SDK::Params
{

// Function QRCodeLib.CreateQRCode.CreateQRCodeTexture
// 0x0030 (0x0030 - 0x0000)
struct CreateQRCode_CreateQRCodeTexture final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQREncodeInfo                          EncodeInfo;                                        // 0x0008(0x0020)(Parm, NativeAccessSpecifierPublic)
	class UCreateQRCode*                          ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CreateQRCode_CreateQRCodeTexture) == 0x000008, "Wrong alignment on CreateQRCode_CreateQRCodeTexture");
static_assert(sizeof(CreateQRCode_CreateQRCodeTexture) == 0x000030, "Wrong size on CreateQRCode_CreateQRCodeTexture");
static_assert(offsetof(CreateQRCode_CreateQRCodeTexture, WorldContextObject) == 0x000000, "Member 'CreateQRCode_CreateQRCodeTexture::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CreateQRCode_CreateQRCodeTexture, EncodeInfo) == 0x000008, "Member 'CreateQRCode_CreateQRCodeTexture::EncodeInfo' has a wrong offset!");
static_assert(offsetof(CreateQRCode_CreateQRCodeTexture, ReturnValue) == 0x000028, "Member 'CreateQRCode_CreateQRCodeTexture::ReturnValue' has a wrong offset!");

}

