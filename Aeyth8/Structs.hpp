#pragma once
#include "../pch.h"

typedef int8_t  int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

struct FActorSpawnParameters 
{ 
	SDK::FName Name; 

	SDK::AActor* Template; 

	SDK::AActor* Owner; 

	SDK::APawn* Instigator; 

	class SDK::ULevel* OverrideLevel; 

	SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride; 
};

struct FNetworkObjectInfo
{
	/** Pointer to the replicated actor. */
	SDK::AActor* Actor;

	/** WeakPtr to actor. This is cached here to prevent constantly constructing one when needed for (things like) keys in TMaps/TSets */
	SDK::TWeakObjectPtr<SDK::AActor> WeakActor;

	/** Next time to consider replicating the actor. Based on FPlatformTime::Seconds(). */
	double NextUpdateTime;

	/** Last absolute time in seconds since actor actually sent something during replication */
	double LastNetReplicateTime;

	/** Optimal delta between replication updates based on how frequently actor properties are actually changing */
	float OptimalNetUpdateDelta;


	/** Last time this actor was updated for replication via NextUpdateTime
	* @warning: internal net driver time, not related to WorldSettings.TimeSeconds */
	/*UE_DEPRECATED(4.25, "Please use LastNetUpdateTimestamp instead.")
	float LastNetUpdateTime;*/
	double LastNetUpdateTimestamp;

	/** List of connections that this actor is dormant on */
	SDK::TSet<SDK::TWeakObjectPtr<SDK::UNetConnection>> DormantConnections;

	/** A list of connections that this actor has recently been dormant on, but the actor doesn't have a channel open yet.
	*  These need to be differentiated from actors that the client doesn't know about, but there's no explicit list for just those actors.
	*  (this list will be very transient, with connections being moved off the DormantConnections list, onto this list, and then off once the actor has a channel again)
	*/
	SDK::TSet<SDK::TWeakObjectPtr<SDK::UNetConnection>> RecentlyDormantConnections;

	/** Is this object still pending a full net update due to clients that weren't able to replicate the actor at the time of LastNetUpdateTime */
	uint8 bPendingNetUpdate : 1;

	/** Force this object to be considered relevant for at least one update */
	/*UE_DEPRECATED(4.23, "Use the ForceRelevantFrame variable since this variable is not set anymore.")
	uint8 bForceRelevantNextUpdate : 1;*/

	/** Should this object be considered for replay checkpoint writes */
	uint8 bDirtyForReplay : 1;

	/** Should channel swap roles while calling ReplicateActor */
	uint8 bSwapRolesOnReplicate : 1;

	/** Force this object to be considered relevant for at least one update */
	uint32 ForceRelevantFrame = 0;

	/*FNetworkObjectInfo()
		: Actor(nullptr)
		, NextUpdateTime(0.0)
		, LastNetReplicateTime(0.0)
		, OptimalNetUpdateDelta(0.0f)
		, LastNetUpdateTime(0.0f)
		, LastNetUpdateTimestamp(0.0)
		, bPendingNetUpdate(false)
		, bForceRelevantNextUpdate(false)
		, bDirtyForReplay(false)
		, bSwapRolesOnReplicate(false) {}

	FNetworkObjectInfo(AActor* InActor)
		: Actor(InActor)
		, WeakActor(InActor)
		, NextUpdateTime(0.0)
		, LastNetReplicateTime(0.0)
		, OptimalNetUpdateDelta(0.0f) 
		, LastNetUpdateTime(0.0f)
		, LastNetUpdateTimestamp(0.0)
		, bPendingNetUpdate(false)
		, bForceRelevantNextUpdate(false)
		, bDirtyForReplay(false)
		, bSwapRolesOnReplicate(false) {}

	void CountBytes(FArchive& Ar) const;*/
};

struct FActorDestructionInfo
{
public:
	/*FActorDestructionInfo()
		: Reason(EChannelCloseReason::Destroyed)
		, bIgnoreDistanceCulling(false) 
	{}*/

	SDK::TWeakObjectPtr<SDK::ULevel> Level; 
	SDK::TWeakObjectPtr<SDK::UObject> ObjOuter;
	SDK::FVector DestroyedPosition;
	//FNetworkGUID NetGUID;
	SDK::FString PathName;
	SDK::FName StreamingLevelName;
	//EChannelCloseReason Reason;

	/** When true the destruction info data will be sent even if the viewers are not close to the actor */
	bool bIgnoreDistanceCulling;

	/*void CountBytes(FArchive& Ar)
	{
		PathName.CountBytes(Ar);
	}*/
};

//
// Priority sortable list.
//
struct FActorPriority
{
	int32						Priority;	// Update priority, higher = more important.
	
	FNetworkObjectInfo*			ActorInfo;	// Actor info.
	class UActorChannel*		Channel;	// Actor channel.

	FActorDestructionInfo *	DestructionInfo;	// Destroy an actor

	/*FActorPriority() :
		Priority(0), ActorInfo(NULL), Channel(NULL), DestructionInfo(NULL)
	{}

	FActorPriority(class UNetConnection* InConnection, class UActorChannel* InChannel, FNetworkObjectInfo* InActorInfo, const TArray<struct FNetViewer>& Viewers, bool bLowBandwidth);
	FActorPriority(class UNetConnection* InConnection, FActorDestructionInfo * DestructInfo, const TArray<struct FNetViewer>& Viewers );*/
};

class FNetworkNotify
{

};