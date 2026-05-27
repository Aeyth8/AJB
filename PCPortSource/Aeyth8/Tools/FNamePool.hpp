#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8


## Not sure where to place this yet, I just wanted to write a little wrapper and gain the ability to access the FNamePool

*/

#include "../../Dumper-7/SDK/Basic.hpp"
#include "../OffsetBase.h"

// --------------------------

typedef unsigned char		byte;
typedef unsigned short		word;
typedef unsigned long		dword;
typedef unsigned long long	qword;


constexpr qword GNAMES_OFFSET = SDK::Offsets::GNames;


namespace A8CL
{
	namespace GNamePool
	{
		// Temporary string buffer used for searching/etc
		struct FNameStringView
		{
			dword	Length;
			bool	bIsWide;

			union
			{
				void*			Data;
				const wchar_t*	UTF;
				const char*		ASCII;
			};

			bool bIsASCII() const { return !bIsWide; }

			template <class BufferType, dword Size>
			FNameStringView(const BufferType(&Buffer)[Size])
			:
				Data(Buffer), Length(Size), bIsWide(sizeof(BufferType) == 2)
			{}
		};

		struct FNameEntryId
		{
			int Id;

			// Idk this is dumb
		};

		// Useless (not) placeholder crap for structural integrity
		// Thanks to snippets of the CheatGear SDK for helping me figure this part out

		struct FNameEntryHeader
		{
			static constexpr dword	ProbeHashBits{5};
			word					bIsWide : 1;
			word					LowercaseProbeHash : ProbeHashBits;
			word					Len : 10;
		};

		struct FName
		{
			int ComparisonIndex;
			int Number;
		};

		struct FNameEntry
		{
			FNameEntryHeader Header;
	
			union
			{
				char	ASCII[1024];
				wchar_t UTF[1024];
			};

			dword	GetLength() const { return Header.Len; }
			bool	IsWide()	const { return Header.bIsWide; }

			template <class BufferType, dword Size>
			BufferType const* GetName(BufferType(&Buffer)[Size])
			{
				const dword Length = GetLength();

				dword i{0};
				while (i < Length)
				{
					Buffer[i] = (sizeof(BufferType) == 1) ? (BufferType)ASCII[i] : (BufferType)UTF[i];
					++i;
				}

				return Buffer;
			}
		};

		struct FNameEntryAllocator
		{
			byte					FrwLock[0x8];
			static constexpr dword	Stride = 0x2;
			static constexpr dword	MaxOffset = Stride * (1 << 16);
			dword					CurrentBlock;
			dword					CurrentByteCursor;
			byte*					Blocks[8192];

			dword		GetBlocksSize() const { return CurrentBlock + 1; }

			bool		IsValidIndex(dword Key, dword Block, word Offset) const { return Key >= 0 && Block < static_cast<dword>(GetBlocksSize() && Offset * Stride < MaxOffset);}
			bool		IsValidIndex(dword Key) const { return IsValidIndex(Key, Key << 16, (word)Key); }

			FNameEntry* GetById(dword Key) const
			{
				dword Block = Key >> 16;
				if (IsValidIndex(Key, Block, (word)Key))
				{
					return reinterpret_cast<FNameEntry*>(Blocks[Block] + ((qword)((word)Key)*Stride));
				}

				return reinterpret_cast<FNameEntry*>(Blocks[0] + 0);
			}
		};

		struct FNamePool
		{
			FNameEntryAllocator		Allocator;
			dword					ASCII_Count;
			dword					UTF_Count;

			FNameEntry* GetById(dword Key) const { return Allocator.GetById(Key); }
			bool		IsValidIndex(dword Key) const { return Allocator.IsValidIndex(Key); }
		};
	}
class FNamePoolWrapper
{
private:

	inline static GNamePool::FNamePool* Pool{nullptr};

public:

	inline static GNamePool::FNamePool* Get()
	{
		return Pool ? Pool : Pool = reinterpret_cast<GNamePool::FNamePool*>(OFFSET::GetImageBase() + GNAMES_OFFSET);
	}

};

}