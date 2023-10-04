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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVRDistortionFunctionType
  struct EVRDistortionFunctionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRDistortionFunctionType, "Valve.VR", "EVRDistortionFunctionType");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRDistortionFunctionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRDistortionFunctionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRDistortionFunctionType
    constexpr EVRDistortionFunctionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRDistortionFunctionType None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRDistortionFunctionType None
    static ::Valve::VR::EVRDistortionFunctionType _get_None();
    // Set static field: static public Valve.VR.EVRDistortionFunctionType None
    static void _set_None(::Valve::VR::EVRDistortionFunctionType value);
    // static field const value: static public Valve.VR.EVRDistortionFunctionType FTheta
    static constexpr const int FTheta = 1;
    // Get static field: static public Valve.VR.EVRDistortionFunctionType FTheta
    static ::Valve::VR::EVRDistortionFunctionType _get_FTheta();
    // Set static field: static public Valve.VR.EVRDistortionFunctionType FTheta
    static void _set_FTheta(::Valve::VR::EVRDistortionFunctionType value);
    // static field const value: static public Valve.VR.EVRDistortionFunctionType VRDistortionFucntionType_Extended_FTheta
    static constexpr const int VRDistortionFucntionType_Extended_FTheta = 2;
    // Get static field: static public Valve.VR.EVRDistortionFunctionType VRDistortionFucntionType_Extended_FTheta
    static ::Valve::VR::EVRDistortionFunctionType _get_VRDistortionFucntionType_Extended_FTheta();
    // Set static field: static public Valve.VR.EVRDistortionFunctionType VRDistortionFucntionType_Extended_FTheta
    static void _set_VRDistortionFucntionType_Extended_FTheta(::Valve::VR::EVRDistortionFunctionType value);
    // static field const value: static public Valve.VR.EVRDistortionFunctionType MAX_DISTORTION_FUNCTION_TYPES
    static constexpr const int MAX_DISTORTION_FUNCTION_TYPES = 3;
    // Get static field: static public Valve.VR.EVRDistortionFunctionType MAX_DISTORTION_FUNCTION_TYPES
    static ::Valve::VR::EVRDistortionFunctionType _get_MAX_DISTORTION_FUNCTION_TYPES();
    // Set static field: static public Valve.VR.EVRDistortionFunctionType MAX_DISTORTION_FUNCTION_TYPES
    static void _set_MAX_DISTORTION_FUNCTION_TYPES(::Valve::VR::EVRDistortionFunctionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVRDistortionFunctionType
  #pragma pack(pop)
  static check_size<sizeof(EVRDistortionFunctionType), 0 + sizeof(int)> __Valve_VR_EVRDistortionFunctionTypeSizeCheck;
  static_assert(sizeof(EVRDistortionFunctionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
