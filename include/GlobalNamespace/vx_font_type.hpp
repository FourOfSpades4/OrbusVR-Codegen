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
  // Forward declaring type: vx_font_type
  struct vx_font_type;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_font_type, "", "vx_font_type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_font_type
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_font_type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_font_type
    constexpr vx_font_type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_font_type type_none
    static constexpr const int type_none = 0;
    // Get static field: static public vx_font_type type_none
    static ::GlobalNamespace::vx_font_type _get_type_none();
    // Set static field: static public vx_font_type type_none
    static void _set_type_none(::GlobalNamespace::vx_font_type value);
    // static field const value: static public vx_font_type type_root
    static constexpr const int type_root = 1;
    // Get static field: static public vx_font_type type_root
    static ::GlobalNamespace::vx_font_type _get_type_root();
    // Set static field: static public vx_font_type type_root
    static void _set_type_root(::GlobalNamespace::vx_font_type value);
    // static field const value: static public vx_font_type type_user
    static constexpr const int type_user = 2;
    // Get static field: static public vx_font_type type_user
    static ::GlobalNamespace::vx_font_type _get_type_user();
    // Set static field: static public vx_font_type type_user
    static void _set_type_user(::GlobalNamespace::vx_font_type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_font_type
  #pragma pack(pop)
  static check_size<sizeof(vx_font_type), 0 + sizeof(int)> __GlobalNamespace_vx_font_typeSizeCheck;
  static_assert(sizeof(vx_font_type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"