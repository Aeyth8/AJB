#pragma once


typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;
typedef unsigned long long qword;
#if defined _M_X64
typedef unsigned long long maxword;
typedef long long smaxword;
#elif defined _M_IX86
typedef unsigned long maxword;
typedef long smaxword;
#endif



#ifdef PROXY
// If you are using Proxy8 it would only make sense to share variables. 
namespace Proxy8
{
	extern "C" maxword NTDLL;	// Base address of NTDLL.
	extern "C" maxword HOST;	// Base address of the DLL we are running.
	extern "C" maxword GBA;		// [Global Base Address] The main executable we are latched onto.	
	extern "C" maxword PEB;		// Process Environment Block.
}
#endif

namespace A8CL
{
	// C-String Helpers
	struct CStr
	{
		// Gets the length of a string in both ASCII and UTF-16, 
		template <class Encoding>
		static constexpr maxword StringLength(const Encoding* StringPtr)
		{
			maxword ReturnSize{0};

			if (StringPtr)
			{
				while (StringPtr[ReturnSize])
				{
					ReturnSize++;
				}
			}

			return ReturnSize;
		}

		/*	Idk I borked the logic somewhere because of brain fryage.
		template <class Encoding, maxword Size0, maxword Size1>
		static Encoding* PrependString(Encoding(&ToPrepend)[Size0], Encoding(&InputBuffer)[Size1], bool bTruncateNullTerminator = true, bool bOverwriteIfTooSmall = true)
		{
			const maxword InputStringSize = StringLength<Encoding>(InputBuffer);
			const maxword PrependStringSize = StringLength<Encoding>(ToPrepend);
			
			maxword i = InputStringSize;
			maxword j = Size1;
			while (InputBuffer[i] && (bTruncateNullTerminator ? (i > PrependStringSize) : (i > Size0)))
			{				
				i--;
				j--;

				if (!bOverwriteIfTooSmall && i >= j)
				{
					continue;
				}

				InputBuffer[i] = InputBuffer[j];		
			}

			j = 0;
			while (ToPrepend[j] && (bTruncateNullTerminator ? j < i : j < Size0))
			{
				j++;

				InputBuffer[j] = ToPrepend[j];
			}

			return InputBuffer;

		}*/

		template <class Encoding, maxword Size0, maxword Size1>
		static Encoding* AppendString(Encoding(&InputBuffer)[Size0], Encoding(&ToAppend)[Size1], bool bOverrideNullTerminator = false)
		{
			maxword i = StringLength<Encoding>(InputBuffer);
			maxword j{0};
		
			// My brain is so fried right now I can't even tell what half the stuff I wrote does since I've been working on this for SO LONG WHAT AM I DOING
			while ((bOverrideNullTerminator ? i < Size0 : i < Size0 - 1) && j < Size1 && ToAppend[j])
			{
				InputBuffer[i++] = ToAppend[j++];
			}

			if (!bOverrideNullTerminator) InputBuffer[i] = 0;

			return InputBuffer;
		}

		template <class Encoding, maxword Size0>
		static Encoding* AppendString(Encoding(&InputBuffer)[Size0], Encoding const* ToAppend, bool bOverrideNullTerminator = false)
		{
			maxword i = StringLength<Encoding>(InputBuffer);
			maxword j{0};
		
			if (!ToAppend)
			{
				return nullptr;
			}

			while ((bOverrideNullTerminator ? i < Size0 : i < Size0 - 1) && ToAppend[j])
			{
				InputBuffer[i++] = ToAppend[j++];
			}

			if (!bOverrideNullTerminator) InputBuffer[i] = 0;

			return InputBuffer;
		}

		// Copy an unowned string to a owned buffer.
		template <class Encoding, maxword Size> 
		static Encoding* CopyString(Encoding(&OwnedBuffer)[Size], Encoding const* FromString, bool bZeroExtend = true)
		{
			maxword i{0};
			maxword FromStringSize = StringLength<Encoding>(FromString);
		
			while (i < Size - 1)
			{
				if (i < FromStringSize)
				{
					OwnedBuffer[i] = FromString[i];
				}
				else if (bZeroExtend)
				{
					OwnedBuffer[i] = 0;
				}
			
				++i;
			}

			OwnedBuffer[i] = 0;
		
			return OwnedBuffer;
		}

		// Copy a string to another buffer.
		template <class Encoding, maxword Size0, maxword Size1> 
		static Encoding* CopyString(Encoding(&InputBuffer)[Size0], Encoding (&FromBuffer)[Size1], bool bZeroExtend = true, bool bEndAtNullTerminator = true)
		{
			maxword i{0};
		
			while (i < Size0 - 1)
			{
				if (i < Size1 && (!bEndAtNullTerminator || FromBuffer[i]))
				{
					InputBuffer[i] = FromBuffer[i];
				}
				else if (bZeroExtend)
				{
					InputBuffer[i] = 0;
				}
			
				++i;
			}

			InputBuffer[i] = 0;

			return InputBuffer;
		}
	};


	// Generic template for copying external Windows buffers to your own.
	template <class Encoding, maxword Size>
	__forceinline static Encoding* CopyToBuffer(Encoding(&IOBuffer)[Size], const Encoding* FromString)
	{
		static_assert(Size >= 260, "The IOBuffer must be atleast 260 characters.");

		maxword i{0};

		while (FromString[i] && i < Size)
		{
			IOBuffer[i] = FromString[i];
			i++;
		}

		return IOBuffer;
	}


	// Filesystem Offset [FSOFF], allows use of Proxy8 or manual initialization.
	struct FSOFF
	{
		maxword NTDLL;
		maxword GBA;
		maxword PEB;

		FSOFF(maxword NTDLL, maxword GBA, maxword PEB) : NTDLL(NTDLL), GBA(GBA), PEB(PEB) {}
#ifdef PROXY
		FSOFF()
		{
			this->NTDLL = Proxy8::NTDLL;
			this->GBA = Proxy8::GBA;
			this->PEB = Proxy8::PEB;
		}
#endif
	};

	// Filesystem Buffer Size [FSBS], what else did you think it meant?
	struct FSBS
	{
		maxword BUFFER_SIZE;		
		constexpr FSBS(maxword BufferSize = 260) : BUFFER_SIZE(BufferSize) {}
		constexpr inline operator maxword ()
		{
			return this->BUFFER_SIZE;
		}
	};

	// ===========================================
	// ##			   CORE STRUCTS				## 
	// ===========================================

	struct NT_STATUS
	{
		long Status;

		constexpr inline operator long ()
		{
			return this->Status;
		}

		bool ToBool() const
		{
			return this->Status >= 0;
		}
	};

	class FSHandle final
	{
	private:
		static maxword NT_CLOSE;		// Address for NtClose
		static maxword NT_CREATE_FILE;	// Address for NtCreateFile


		static NT_STATUS INTERNAL_OpenFile();
		static NT_STATUS INTERNAL_Close(void* Handle);

		static NT_STATUS LAST_STATUS;

		// Object Properties

		void* NTHandle;					// Direct handle to the file from NT.

	public:

		constexpr FSHandle(class FileSystem& FS);

		static NT_STATUS GetLastStatus()
		{
			return LAST_STATUS;
		}

		static bool IsLastOperationSuccess()
		{
			long NonFailureCodes[] = {0xC0000035};

			for (long Code : NonFailureCodes)
			{
				if (LAST_STATUS.Status == Code) return true;
			}

			return LAST_STATUS.ToBool();
		}

		void* GetHandle() 
		{
			return this->NTHandle;
		}

		NT_STATUS CloseHandle() 
		{
			return INTERNAL_Close(this->NTHandle);
		}

		bool IsHandleValid() const 
		{
			return NTHandle != nullptr;
		}

		friend class FileSystem;


	};

	class FileSystem
	{
	public:

		friend class FSHandle;

	protected:

		wchar_t HostPathRaw[FSBS()];	// Raw host path with host name
		dword HostName;					// Integer index for the beginning of host name

		FSOFF Offsets;

		// Flags
		byte bIsHostPathInitialized : 1;
		//  Possibly more later

	public:

		// ===========================================
		// ##			  INITIALIZATION			## 
		// ===========================================

#ifdef PROXY

		// Constructor that automatically obtains the required addresses from Proxy8
		FileSystem() : HostPathRaw{0}, HostName(0), Offsets(FSOFF()), bIsHostPathInitialized(0)
		{
			InitializeHostPath(this->Offsets.NTDLL, this->Offsets.GBA, this->Offsets.PEB);
		}
#endif
		// Constructor with manual address initialization
		FileSystem(maxword NTDLL, maxword GBA, maxword PEB) : HostPathRaw{0}, HostName(0), Offsets(FSOFF(NTDLL, GBA, PEB)), bIsHostPathInitialized(0)
		{
			InitializeHostPath(NTDLL, GBA, PEB);
		}

		// One time required call to initialize the directory path of the current host.
		void InitializeHostPath(maxword NTDLL, maxword GBA, maxword ProcessEnvironmentBlock);


		bool IsOffsetsValid() const { return this->Offsets.GBA != 0 && this->Offsets.PEB != 0; }
		bool IsInitialized() const	{ return this->bIsHostPathInitialized; }

		template <class Encoding, maxword Size>
		const Encoding* GetHostPath(Encoding(&IOBuffer)[Size])
		{
			static_assert(Size >= 260, "[FileSystem::GetHostPath] The IOBuffer must be atleast 260 characters / MAX_PATH!");

			if (!IsInitialized())
			{
				InitializeHostPath(Offsets.NTDLL, Offsets.GBA, Offsets.PEB);
			}

			maxword i{0};
			while (this->HostPathRaw[i] && i < this->HostName)
			{
				IOBuffer[i] = this->HostPathRaw[i];
				i++;
			}

			return IOBuffer;
		}

		template <class Encoding, maxword Size>
		const Encoding* GetHostName(Encoding(&IOBuffer)[Size])
		{
			Encoding* Name = reinterpret_cast<Encoding*>(this->HostPathRaw + this->HostName);
			maxword i{0};

			while (Name[i] && i < Size)
			{
				IOBuffer[i] = Name[i];
				i++;
			}

			return IOBuffer;
		}

		// ===========================================
		// ##			   FUNCTIONALITY			## 
		// ===========================================

		enum : dword {
			DIRECTORY = 0x1,

		};

		// Creates a brand new directory in the host path.
		FSHandle CreateDirectory(const wchar_t* FolderName, bool bUseIfAlreadyExists = true);


	};


}