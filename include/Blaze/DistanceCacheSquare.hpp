// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Blaze.DistanceCachePoint
#include "Blaze/DistanceCachePoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: Scanner
  class Scanner;
}
// Completed forward declares
// Type namespace: Blaze
namespace Blaze {
  // Forward declaring type: DistanceCacheSquare
  class DistanceCacheSquare;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Blaze::DistanceCacheSquare);
DEFINE_IL2CPP_ARG_TYPE(::Blaze::DistanceCacheSquare*, "Blaze", "DistanceCacheSquare");
// Type namespace: Blaze
namespace Blaze {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Blaze.DistanceCacheSquare
  // [TokenAttribute] Offset: FFFFFFFF
  class DistanceCacheSquare : public ::Il2CppObject {
    public:
    public:
    // System.Int32 X
    // Size: 0x4
    // Offset: 0x10
    int X;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Y
    // Size: 0x4
    // Offset: 0x14
    int Y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Index
    // Size: 0x4
    // Offset: 0x18
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Count
    // Size: 0x4
    // Offset: 0x1C
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Single XOffset
    // Size: 0x4
    // Offset: 0x20
    float XOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single YOffset
    // Size: 0x4
    // Offset: 0x24
    float YOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Boolean InRange
    // Size: 0x1
    // Offset: 0x28
    bool InRange;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InRange and: PixelIndexX
    char __padding6[0x3] = {};
    // System.Int32 PixelIndexX
    // Size: 0x4
    // Offset: 0x2C
    int PixelIndexX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 PixelIndexY
    // Size: 0x4
    // Offset: 0x30
    int PixelIndexY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PixelIndexY and: SearchSet
    char __padding8[0x4] = {};
    // Blaze.DistanceCacheSquare[] SearchSet
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Blaze::DistanceCacheSquare*> SearchSet;
    // Field size check
    static_assert(sizeof(::ArrayW<::Blaze::DistanceCacheSquare*>) == 0x8);
    // System.Collections.Generic.List`1<Blaze.DistanceCachePoint> Points
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Blaze::DistanceCachePoint>* Points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Blaze::DistanceCachePoint>*) == 0x8);
    public:
    // Get instance field reference: System.Int32 X
    [[deprecated("Use field access instead!")]] int& dyn_X();
    // Get instance field reference: System.Int32 Y
    [[deprecated("Use field access instead!")]] int& dyn_Y();
    // Get instance field reference: System.Int32 Index
    [[deprecated("Use field access instead!")]] int& dyn_Index();
    // Get instance field reference: System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: System.Single XOffset
    [[deprecated("Use field access instead!")]] float& dyn_XOffset();
    // Get instance field reference: System.Single YOffset
    [[deprecated("Use field access instead!")]] float& dyn_YOffset();
    // Get instance field reference: System.Boolean InRange
    [[deprecated("Use field access instead!")]] bool& dyn_InRange();
    // Get instance field reference: System.Int32 PixelIndexX
    [[deprecated("Use field access instead!")]] int& dyn_PixelIndexX();
    // Get instance field reference: System.Int32 PixelIndexY
    [[deprecated("Use field access instead!")]] int& dyn_PixelIndexY();
    // Get instance field reference: Blaze.DistanceCacheSquare[] SearchSet
    [[deprecated("Use field access instead!")]] ::ArrayW<::Blaze::DistanceCacheSquare*>& dyn_SearchSet();
    // Get instance field reference: System.Collections.Generic.List`1<Blaze.DistanceCachePoint> Points
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Blaze::DistanceCachePoint>*& dyn_Points();
    // System.Void .ctor(System.Int32 x, System.Int32 y, System.Int32 index)
    // Offset: 0x12B76A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistanceCacheSquare* New_ctor(int x, int y, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::DistanceCacheSquare::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistanceCacheSquare*, creationType>(x, y, index)));
    }
    // System.Void Setup(Blaze.Scanner scanner)
    // Offset: 0x12B7740
    void Setup(::Blaze::Scanner* scanner);
    // System.Void RecalculateIndex(Blaze.Scanner scanner)
    // Offset: 0x12B7980
    void RecalculateIndex(::Blaze::Scanner* scanner);
    // System.Void Clear()
    // Offset: 0x12B79FC
    void Clear();
    // System.Void Add(System.Single x, System.Single y)
    // Offset: 0x12B7A64
    void Add(float x, float y);
  }; // Blaze.DistanceCacheSquare
  #pragma pack(pop)
  static check_size<sizeof(DistanceCacheSquare), 64 + sizeof(::System::Collections::Generic::List_1<::Blaze::DistanceCachePoint>*)> __Blaze_DistanceCacheSquareSizeCheck;
  static_assert(sizeof(DistanceCacheSquare) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Blaze::DistanceCacheSquare::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::DistanceCacheSquare::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::DistanceCacheSquare::*)(::Blaze::Scanner*)>(&Blaze::DistanceCacheSquare::Setup)> {
  static const MethodInfo* get() {
    static auto* scanner = &::il2cpp_utils::GetClassFromName("Blaze", "Scanner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::DistanceCacheSquare*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scanner});
  }
};
// Writing MetadataGetter for method: Blaze::DistanceCacheSquare::RecalculateIndex
// Il2CppName: RecalculateIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::DistanceCacheSquare::*)(::Blaze::Scanner*)>(&Blaze::DistanceCacheSquare::RecalculateIndex)> {
  static const MethodInfo* get() {
    static auto* scanner = &::il2cpp_utils::GetClassFromName("Blaze", "Scanner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::DistanceCacheSquare*), "RecalculateIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scanner});
  }
};
// Writing MetadataGetter for method: Blaze::DistanceCacheSquare::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::DistanceCacheSquare::*)()>(&Blaze::DistanceCacheSquare::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::DistanceCacheSquare*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::DistanceCacheSquare::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::DistanceCacheSquare::*)(float, float)>(&Blaze::DistanceCacheSquare::Add)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::DistanceCacheSquare*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};