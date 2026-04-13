#pragma once

/*

Written by Aeyth8

https://github.com/Aeyth8

Library to access the WinAPI without using the WinAPI library. | C++14

*/

#if defined _M_X64

    #ifndef B64
        #define B64 1
    #endif

    #ifndef PROCESSOR_FEATURE_MAX
        #define PROCESSOR_FEATURE_MAX 64
    #endif

    #ifndef MAXIMUM_XSTATE_FEATURES
        #define MAXIMUM_XSTATE_FEATURES 64
    #endif

#elif defined _M_IX86
    #ifndef B64
        #define B64 0
    #endif

    #ifndef PROCESSOR_FEATURE_MAX
        #define PROCESSOR_FEATURE_MAX 32
    #endif

    #ifndef MAXIMUM_XSTATE_FEATURES
        #define MAXIMUM_XSTATE_FEATURES 32
    #endif

#endif


typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;
typedef unsigned long long qword;
#if B64
typedef unsigned long long maxword;
typedef long long smaxword;
#else
typedef unsigned long maxword;
typedef long smaxword;
#endif

#ifndef IMAGE_NUMBEROF_DIRECTORY_ENTRIES
    #define IMAGE_NUMBEROF_DIRECTORY_ENTRIES 16
#endif

#ifndef offsetof
	#define offsetof(s,m) ((::maxword)&reinterpret_cast<char const volatile&>((((s*)0)->m)))
#endif

#ifndef CONTAINING_RECORD
	#define CONTAINING_RECORD(address, type, field) \
    ((type *)((char*)(address) - offsetof(type, field)))
#endif

// Namespace encapsulated to prevent collisions, do not macro-use the namespace.
namespace NTS
{

// Macro Templates

// Directly call a function at a memory address
template <typename T>
T Call(const maxword& Address)
{
    return reinterpret_cast<T>(Address);
}

// Generic template for copying external Windows buffers to your own.
template <class TString = wchar_t, word Size>
__forceinline static void CopyToBuffer(TString(&IOBuffer)[Size], const TString* FromString)
{
    static_assert(Size >= 260, "The IOBuffer must be atleast 260 characters.");

    dword i{0};

    while (FromString[i] && i < Size)
    {
        IOBuffer[i] = FromString[i];
        i++;
    }
}

// For some reason it's just a max integer, not the actual process handle.
constexpr maxword GetCurrentProcess()
{
#if B64 
    return 0xFFFFFFFFFFFFFFFF;
#else
    return 0xFFFFFFFF;
#endif    
}

constexpr dword KUSER_SD = 0x7FFE0000;
constexpr dword KEY_READ = ((((0x00020000L)) | (0x0001) | (0x0008) | (0x0010))& (~(0x00100000L)));

// XState Crap

typedef struct _XSTATE_FEATURE {
    dword Offset;
    dword Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE;

typedef struct _XSTATE_CONFIGURATION {
    // Mask of all enabled features
    maxword EnabledFeatures;

    // Mask of volatile enabled features
    maxword EnabledVolatileFeatures;

    // Total size of the save area for user states
    dword Size;

    // Control Flags
    union {
        dword ControlFlags;
        struct
        {
            dword OptimizedSave : 1;
            dword CompactionEnabled : 1;
            dword ExtendedFeatureDisable : 1;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;

    // List of features
    XSTATE_FEATURE Features[MAXIMUM_XSTATE_FEATURES];

    // Mask of all supervisor features
    maxword EnabledSupervisorFeatures;

    // Mask of features that require start address to be 64 byte aligned
    maxword AlignedFeatures;

    // Total size of the save area for user and supervisor states
    dword AllFeatureSize;

    // List which holds size of each user and supervisor state supported by CPU
    dword AllFeatures[MAXIMUM_XSTATE_FEATURES];

    // Mask of all supervisor features that are exposed to user-mode
    maxword EnabledUserVisibleSupervisorFeatures;

    // Mask of features that can be disabled via XFD
    maxword ExtendedFeatureDisableFeatures;

    // Total size of the save area for non-large user and supervisor states
    dword AllNonLargeFeatureSize;

    dword Spare;

} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;

// Kernel - User Space

typedef union _LARGE_INTEGER {
  struct {
    dword LowPart;
    long  HighPart;
  } DUMMYSTRUCTNAME;
  struct {
    dword LowPart;
    long  HighPart;
  } u;
  smaxword QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

typedef struct _KSYSTEM_TIME
{
    dword   LowPart;
    long    High1Time;
    long    High2Time;

} KSYSTEM_TIME, *PKSYSTEM_TIME;

typedef enum _NT_PRODUCT_TYPE
{
    NtProductWinNt = 1,
    NtProductLanManNt = 2,
    NtProductServer = 3
} NT_PRODUCT_TYPE;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE
{
    StandardDesign = 0,
    NEC98x86 = 1,
    EndAlternatives = 2
} ALTERNATIVE_ARCHITECTURE_TYPE;

typedef struct _KUSER_SHARED_DATA {
  dword                         TickCountLowDeprecated;
  dword                         TickCountMultiplier;
  KSYSTEM_TIME                  InterruptTime;
  KSYSTEM_TIME                  SystemTime;
  KSYSTEM_TIME                  TimeZoneBias;
  word                          ImageNumberLow;
  word                          ImageNumberHigh;
  wchar_t                       NtSystemRoot[260];
  dword                         MaxStackTraceDepth;
  dword                         CryptoExponent;
  dword                         TimeZoneId;
  dword                         LargePageMinimum;
  dword                         AitSamplingValue;
  dword                         AppCompatFlag;
  maxword                       RNGSeedVersion;
  dword                         GlobalValidationRunlevel;
  long                          TimeZoneBiasStamp;
  dword                         NtBuildNumber;
  NT_PRODUCT_TYPE               NtProductType;
  bool                          ProductTypeIsValid;
  bool                          Reserved0[1];
  word                          NativeProcessorArchitecture;
  dword                         NtMajorVersion;
  dword                         NtMinorVersion;
  bool                          ProcessorFeatures[PROCESSOR_FEATURE_MAX];
  dword                         Reserved1;
  dword                         Reserved3;
  dword                         TimeSlip;
  ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
  dword                         BootId;
  LARGE_INTEGER                 SystemExpirationDate;
  dword                         SuiteMask;
  bool                          KdDebuggerEnabled;
  union {
    byte MitigationPolicies;
    struct {
      byte NXSupportPolicy : 2;
      byte SEHValidationPolicy : 2;
      byte CurDirDevicesSkippedForDlls : 2;
      byte Reserved : 2;
    };
  };
  word                          CyclesPerYield;
  dword                         ActiveConsoleId;
  dword                         DismountCount;
  dword                         ComPlusPackage;
  dword                         LastSystemRITEventTickCount;
  dword                         NumberOfPhysicalPages;
  bool                          SafeBootMode;
  union {
    byte VirtualizationFlags;
    struct {
      byte ArchStartedInEl2 : 1;
      byte QcSlIsSupported : 1;
    };
  };
  byte                         Reserved12[2];
  union {
    dword SharedDataFlags;
    struct {
      dword DbgErrorPortPresent : 1;
      dword DbgElevationEnabled : 1;
      dword DbgVirtEnabled : 1;
      dword DbgInstallerDetectEnabled : 1;
      dword DbgLkgEnabled : 1;
      dword DbgDynProcessorEnabled : 1;
      dword DbgConsoleBrokerEnabled : 1;
      dword DbgSecureBootEnabled : 1;
      dword DbgMultiSessionSku : 1;
      dword DbgMultiUsersInSessionSku : 1;
      dword DbgStateSeparationEnabled : 1;
      dword SpareBits : 21;
    } DUMMYSTRUCTNAME2;
  } DUMMYUNIONNAME2;
  dword                         DataFlagsPad[1];
  maxword                       TestRetInstruction;
  smaxword                      QpcFrequency;
  dword                         SystemCall;
  dword                         Reserved2;
  maxword                       FullNumberOfPhysicalPages;
  maxword                       SystemCallPad[1];
  union {
    KSYSTEM_TIME TickCount;
    maxword      TickCountQuad;
    struct {
      dword ReservedTickCountOverlay[3];
      dword TickCountPad[1];
    } DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME3;
  dword                         Cookie;
  dword                         CookiePad[1];
  smaxword                      ConsoleSessionForegroundProcessId;
  maxword                       TimeUpdateLock;
  maxword                       BaselineSystemTimeQpc;
  maxword                       BaselineInterruptTimeQpc;
  maxword                       QpcSystemTimeIncrement;
  maxword                       QpcInterruptTimeIncrement;
  byte                         QpcSystemTimeIncrementShift;
  byte                         QpcInterruptTimeIncrementShift;
  word                          UnparkedProcessorCount;
  dword                         EnclaveFeatureMask[4];
  dword                         TelemetryCoverageRound;
  word                          UserModeGlobalLogger[16];
  dword                         ImageFileExecutionOptions;
  dword                         LangGenerationCount;
  maxword                       Reserved4;
  maxword                       InterruptTimeBias;
  maxword                       QpcBias;
  dword                         ActiveProcessorCount;
  byte                         ActiveGroupCount;
  byte                         Reserved9;
  union {
    word QpcData;
    struct {
      byte QpcBypassEnabled;
      byte QpcReserved;
    };
  };
  LARGE_INTEGER                 TimeZoneBiasEffectiveStart;
  LARGE_INTEGER                 TimeZoneBiasEffectiveEnd;
  XSTATE_CONFIGURATION          XState;
  KSYSTEM_TIME                  FeatureConfigurationChangeStamp;
  dword                         Spare;
  maxword                       UserPointerAuthMask;
  XSTATE_CONFIGURATION          XStateArm64;
  dword                         Reserved10[210];
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA;

// PEB | Image Header Stuff

typedef long NTSTATUS;

/*  Doesn't work because of memory alignment crap
typedef struct NTSTATUS
{
    long& Number;

    constexpr explicit NTSTATUS(long& Number) : Number(Number) {}
    constexpr explicit operator bool()
    {
        return Number >= 0;
    }

}*PNTSTATUS;*/

typedef struct _IMAGE_DOS_HEADER {           // DOS .EXE header
    word        e_magic;                     // Magic number
    word        e_cblp;                      // Bytes on last page of file
    word        e_cp;                        // Pages in file
    word        e_crlc;                      // Relocations
    word        e_cparhdr;                   // Size of header in paragraphs
    word        e_minalloc;                  // Minimum extra paragraphs needed
    word        e_maxalloc;                  // Maximum extra paragraphs needed
    word        e_ss;                        // Initial (relative) SS value
    word        e_sp;                        // Initial SP value
    word        e_csum;                      // Checksum
    word        e_ip;                        // Initial IP value
    word        e_cs;                        // Initial (relative) CS value
    word        e_lfarlc;                    // File address of relocation table
    word        e_ovno;                      // Overlay number
    word        e_res[4];                    // Reserved words
    word        e_oemid;                     // OEM identifier (for e_oeminfo)
    word        e_oeminfo;                   // OEM information; e_oemid specific
    word        e_res2[10];                  // Reserved words
    long        e_lfanew;                    // File address of new exe header
  } IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

typedef struct _IMAGE_FILE_HEADER {
    word        Machine;
    word        NumberOfSections;
    dword       TimeDateStamp;
    dword       PointerToSymbolTable;
    dword       NumberOfSymbols;
    word        SizeOfOptionalHeader;
    word        Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

typedef struct _IMAGE_DATA_DIRECTORY {
    dword       VirtualAddress;
    dword       Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

typedef struct _IMAGE_OPTIONAL_HEADER64 {
    word        Magic;
    byte        MajorLinkerVersion;
    byte        MinorLinkerVersion;
    dword       SizeOfCode;
    dword       SizeOfInitializedData;
    dword       SizeOfUninitializedData;
    dword       AddressOfEntryPoint;
    dword       BaseOfCode;
    qword       ImageBase;
    dword       SectionAlignment;
    dword       FileAlignment;
    word        MajorOperatingSystemVersion;
    word        MinorOperatingSystemVersion;
    word        MajorImageVersion;
    word        MinorImageVersion;
    word        MajorSubsystemVersion;
    word        MinorSubsystemVersion;
    dword       Win32VersionValue;
    dword       SizeOfImage;
    dword       SizeOfHeaders;
    dword       CheckSum;
    word        Subsystem;
    word        DllCharacteristics;
    qword       SizeOfStackReserve;
    qword       SizeOfStackCommit;
    qword       SizeOfHeapReserve;
    qword       SizeOfHeapCommit;
    dword       LoaderFlags;
    dword       NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct _IMAGE_OPTIONAL_HEADER {
    //
    // Standard fields.
    //

    word        Magic;
    byte        MajorLinkerVersion;
    byte        MinorLinkerVersion;
    dword       SizeOfCode;
    dword       SizeOfInitializedData;
    dword       SizeOfUninitializedData;
    dword       AddressOfEntryPoint;
    dword       BaseOfCode;
    dword       BaseOfData;

    //
    // NT additional fields.
    //

    dword       ImageBase;
    dword       SectionAlignment;
    dword       FileAlignment;
    word        MajorOperatingSystemVersion;
    word        MinorOperatingSystemVersion;
    word        MajorImageVersion;
    word        MinorImageVersion;
    word        MajorSubsystemVersion;
    word        MinorSubsystemVersion;
    dword       Win32VersionValue;
    dword       SizeOfImage;
    dword       SizeOfHeaders;
    dword       CheckSum;
    word        Subsystem;
    word        DllCharacteristics;
    dword       SizeOfStackReserve;
    dword       SizeOfStackCommit;
    dword       SizeOfHeapReserve;
    dword       SizeOfHeapCommit;
    dword       LoaderFlags;
    dword       NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
} IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct _IMAGE_NT_HEADERS64 {
    dword       Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct _IMAGE_NT_HEADERS {
    dword       Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

typedef struct _IMAGE_EXPORT_DIRECTORY {
    dword       Characteristics;
    dword       TimeDateStamp;
    word        MajorVersion;
    word        MinorVersion;
    dword       Name;
    dword       Base;
    dword       NumberOfFunctions;
    dword       NumberOfNames;
    dword       AddressOfFunctions;     // RVA from base of image
    dword       AddressOfNames;         // RVA from base of image
    dword       AddressOfNameOrdinals;  // RVA from base of image
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;

#if B64
typedef IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS;
typedef IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER64 PIMAGE_OPTIONAL_HEADER;
#else
typedef IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS;
typedef IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER32 PIMAGE_OPTIONAL_HEADER;
#endif

// Required for NtQueryInformationProcess

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY* Flink;
    struct _LIST_ENTRY* Blink;
} LIST_ENTRY, * PLIST_ENTRY, * PRLIST_ENTRY;

typedef struct _PEB_LDR_DATA {
    byte       Reserved1[8];
    void*      Reserved2[3];
    LIST_ENTRY InMemoryOrderModuleList;
} PEB_LDR_DATA, *PPEB_LDR_DATA;

typedef struct _UNICODE_STRING 
{
    word Length;
    word MaximumLength;
    wchar_t*  Buffer;
} UNICODE_STRING, *PUNICODE_STRING;

typedef struct _LDR_MODULE {
    LIST_ENTRY      InLoadOrderModuleList;
    LIST_ENTRY      InMemoryOrderModuleList;
    LIST_ENTRY      InInitializationOrderModuleList;
    void*           BaseAddress;
    void*           EntryPoint;
    dword           SizeOfImage;
    UNICODE_STRING  FullDllName;
    UNICODE_STRING  BaseDllName;
    dword           Flags;
    word            LoadCount;
    word            TlsIndex;
    LIST_ENTRY      HashTableEntry;
    dword           TimeDateStamp;
} LDR_MODULE, *PLDR_MODULE;

typedef struct _RTL_USER_PROCESS_PARAMETERS {
    byte           Reserved1[16];
    void*          Reserved2[10];
    UNICODE_STRING ImagePathName;
    UNICODE_STRING CommandLine;
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS;

typedef struct {
    dword PriorityClass;
    dword PrioritySubClass;
} KSPRIORITY, *PKSPRIORITY;

typedef struct _LDR_DATA_TABLE_ENTRY {
    void*           Reserved1[2];
    LIST_ENTRY      InMemoryOrderLinks;
    void*           Reserved2[2];
    void*           DllBase;
    void*           Reserved3[2];
    UNICODE_STRING  FullDllName;
    byte            Reserved4[8];
    void*           Reserved5[3];
    union
    {
        dword CheckSum;
        void* Reserved6;
    };
    dword TimeDateStamp;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;

typedef struct _PEB {
  byte                          Reserved1[2];
  byte                          BeingDebugged;
  byte                          Reserved2[1];
  void*                         Reserved3[2];
  PPEB_LDR_DATA                 Ldr;
  PRTL_USER_PROCESS_PARAMETERS  ProcessParameters;
  void*                         Reserved4[3];
  void*                         AtlThunkSListPtr;
  void*                         Reserved5;
  dword                         Reserved6;
  void*                         Reserved7;
  dword                         Reserved8;
  dword                         AtlThunkSListPtr32;
  void*                         Reserved9[45];
  byte                          Reserved10[96];
  void*                         PostProcessInitRoutine;
  byte                          Reserved11[128];
  void*                         Reserved12[1];
  dword                         SessionId;
} PEB, *PPEB;

typedef struct _PROCESS_BASIC_INFORMATION {
    NTSTATUS ExitStatus;
    PPEB PebBaseAddress;
    maxword* AffinityMask;
    long BasePriority;
    maxword* UniqueProcessId;
    maxword* InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION;

typedef struct IO_STATUS_BLOCK {
    union
    {
        NTSTATUS Status;
        void*    Pointer;
    };
    dword* Information;
} *PIO_STATUS_BLOCK;

// Required for accessing registry keys

struct OBJECT_ATTRIBUTES
{
    unsigned long   Length;
    void*           RootDirectory;
    PUNICODE_STRING ObjectName;
    unsigned long   Attributes;
    void*           SecurityDescriptor;
    void*           SecurityQualityOfService;

    constexpr OBJECT_ATTRIBUTES(PUNICODE_STRING Name, dword Flags, void* RootHandle = nullptr, void* SecurityDescriptor = nullptr, void* SecurityQualityOfService = nullptr)
    :   Length(sizeof(OBJECT_ATTRIBUTES)), RootDirectory(RootHandle), ObjectName(Name), Attributes(Flags), SecurityDescriptor(SecurityDescriptor), SecurityQualityOfService(SecurityQualityOfService) {}

    OBJECT_ATTRIBUTES() : Length(sizeof(OBJECT_ATTRIBUTES)), RootDirectory(nullptr), ObjectName(nullptr), Attributes(0), SecurityDescriptor(nullptr), SecurityQualityOfService(nullptr) {};
};

enum
{
    REG_OPTION_BACKUP_RESTORE   = 0x00000004L,
    REG_OPTION_CREATE_LINK      = 0x00000002L,
    REG_OPTION_NON_VOLATILE     = 0x00000000L,
    REG_OPTION_VOLATILE         = 0x00000001L,
};

enum KEY_VALUE_INFORMATION_CLASS
{
    KeyValueBasicInformation,           // KEY_VALUE_BASIC_INFORMATION
    KeyValueFullInformation,            // KEY_VALUE_FULL_INFORMATION
    KeyValuePartialInformation,         // KEY_VALUE_PARTIAL_INFORMATION
    KeyValueFullInformationAlign64,     // KEY_VALUE_FULL_INFORMATION_ALIGN64
    KeyValuePartialInformationAlign64,  // KEY_VALUE_PARTIAL_INFORMATION_ALIGN64
    KeyValueLayerInformation,           // KEY_VALUE_LAYER_INFORMATION
    MaxKeyValueInfoClass
};

enum ACCESS_MASK : dword
{
    DELETE                      = 0x00010000L,
    READ_CONTROL                = 0x00020000L,
    WRITE_DAC                   = 0x00040000L,
    WRITE_OWNER                 = 0x00080000L,
    SYNCHRONIZE                 = 0x00100000L,

    STANDARD_RIGHTS_REQUIRED    = 0x000F0000L,
    STANDARD_RIGHTS_ALL         = 0x001F0000L,
    SPECIFIC_RIGHTS_ALL         = 0x0000FFFFL,
    ACCESS_SYSTEM_SECURITY      = 0x01000000L,
    MAXIMUM_ALLOWED             = 0x02000000L,

    GENERIC_READ                = 0x80000000L,
    GENERIC_WRITE               = 0x40000000L,
    GENERIC_EXECUTE             = 0x20000000L,
    GENERIC_ALL                 = 0x10000000L,

    TOKEN_ASSIGN_PRIMARY        = 0x0001,
    TOKEN_DUPLICATE             = 0x0002,
    TOKEN_IMPERSONATE           = 0x0004,
    TOKEN_QUERY                 = 0x0008,
    TOKEN_QUERY_SOURCE          = 0x0010,
    TOKEN_ADJUST_PRIVILEGES     = 0x0020,
    TOKEN_ADJUST_GROUPS         = 0x0040,
    TOKEN_ADJUST_DEFAULT        = 0x0080,
    TOKEN_ADJUST_SESSIONID      = 0x0100,
};

enum TOKEN_INFORMATION_CLASS : dword
{
    TokenUser = 1,
    TokenGroups,
    TokenPrivileges,
    TokenOwner,
    TokenPrimaryGroup,
    TokenDefaultDacl,
    TokenSource,
    TokenType,
    TokenImpersonationLevel,
    TokenStatistics,
    TokenRestrictedSids,
    TokenSessionId,
    TokenGroupsAndPrivileges,
    TokenSessionReference,
    TokenSandBoxInert,
    TokenAuditPolicy,
    TokenOrigin,
    TokenElevationType,
    TokenLinkedToken,
    TokenElevation,
    TokenHasRestrictions,
    TokenAccessInformation,
    TokenVirtualizationAllowed,
    TokenVirtualizationEnabled,
    TokenIntegrityLevel,
    TokenUIAccess,
    TokenMandatoryPolicy,
    TokenLogonSid,
    TokenIsAppContainer,
    TokenCapabilities,
    TokenAppContainerSid,
    TokenAppContainerNumber,
    TokenUserClaimAttributes,
    TokenDeviceClaimAttributes,
    TokenRestrictedUserClaimAttributes,
    TokenRestrictedDeviceClaimAttributes,
    TokenDeviceGroups,
    TokenRestrictedDeviceGroups,
    TokenSecurityAttributes,
    TokenIsRestricted,
    TokenProcessTrustLevel,
    TokenPrivateNameSpace,
    TokenSingletonAttributes,
    TokenBnoIsolation,
    TokenChildProcessFlags,
    TokenIsLessPrivilegedAppContainer,
    TokenIsSandboxed,
    TokenIsAppSilo,

    MaxTokenInfoClass
};

typedef struct _SID_IDENTIFIER_AUTHORITY {
    byte Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;

typedef struct _SID {
    byte                        Revision;
    byte                        SubAuthorityCount;
    SID_IDENTIFIER_AUTHORITY    IdentifierAuthority;
    dword                       SubAuthority[1];
} SID, *PISID;

typedef void* PSID;

typedef struct _SID_AND_ATTRIBUTES {
    PSID    Sid;
    dword   Attributes;
} SID_AND_ATTRIBUTES, * PSID_AND_ATTRIBUTES;

typedef struct _TOKEN_USER {
    SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;

typedef struct _KEY_VALUE_PARTIAL_INFORMATION 
{
     dword     TitleIndex;
     dword     Type;
     dword     DataLength;
     byte      Data[1];
} KEY_VALUE_PARTIAL_INFORMATION, *PKEY_VALUE_PARTIAL_INFORMATION;

struct NTSurfer
{
    struct UNICODE_STRING
    {
        word Length;
        word MaximumLength;
        const wchar_t* Buffer;

        constexpr UNICODE_STRING(const wchar_t* Buffer)
        :   Length(0), MaximumLength(0), Buffer(const_cast<wchar_t*>(Buffer)) 
        {
            while (Buffer[Length]) ++Length;
            Length *= 2;
            MaximumLength = Length + 2;
        }
    };

    struct EXPORT_TABLE
    {
        maxword* Array;
        maxword  ArraySize;
    };

    enum EDataDir : byte
    {
        Export      = 0,
        Import      = 1,
        Resource    = 2,
        Exception   = 3,
        Security    = 4,
        Basereloc   = 5
    };

    // Getter Macros

    // DO NOT WRITE TO THIS ADDRESS!
    __forceinline static KUSER_SHARED_DATA const& ReadSharedData()
    {
        return *reinterpret_cast<KUSER_SHARED_DATA*>(KUSER_SD);
    }

    __forceinline static IMAGE_DOS_HEADER* GetDOSHeader(maxword ImageBase)
    {
        return reinterpret_cast<IMAGE_DOS_HEADER*>(ImageBase);
    }

    __forceinline static IMAGE_NT_HEADERS* GetNTHeaders(maxword ImageBase)
    {
        return reinterpret_cast<IMAGE_NT_HEADERS*>(ImageBase + GetDOSHeader(ImageBase)->e_lfanew);
    }

    __forceinline static IMAGE_DATA_DIRECTORY* GetDataDirectory(maxword ImageBase, byte Index)
    {
        return &(GetNTHeaders(ImageBase)->OptionalHeader.DataDirectory[Index]);
    }

    __forceinline static IMAGE_EXPORT_DIRECTORY* GetExportDirectory(maxword ImageBase)
    {
        return reinterpret_cast<IMAGE_EXPORT_DIRECTORY*>(ImageBase + GetDataDirectory(ImageBase, 0)->VirtualAddress);
    }

    // Address To PEB
 
    __forceinline static PPEB UsePEB(maxword Address)
    {
        return reinterpret_cast<PPEB>(Address);
    }

    // Allowing it to inline increases the file size around 0.5kb per call
    __declspec(noinline) static maxword FindExportAddress(const maxword ImageBase, const char* FunctionName, bool bReturnPlusBase = true);
    static maxword FindDLLAddress(const maxword ProcessEnvironmentBlock, const wchar_t* DLLName, bool bReturnPlusBase = true);

    static bool GetRegistryKey(maxword NTDLL, const wchar_t* KeyPath, const wchar_t* Key, wchar_t* IOBuffer, maxword IOBufferSize, NTSTATUS& Status, KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass);
    static bool CreateRegistryKey(maxword NTDLL, const wchar_t* KeyPath, NTSTATUS& Status);

    // UG - Unguarded, you are responsible for closing the returned void* KeyHandle when you are done using it via NtClose
    static void* GetRegistryKeyUG(maxword NTDLL, const wchar_t* KeyPath, const wchar_t* Key, wchar_t* IOBuffer, maxword IOBufferSize, NTSTATUS& Status, KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass);
    static void* CreateRegistryKeyUG(maxword NTDLL, const wchar_t* KeyPath, NTSTATUS& Status);

    static void* OpenProcessTokenUG(maxword NTDLL, maxword ProcessHandle, ACCESS_MASK DesiredAccess, NTSTATUS& Status);
    static dword QueryInformationTokenUG(maxword NTDLL, void* TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, byte* IOTokenBuffer, dword IOTokenBufferLength, NTSTATUS& Status);

    static bool CreateFile(maxword NTDLL, void** FileHandle, dword DesiredAccess, NTS::OBJECT_ATTRIBUTES* ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, PLARGE_INTEGER AllocationSize, dword FileAttributes, dword ShareAccess, dword CreateDisposition, dword CreateOptions, void* EaBuffer, dword EaLength, NTSTATUS& Status);

    // Copies the Windows User Hive ID to a buffer, this is unreadable and must be converted to a string if needed.
    template <dword Size>
    static PSID GetUserHiveRawC(maxword NTDLL, byte(&IOBuffer)[Size])
    {
        static_assert(Size >= 260, "The IOBuffer must be atleast 260 characters.");

        NTSTATUS Status{0};
        void* Token = OpenProcessTokenUG(NTDLL, GetCurrentProcess(), NTS::ACCESS_MASK::TOKEN_QUERY, Status);

        if (Status >= 0)
        {
            QueryInformationTokenUG(NTDLL, Token, NTS::TokenUser, IOBuffer, Size, Status);
            if (Status >= 0)
            {
                return reinterpret_cast<NTS::PTOKEN_USER>(IOBuffer)->User.Sid;
            }
        }
    }
    
    static NTSTATUS ConvertSidToUnicode(maxword NTDLL, PUNICODE_STRING UnicodeString, PSID Sid, dword AllocateDestinationString = false);

    //static bool SetRegistryKey(maxword NTDLL, void* KeyHandle, )

    template <dword Size>
    static bool GetRegistryKey(maxword NTDLL, const wchar_t* KeyPath, const wchar_t* Key, wchar_t (&IOBuffer)[Size], NTSTATUS& Status, KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass = KeyValuePartialInformation)
    {
        return GetRegistryKey(NTDLL, KeyPath, Key, IOBuffer, Size, Status, KeyValueInformationClass);
    }

    // Windows System Root Directory 

    // Grabs the SystemRoot from Kernel User Shared Data, this is a pointer to the buffer, DO NOT ATTEMPT TO WRITE OVER IT.
    __forceinline static wchar_t const* GetWindowsDirectoryP()
    {
        return ReadSharedData().NtSystemRoot;
    }

    // Grabs the SystemRoot from Kernel User Shared Data, this copies from the buffer and is safe.
    template <word Size>
    __forceinline static void GetWindowsDirectoryC(wchar_t (&IOBuffer)[Size])
    {
        static_assert(Size >= 260, "The IOBuffer must be atleast 260 wide characters.");
        const wchar_t* SystemRoot = ReadSharedData().NtSystemRoot;

        dword i{0};

        while (SystemRoot[i] && i < Size)
        {
            IOBuffer[i] = SystemRoot[i];
            i++;
        }
    }

    // I built this as a separate function before discovering that you can instantly access this from the Kernel User Shared Data space.
    // This backup method will likely never be used, it uses three API calls to NTDLL compared to the zero from KUserSharedData.
    template <dword Size>
    static bool GetWindowsDirectoryReg(maxword NTDLL, wchar_t (&IOBuffer)[Size], NTSTATUS& Status)
    {
        return GetRegistryKey(NTDLL, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", L"SystemRoot", IOBuffer, Size, Status, NTS::KeyValuePartialInformation);
    }

    // File Operations

    //NTSTATUS OpenFile

};

namespace TD
{
    typedef NTSTATUS(__stdcall* T_NtQueryInformationProcess)(void* inProcessHandle, int inProcessInformationClass, void* outProcessInformation, dword inProcessInformationLength, dword* outReturnLength);
    typedef NTSTATUS(__stdcall* T_NtOpenKey)(void* KeyHandle, dword DesiredAccess, OBJECT_ATTRIBUTES* ObjectAttributes);
    typedef NTSTATUS(__stdcall* T_NtCreateKey)(void** KeyHandle, dword DesiredAccess, OBJECT_ATTRIBUTES* ObjectAttributes, dword TitleIndex, const PUNICODE_STRING Class, dword CreateOptions, dword* Disposition);
    typedef NTSTATUS(__stdcall* T_NtSetValueKey)(void** KeyHandle, const PUNICODE_STRING ValueName, dword TitleIndex, dword Type, void** Data, dword DataSize);
    typedef NTSTATUS(__stdcall* T_NtQueryValueKey)(void* KeyHandle, const PUNICODE_STRING ValueName, dword KeyValueInformationClass, void* KeyValueInformation, dword Length, dword* ResultLength);
    typedef NTSTATUS(__stdcall* T_NtClose)(void* Handle);
    typedef NTSTATUS(__stdcall* T_NtOpenFile)(void** FileHandle, dword DesiredAccess, NTS::OBJECT_ATTRIBUTES* ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, dword ShareAccess, dword OpenOptions);
    typedef NTSTATUS(__stdcall* T_NtCreateFile)(void** FileHandle, dword DesiredAccess, NTS::OBJECT_ATTRIBUTES* ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, LARGE_INTEGER* AllocationSize, dword FileAttributes, dword ShareAccess, dword CreateDisposition, dword CreateOptions, void* EaBuffer, dword EaLength);
    typedef NTSTATUS(__stdcall* T_NtOpenProcessToken)(void* ProcessHandle, ACCESS_MASK DesiredAccess, void** TokenHandle);
    typedef NTSTATUS(__stdcall* T_NtQueryInformationToken)(void* TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, void* TokenInformation, dword TokenInformationLength, dword* ReturnLength);
    typedef NTSTATUS(__stdcall* T_LdrLoadDll)(const wchar_t* PathToFile, dword* Flags, PUNICODE_STRING ModuleFileName, void** ModuleHandle);
    typedef NTSTATUS(__stdcall* T_RtlConvertSidToUnicodeString)(PUNICODE_STRING UnicodeString, PSID Sid, dword AllocateDestinationString);
}
namespace FC
{
    __forceinline NTSTATUS NtQueryInformationProcess(maxword FunctionAddress, void* inProcessHandle, int inProcessInformationClass, void* outProcessInformation, dword inProcessInformationLength, dword* outReturnLength)
    {
        return Call<TD::T_NtQueryInformationProcess>(FunctionAddress)(inProcessHandle, inProcessInformationClass, outProcessInformation, inProcessInformationLength, outReturnLength);
    }
}
}