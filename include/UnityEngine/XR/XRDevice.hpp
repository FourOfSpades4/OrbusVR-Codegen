// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDevice
  class XRDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::XRDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDevice*, "UnityEngine.XR", "XRDevice");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.XRDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: AA9C28
  class XRDevice : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xAA9D54
    // [CompilerGeneratedAttribute] Offset: 0xAA9D54
    // Get static field: static private System.Action`1<System.String> deviceLoaded
    static ::System::Action_1<::StringW>* _get_deviceLoaded();
    // Set static field: static private System.Action`1<System.String> deviceLoaded
    static void _set_deviceLoaded(::System::Action_1<::StringW>* value);
    // static public System.Boolean get_isPresent()
    // Offset: 0x28A223C
    static bool get_isPresent();
    // static public System.IntPtr GetNativePtr()
    // Offset: 0x28A2294
    static ::System::IntPtr GetNativePtr();
    // static private System.Void InvokeDeviceLoaded(System.String loadedDeviceName)
    // Offset: 0x28A22EC
    static void InvokeDeviceLoaded(::StringW loadedDeviceName);
    // static private System.Void .cctor()
    // Offset: 0x28A23AC
    static void _cctor();
  }; // UnityEngine.XR.XRDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::get_isPresent
// Il2CppName: get_isPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::XRDevice::get_isPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "get_isPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::GetNativePtr
// Il2CppName: GetNativePtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&UnityEngine::XR::XRDevice::GetNativePtr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "GetNativePtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::InvokeDeviceLoaded
// Il2CppName: InvokeDeviceLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  static const MethodInfo* get() {
    static auto* loadedDeviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "InvokeDeviceLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadedDeviceName});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::XRDevice::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};