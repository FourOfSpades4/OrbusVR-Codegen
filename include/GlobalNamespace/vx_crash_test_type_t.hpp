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
  // Forward declaring type: vx_crash_test_type_t
  struct vx_crash_test_type_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_crash_test_type_t, "", "vx_crash_test_type_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_crash_test_type_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_crash_test_type_t/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_crash_test_type_t
    constexpr vx_crash_test_type_t(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_crash_test_type_t vx_crash_access_zero_pointer
    static constexpr const int vx_crash_access_zero_pointer = 0;
    // Get static field: static public vx_crash_test_type_t vx_crash_access_zero_pointer
    static ::GlobalNamespace::vx_crash_test_type_t _get_vx_crash_access_zero_pointer();
    // Set static field: static public vx_crash_test_type_t vx_crash_access_zero_pointer
    static void _set_vx_crash_access_zero_pointer(::GlobalNamespace::vx_crash_test_type_t value);
    // static field const value: static public vx_crash_test_type_t vx_crash_access_violation
    static constexpr const int vx_crash_access_violation = 1;
    // Get static field: static public vx_crash_test_type_t vx_crash_access_violation
    static ::GlobalNamespace::vx_crash_test_type_t _get_vx_crash_access_violation();
    // Set static field: static public vx_crash_test_type_t vx_crash_access_violation
    static void _set_vx_crash_access_violation(::GlobalNamespace::vx_crash_test_type_t value);
    // static field const value: static public vx_crash_test_type_t vx_crash_stack_overflow
    static constexpr const int vx_crash_stack_overflow = 2;
    // Get static field: static public vx_crash_test_type_t vx_crash_stack_overflow
    static ::GlobalNamespace::vx_crash_test_type_t _get_vx_crash_stack_overflow();
    // Set static field: static public vx_crash_test_type_t vx_crash_stack_overflow
    static void _set_vx_crash_stack_overflow(::GlobalNamespace::vx_crash_test_type_t value);
    // static field const value: static public vx_crash_test_type_t vx_crash_heap_corruption
    static constexpr const int vx_crash_heap_corruption = 3;
    // Get static field: static public vx_crash_test_type_t vx_crash_heap_corruption
    static ::GlobalNamespace::vx_crash_test_type_t _get_vx_crash_heap_corruption();
    // Set static field: static public vx_crash_test_type_t vx_crash_heap_corruption
    static void _set_vx_crash_heap_corruption(::GlobalNamespace::vx_crash_test_type_t value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_crash_test_type_t
  #pragma pack(pop)
  static check_size<sizeof(vx_crash_test_type_t), 0 + sizeof(int)> __GlobalNamespace_vx_crash_test_type_tSizeCheck;
  static_assert(sizeof(vx_crash_test_type_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"