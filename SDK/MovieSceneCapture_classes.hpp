#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "MovieSceneCapture_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureProtocolSettings">();
	}
	static class UMovieSceneCaptureProtocolSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureProtocolSettings>();
	}
};
static_assert(alignof(UMovieSceneCaptureProtocolSettings) == 0x000008, "Wrong alignment on UMovieSceneCaptureProtocolSettings");
static_assert(sizeof(UMovieSceneCaptureProtocolSettings) == 0x000028, "Wrong size on UMovieSceneCaptureProtocolSettings");

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0040 (0x0068 - 0x0028)
class UCompositionGraphCaptureSettings final : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses         IncludeRenderPasses;                               // 0x0028(0x0010)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                          bCaptureFramesInHDR;                               // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HDRCompressionQuality;                             // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHDRCaptureGamut                              CaptureGamut;                                      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        PostProcessingMaterial;                            // 0x0048(0x0018)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableScreenPercentage;                          // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositionGraphCaptureSettings">();
	}
	static class UCompositionGraphCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositionGraphCaptureSettings>();
	}
};
static_assert(alignof(UCompositionGraphCaptureSettings) == 0x000008, "Wrong alignment on UCompositionGraphCaptureSettings");
static_assert(sizeof(UCompositionGraphCaptureSettings) == 0x000068, "Wrong size on UCompositionGraphCaptureSettings");
static_assert(offsetof(UCompositionGraphCaptureSettings, IncludeRenderPasses) == 0x000028, "Member 'UCompositionGraphCaptureSettings::IncludeRenderPasses' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureSettings, bCaptureFramesInHDR) == 0x000038, "Member 'UCompositionGraphCaptureSettings::bCaptureFramesInHDR' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureSettings, HDRCompressionQuality) == 0x00003C, "Member 'UCompositionGraphCaptureSettings::HDRCompressionQuality' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureSettings, CaptureGamut) == 0x000040, "Member 'UCompositionGraphCaptureSettings::CaptureGamut' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureSettings, PostProcessingMaterial) == 0x000048, "Member 'UCompositionGraphCaptureSettings::PostProcessingMaterial' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureSettings, bDisableScreenPercentage) == 0x000060, "Member 'UCompositionGraphCaptureSettings::bDisableScreenPercentage' has a wrong offset!");

// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0030 - 0x0028)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FrameGrabberProtocolSettings">();
	}
	static class UFrameGrabberProtocolSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrameGrabberProtocolSettings>();
	}
};
static_assert(alignof(UFrameGrabberProtocolSettings) == 0x000008, "Wrong alignment on UFrameGrabberProtocolSettings");
static_assert(sizeof(UFrameGrabberProtocolSettings) == 0x000030, "Wrong size on UFrameGrabberProtocolSettings");

// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0028 - 0x0028)
class UBmpImageCaptureSettings final : public UMovieSceneCaptureProtocolSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BmpImageCaptureSettings">();
	}
	static class UBmpImageCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBmpImageCaptureSettings>();
	}
};
static_assert(alignof(UBmpImageCaptureSettings) == 0x000008, "Wrong alignment on UBmpImageCaptureSettings");
static_assert(sizeof(UBmpImageCaptureSettings) == 0x000028, "Wrong size on UBmpImageCaptureSettings");

// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0038 - 0x0030)
class UImageCaptureSettings final : public UFrameGrabberProtocolSettings
{
public:
	int32                                         CompressionQuality;                                // 0x0030(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageCaptureSettings">();
	}
	static class UImageCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageCaptureSettings>();
	}
};
static_assert(alignof(UImageCaptureSettings) == 0x000008, "Wrong alignment on UImageCaptureSettings");
static_assert(sizeof(UImageCaptureSettings) == 0x000038, "Wrong size on UImageCaptureSettings");
static_assert(offsetof(UImageCaptureSettings, CompressionQuality) == 0x000030, "Member 'UImageCaptureSettings::CompressionQuality' has a wrong offset!");

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneCaptureInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureInterface">();
	}
	static class IMovieSceneCaptureInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneCaptureInterface>();
	}
};
static_assert(alignof(IMovieSceneCaptureInterface) == 0x000008, "Wrong alignment on IMovieSceneCaptureInterface");
static_assert(sizeof(IMovieSceneCaptureInterface) == 0x000028, "Wrong size on IMovieSceneCaptureInterface");

// Class MovieSceneCapture.MovieSceneCapture
// 0x01B0 (0x01D8 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCaptureProtocolID                     CaptureType;                                       // 0x0038(0x0008)(Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneCaptureProtocolSettings*     ProtocolSettings;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings             Settings;                                          // 0x0048(0x0050)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                          bUseSeparateProcess;                               // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCloseEditorWhenCaptureStarts;                     // 0x0099(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AdditionalCommandLineArguments;                    // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InheritedCommandLineArguments;                     // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C0[0x118];                                     // 0x00C0(0x0118)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCapture">();
	}
	static class UMovieSceneCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCapture>();
	}
};
static_assert(alignof(UMovieSceneCapture) == 0x000008, "Wrong alignment on UMovieSceneCapture");
static_assert(sizeof(UMovieSceneCapture) == 0x0001D8, "Wrong size on UMovieSceneCapture");
static_assert(offsetof(UMovieSceneCapture, CaptureType) == 0x000038, "Member 'UMovieSceneCapture::CaptureType' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, ProtocolSettings) == 0x000040, "Member 'UMovieSceneCapture::ProtocolSettings' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x000048, "Member 'UMovieSceneCapture::Settings' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, bUseSeparateProcess) == 0x000098, "Member 'UMovieSceneCapture::bUseSeparateProcess' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, bCloseEditorWhenCaptureStarts) == 0x000099, "Member 'UMovieSceneCapture::bCloseEditorWhenCaptureStarts' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x0000A0, "Member 'UMovieSceneCapture::AdditionalCommandLineArguments' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x0000B0, "Member 'UMovieSceneCapture::InheritedCommandLineArguments' has a wrong offset!");

// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x01F8 - 0x01D8)
class ULevelCapture final : public UMovieSceneCapture
{
public:
	bool                                          bAutoStartCapture;                                 // 0x01D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D9[0xB];                                      // 0x01D9(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PrerequisiteActorId;                               // 0x01E4(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelCapture">();
	}
	static class ULevelCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelCapture>();
	}
};
static_assert(alignof(ULevelCapture) == 0x000008, "Wrong alignment on ULevelCapture");
static_assert(sizeof(ULevelCapture) == 0x0001F8, "Wrong size on ULevelCapture");
static_assert(offsetof(ULevelCapture, bAutoStartCapture) == 0x0001D8, "Member 'ULevelCapture::bAutoStartCapture' has a wrong offset!");
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x0001E4, "Member 'ULevelCapture::PrerequisiteActorId' has a wrong offset!");

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment final : public UObject
{
public:
	static float GetCaptureElapsedTime();
	static int32 GetCaptureFrameNumber();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureEnvironment">();
	}
	static class UMovieSceneCaptureEnvironment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureEnvironment>();
	}
};
static_assert(alignof(UMovieSceneCaptureEnvironment) == 0x000008, "Wrong alignment on UMovieSceneCaptureEnvironment");
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x000028, "Wrong size on UMovieSceneCaptureEnvironment");

// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0048 - 0x0030)
class UVideoCaptureSettings final : public UFrameGrabberProtocolSettings
{
public:
	bool                                          bUseCompression;                                   // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompressionQuality;                                // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 VideoCodec;                                        // 0x0038(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VideoCaptureSettings">();
	}
	static class UVideoCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoCaptureSettings>();
	}
};
static_assert(alignof(UVideoCaptureSettings) == 0x000008, "Wrong alignment on UVideoCaptureSettings");
static_assert(sizeof(UVideoCaptureSettings) == 0x000048, "Wrong size on UVideoCaptureSettings");
static_assert(offsetof(UVideoCaptureSettings, bUseCompression) == 0x000030, "Member 'UVideoCaptureSettings::bUseCompression' has a wrong offset!");
static_assert(offsetof(UVideoCaptureSettings, CompressionQuality) == 0x000034, "Member 'UVideoCaptureSettings::CompressionQuality' has a wrong offset!");
static_assert(offsetof(UVideoCaptureSettings, VideoCodec) == 0x000038, "Member 'UVideoCaptureSettings::VideoCodec' has a wrong offset!");

}

