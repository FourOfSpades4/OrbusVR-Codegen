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
  // Forward declaring type: vx_participant_type
  struct vx_participant_type;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_participant_type, "", "vx_participant_type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_participant_type
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_participant_type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_participant_type
    constexpr vx_participant_type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_participant_type participant_user
    static constexpr const int participant_user = 0;
    // Get static field: static public vx_participant_type participant_user
    static ::GlobalNamespace::vx_participant_type _get_participant_user();
    // Set static field: static public vx_participant_type participant_user
    static void _set_participant_user(::GlobalNamespace::vx_participant_type value);
    // static field const value: static public vx_participant_type part_user
    static constexpr const int part_user = 0;
    // Get static field: static public vx_participant_type part_user
    static ::GlobalNamespace::vx_participant_type _get_part_user();
    // Set static field: static public vx_participant_type part_user
    static void _set_part_user(::GlobalNamespace::vx_participant_type value);
    // static field const value: static public vx_participant_type participant_moderator
    static constexpr const int participant_moderator = 1;
    // Get static field: static public vx_participant_type participant_moderator
    static ::GlobalNamespace::vx_participant_type _get_participant_moderator();
    // Set static field: static public vx_participant_type participant_moderator
    static void _set_participant_moderator(::GlobalNamespace::vx_participant_type value);
    // static field const value: static public vx_participant_type part_moderator
    static constexpr const int part_moderator = 1;
    // Get static field: static public vx_participant_type part_moderator
    static ::GlobalNamespace::vx_participant_type _get_part_moderator();
    // Set static field: static public vx_participant_type part_moderator
    static void _set_part_moderator(::GlobalNamespace::vx_participant_type value);
    // static field const value: static public vx_participant_type participant_owner
    static constexpr const int participant_owner = 2;
    // Get static field: static public vx_participant_type participant_owner
    static ::GlobalNamespace::vx_participant_type _get_participant_owner();
    // Set static field: static public vx_participant_type participant_owner
    static void _set_participant_owner(::GlobalNamespace::vx_participant_type value);
    // static field const value: static public vx_participant_type part_focus
    static constexpr const int part_focus = 2;
    // Get static field: static public vx_participant_type part_focus
    static ::GlobalNamespace::vx_participant_type _get_part_focus();
    // Set static field: static public vx_participant_type part_focus
    static void _set_part_focus(::GlobalNamespace::vx_participant_type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_participant_type
  #pragma pack(pop)
  static check_size<sizeof(vx_participant_type), 0 + sizeof(int)> __GlobalNamespace_vx_participant_typeSizeCheck;
  static_assert(sizeof(vx_participant_type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
