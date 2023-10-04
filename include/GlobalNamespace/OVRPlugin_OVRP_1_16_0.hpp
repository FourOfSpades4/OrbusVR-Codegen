// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_16_0*, "", "OVRPlugin/OVRP_1_16_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_16_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_16_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_UpdateCameraDevices()
    // Offset: 0x1B98404
    static ::GlobalNamespace::OVRPlugin::Result ovrp_UpdateCameraDevices();
    // static public OVRPlugin/Bool ovrp_IsCameraDeviceAvailable(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1B98494
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_IsCameraDeviceAvailable(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Result ovrp_SetCameraDevicePreferredColorFrameSize(OVRPlugin/CameraDevice cameraDevice, OVRPlugin/Sizei preferredColorFrameSize)
    // Offset: 0x1B98534
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetCameraDevicePreferredColorFrameSize(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, ::GlobalNamespace::OVRPlugin::Sizei preferredColorFrameSize);
    // static public OVRPlugin/Result ovrp_OpenCameraDevice(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1B985E4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_OpenCameraDevice(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Result ovrp_CloseCameraDevice(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1B98684
    static ::GlobalNamespace::OVRPlugin::Result ovrp_CloseCameraDevice(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Bool ovrp_HasCameraDeviceOpened(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1B98724
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_HasCameraDeviceOpened(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Bool ovrp_IsCameraDeviceColorFrameAvailable(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1B987C4
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_IsCameraDeviceColorFrameAvailable(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Result ovrp_GetCameraDeviceColorFrameSize(OVRPlugin/CameraDevice cameraDevice, out OVRPlugin/Sizei colorFrameSize)
    // Offset: 0x1B98864
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetCameraDeviceColorFrameSize(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, ByRef<::GlobalNamespace::OVRPlugin::Sizei> colorFrameSize);
    // static public OVRPlugin/Result ovrp_GetCameraDeviceColorFrameBgraPixels(OVRPlugin/CameraDevice cameraDevice, out System.IntPtr colorFrameBgraPixels, out System.Int32 colorFrameRowPitch)
    // Offset: 0x1B98914
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetCameraDeviceColorFrameBgraPixels(::GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, ByRef<::System::IntPtr> colorFrameBgraPixels, ByRef<int> colorFrameRowPitch);
    // static public OVRPlugin/Result ovrp_GetControllerState4(System.UInt32 controllerMask, ref OVRPlugin/ControllerState4 controllerState)
    // Offset: 0x1B8865C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetControllerState4(uint controllerMask, ByRef<::GlobalNamespace::OVRPlugin::ControllerState4> controllerState);
    // static private System.Void .cctor()
    // Offset: 0x1B989CC
    static void _cctor();
  }; // OVRPlugin/OVRP_1_16_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_UpdateCameraDevices
// Il2CppName: ovrp_UpdateCameraDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_UpdateCameraDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_UpdateCameraDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_IsCameraDeviceAvailable
// Il2CppName: ovrp_IsCameraDeviceAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::CameraDevice)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_IsCameraDeviceAvailable)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_IsCameraDeviceAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_SetCameraDevicePreferredColorFrameSize
// Il2CppName: ovrp_SetCameraDevicePreferredColorFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::CameraDevice, ::GlobalNamespace::OVRPlugin::Sizei)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_SetCameraDevicePreferredColorFrameSize)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    static auto* preferredColorFrameSize = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Sizei")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_SetCameraDevicePreferredColorFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice, preferredColorFrameSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_OpenCameraDevice
// Il2CppName: ovrp_OpenCameraDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::CameraDevice)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_OpenCameraDevice)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_OpenCameraDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_CloseCameraDevice
// Il2CppName: ovrp_CloseCameraDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::CameraDevice)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_CloseCameraDevice)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_CloseCameraDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_HasCameraDeviceOpened
// Il2CppName: ovrp_HasCameraDeviceOpened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::CameraDevice)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_HasCameraDeviceOpened)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_HasCameraDeviceOpened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_IsCameraDeviceColorFrameAvailable
// Il2CppName: ovrp_IsCameraDeviceColorFrameAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::CameraDevice)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_IsCameraDeviceColorFrameAvailable)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_IsCameraDeviceColorFrameAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetCameraDeviceColorFrameSize
// Il2CppName: ovrp_GetCameraDeviceColorFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::CameraDevice, ByRef<::GlobalNamespace::OVRPlugin::Sizei>)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetCameraDeviceColorFrameSize)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    static auto* colorFrameSize = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Sizei")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_GetCameraDeviceColorFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice, colorFrameSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetCameraDeviceColorFrameBgraPixels
// Il2CppName: ovrp_GetCameraDeviceColorFrameBgraPixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::CameraDevice, ByRef<::System::IntPtr>, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetCameraDeviceColorFrameBgraPixels)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraDevice")->byval_arg;
    static auto* colorFrameBgraPixels = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* colorFrameRowPitch = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_GetCameraDeviceColorFrameBgraPixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice, colorFrameBgraPixels, colorFrameRowPitch});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetControllerState4
// Il2CppName: ovrp_GetControllerState4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint, ByRef<::GlobalNamespace::OVRPlugin::ControllerState4>)>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetControllerState4)> {
  static const MethodInfo* get() {
    static auto* controllerMask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* controllerState = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/ControllerState4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), "ovrp_GetControllerState4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerMask, controllerState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_16_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_16_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_16_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
