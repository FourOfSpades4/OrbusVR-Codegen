// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: MoveFromPoint
  class MoveFromPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::MoveFromPoint);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::MoveFromPoint*, "InfiniText", "MoveFromPoint");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.MoveFromPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class MoveFromPoint : public ::Il2CppObject {
    public:
    public:
    // System.Single X
    // Size: 0x4
    // Offset: 0x10
    float X;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single Y
    // Size: 0x4
    // Offset: 0x14
    float Y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 Index
    // Size: 0x4
    // Offset: 0x18
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Index and: Previous
    char __padding2[0x4] = {};
    // InfiniText.MoveFromPoint Previous
    // Size: 0x8
    // Offset: 0x20
    ::InfiniText::MoveFromPoint* Previous;
    // Field size check
    static_assert(sizeof(::InfiniText::MoveFromPoint*) == 0x8);
    public:
    // Get instance field reference: System.Single X
    [[deprecated("Use field access instead!")]] float& dyn_X();
    // Get instance field reference: System.Single Y
    [[deprecated("Use field access instead!")]] float& dyn_Y();
    // Get instance field reference: System.Int32 Index
    [[deprecated("Use field access instead!")]] int& dyn_Index();
    // Get instance field reference: InfiniText.MoveFromPoint Previous
    [[deprecated("Use field access instead!")]] ::InfiniText::MoveFromPoint*& dyn_Previous();
    // public System.Void .ctor()
    // Offset: 0x1053C54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoveFromPoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::MoveFromPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoveFromPoint*, creationType>()));
    }
  }; // InfiniText.MoveFromPoint
  #pragma pack(pop)
  static check_size<sizeof(MoveFromPoint), 32 + sizeof(::InfiniText::MoveFromPoint*)> __InfiniText_MoveFromPointSizeCheck;
  static_assert(sizeof(MoveFromPoint) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::MoveFromPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
