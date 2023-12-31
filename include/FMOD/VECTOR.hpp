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
  // Forward declaring type: VECTOR
  struct VECTOR;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::VECTOR, "FMOD", "VECTOR");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.VECTOR
  // [TokenAttribute] Offset: FFFFFFFF
  struct VECTOR/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VECTOR
    constexpr VECTOR(float x_ = {}, float y_ = {}, float z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    [[deprecated("Use field access instead!")]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated("Use field access instead!")]] float& dyn_y();
    // Get instance field reference: public System.Single z
    [[deprecated("Use field access instead!")]] float& dyn_z();
  }; // FMOD.VECTOR
  #pragma pack(pop)
  static check_size<sizeof(VECTOR), 8 + sizeof(float)> __FMOD_VECTORSizeCheck;
  static_assert(sizeof(VECTOR) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
