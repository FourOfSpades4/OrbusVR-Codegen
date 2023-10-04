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
  // Forward declaring type: VROverlayTransformType
  struct VROverlayTransformType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VROverlayTransformType, "Valve.VR", "VROverlayTransformType");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.VROverlayTransformType
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayTransformType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VROverlayTransformType
    constexpr VROverlayTransformType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_Absolute
    static constexpr const int VROverlayTransform_Absolute = 0;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_Absolute
    static ::Valve::VR::VROverlayTransformType _get_VROverlayTransform_Absolute();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_Absolute
    static void _set_VROverlayTransform_Absolute(::Valve::VR::VROverlayTransformType value);
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static constexpr const int VROverlayTransform_TrackedDeviceRelative = 1;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static ::Valve::VR::VROverlayTransformType _get_VROverlayTransform_TrackedDeviceRelative();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static void _set_VROverlayTransform_TrackedDeviceRelative(::Valve::VR::VROverlayTransformType value);
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static constexpr const int VROverlayTransform_SystemOverlay = 2;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static ::Valve::VR::VROverlayTransformType _get_VROverlayTransform_SystemOverlay();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static void _set_VROverlayTransform_SystemOverlay(::Valve::VR::VROverlayTransformType value);
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static constexpr const int VROverlayTransform_TrackedComponent = 3;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static ::Valve::VR::VROverlayTransformType _get_VROverlayTransform_TrackedComponent();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static void _set_VROverlayTransform_TrackedComponent(::Valve::VR::VROverlayTransformType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.VROverlayTransformType
  #pragma pack(pop)
  static check_size<sizeof(VROverlayTransformType), 0 + sizeof(int)> __Valve_VR_VROverlayTransformTypeSizeCheck;
  static_assert(sizeof(VROverlayTransformType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"