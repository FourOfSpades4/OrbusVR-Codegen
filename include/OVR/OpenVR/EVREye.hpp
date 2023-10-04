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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREye
  struct EVREye;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVREye, "OVR.OpenVR", "EVREye");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVREye
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVREye/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVREye
    constexpr EVREye(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVREye Eye_Left
    static constexpr const int Eye_Left = 0;
    // Get static field: static public OVR.OpenVR.EVREye Eye_Left
    static ::OVR::OpenVR::EVREye _get_Eye_Left();
    // Set static field: static public OVR.OpenVR.EVREye Eye_Left
    static void _set_Eye_Left(::OVR::OpenVR::EVREye value);
    // static field const value: static public OVR.OpenVR.EVREye Eye_Right
    static constexpr const int Eye_Right = 1;
    // Get static field: static public OVR.OpenVR.EVREye Eye_Right
    static ::OVR::OpenVR::EVREye _get_Eye_Right();
    // Set static field: static public OVR.OpenVR.EVREye Eye_Right
    static void _set_Eye_Right(::OVR::OpenVR::EVREye value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.EVREye
  #pragma pack(pop)
  static check_size<sizeof(EVREye), 0 + sizeof(int)> __OVR_OpenVR_EVREyeSizeCheck;
  static_assert(sizeof(EVREye) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"