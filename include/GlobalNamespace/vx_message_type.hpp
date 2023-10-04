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
  // Forward declaring type: vx_message_type
  struct vx_message_type;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_message_type, "", "vx_message_type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_message_type
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_message_type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_message_type
    constexpr vx_message_type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_message_type msg_none
    static constexpr const int msg_none = 0;
    // Get static field: static public vx_message_type msg_none
    static ::GlobalNamespace::vx_message_type _get_msg_none();
    // Set static field: static public vx_message_type msg_none
    static void _set_msg_none(::GlobalNamespace::vx_message_type value);
    // static field const value: static public vx_message_type msg_request
    static constexpr const int msg_request = 1;
    // Get static field: static public vx_message_type msg_request
    static ::GlobalNamespace::vx_message_type _get_msg_request();
    // Set static field: static public vx_message_type msg_request
    static void _set_msg_request(::GlobalNamespace::vx_message_type value);
    // static field const value: static public vx_message_type msg_response
    static constexpr const int msg_response = 2;
    // Get static field: static public vx_message_type msg_response
    static ::GlobalNamespace::vx_message_type _get_msg_response();
    // Set static field: static public vx_message_type msg_response
    static void _set_msg_response(::GlobalNamespace::vx_message_type value);
    // static field const value: static public vx_message_type msg_event
    static constexpr const int msg_event = 3;
    // Get static field: static public vx_message_type msg_event
    static ::GlobalNamespace::vx_message_type _get_msg_event();
    // Set static field: static public vx_message_type msg_event
    static void _set_msg_event(::GlobalNamespace::vx_message_type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_message_type
  #pragma pack(pop)
  static check_size<sizeof(vx_message_type), 0 + sizeof(int)> __GlobalNamespace_vx_message_typeSizeCheck;
  static_assert(sizeof(vx_message_type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"