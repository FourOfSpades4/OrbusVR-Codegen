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
  // Forward declaring type: orientation_type
  struct orientation_type;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::orientation_type, "", "orientation_type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: orientation_type
  // [TokenAttribute] Offset: FFFFFFFF
  struct orientation_type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: orientation_type
    constexpr orientation_type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public orientation_type orientation_default
    static constexpr const int orientation_default = 0;
    // Get static field: static public orientation_type orientation_default
    static ::GlobalNamespace::orientation_type _get_orientation_default();
    // Set static field: static public orientation_type orientation_default
    static void _set_orientation_default(::GlobalNamespace::orientation_type value);
    // static field const value: static public orientation_type orientation_legacy
    static constexpr const int orientation_legacy = 1;
    // Get static field: static public orientation_type orientation_legacy
    static ::GlobalNamespace::orientation_type _get_orientation_legacy();
    // Set static field: static public orientation_type orientation_legacy
    static void _set_orientation_legacy(::GlobalNamespace::orientation_type value);
    // static field const value: static public orientation_type orientation_vivox
    static constexpr const int orientation_vivox = 2;
    // Get static field: static public orientation_type orientation_vivox
    static ::GlobalNamespace::orientation_type _get_orientation_vivox();
    // Set static field: static public orientation_type orientation_vivox
    static void _set_orientation_vivox(::GlobalNamespace::orientation_type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // orientation_type
  #pragma pack(pop)
  static check_size<sizeof(orientation_type), 0 + sizeof(int)> __GlobalNamespace_orientation_typeSizeCheck;
  static_assert(sizeof(orientation_type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"