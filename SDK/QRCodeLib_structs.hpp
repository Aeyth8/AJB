#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QRCodeLib

#include "Basic.hpp"


namespace SDK
{

// Enum QRCodeLib.EQRResult
// NumValues: 0x0013
enum class EQRResult : uint8
{
	RETVAL_NO_ERROR                          = 0,
	MODE_ERROR                               = 1,
	SIZE_ERROR                               = 2,
	INVALID_VERSION                          = 3,
	FORMAT_INFO_ERROR                        = 4,
	MARKER_ERROR                             = 5,
	VERSION_INFO_ERROR                       = 6,
	VERSION_INFO_MISMATCH                    = 7,
	DECODE_ERROR                             = 8,
	ERROR_CORRECTION_ERROR                   = 9,
	NO_BUFFER                                = 10,
	YUV_TYPE_ERROR                           = 11,
	YUV_WIDTH_ERROR                          = 12,
	NOT_INITIALIZED                          = 13,
	NOT_IMPLEMENTED_MODE                     = 14,
	ENCODE_ERROR                             = 15,
	NOT_CREATE_TEXTURE                       = 16,
	FATAL_ERROR                              = 17,
	EQRResult_MAX                            = 18,
};

// Enum QRCodeLib.EQRLevel
// NumValues: 0x0005
enum class EQRLevel : uint8
{
	LEVEL_L                                  = 0,
	LEVEL_M                                  = 1,
	LEVEL_Q                                  = 2,
	LEVEL_H                                  = 3,
	LEVEL_MAX                                = 4,
};

// Enum QRCodeLib.EQRMode
// NumValues: 0x0005
enum class EQRMode : uint8
{
	NUMBER                                   = 0,
	ALPHANUM                                 = 1,
	BYTE                                     = 2,
	MIX                                      = 3,
	EQRMode_MAX                              = 4,
};

// ScriptStruct QRCodeLib.QREncodeInfo
// 0x0020 (0x0020 - 0x0000)
struct FQREncodeInfo final
{
public:
	class FString                                 EncodeString;                                      // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQRMode                                       Mode;                                              // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQRLevel                                      Level;                                             // 0x0011(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Version;                                           // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         QuietWidth;                                        // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Ppm;                                               // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FQREncodeInfo) == 0x000008, "Wrong alignment on FQREncodeInfo");
static_assert(sizeof(FQREncodeInfo) == 0x000020, "Wrong size on FQREncodeInfo");
static_assert(offsetof(FQREncodeInfo, EncodeString) == 0x000000, "Member 'FQREncodeInfo::EncodeString' has a wrong offset!");
static_assert(offsetof(FQREncodeInfo, Mode) == 0x000010, "Member 'FQREncodeInfo::Mode' has a wrong offset!");
static_assert(offsetof(FQREncodeInfo, Level) == 0x000011, "Member 'FQREncodeInfo::Level' has a wrong offset!");
static_assert(offsetof(FQREncodeInfo, Version) == 0x000014, "Member 'FQREncodeInfo::Version' has a wrong offset!");
static_assert(offsetof(FQREncodeInfo, QuietWidth) == 0x000018, "Member 'FQREncodeInfo::QuietWidth' has a wrong offset!");
static_assert(offsetof(FQREncodeInfo, Ppm) == 0x00001C, "Member 'FQREncodeInfo::Ppm' has a wrong offset!");

}

