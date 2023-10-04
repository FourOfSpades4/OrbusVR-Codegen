// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: FMOD.VECTOR
#include "FMOD/VECTOR.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: ATTRIBUTES_3D
  struct ATTRIBUTES_3D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::ATTRIBUTES_3D, "FMOD", "ATTRIBUTES_3D");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.ATTRIBUTES_3D
  // [TokenAttribute] Offset: FFFFFFFF
  struct ATTRIBUTES_3D/*, public ::System::ValueType*/ {
    public:
    public:
    // public FMOD.VECTOR position
    // Size: 0xC
    // Offset: 0x0
    ::FMOD::VECTOR position;
    // Field size check
    static_assert(sizeof(::FMOD::VECTOR) == 0xC);
    // public FMOD.VECTOR velocity
    // Size: 0xC
    // Offset: 0xC
    ::FMOD::VECTOR velocity;
    // Field size check
    static_assert(sizeof(::FMOD::VECTOR) == 0xC);
    // public FMOD.VECTOR forward
    // Size: 0xC
    // Offset: 0x18
    ::FMOD::VECTOR forward;
    // Field size check
    static_assert(sizeof(::FMOD::VECTOR) == 0xC);
    // public FMOD.VECTOR up
    // Size: 0xC
    // Offset: 0x24
    ::FMOD::VECTOR up;
    // Field size check
    static_assert(sizeof(::FMOD::VECTOR) == 0xC);
    public:
    // Creating value type constructor for type: ATTRIBUTES_3D
    constexpr ATTRIBUTES_3D(::FMOD::VECTOR position_ = {}, ::FMOD::VECTOR velocity_ = {}, ::FMOD::VECTOR forward_ = {}, ::FMOD::VECTOR up_ = {}) noexcept : position{position_}, velocity{velocity_}, forward{forward_}, up{up_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public FMOD.VECTOR position
    [[deprecated("Use field access instead!")]] ::FMOD::VECTOR& dyn_position();
    // Get instance field reference: public FMOD.VECTOR velocity
    [[deprecated("Use field access instead!")]] ::FMOD::VECTOR& dyn_velocity();
    // Get instance field reference: public FMOD.VECTOR forward
    [[deprecated("Use field access instead!")]] ::FMOD::VECTOR& dyn_forward();
    // Get instance field reference: public FMOD.VECTOR up
    [[deprecated("Use field access instead!")]] ::FMOD::VECTOR& dyn_up();
  }; // FMOD.ATTRIBUTES_3D
  #pragma pack(pop)
  static check_size<sizeof(ATTRIBUTES_3D), 36 + sizeof(::FMOD::VECTOR)> __FMOD_ATTRIBUTES_3DSizeCheck;
  static_assert(sizeof(ATTRIBUTES_3D) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
