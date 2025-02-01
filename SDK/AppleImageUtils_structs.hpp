#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleImageUtils

#include "Basic.hpp"


namespace SDK
{

// Enum AppleImageUtils.EAppleTextureType
// NumValues: 0x0006
enum class EAppleTextureType : uint8
{
	Unknown                                  = 0,
	Image                                    = 1,
	PixelBuffer                              = 2,
	Surface                                  = 3,
	MetalTexture                             = 4,
	EAppleTextureType_MAX                    = 5,
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// 0x0020 (0x0020 - 0x0000)
struct FAppleImageUtilsImageConversionResult final
{
public:
	class FString                                 Error;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ImageData;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAppleImageUtilsImageConversionResult) == 0x000008, "Wrong alignment on FAppleImageUtilsImageConversionResult");
static_assert(sizeof(FAppleImageUtilsImageConversionResult) == 0x000020, "Wrong size on FAppleImageUtilsImageConversionResult");
static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0x000000, "Member 'FAppleImageUtilsImageConversionResult::Error' has a wrong offset!");
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 0x000010, "Member 'FAppleImageUtilsImageConversionResult::ImageData' has a wrong offset!");

}

