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
  // Forward declaring type: vx_control_communications_operation
  struct vx_control_communications_operation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_control_communications_operation, "", "vx_control_communications_operation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_control_communications_operation
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_control_communications_operation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_control_communications_operation
    constexpr vx_control_communications_operation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_block
    static constexpr const int vx_control_communications_operation_block = 0;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_block
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_block();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_block
    static void _set_vx_control_communications_operation_block(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_unblock
    static constexpr const int vx_control_communications_operation_unblock = 1;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_unblock
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_unblock();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_unblock
    static void _set_vx_control_communications_operation_unblock(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_list
    static constexpr const int vx_control_communications_operation_list = 2;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_list
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_list();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_list
    static void _set_vx_control_communications_operation_list(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_block_list
    static constexpr const int vx_control_communications_operation_block_list = 2;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_block_list
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_block_list();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_block_list
    static void _set_vx_control_communications_operation_block_list(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_clear
    static constexpr const int vx_control_communications_operation_clear = 3;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_clear
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_clear();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_clear
    static void _set_vx_control_communications_operation_clear(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_clear_block_list
    static constexpr const int vx_control_communications_operation_clear_block_list = 3;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_clear_block_list
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_clear_block_list();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_clear_block_list
    static void _set_vx_control_communications_operation_clear_block_list(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_mute
    static constexpr const int vx_control_communications_operation_mute = 4;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_mute
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_mute();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_mute
    static void _set_vx_control_communications_operation_mute(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_unmute
    static constexpr const int vx_control_communications_operation_unmute = 5;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_unmute
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_unmute();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_unmute
    static void _set_vx_control_communications_operation_unmute(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_mute_list
    static constexpr const int vx_control_communications_operation_mute_list = 6;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_mute_list
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_mute_list();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_mute_list
    static void _set_vx_control_communications_operation_mute_list(::GlobalNamespace::vx_control_communications_operation value);
    // static field const value: static public vx_control_communications_operation vx_control_communications_operation_clear_mute_list
    static constexpr const int vx_control_communications_operation_clear_mute_list = 7;
    // Get static field: static public vx_control_communications_operation vx_control_communications_operation_clear_mute_list
    static ::GlobalNamespace::vx_control_communications_operation _get_vx_control_communications_operation_clear_mute_list();
    // Set static field: static public vx_control_communications_operation vx_control_communications_operation_clear_mute_list
    static void _set_vx_control_communications_operation_clear_mute_list(::GlobalNamespace::vx_control_communications_operation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_control_communications_operation
  #pragma pack(pop)
  static check_size<sizeof(vx_control_communications_operation), 0 + sizeof(int)> __GlobalNamespace_vx_control_communications_operationSizeCheck;
  static_assert(sizeof(vx_control_communications_operation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
