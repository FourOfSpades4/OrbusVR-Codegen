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
  // Forward declaring type: vx_buddy_presence_state
  struct vx_buddy_presence_state;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_buddy_presence_state, "", "vx_buddy_presence_state");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_buddy_presence_state
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_buddy_presence_state/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_buddy_presence_state
    constexpr vx_buddy_presence_state(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_buddy_presence_state buddy_presence_unknown
    static constexpr const int buddy_presence_unknown = 0;
    // Get static field: static public vx_buddy_presence_state buddy_presence_unknown
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_unknown();
    // Set static field: static public vx_buddy_presence_state buddy_presence_unknown
    static void _set_buddy_presence_unknown(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_pending
    static constexpr const int buddy_presence_pending = 1;
    // Get static field: static public vx_buddy_presence_state buddy_presence_pending
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_pending();
    // Set static field: static public vx_buddy_presence_state buddy_presence_pending
    static void _set_buddy_presence_pending(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_online
    static constexpr const int buddy_presence_online = 2;
    // Get static field: static public vx_buddy_presence_state buddy_presence_online
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_online();
    // Set static field: static public vx_buddy_presence_state buddy_presence_online
    static void _set_buddy_presence_online(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_busy
    static constexpr const int buddy_presence_busy = 3;
    // Get static field: static public vx_buddy_presence_state buddy_presence_busy
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_busy();
    // Set static field: static public vx_buddy_presence_state buddy_presence_busy
    static void _set_buddy_presence_busy(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_brb
    static constexpr const int buddy_presence_brb = 4;
    // Get static field: static public vx_buddy_presence_state buddy_presence_brb
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_brb();
    // Set static field: static public vx_buddy_presence_state buddy_presence_brb
    static void _set_buddy_presence_brb(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_away
    static constexpr const int buddy_presence_away = 5;
    // Get static field: static public vx_buddy_presence_state buddy_presence_away
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_away();
    // Set static field: static public vx_buddy_presence_state buddy_presence_away
    static void _set_buddy_presence_away(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_onthephone
    static constexpr const int buddy_presence_onthephone = 6;
    // Get static field: static public vx_buddy_presence_state buddy_presence_onthephone
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_onthephone();
    // Set static field: static public vx_buddy_presence_state buddy_presence_onthephone
    static void _set_buddy_presence_onthephone(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_outtolunch
    static constexpr const int buddy_presence_outtolunch = 7;
    // Get static field: static public vx_buddy_presence_state buddy_presence_outtolunch
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_outtolunch();
    // Set static field: static public vx_buddy_presence_state buddy_presence_outtolunch
    static void _set_buddy_presence_outtolunch(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_custom
    static constexpr const int buddy_presence_custom = 8;
    // Get static field: static public vx_buddy_presence_state buddy_presence_custom
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_custom();
    // Set static field: static public vx_buddy_presence_state buddy_presence_custom
    static void _set_buddy_presence_custom(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_online_slc
    static constexpr const int buddy_presence_online_slc = 9;
    // Get static field: static public vx_buddy_presence_state buddy_presence_online_slc
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_online_slc();
    // Set static field: static public vx_buddy_presence_state buddy_presence_online_slc
    static void _set_buddy_presence_online_slc(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_closed
    static constexpr const int buddy_presence_closed = 0;
    // Get static field: static public vx_buddy_presence_state buddy_presence_closed
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_closed();
    // Set static field: static public vx_buddy_presence_state buddy_presence_closed
    static void _set_buddy_presence_closed(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_offline
    static constexpr const int buddy_presence_offline = 0;
    // Get static field: static public vx_buddy_presence_state buddy_presence_offline
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_offline();
    // Set static field: static public vx_buddy_presence_state buddy_presence_offline
    static void _set_buddy_presence_offline(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_chat
    static constexpr const int buddy_presence_chat = 10;
    // Get static field: static public vx_buddy_presence_state buddy_presence_chat
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_chat();
    // Set static field: static public vx_buddy_presence_state buddy_presence_chat
    static void _set_buddy_presence_chat(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_extended_away
    static constexpr const int buddy_presence_extended_away = 11;
    // Get static field: static public vx_buddy_presence_state buddy_presence_extended_away
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_extended_away();
    // Set static field: static public vx_buddy_presence_state buddy_presence_extended_away
    static void _set_buddy_presence_extended_away(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_min
    static constexpr const int buddy_presence_min = 0;
    // Get static field: static public vx_buddy_presence_state buddy_presence_min
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_min();
    // Set static field: static public vx_buddy_presence_state buddy_presence_min
    static void _set_buddy_presence_min(::GlobalNamespace::vx_buddy_presence_state value);
    // static field const value: static public vx_buddy_presence_state buddy_presence_max
    static constexpr const int buddy_presence_max = 11;
    // Get static field: static public vx_buddy_presence_state buddy_presence_max
    static ::GlobalNamespace::vx_buddy_presence_state _get_buddy_presence_max();
    // Set static field: static public vx_buddy_presence_state buddy_presence_max
    static void _set_buddy_presence_max(::GlobalNamespace::vx_buddy_presence_state value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_buddy_presence_state
  #pragma pack(pop)
  static check_size<sizeof(vx_buddy_presence_state), 0 + sizeof(int)> __GlobalNamespace_vx_buddy_presence_stateSizeCheck;
  static_assert(sizeof(vx_buddy_presence_state) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"