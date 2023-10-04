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
  // Forward declaring type: CffSubPosition
  class CffSubPosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::CffSubPosition);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::CffSubPosition*, "InfiniText", "CffSubPosition");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.CffSubPosition
  // [TokenAttribute] Offset: FFFFFFFF
  class CffSubPosition : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Length
    // Size: 0x4
    // Offset: 0x10
    int Length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Position
    // Size: 0x4
    // Offset: 0x14
    int Position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 Length
    [[deprecated("Use field access instead!")]] int& dyn_Length();
    // Get instance field reference: public System.Int32 Position
    [[deprecated("Use field access instead!")]] int& dyn_Position();
    // public System.Void .ctor(System.Int32 pos, System.Int32 length)
    // Offset: 0x14A5218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CffSubPosition* New_ctor(int pos, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::CffSubPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CffSubPosition*, creationType>(pos, length)));
    }
  }; // InfiniText.CffSubPosition
  #pragma pack(pop)
  static check_size<sizeof(CffSubPosition), 20 + sizeof(int)> __InfiniText_CffSubPositionSizeCheck;
  static_assert(sizeof(CffSubPosition) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::CffSubPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!