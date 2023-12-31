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
  // Forward declaring type: vx_audio_device_hot_swap_event_type_t
  struct vx_audio_device_hot_swap_event_type_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_audio_device_hot_swap_event_type_t, "", "vx_audio_device_hot_swap_event_type_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_audio_device_hot_swap_event_type_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_audio_device_hot_swap_event_type_t/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_audio_device_hot_swap_event_type_t
    constexpr vx_audio_device_hot_swap_event_type_t(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints
    static constexpr const int vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints = 0;
    // Get static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints
    static ::GlobalNamespace::vx_audio_device_hot_swap_event_type_t _get_vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints();
    // Set static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints
    static void _set_vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints(::GlobalNamespace::vx_audio_device_hot_swap_event_type_t value);
    // static field const value: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_active_render_device_changed
    static constexpr const int vx_audio_device_hot_swap_event_type_active_render_device_changed = 1;
    // Get static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_active_render_device_changed
    static ::GlobalNamespace::vx_audio_device_hot_swap_event_type_t _get_vx_audio_device_hot_swap_event_type_active_render_device_changed();
    // Set static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_active_render_device_changed
    static void _set_vx_audio_device_hot_swap_event_type_active_render_device_changed(::GlobalNamespace::vx_audio_device_hot_swap_event_type_t value);
    // static field const value: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_active_capture_device_changed
    static constexpr const int vx_audio_device_hot_swap_event_type_active_capture_device_changed = 2;
    // Get static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_active_capture_device_changed
    static ::GlobalNamespace::vx_audio_device_hot_swap_event_type_t _get_vx_audio_device_hot_swap_event_type_active_capture_device_changed();
    // Set static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_active_capture_device_changed
    static void _set_vx_audio_device_hot_swap_event_type_active_capture_device_changed(::GlobalNamespace::vx_audio_device_hot_swap_event_type_t value);
    // static field const value: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_audio_device_added
    static constexpr const int vx_audio_device_hot_swap_event_type_audio_device_added = 3;
    // Get static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_audio_device_added
    static ::GlobalNamespace::vx_audio_device_hot_swap_event_type_t _get_vx_audio_device_hot_swap_event_type_audio_device_added();
    // Set static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_audio_device_added
    static void _set_vx_audio_device_hot_swap_event_type_audio_device_added(::GlobalNamespace::vx_audio_device_hot_swap_event_type_t value);
    // static field const value: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_audio_device_removed
    static constexpr const int vx_audio_device_hot_swap_event_type_audio_device_removed = 4;
    // Get static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_audio_device_removed
    static ::GlobalNamespace::vx_audio_device_hot_swap_event_type_t _get_vx_audio_device_hot_swap_event_type_audio_device_removed();
    // Set static field: static public vx_audio_device_hot_swap_event_type_t vx_audio_device_hot_swap_event_type_audio_device_removed
    static void _set_vx_audio_device_hot_swap_event_type_audio_device_removed(::GlobalNamespace::vx_audio_device_hot_swap_event_type_t value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_audio_device_hot_swap_event_type_t
  #pragma pack(pop)
  static check_size<sizeof(vx_audio_device_hot_swap_event_type_t), 0 + sizeof(int)> __GlobalNamespace_vx_audio_device_hot_swap_event_type_tSizeCheck;
  static_assert(sizeof(vx_audio_device_hot_swap_event_type_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
