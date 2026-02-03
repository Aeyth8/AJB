#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

## Inline wrapper to call external functions "natively"

*/

typedef signed char			int8;
typedef short				int16;
typedef int					int32;
typedef long long			int64;

typedef unsigned char		uint8;
typedef unsigned short		uint16;
typedef unsigned int		uint32;
typedef unsigned long long	uint64;

template <class Type> Type CallAs(const uint64 Address) { return reinterpret_cast<Type>(Address); }

namespace UEW
{
	constexpr uint64 NetDriverGetNetMode		= 0x0;
	constexpr uint64 WorldInternalGetNetMode	= 0x0;
	constexpr uint64 ActorInternalGetNetMode	= 0x0;
}

namespace UC
{

}

namespace SDK
{
	class UEngine;
	class UWorld;
	class UNetDriver;
	class UIpNetDriver;
	class UPendingNetGame;
	class UClass;

	class AActor;

	class FName;
	struct FURL;
	struct FWorldContext;
}

namespace A8CL
{
	namespace Global
	{
		extern uint64 GBA;
	}
	
	namespace Enums
	{
		enum ENetMode : int32
		{
			NM_Standalone,
			NM_DedicatedServer,
			NM_ListenServer,
			NM_Client,
			NM_MAX
		};

		enum ENetRole : uint8
		{
			ROLE_None,
			ROLE_SimulatedProxy,
			ROLE_AutonomousProxy,
			ROLE_Authority,
			ROLE_MAX
		};
	}
	namespace SDT
	{
		static constexpr const char* ENetMode[5]{ "NM_Standalone", "NM_DedicatedServer", "NM_ListenServer", "NM_Client", "NM_MAX" };
		static constexpr const char* ENetRole[5]{ "ROLE_None", "ROLE_SimulatedProxy", "ROLE_AutonomousProxy", "ROLE_Authority", "ROLE_MAX" };
	}
	
	template <class Enum, const char* const* Array> 
	struct EnumWrapper
	{
		Enum RealValue;

		__forceinline const char* ToString() const
		{
			return Array[this->RealValue];
		}

		__forceinline operator Enum() const
		{
			return this->RealValue;
		}
	};

	using ENetMode = EnumWrapper<Enums::ENetMode, SDT::ENetMode>;
	using ENetRole = EnumWrapper<Enums::ENetRole, SDT::ENetRole>;

	__forceinline ENetMode GetNetMode(SDK::UNetDriver* NetDriver, uint64 Offset = UEW::NetDriverGetNetMode)
	{
		return CallAs<ENetMode(__fastcall*)(SDK::UNetDriver*)>(Offset + Global::GBA)(NetDriver);
	}

	__forceinline ENetMode GetWorldNetMode(SDK::UWorld* World, uint64 Offset = UEW::WorldInternalGetNetMode)
	{
		return CallAs<ENetMode(__fastcall*)(SDK::UWorld*)>(Offset + Global::GBA)(World);
	}

	__forceinline ENetMode GetActorNetMode(SDK::AActor* Actor, uint64 Offset = UEW::ActorInternalGetNetMode)
	{
		return CallAs<ENetMode(__fastcall*)(SDK::AActor*)>(Offset + Global::GBA)(Actor);
	}

}