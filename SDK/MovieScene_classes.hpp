#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                  Signature;                                         // 0x0028(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSignedObject">();
	}
	static class UMovieSceneSignedObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSignedObject>();
	}
};
static_assert(alignof(UMovieSceneSignedObject) == 0x000008, "Wrong alignment on UMovieSceneSignedObject");
static_assert(sizeof(UMovieSceneSignedObject) == 0x000050, "Wrong size on UMovieSceneSignedObject");
static_assert(offsetof(UMovieSceneSignedObject, Signature) == 0x000028, "Member 'UMovieSceneSignedObject::Signature' has a wrong offset!");

// Class MovieScene.MovieSceneSection
// 0x0090 (0x00E0 - 0x0050)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions          EvalOptions;                                       // 0x0050(0x0002)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneEasingSettings              Easing;                                            // 0x0058(0x0038)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                  SectionRange;                                      // 0x0090(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                           PreRollFrames;                                     // 0x00A0(0x0004)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                           PostRollFrames;                                    // 0x00A4(0x0004)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         RowIndex;                                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         OverlapPriority;                                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsActive : 1;                                     // 0x00B0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bIsLocked : 1;                                     // 0x00B0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x00B4(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         EndTime;                                           // 0x00B8(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PrerollTime;                                       // 0x00BC(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PostrollTime;                                      // 0x00C0(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bIsInfinite : 1;                                   // 0x00C4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bSupportsInfiniteRange;                            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType           BlendType;                                         // 0x00C9(0x0002)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_CB[0x15];                                      // 0x00CB(0x0015)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSection">();
	}
	static class UMovieSceneSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSection>();
	}
};
static_assert(alignof(UMovieSceneSection) == 0x000008, "Wrong alignment on UMovieSceneSection");
static_assert(sizeof(UMovieSceneSection) == 0x0000E0, "Wrong size on UMovieSceneSection");
static_assert(offsetof(UMovieSceneSection, EvalOptions) == 0x000050, "Member 'UMovieSceneSection::EvalOptions' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, Easing) == 0x000058, "Member 'UMovieSceneSection::Easing' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, SectionRange) == 0x000090, "Member 'UMovieSceneSection::SectionRange' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, PreRollFrames) == 0x0000A0, "Member 'UMovieSceneSection::PreRollFrames' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, PostRollFrames) == 0x0000A4, "Member 'UMovieSceneSection::PostRollFrames' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, RowIndex) == 0x0000A8, "Member 'UMovieSceneSection::RowIndex' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, OverlapPriority) == 0x0000AC, "Member 'UMovieSceneSection::OverlapPriority' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, StartTime) == 0x0000B4, "Member 'UMovieSceneSection::StartTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, EndTime) == 0x0000B8, "Member 'UMovieSceneSection::EndTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, PrerollTime) == 0x0000BC, "Member 'UMovieSceneSection::PrerollTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, PostrollTime) == 0x0000C0, "Member 'UMovieSceneSection::PostrollTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, bSupportsInfiniteRange) == 0x0000C8, "Member 'UMovieSceneSection::bSupportsInfiniteRange' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, BlendType) == 0x0000C9, "Member 'UMovieSceneSection::BlendType' has a wrong offset!");

// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneSegmentCompilerTestSection final : public UMovieSceneSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSegmentCompilerTestSection">();
	}
	static class UMovieSceneSegmentCompilerTestSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSegmentCompilerTestSection>();
	}
};
static_assert(alignof(UMovieSceneSegmentCompilerTestSection) == 0x000008, "Wrong alignment on UMovieSceneSegmentCompilerTestSection");
static_assert(sizeof(UMovieSceneSegmentCompilerTestSection) == 0x0000E0, "Wrong size on UMovieSceneSegmentCompilerTestSection");

// Class MovieScene.MovieSceneSequence
// 0x02F8 (0x0348 - 0x0050)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate          PrecompiledEvaluationTemplate;                     // 0x0050(0x02F0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	EMovieSceneCompletionMode                     DefaultCompletionMode;                             // 0x0340(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bParentContextsAreSignificant;                     // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSequence">();
	}
	static class UMovieSceneSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSequence>();
	}
};
static_assert(alignof(UMovieSceneSequence) == 0x000008, "Wrong alignment on UMovieSceneSequence");
static_assert(sizeof(UMovieSceneSequence) == 0x000348, "Wrong size on UMovieSceneSequence");
static_assert(offsetof(UMovieSceneSequence, PrecompiledEvaluationTemplate) == 0x000050, "Member 'UMovieSceneSequence::PrecompiledEvaluationTemplate' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequence, DefaultCompletionMode) == 0x000340, "Member 'UMovieSceneSequence::DefaultCompletionMode' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequence, bParentContextsAreSignificant) == 0x000341, "Member 'UMovieSceneSequence::bParentContextsAreSignificant' has a wrong offset!");

// Class MovieScene.MovieSceneSequencePlayer
// 0x07B8 (0x07E0 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                         Pad_28[0x348];                                     // 0x0028(0x0348)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnPlay;                                            // 0x0370(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnPlayReverse;                                     // 0x0380(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnStop;                                            // 0x0390(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnPause;                                           // 0x03A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnFinished;                                        // 0x03B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	EMovieScenePlayerStatus                       Status;                                            // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3C1[0x3];                                      // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bReversePlayback : 1;                              // 0x03C4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_3C5[0xB];                                      // 0x03C5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovieSceneSequence*                    Sequence;                                          // 0x03D0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                           StartTime;                                         // 0x03D8(0x0004)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         DurationFrames;                                    // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         CurrentNumLoops;                                   // 0x03E0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3E4[0x14];                                     // 0x03E4(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x03F8(0x0040)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_438[0x3A8];                                    // 0x0438(0x03A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ChangePlaybackDirection();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	bool GetDisableCameraCuts();
	void GoToEndAndStop();
	void JumpToFrame(const struct FFrameTime& NewPosition);
	void JumpToPosition(float NewPlaybackPosition);
	void JumpToSeconds(float TimeInSeconds);
	void Pause();
	void Play();
	void PlayLooping(int32 NumLoops);
	void PlayReverse();
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayToSeconds(float TimeInSeconds);
	void Scrub();
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void ScrubToSeconds(float TimeInSeconds);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void SetFrameRange(int32 StartFrame, int32 Duration);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetPlaybackRange(const float NewStartTime, const float NewEndTime);
	void SetPlayRate(float PlayRate);
	void SetTimeRange(float StartTime_0, float Duration);
	void Stop();

	struct FQualifiedFrameTime GetCurrentTime() const;
	struct FQualifiedFrameTime GetDuration() const;
	struct FQualifiedFrameTime GetEndTime() const;
	int32 GetFrameDuration() const;
	struct FFrameRate GetFrameRate() const;
	float GetLength() const;
	float GetPlaybackEnd() const;
	float GetPlaybackPosition() const;
	float GetPlaybackStart() const;
	float GetPlayRate() const;
	struct FQualifiedFrameTime GetStartTime() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsReversed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSequencePlayer">();
	}
	static class UMovieSceneSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSequencePlayer>();
	}
};
static_assert(alignof(UMovieSceneSequencePlayer) == 0x000008, "Wrong alignment on UMovieSceneSequencePlayer");
static_assert(sizeof(UMovieSceneSequencePlayer) == 0x0007E0, "Wrong size on UMovieSceneSequencePlayer");
static_assert(offsetof(UMovieSceneSequencePlayer, OnPlay) == 0x000370, "Member 'UMovieSceneSequencePlayer::OnPlay' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, OnPlayReverse) == 0x000380, "Member 'UMovieSceneSequencePlayer::OnPlayReverse' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, OnStop) == 0x000390, "Member 'UMovieSceneSequencePlayer::OnStop' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, OnPause) == 0x0003A0, "Member 'UMovieSceneSequencePlayer::OnPause' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, OnFinished) == 0x0003B0, "Member 'UMovieSceneSequencePlayer::OnFinished' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, Status) == 0x0003C0, "Member 'UMovieSceneSequencePlayer::Status' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, Sequence) == 0x0003D0, "Member 'UMovieSceneSequencePlayer::Sequence' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, StartTime) == 0x0003D8, "Member 'UMovieSceneSequencePlayer::StartTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, DurationFrames) == 0x0003DC, "Member 'UMovieSceneSequencePlayer::DurationFrames' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, CurrentNumLoops) == 0x0003E0, "Member 'UMovieSceneSequencePlayer::CurrentNumLoops' has a wrong offset!");
static_assert(offsetof(UMovieSceneSequencePlayer, PlaybackSettings) == 0x0003F8, "Member 'UMovieSceneSequencePlayer::PlaybackSettings' has a wrong offset!");

// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions            EvalOptions;                                       // 0x0050(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTrack">();
	}
	static class UMovieSceneTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTrack>();
	}
};
static_assert(alignof(UMovieSceneTrack) == 0x000008, "Wrong alignment on UMovieSceneTrack");
static_assert(sizeof(UMovieSceneTrack) == 0x000058, "Wrong size on UMovieSceneTrack");
static_assert(offsetof(UMovieSceneTrack, EvalOptions) == 0x000050, "Member 'UMovieSceneTrack::EvalOptions' has a wrong offset!");

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNameableTrack">();
	}
	static class UMovieSceneNameableTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNameableTrack>();
	}
};
static_assert(alignof(UMovieSceneNameableTrack) == 0x000008, "Wrong alignment on UMovieSceneNameableTrack");
static_assert(sizeof(UMovieSceneNameableTrack) == 0x000058, "Wrong size on UMovieSceneNameableTrack");

// Class MovieScene.MovieScene
// 0x0080 (0x00D0 - 0x0050)
class UMovieScene final : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>           Spawnables;                                        // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>         Possessables;                                      // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>             ObjectBindings;                                    // 0x0070(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>               MasterTracks;                                      // 0x0080(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                       CameraCutTrack;                                    // 0x0090(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                  SelectionRange;                                    // 0x0098(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                  PlaybackRange;                                     // 0x00A8(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                             TickResolution;                                    // 0x00B8(0x0008)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                             DisplayRate;                                       // 0x00C0(0x0008)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMovieSceneEvaluationType                     EvaluationType;                                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EUpdateClockSource                            ClockSource;                                       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene">();
	}
	static class UMovieScene* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene>();
	}
};
static_assert(alignof(UMovieScene) == 0x000008, "Wrong alignment on UMovieScene");
static_assert(sizeof(UMovieScene) == 0x0000D0, "Wrong size on UMovieScene");
static_assert(offsetof(UMovieScene, Spawnables) == 0x000050, "Member 'UMovieScene::Spawnables' has a wrong offset!");
static_assert(offsetof(UMovieScene, Possessables) == 0x000060, "Member 'UMovieScene::Possessables' has a wrong offset!");
static_assert(offsetof(UMovieScene, ObjectBindings) == 0x000070, "Member 'UMovieScene::ObjectBindings' has a wrong offset!");
static_assert(offsetof(UMovieScene, MasterTracks) == 0x000080, "Member 'UMovieScene::MasterTracks' has a wrong offset!");
static_assert(offsetof(UMovieScene, CameraCutTrack) == 0x000090, "Member 'UMovieScene::CameraCutTrack' has a wrong offset!");
static_assert(offsetof(UMovieScene, SelectionRange) == 0x000098, "Member 'UMovieScene::SelectionRange' has a wrong offset!");
static_assert(offsetof(UMovieScene, PlaybackRange) == 0x0000A8, "Member 'UMovieScene::PlaybackRange' has a wrong offset!");
static_assert(offsetof(UMovieScene, TickResolution) == 0x0000B8, "Member 'UMovieScene::TickResolution' has a wrong offset!");
static_assert(offsetof(UMovieScene, DisplayRate) == 0x0000C0, "Member 'UMovieScene::DisplayRate' has a wrong offset!");
static_assert(offsetof(UMovieScene, EvaluationType) == 0x0000C8, "Member 'UMovieScene::EvaluationType' has a wrong offset!");
static_assert(offsetof(UMovieScene, ClockSource) == 0x0000C9, "Member 'UMovieScene::ClockSource' has a wrong offset!");

// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_40[0x58];                                      // 0x0040(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBindingOverrides">();
	}
	static class UMovieSceneBindingOverrides* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBindingOverrides>();
	}
};
static_assert(alignof(UMovieSceneBindingOverrides) == 0x000008, "Wrong alignment on UMovieSceneBindingOverrides");
static_assert(sizeof(UMovieSceneBindingOverrides) == 0x000098, "Wrong size on UMovieSceneBindingOverrides");
static_assert(offsetof(UMovieSceneBindingOverrides, BindingData) == 0x000030, "Member 'UMovieSceneBindingOverrides::BindingData' has a wrong offset!");

// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneBindingOverridesInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBindingOverridesInterface">();
	}
	static class IMovieSceneBindingOverridesInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneBindingOverridesInterface>();
	}
};
static_assert(alignof(IMovieSceneBindingOverridesInterface) == 0x000008, "Wrong alignment on IMovieSceneBindingOverridesInterface");
static_assert(sizeof(IMovieSceneBindingOverridesInterface) == 0x000028, "Wrong size on IMovieSceneBindingOverridesInterface");

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneBindingOwnerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBindingOwnerInterface">();
	}
	static class IMovieSceneBindingOwnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneBindingOwnerInterface>();
	}
};
static_assert(alignof(IMovieSceneBindingOwnerInterface) == 0x000008, "Wrong alignment on IMovieSceneBindingOwnerInterface");
static_assert(sizeof(IMovieSceneBindingOwnerInterface) == 0x000028, "Wrong size on IMovieSceneBindingOwnerInterface");

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EMovieSceneBuiltInEasing                      Type;                                              // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBuiltInEasingFunction">();
	}
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBuiltInEasingFunction>();
	}
};
static_assert(alignof(UMovieSceneBuiltInEasingFunction) == 0x000008, "Wrong alignment on UMovieSceneBuiltInEasingFunction");
static_assert(sizeof(UMovieSceneBuiltInEasingFunction) == 0x000038, "Wrong size on UMovieSceneBuiltInEasingFunction");
static_assert(offsetof(UMovieSceneBuiltInEasingFunction, Type) == 0x000030, "Member 'UMovieSceneBuiltInEasingFunction::Type' has a wrong offset!");

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            Curve;                                             // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEasingExternalCurve">();
	}
	static class UMovieSceneEasingExternalCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEasingExternalCurve>();
	}
};
static_assert(alignof(UMovieSceneEasingExternalCurve) == 0x000008, "Wrong alignment on UMovieSceneEasingExternalCurve");
static_assert(sizeof(UMovieSceneEasingExternalCurve) == 0x000038, "Wrong size on UMovieSceneEasingExternalCurve");
static_assert(offsetof(UMovieSceneEasingExternalCurve, Curve) == 0x000030, "Member 'UMovieSceneEasingExternalCurve::Curve' has a wrong offset!");

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneEasingFunction final : public IInterface
{
public:
	float OnEvaluate(float Interp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEasingFunction">();
	}
	static class IMovieSceneEasingFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneEasingFunction>();
	}
};
static_assert(alignof(IMovieSceneEasingFunction) == 0x000008, "Wrong alignment on IMovieSceneEasingFunction");
static_assert(sizeof(IMovieSceneEasingFunction) == 0x000028, "Wrong size on IMovieSceneEasingFunction");

// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder final : public UObject
{
public:
	class FName                                   FolderName;                                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>              ChildFolders;                                      // 0x0030(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>               ChildMasterTracks;                                 // 0x0040(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                         ChildObjectBindingStrings;                         // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_60[0x10];                                      // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFolder">();
	}
	static class UMovieSceneFolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFolder>();
	}
};
static_assert(alignof(UMovieSceneFolder) == 0x000008, "Wrong alignment on UMovieSceneFolder");
static_assert(sizeof(UMovieSceneFolder) == 0x000070, "Wrong size on UMovieSceneFolder");
static_assert(offsetof(UMovieSceneFolder, FolderName) == 0x000028, "Member 'UMovieSceneFolder::FolderName' has a wrong offset!");
static_assert(offsetof(UMovieSceneFolder, ChildFolders) == 0x000030, "Member 'UMovieSceneFolder::ChildFolders' has a wrong offset!");
static_assert(offsetof(UMovieSceneFolder, ChildMasterTracks) == 0x000040, "Member 'UMovieSceneFolder::ChildMasterTracks' has a wrong offset!");
static_assert(offsetof(UMovieSceneFolder, ChildObjectBindingStrings) == 0x000050, "Member 'UMovieSceneFolder::ChildObjectBindingStrings' has a wrong offset!");

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneKeyProxy final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneKeyProxy">();
	}
	static class IMovieSceneKeyProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneKeyProxy>();
	}
};
static_assert(alignof(IMovieSceneKeyProxy) == 0x000008, "Wrong alignment on IMovieSceneKeyProxy");
static_assert(sizeof(IMovieSceneKeyProxy) == 0x000028, "Wrong size on IMovieSceneKeyProxy");

// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneSegmentCompilerTestTrack final : public UMovieSceneTrack
{
public:
	bool                                          bHighPassFilter;                                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             SectionArray;                                      // 0x0060(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSegmentCompilerTestTrack">();
	}
	static class UMovieSceneSegmentCompilerTestTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSegmentCompilerTestTrack>();
	}
};
static_assert(alignof(UMovieSceneSegmentCompilerTestTrack) == 0x000008, "Wrong alignment on UMovieSceneSegmentCompilerTestTrack");
static_assert(sizeof(UMovieSceneSegmentCompilerTestTrack) == 0x000070, "Wrong size on UMovieSceneSegmentCompilerTestTrack");
static_assert(offsetof(UMovieSceneSegmentCompilerTestTrack, bHighPassFilter) == 0x000058, "Member 'UMovieSceneSegmentCompilerTestTrack::bHighPassFilter' has a wrong offset!");
static_assert(offsetof(UMovieSceneSegmentCompilerTestTrack, SectionArray) == 0x000060, "Member 'UMovieSceneSegmentCompilerTestTrack::SectionArray' has a wrong offset!");

// Class MovieScene.MovieSceneSubSection
// 0x0070 (0x0150 - 0x00E0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters           Parameters;                                        // 0x00E0(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         StartOffset;                                       // 0x00F8(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         TimeScale;                                         // 0x00FC(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         PrerollTime_MovieSceneSubSection;                  // 0x0100(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovieSceneSequence*                    SubSequence;                                       // 0x0108(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                  ActorToRecord;                                     // 0x0110(0x001C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TargetSequenceName;                                // 0x0130(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                         TargetPathToRecordTo;                              // 0x0140(0x0010)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSubSection">();
	}
	static class UMovieSceneSubSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSubSection>();
	}
};
static_assert(alignof(UMovieSceneSubSection) == 0x000008, "Wrong alignment on UMovieSceneSubSection");
static_assert(sizeof(UMovieSceneSubSection) == 0x000150, "Wrong size on UMovieSceneSubSection");
static_assert(offsetof(UMovieSceneSubSection, Parameters) == 0x0000E0, "Member 'UMovieSceneSubSection::Parameters' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, StartOffset) == 0x0000F8, "Member 'UMovieSceneSubSection::StartOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, TimeScale) == 0x0000FC, "Member 'UMovieSceneSubSection::TimeScale' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, PrerollTime_MovieSceneSubSection) == 0x000100, "Member 'UMovieSceneSubSection::PrerollTime_MovieSceneSubSection' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, SubSequence) == 0x000108, "Member 'UMovieSceneSubSection::SubSequence' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, ActorToRecord) == 0x000110, "Member 'UMovieSceneSubSection::ActorToRecord' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, TargetSequenceName) == 0x000130, "Member 'UMovieSceneSubSection::TargetSequenceName' has a wrong offset!");
static_assert(offsetof(UMovieSceneSubSection, TargetPathToRecordTo) == 0x000140, "Member 'UMovieSceneSubSection::TargetPathToRecordTo' has a wrong offset!");

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0058(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSubTrack">();
	}
	static class UMovieSceneSubTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSubTrack>();
	}
};
static_assert(alignof(UMovieSceneSubTrack) == 0x000008, "Wrong alignment on UMovieSceneSubTrack");
static_assert(sizeof(UMovieSceneSubTrack) == 0x000068, "Wrong size on UMovieSceneSubTrack");
static_assert(offsetof(UMovieSceneSubTrack, Sections) == 0x000058, "Member 'UMovieSceneSubTrack::Sections' has a wrong offset!");

}

