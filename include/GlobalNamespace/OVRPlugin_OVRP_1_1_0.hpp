// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_1_0*, "", "OVRPlugin/OVRP_1_1_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_1_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_1_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetInitialized()
    // Offset: 0x1B802F0
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetInitialized();
    // static private System.IntPtr _ovrp_GetVersion()
    // Offset: 0x1B98BAC
    static ::System::IntPtr _ovrp_GetVersion();
    // static public System.String ovrp_GetVersion()
    // Offset: 0x1B7FE04
    static ::StringW ovrp_GetVersion();
    // static private System.IntPtr _ovrp_GetNativeSDKVersion()
    // Offset: 0x1B98C3C
    static ::System::IntPtr _ovrp_GetNativeSDKVersion();
    // static public System.String ovrp_GetNativeSDKVersion()
    // Offset: 0x1B801F8
    static ::StringW ovrp_GetNativeSDKVersion();
    // static public System.IntPtr ovrp_GetAudioOutId()
    // Offset: 0x1B823FC
    static ::System::IntPtr ovrp_GetAudioOutId();
    // static public System.IntPtr ovrp_GetAudioInId()
    // Offset: 0x1B82970
    static ::System::IntPtr ovrp_GetAudioInId();
    // static public System.Single ovrp_GetEyeTextureScale()
    // Offset: 0x1B98CCC
    static float ovrp_GetEyeTextureScale();
    // static public OVRPlugin/Bool ovrp_SetEyeTextureScale(System.Single value)
    // Offset: 0x1B98D5C
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetEyeTextureScale(float value);
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationSupported()
    // Offset: 0x1B98E00
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationEnabled()
    // Offset: 0x1B80CAC
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingOrientationEnabled(OVRPlugin/Bool value)
    // Offset: 0x1B80DF0
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingOrientationEnabled(::GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionSupported()
    // Offset: 0x1B81538
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionEnabled()
    // Offset: 0x1B80F28
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingPositionEnabled(OVRPlugin/Bool value)
    // Offset: 0x1B8106C
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingPositionEnabled(::GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetNodePresent(OVRPlugin/Node nodeId)
    // Offset: 0x1B818C8
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePresent(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodeOrientationTracked(OVRPlugin/Node nodeId)
    // Offset: 0x1B87288
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetNodeOrientationTracked(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodePositionTracked(OVRPlugin/Node nodeId)
    // Offset: 0x1B81664
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePositionTracked(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Frustumf ovrp_GetNodeFrustum(OVRPlugin/Node nodeId)
    // Offset: 0x1B8434C
    static ::GlobalNamespace::OVRPlugin::Frustumf ovrp_GetNodeFrustum(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/ControllerState ovrp_GetControllerState(System.UInt32 controllerMask)
    // Offset: 0x1B881A0
    static ::GlobalNamespace::OVRPlugin::ControllerState ovrp_GetControllerState(uint controllerMask);
    // static public System.Int32 ovrp_GetSystemCpuLevel()
    // Offset: 0x1B83724
    static int ovrp_GetSystemCpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemCpuLevel(System.Int32 value)
    // Offset: 0x1B83818
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemCpuLevel(int value);
    // static public System.Int32 ovrp_GetSystemGpuLevel()
    // Offset: 0x1B83914
    static int ovrp_GetSystemGpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemGpuLevel(System.Int32 value)
    // Offset: 0x1B83A08
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemGpuLevel(int value);
    // static public OVRPlugin/Bool ovrp_GetSystemPowerSavingMode()
    // Offset: 0x1B8179C
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetSystemPowerSavingMode();
    // static public System.Single ovrp_GetSystemDisplayFrequency()
    // Offset: 0x1B8DF24
    static float ovrp_GetSystemDisplayFrequency();
    // static public System.Int32 ovrp_GetSystemVSyncCount()
    // Offset: 0x1B83B04
    static int ovrp_GetSystemVSyncCount();
    // static public System.Single ovrp_GetSystemVolume()
    // Offset: 0x1B83CF4
    static float ovrp_GetSystemVolume();
    // static public OVRPlugin/BatteryStatus ovrp_GetSystemBatteryStatus()
    // Offset: 0x1B84258
    static ::GlobalNamespace::OVRPlugin::BatteryStatus ovrp_GetSystemBatteryStatus();
    // static public System.Single ovrp_GetSystemBatteryLevel()
    // Offset: 0x1B8354C
    static float ovrp_GetSystemBatteryLevel();
    // static public System.Single ovrp_GetSystemBatteryTemperature()
    // Offset: 0x1B83638
    static float ovrp_GetSystemBatteryTemperature();
    // static private System.IntPtr _ovrp_GetSystemProductName()
    // Offset: 0x1B98E90
    static ::System::IntPtr _ovrp_GetSystemProductName();
    // static public System.String ovrp_GetSystemProductName()
    // Offset: 0x1B82EFC
    static ::StringW ovrp_GetSystemProductName();
    // static public OVRPlugin/Bool ovrp_ShowSystemUI(OVRPlugin/PlatformUI ui)
    // Offset: 0x1B848CC
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_ShowSystemUI(::GlobalNamespace::OVRPlugin::PlatformUI ui);
    // static public OVRPlugin/Bool ovrp_GetAppMonoscopic()
    // Offset: 0x1B80A30
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetAppMonoscopic();
    // static public OVRPlugin/Bool ovrp_SetAppMonoscopic(OVRPlugin/Bool value)
    // Offset: 0x1B80B74
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetAppMonoscopic(::GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetAppHasVrFocus()
    // Offset: 0x1B82A68
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetAppHasVrFocus();
    // static public OVRPlugin/Bool ovrp_GetAppShouldQuit()
    // Offset: 0x1B82D18
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldQuit();
    // static public OVRPlugin/Bool ovrp_GetAppShouldRecenter()
    // Offset: 0x1B82E10
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldRecenter();
    // static private System.IntPtr _ovrp_GetAppLatencyTimings()
    // Offset: 0x1B98F20
    static ::System::IntPtr _ovrp_GetAppLatencyTimings();
    // static public System.String ovrp_GetAppLatencyTimings()
    // Offset: 0x1B83030
    static ::StringW ovrp_GetAppLatencyTimings();
    // static public OVRPlugin/Bool ovrp_GetUserPresent()
    // Offset: 0x1B81A00
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetUserPresent();
    // static public System.Single ovrp_GetUserIPD()
    // Offset: 0x1B83DE0
    static float ovrp_GetUserIPD();
    // static public OVRPlugin/Bool ovrp_SetUserIPD(System.Single value)
    // Offset: 0x1B83EDC
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetUserIPD(float value);
    // static public System.Single ovrp_GetUserEyeDepth()
    // Offset: 0x1B83154
    static float ovrp_GetUserEyeDepth();
    // static public OVRPlugin/Bool ovrp_SetUserEyeDepth(System.Single value)
    // Offset: 0x1B83250
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeDepth(float value);
    // static public System.Single ovrp_GetUserEyeHeight()
    // Offset: 0x1B83350
    static float ovrp_GetUserEyeHeight();
    // static public OVRPlugin/Bool ovrp_SetUserEyeHeight(System.Single value)
    // Offset: 0x1B8344C
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeHeight(float value);
    // static private System.Void .cctor()
    // Offset: 0x1B98FB0
    static void _cctor();
  }; // OVRPlugin/OVRP_1_1_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetInitialized
// Il2CppName: ovrp_GetInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetVersion
// Il2CppName: _ovrp_GetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "_ovrp_GetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetVersion
// Il2CppName: ovrp_GetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetNativeSDKVersion
// Il2CppName: _ovrp_GetNativeSDKVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetNativeSDKVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "_ovrp_GetNativeSDKVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNativeSDKVersion
// Il2CppName: ovrp_GetNativeSDKVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNativeSDKVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetNativeSDKVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAudioOutId
// Il2CppName: ovrp_GetAudioOutId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAudioOutId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAudioOutId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAudioInId
// Il2CppName: ovrp_GetAudioInId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAudioInId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAudioInId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetEyeTextureScale
// Il2CppName: ovrp_GetEyeTextureScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetEyeTextureScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetEyeTextureScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetEyeTextureScale
// Il2CppName: ovrp_SetEyeTextureScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(float)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetEyeTextureScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetEyeTextureScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingOrientationSupported
// Il2CppName: ovrp_GetTrackingOrientationSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingOrientationSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetTrackingOrientationSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingOrientationEnabled
// Il2CppName: ovrp_GetTrackingOrientationEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingOrientationEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetTrackingOrientationEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetTrackingOrientationEnabled
// Il2CppName: ovrp_SetTrackingOrientationEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetTrackingOrientationEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetTrackingOrientationEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingPositionSupported
// Il2CppName: ovrp_GetTrackingPositionSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingPositionSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetTrackingPositionSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingPositionEnabled
// Il2CppName: ovrp_GetTrackingPositionEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetTrackingPositionEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetTrackingPositionEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetTrackingPositionEnabled
// Il2CppName: ovrp_SetTrackingPositionEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetTrackingPositionEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetTrackingPositionEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodePresent
// Il2CppName: ovrp_GetNodePresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodePresent)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetNodePresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodeOrientationTracked
// Il2CppName: ovrp_GetNodeOrientationTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodeOrientationTracked)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetNodeOrientationTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodePositionTracked
// Il2CppName: ovrp_GetNodePositionTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodePositionTracked)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetNodePositionTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodeFrustum
// Il2CppName: ovrp_GetNodeFrustum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Frustumf (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetNodeFrustum)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetNodeFrustum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetControllerState
// Il2CppName: ovrp_GetControllerState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::ControllerState (*)(uint)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetControllerState)> {
  static const MethodInfo* get() {
    static auto* controllerMask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetControllerState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemCpuLevel
// Il2CppName: ovrp_GetSystemCpuLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemCpuLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemCpuLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetSystemCpuLevel
// Il2CppName: ovrp_SetSystemCpuLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(int)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetSystemCpuLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetSystemCpuLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemGpuLevel
// Il2CppName: ovrp_GetSystemGpuLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemGpuLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemGpuLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetSystemGpuLevel
// Il2CppName: ovrp_SetSystemGpuLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(int)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetSystemGpuLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetSystemGpuLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemPowerSavingMode
// Il2CppName: ovrp_GetSystemPowerSavingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemPowerSavingMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemPowerSavingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemDisplayFrequency
// Il2CppName: ovrp_GetSystemDisplayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemDisplayFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemDisplayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemVSyncCount
// Il2CppName: ovrp_GetSystemVSyncCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemVSyncCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemVSyncCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemVolume
// Il2CppName: ovrp_GetSystemVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemBatteryStatus
// Il2CppName: ovrp_GetSystemBatteryStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::BatteryStatus (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemBatteryStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemBatteryStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemBatteryLevel
// Il2CppName: ovrp_GetSystemBatteryLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemBatteryLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemBatteryLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemBatteryTemperature
// Il2CppName: ovrp_GetSystemBatteryTemperature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemBatteryTemperature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemBatteryTemperature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetSystemProductName
// Il2CppName: _ovrp_GetSystemProductName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetSystemProductName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "_ovrp_GetSystemProductName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemProductName
// Il2CppName: ovrp_GetSystemProductName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetSystemProductName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetSystemProductName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_ShowSystemUI
// Il2CppName: ovrp_ShowSystemUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::PlatformUI)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_ShowSystemUI)> {
  static const MethodInfo* get() {
    static auto* ui = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PlatformUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_ShowSystemUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ui});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppMonoscopic
// Il2CppName: ovrp_GetAppMonoscopic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppMonoscopic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAppMonoscopic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetAppMonoscopic
// Il2CppName: ovrp_SetAppMonoscopic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetAppMonoscopic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetAppMonoscopic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppHasVrFocus
// Il2CppName: ovrp_GetAppHasVrFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppHasVrFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAppHasVrFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppShouldQuit
// Il2CppName: ovrp_GetAppShouldQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppShouldQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAppShouldQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppShouldRecenter
// Il2CppName: ovrp_GetAppShouldRecenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppShouldRecenter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAppShouldRecenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetAppLatencyTimings
// Il2CppName: _ovrp_GetAppLatencyTimings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::_ovrp_GetAppLatencyTimings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "_ovrp_GetAppLatencyTimings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppLatencyTimings
// Il2CppName: ovrp_GetAppLatencyTimings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetAppLatencyTimings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetAppLatencyTimings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserPresent
// Il2CppName: ovrp_GetUserPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetUserPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserIPD
// Il2CppName: ovrp_GetUserIPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserIPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetUserIPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetUserIPD
// Il2CppName: ovrp_SetUserIPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(float)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetUserIPD)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetUserIPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserEyeDepth
// Il2CppName: ovrp_GetUserEyeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserEyeDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetUserEyeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetUserEyeDepth
// Il2CppName: ovrp_SetUserEyeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(float)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetUserEyeDepth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetUserEyeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserEyeHeight
// Il2CppName: ovrp_GetUserEyeHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_GetUserEyeHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_GetUserEyeHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetUserEyeHeight
// Il2CppName: ovrp_SetUserEyeHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(float)>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::ovrp_SetUserEyeHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), "ovrp_SetUserEyeHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_1_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_1_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_1_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};