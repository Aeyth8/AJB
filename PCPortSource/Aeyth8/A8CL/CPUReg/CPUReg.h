#pragma once

#if defined _M_X64
	#define B64 1
	#define wordoffset 0x60
#elif defined _M_IX86
	#define B64 0
	#define wordoffset 0x30
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

#if B64
	typedef unsigned long long ull;
#elif !B64
	typedef unsigned long ull;
#endif

extern "C" ull GetRax();
extern "C" ull GetRbx();
extern "C" ull GetRcx();
extern "C" ull GetRdx();
extern "C" ull GetRsi();
extern "C" ull GetRdi();
extern "C" ull GetRbp();
extern "C" ull GetRsp();

extern "C" ull GetR8();
extern "C" ull GetR9();
extern "C" ull GetR10();
extern "C" ull GetR11();
extern "C" ull GetR12();
extern "C" ull GetR13();
extern "C" ull GetR14();
extern "C" ull GetR15();

//extern "C" ull GetRIP();

//extern "C" ull GetReturnAddress();

enum ERegister : unsigned char
{
	rax,
	rbx,
	rcx,
	rdx,
	rsi,
	rdi,
	rbp,
	rsp,
	r8,
	r9,
	r10,
	r11,
	r12,
	r13,
	r14,
	r15,
	rip,
};

struct CPUReg
{
	constexpr static ull(*RegisterCallbacks[])() { GetRax, GetRbx, GetRcx, GetRdx, GetRsi, GetRdi, GetRbp, GetRsp, GetR8, GetR9, GetR10, GetR11, GetR12, GetR13, GetR14, GetR15 };

	__forceinline static ull GetRegisterValue(ERegister Register)
	{
		return RegisterCallbacks[Register]();
	}

	__forceinline static ull GetDereferencedValue(ERegister Register)
	{
		ull* Pointer = reinterpret_cast<ull*>(GetRegisterValue(Register));
		return *Pointer;
	}

	__forceinline static ull DereferenceValue(ull* Register)
	{
		return *Register;
	}
};