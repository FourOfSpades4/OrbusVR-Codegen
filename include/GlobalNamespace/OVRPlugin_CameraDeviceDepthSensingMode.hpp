// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode, "", "OVRPlugin/CameraDeviceDepthSensingMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/CameraDeviceDepthSensingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraDeviceDepthSensingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraDeviceDepthSensingMode
    constexpr CameraDeviceDepthSensingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/CameraDeviceDepthSensingMode Standard
    static constexpr const int Standard = 0;
    // Get static field: static public OVRPlugin/CameraDeviceDepthSensingMode Standard
    static ::GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode _get_Standard();
    // Set static field: static public OVRPlugin/CameraDeviceDepthSensingMode Standard
    static void _set_Standard(::GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode value);
    // static field const value: static public OVRPlugin/CameraDeviceDepthSensingMode Fill
    static constexpr const int Fill = 1;
    // Get static field: static public OVRPlugin/CameraDeviceDepthSensingMode Fill
    static ::GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode _get_Fill();
    // Set static field: static public OVRPlugin/CameraDeviceDepthSensingMode Fill
    static void _set_Fill(::GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/CameraDeviceDepthSensingMode
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraDeviceDepthSensingMode), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraDeviceDepthSensingModeSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraDeviceDepthSensingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
