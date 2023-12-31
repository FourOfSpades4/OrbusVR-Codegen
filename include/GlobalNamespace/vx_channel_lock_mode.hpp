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
  // Forward declaring type: vx_channel_lock_mode
  struct vx_channel_lock_mode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_channel_lock_mode, "", "vx_channel_lock_mode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_channel_lock_mode
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_channel_lock_mode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_channel_lock_mode
    constexpr vx_channel_lock_mode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_channel_lock_mode channel_unlock
    static constexpr const int channel_unlock = 0;
    // Get static field: static public vx_channel_lock_mode channel_unlock
    static ::GlobalNamespace::vx_channel_lock_mode _get_channel_unlock();
    // Set static field: static public vx_channel_lock_mode channel_unlock
    static void _set_channel_unlock(::GlobalNamespace::vx_channel_lock_mode value);
    // static field const value: static public vx_channel_lock_mode channel_lock
    static constexpr const int channel_lock = 1;
    // Get static field: static public vx_channel_lock_mode channel_lock
    static ::GlobalNamespace::vx_channel_lock_mode _get_channel_lock();
    // Set static field: static public vx_channel_lock_mode channel_lock
    static void _set_channel_lock(::GlobalNamespace::vx_channel_lock_mode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_channel_lock_mode
  #pragma pack(pop)
  static check_size<sizeof(vx_channel_lock_mode), 0 + sizeof(int)> __GlobalNamespace_vx_channel_lock_modeSizeCheck;
  static_assert(sizeof(vx_channel_lock_mode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
