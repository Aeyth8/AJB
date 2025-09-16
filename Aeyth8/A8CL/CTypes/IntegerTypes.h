#pragma once
#if defined _M_X64
	#define B64 1
#elif defined _M_IX86
	#define B64 0
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{
	typedef signed char			int8;
	typedef short				int16;
	typedef int					int32;
	typedef long long			int64;

	typedef unsigned char		uint8;
	typedef unsigned short		uint16;
	typedef unsigned int		uint32;
	typedef unsigned long long  uint64;

#if B64
	typedef unsigned long long  size_t;
	typedef unsigned long long  uintptr_t;
#elif !B64
	typedef unsigned long		size_t;
	typedef unsigned int		uintptr_t;
#endif

	typedef size_t				size;

	template <class A, class B>
	struct IsSameType { static constexpr bool bIsSame{false}; };
	template <class A>
	struct IsSameType<A, A> { static constexpr bool bIsSame{true}; };

	template <class Type>
	Type&& Declval() noexcept;

	template <class From, class To>
	struct IsConvertible
	{
	private:

		template <class FROM, class TO, class = decltype(TO{Declval<FROM>()})>
		static char Test(int);

		template <class, class>
		static int Test(...);

	public:

		static constexpr bool bIsConvertible = sizeof(Test<From, To>(0)) == sizeof(char);
	};
}