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
  // Forward declaring type: vx_buddy_management_mode
  struct vx_buddy_management_mode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_buddy_management_mode, "", "vx_buddy_management_mode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_buddy_management_mode
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_buddy_management_mode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_buddy_management_mode
    constexpr vx_buddy_management_mode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_buddy_management_mode mode_auto_accept
    static constexpr const int mode_auto_accept = 0;
    // Get static field: static public vx_buddy_management_mode mode_auto_accept
    static ::GlobalNamespace::vx_buddy_management_mode _get_mode_auto_accept();
    // Set static field: static public vx_buddy_management_mode mode_auto_accept
    static void _set_mode_auto_accept(::GlobalNamespace::vx_buddy_management_mode value);
    // static field const value: static public vx_buddy_management_mode mode_auto_add
    static constexpr const int mode_auto_add = 1;
    // Get static field: static public vx_buddy_management_mode mode_auto_add
    static ::GlobalNamespace::vx_buddy_management_mode _get_mode_auto_add();
    // Set static field: static public vx_buddy_management_mode mode_auto_add
    static void _set_mode_auto_add(::GlobalNamespace::vx_buddy_management_mode value);
    // static field const value: static public vx_buddy_management_mode mode_block
    static constexpr const int mode_block = 2;
    // Get static field: static public vx_buddy_management_mode mode_block
    static ::GlobalNamespace::vx_buddy_management_mode _get_mode_block();
    // Set static field: static public vx_buddy_management_mode mode_block
    static void _set_mode_block(::GlobalNamespace::vx_buddy_management_mode value);
    // static field const value: static public vx_buddy_management_mode mode_hide
    static constexpr const int mode_hide = 3;
    // Get static field: static public vx_buddy_management_mode mode_hide
    static ::GlobalNamespace::vx_buddy_management_mode _get_mode_hide();
    // Set static field: static public vx_buddy_management_mode mode_hide
    static void _set_mode_hide(::GlobalNamespace::vx_buddy_management_mode value);
    // static field const value: static public vx_buddy_management_mode mode_application
    static constexpr const int mode_application = 4;
    // Get static field: static public vx_buddy_management_mode mode_application
    static ::GlobalNamespace::vx_buddy_management_mode _get_mode_application();
    // Set static field: static public vx_buddy_management_mode mode_application
    static void _set_mode_application(::GlobalNamespace::vx_buddy_management_mode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_buddy_management_mode
  #pragma pack(pop)
  static check_size<sizeof(vx_buddy_management_mode), 0 + sizeof(int)> __GlobalNamespace_vx_buddy_management_modeSizeCheck;
  static_assert(sizeof(vx_buddy_management_mode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
