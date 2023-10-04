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
  // Forward declaring type: vx_device_type_t
  struct vx_device_type_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_device_type_t, "", "vx_device_type_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_device_type_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_device_type_t/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_device_type_t
    constexpr vx_device_type_t(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_device_type_t vx_device_type_specific_device
    static constexpr const int vx_device_type_specific_device = 0;
    // Get static field: static public vx_device_type_t vx_device_type_specific_device
    static ::GlobalNamespace::vx_device_type_t _get_vx_device_type_specific_device();
    // Set static field: static public vx_device_type_t vx_device_type_specific_device
    static void _set_vx_device_type_specific_device(::GlobalNamespace::vx_device_type_t value);
    // static field const value: static public vx_device_type_t vx_device_type_default_system
    static constexpr const int vx_device_type_default_system = 1;
    // Get static field: static public vx_device_type_t vx_device_type_default_system
    static ::GlobalNamespace::vx_device_type_t _get_vx_device_type_default_system();
    // Set static field: static public vx_device_type_t vx_device_type_default_system
    static void _set_vx_device_type_default_system(::GlobalNamespace::vx_device_type_t value);
    // static field const value: static public vx_device_type_t vx_device_type_null
    static constexpr const int vx_device_type_null = 2;
    // Get static field: static public vx_device_type_t vx_device_type_null
    static ::GlobalNamespace::vx_device_type_t _get_vx_device_type_null();
    // Set static field: static public vx_device_type_t vx_device_type_null
    static void _set_vx_device_type_null(::GlobalNamespace::vx_device_type_t value);
    // static field const value: static public vx_device_type_t vx_device_type_default_communication
    static constexpr const int vx_device_type_default_communication = 3;
    // Get static field: static public vx_device_type_t vx_device_type_default_communication
    static ::GlobalNamespace::vx_device_type_t _get_vx_device_type_default_communication();
    // Set static field: static public vx_device_type_t vx_device_type_default_communication
    static void _set_vx_device_type_default_communication(::GlobalNamespace::vx_device_type_t value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_device_type_t
  #pragma pack(pop)
  static check_size<sizeof(vx_device_type_t), 0 + sizeof(int)> __GlobalNamespace_vx_device_type_tSizeCheck;
  static_assert(sizeof(vx_device_type_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
