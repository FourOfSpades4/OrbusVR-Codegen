// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_PARAMETER_DESC_DATA
  struct DSP_PARAMETER_DESC_DATA;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_PARAMETER_DESC_DATA, "FMOD", "DSP_PARAMETER_DESC_DATA");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.DSP_PARAMETER_DESC_DATA
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_PARAMETER_DESC_DATA/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 datatype
    // Size: 0x4
    // Offset: 0x0
    int datatype;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSP_PARAMETER_DESC_DATA
    constexpr DSP_PARAMETER_DESC_DATA(int datatype_ = {}) noexcept : datatype{datatype_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return datatype;
    }
    // Get instance field reference: public System.Int32 datatype
    [[deprecated("Use field access instead!")]] int& dyn_datatype();
  }; // FMOD.DSP_PARAMETER_DESC_DATA
  #pragma pack(pop)
  static check_size<sizeof(DSP_PARAMETER_DESC_DATA), 0 + sizeof(int)> __FMOD_DSP_PARAMETER_DESC_DATASizeCheck;
  static_assert(sizeof(DSP_PARAMETER_DESC_DATA) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
