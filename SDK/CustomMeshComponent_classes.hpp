#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomMeshComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class CustomMeshComponent.CustomMeshComponent
// 0x0018 (0x05A0 - 0x0588)
class UCustomMeshComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_588[0x18];                                     // 0x0588(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	bool SetCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomMeshComponent">();
	}
	static class UCustomMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomMeshComponent>();
	}
};
static_assert(alignof(UCustomMeshComponent) == 0x000008, "Wrong alignment on UCustomMeshComponent");
static_assert(sizeof(UCustomMeshComponent) == 0x0005A0, "Wrong size on UCustomMeshComponent");

}

