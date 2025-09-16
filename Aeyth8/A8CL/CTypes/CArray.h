#pragma once
#include "IntegerTypes.h"
#ifdef max
#undef max
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{

// A resizable template array, my own homemade std::vector
template <class Type, class Integer = uint32>
class CArray
{
protected:

	// Sort of manual memory allocation

	static Type* Alloc(Integer& Size)
	{
		return new Type[Size];
	}

	static void Free(Type*& Memory)
	{
		delete[] Memory;
		Memory = nullptr;
	}

	// Makeshifty class to allow for multioperational syntax (I may regret it)
	class Operations
	{
	protected:

		friend class CArray;

		CArray& ParentClassObject;

		Operations(CArray& OwningObject) : ParentClassObject(OwningObject) {}

	public:

		// Automatically presumes that the Array is not null.
		Type* GetByIndex(const Integer& Index)
		{
			if (ParentClassObject->IsValidIndex(Index))
			{
				return ParentClassObject->Array[Index];
			}
		}

		Type* GetBehindIndex()
		{

		}

		Type* GetInfrontIndex()
		{

		}


		// Internal function, does not safety-check the index.
		bool Push()
		{

		}

		// Internal function, does not safety-check the index.
		bool Pop()
		{

		}
	};

	class PushOperations : protected Operations
	{
	public:

		using Operations::Operations;
		PushOperations() = delete;

		bool front(Type Object)
		{
			
		}

		bool back(Type Object)
		{

		}

		bool index(Integer Index, Type Object, bool bOverwriteExisting = true)
		{
			
		}

		bool behind_index(Integer Index, Type Object, bool bOverwriteExisting = true)
		{

		}

		bool infront_index(Integer Index, Type Object, bool bOverwriteExisting = true)
		{

		}
	};

	class PopOperations : protected Operations
	{
	public:

		using Operations::Operations;
		PopOperations() = delete;

		bool front(Type Object)
		{

		}

		bool back(Type Object)
		{

		}

		bool index(Integer Index, Type Object)
		{

		}

		bool behind_index(Integer Index, Type Object)
		{

		}

		bool infront_index(Integer Index, Type Object)
		{

		}
	};

	// Class members

	Type*		Array;
	Integer		Count;		// The amount of objects stored in the array
	Integer		Max;		// The size of the array, the amount of memory space allocated to the array.

public:

	// Default constructor.
	CArray() : Array(nullptr), Count(0), Max(0) {}

	// Constructor with size reserved allocation.
	CArray(Integer MaxSize) : Array(nullptr), Count(0), Max(MaxSize) 
	{
		this->Array = Alloc(MaxSize);
	}

	// Destructor.
	~CArray()
	{
		if (this->Array) Free(Array);
	}

	// -- Helpers

	constexpr Type* const begin()	{ return Array; }
	constexpr Type* const end()		{ return Array + Count; }

	Integer const size()			{ return Count; }
	Integer const max()				{ return Max; }

	bool Resize(Integer NewSize, bool bEraseConflictingIndexes = true)
	{
		if (NewSize < Max && !bEraseConflictingIndexes) return false;
		
		Type* NewArray = Alloc(NewSize);

		if (NewArray)
		{
			Resolve(this);

			Integer i{0};
			for (;i < NewSize && i < Count; ++i)
			{
				NewArray[i] = this->Array[i];
			}

			Free(this->Array);

			this->Count = i;
			this->Max = NewSize;
			this->Array = NewArray;

			return true;
		}

		return false;
	}

	// Checks the entire array for null pointers, 
	// If there is any (for example a nullptr in the middle of the array) 
	// It will resolve the array and shift accordingly.
	// Returns the number of null pointers resolved, 0 if none.
	static Integer Resolve(CArray<Type, Integer>* OwningObject)
	{
		if (OwningObject->Max == 0) return 0;

		Integer ResolveCount{0};

		OwningObject->Count = 0;

		for (Integer i{0}; i < OwningObject->Max; ++i)
		{
			if (!OwningObject->Array[i])
			{
				Integer SpaceBetween{i};

				while (SpaceBetween < OwningObject->Max && !OwningObject->Array[SpaceBetween]) ++SpaceBetween;
				
				if (SpaceBetween == OwningObject->Max) break;

				OwningObject->Array[i] = OwningObject->Array[SpaceBetween];
				OwningObject->Array[SpaceBetween] = nullptr;

				++ResolveCount;
			}
			if (OwningObject->Array[i])
			{
				++OwningObject->Count;
			}
		}

		return ResolveCount;
	}
	/*	bool bIndexZeroNull{OwningObject->Array[0]}; // Flag for if the zeroth index is null, using a signed Integer would cost me half of all numbers.
		Integer ResolveCount = bIndexZeroNull ? 1 : 0;
		Integer i{1};

		Integer* NullIndex = new Integer[OwningObject->Max]{0};

		// Lists any null index in the array.
		for (;i < OwningObject->Max; ++i)
		{
			if (!OwningObject->Array[i])
			{
				NullIndex[++ResolveCount] = i;
			}
		}

		// End early.
		if (ResolveCount == 0)
		{
			delete[] NullIndex;
			return ResolveCount;
		}



		// The actual resolving logic.
		for (Integer& Index : NullIndex)
		{
			if (Index == 0 && )
		}
		for (;i > 0; --i)
		{

		}

		delete[] NullIndex;
	}*/

	bool Reserve(const Integer& Blocks)
	{

	}

	bool Clear()
	{

	}

	bool IsEmpty()					  { return Count == 0;   }
	bool IsFull()					  { return Count == Max; }
	bool IsValidIndex(Integer Index)  { return Index <= Max && this->Array[Index] != nullptr; }
	bool IsValidIndex(Integer& Index) { return Index <= Max && this->Array[Index] != nullptr; }

	// Allows for you to do things like push().back() or pop().front() and much more
	[[nodiscard("push")]] PushOperations push() { return PushOperations(*this); }
	[[nodiscard("pop")]]  PopOperations  pop()	{ return PopOperations(*this);	}
};

// CArray subclass, allows you to use initializer lists. 
template <class Type, class Integer = uint32>
class CVArray : public CArray<Type, Integer>
{
public:

	// Constructor with pre-filled indexes, or more commonly known as initializer lists.
	template <class... TypeVars>
	CVArray(TypeVars... InArray)
	{
		static_assert((IsConvertible<TypeVars, Type>::bIsConvertible && ...), "All types in the array must be convertible into the same type.");
		//static_assert((IsSameType<Type, TypeVars>::bIsSame && ...), "All types in the array must be explicitly the same.");

		this->Count = sizeof...(TypeVars);
		this->Max = sizeof...(TypeVars);
		this->Array = this->Alloc(this->Max);

		Type LocalArray[] = {InArray...};

		for (Integer i{0}; i < this->Max; ++i)
		{
			this->Array[i] = LocalArray[i];
		}
	}

};

inline static void I()
{
	/*const wchar_t* S{L"S"};
	wchar_t* s = const_cast<wchar_t*>(S);


	CArray<wchar_t*> Strings{19};
	Strings.push().back(s);

	
	CVArray<wchar_t*> String =
	{
		s,s
	};*/

}
}