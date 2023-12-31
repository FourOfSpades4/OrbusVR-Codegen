// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_aux_audio_properties_state
  struct vx_aux_audio_properties_state;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_aux_audio_properties_state, "", "vx_aux_audio_properties_state");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_aux_audio_properties_state
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_aux_audio_properties_state/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_aux_audio_properties_state
    constexpr vx_aux_audio_properties_state(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_aux_audio_properties_state aux_audio_properties_none
    static constexpr const int aux_audio_properties_none = 0;
    // Get static field: static public vx_aux_audio_properties_state aux_audio_properties_none
    static ::GlobalNamespace::vx_aux_audio_properties_state _get_aux_audio_properties_none();
    // Set static field: static public vx_aux_audio_properties_state aux_audio_properties_none
    static void _set_aux_audio_properties_none(::GlobalNamespace::vx_aux_audio_properties_state value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_aux_audio_properties_state
  #pragma pack(pop)
  static check_size<sizeof(vx_aux_audio_properties_state), 0 + sizeof(int)> __GlobalNamespace_vx_aux_audio_properties_stateSizeCheck;
  static_assert(sizeof(vx_aux_audio_properties_state) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
