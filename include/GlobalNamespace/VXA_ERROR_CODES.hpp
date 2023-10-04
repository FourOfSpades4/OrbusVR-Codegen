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
  // Forward declaring type: VXA_ERROR_CODES
  struct VXA_ERROR_CODES;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VXA_ERROR_CODES, "", "VXA_ERROR_CODES");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VXA_ERROR_CODES
  // [TokenAttribute] Offset: FFFFFFFF
  struct VXA_ERROR_CODES/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VXA_ERROR_CODES
    constexpr VXA_ERROR_CODES(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VXA_ERROR_CODES VXA_SUCCESS
    static constexpr const int VXA_SUCCESS = 0;
    // Get static field: static public VXA_ERROR_CODES VXA_SUCCESS
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_SUCCESS();
    // Set static field: static public VXA_ERROR_CODES VXA_SUCCESS
    static void _set_VXA_SUCCESS(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_INVALID_PARAMETER
    static constexpr const int VXA_INVALID_PARAMETER = 1;
    // Get static field: static public VXA_ERROR_CODES VXA_INVALID_PARAMETER
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_INVALID_PARAMETER();
    // Set static field: static public VXA_ERROR_CODES VXA_INVALID_PARAMETER
    static void _set_VXA_INVALID_PARAMETER(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_DEVICE_DOES_NOT_EXIST
    static constexpr const int VXA_DEVICE_DOES_NOT_EXIST = 2;
    // Get static field: static public VXA_ERROR_CODES VXA_DEVICE_DOES_NOT_EXIST
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_DEVICE_DOES_NOT_EXIST();
    // Set static field: static public VXA_ERROR_CODES VXA_DEVICE_DOES_NOT_EXIST
    static void _set_VXA_DEVICE_DOES_NOT_EXIST(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_INTERNAL_ERROR
    static constexpr const int VXA_INTERNAL_ERROR = 3;
    // Get static field: static public VXA_ERROR_CODES VXA_INTERNAL_ERROR
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_INTERNAL_ERROR();
    // Set static field: static public VXA_ERROR_CODES VXA_INTERNAL_ERROR
    static void _set_VXA_INTERNAL_ERROR(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_OUT_OF_MEMORY
    static constexpr const int VXA_OUT_OF_MEMORY = 4;
    // Get static field: static public VXA_ERROR_CODES VXA_OUT_OF_MEMORY
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_OUT_OF_MEMORY();
    // Set static field: static public VXA_ERROR_CODES VXA_OUT_OF_MEMORY
    static void _set_VXA_OUT_OF_MEMORY(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_INVALID_STATE
    static constexpr const int VXA_INVALID_STATE = 5;
    // Get static field: static public VXA_ERROR_CODES VXA_INVALID_STATE
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_INVALID_STATE();
    // Set static field: static public VXA_ERROR_CODES VXA_INVALID_STATE
    static void _set_VXA_INVALID_STATE(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_NO_MORE_DATA
    static constexpr const int VXA_NO_MORE_DATA = 6;
    // Get static field: static public VXA_ERROR_CODES VXA_NO_MORE_DATA
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_NO_MORE_DATA();
    // Set static field: static public VXA_ERROR_CODES VXA_NO_MORE_DATA
    static void _set_VXA_NO_MORE_DATA(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_FEATURE_NOT_SUPPORTED
    static constexpr const int VXA_FEATURE_NOT_SUPPORTED = 7;
    // Get static field: static public VXA_ERROR_CODES VXA_FEATURE_NOT_SUPPORTED
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_FEATURE_NOT_SUPPORTED();
    // Set static field: static public VXA_ERROR_CODES VXA_FEATURE_NOT_SUPPORTED
    static void _set_VXA_FEATURE_NOT_SUPPORTED(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_MAX_DEVICES_EXCEEDED
    static constexpr const int VXA_MAX_DEVICES_EXCEEDED = 8;
    // Get static field: static public VXA_ERROR_CODES VXA_MAX_DEVICES_EXCEEDED
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_MAX_DEVICES_EXCEEDED();
    // Set static field: static public VXA_ERROR_CODES VXA_MAX_DEVICES_EXCEEDED
    static void _set_VXA_MAX_DEVICES_EXCEEDED(::GlobalNamespace::VXA_ERROR_CODES value);
    // static field const value: static public VXA_ERROR_CODES VXA_NO_BUFFERS_AVAILABLE
    static constexpr const int VXA_NO_BUFFERS_AVAILABLE = 9;
    // Get static field: static public VXA_ERROR_CODES VXA_NO_BUFFERS_AVAILABLE
    static ::GlobalNamespace::VXA_ERROR_CODES _get_VXA_NO_BUFFERS_AVAILABLE();
    // Set static field: static public VXA_ERROR_CODES VXA_NO_BUFFERS_AVAILABLE
    static void _set_VXA_NO_BUFFERS_AVAILABLE(::GlobalNamespace::VXA_ERROR_CODES value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VXA_ERROR_CODES
  #pragma pack(pop)
  static check_size<sizeof(VXA_ERROR_CODES), 0 + sizeof(int)> __GlobalNamespace_VXA_ERROR_CODESSizeCheck;
  static_assert(sizeof(VXA_ERROR_CODES) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"