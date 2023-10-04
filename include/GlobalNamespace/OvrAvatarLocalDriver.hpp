// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarDriver
#include "GlobalNamespace/OvrAvatarDriver.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarLocalDriver
  class OvrAvatarLocalDriver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarLocalDriver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarLocalDriver*, "", "OvrAvatarLocalDriver");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarLocalDriver
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarLocalDriver : public ::GlobalNamespace::OvrAvatarDriver {
    public:
    public:
    // private UnityEngine.Vector3 centerEyePosition
    // Size: 0xC
    // Offset: 0xB0
    ::UnityEngine::Vector3 centerEyePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion centerEyeRotation
    // Size: 0x10
    // Offset: 0xBC
    ::UnityEngine::Quaternion centerEyeRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single voiceAmplitude
    // Size: 0x4
    // Offset: 0xCC
    float voiceAmplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Vector3 centerEyePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_centerEyePosition();
    // Get instance field reference: private UnityEngine.Quaternion centerEyeRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_centerEyeRotation();
    // Get instance field reference: private System.Single voiceAmplitude
    [[deprecated("Use field access instead!")]] float& dyn_voiceAmplitude();
    // private OvrAvatarDriver/ControllerPose GetMalibuControllerPose(OVRInput/Controller controller)
    // Offset: 0x102091C
    ::GlobalNamespace::OvrAvatarDriver::ControllerPose GetMalibuControllerPose(::GlobalNamespace::OVRInput::Controller controller);
    // private OvrAvatarDriver/ControllerPose GetControllerPose(OVRInput/Controller controller)
    // Offset: 0x1020A48
    ::GlobalNamespace::OvrAvatarDriver::ControllerPose GetControllerPose(::GlobalNamespace::OVRInput::Controller controller);
    // private System.Void CalculateCurrentPose()
    // Offset: 0x1020DA4
    void CalculateCurrentPose();
    // public override System.Void UpdateTransforms(System.IntPtr sdkAvatar)
    // Offset: 0x1020FD8
    // Implemented from: OvrAvatarDriver
    // Base method: System.Void OvrAvatarDriver::UpdateTransforms(System.IntPtr sdkAvatar)
    void UpdateTransforms(::System::IntPtr sdkAvatar);
    // public System.Void .ctor()
    // Offset: 0x1021004
    // Implemented from: OvrAvatarDriver
    // Base method: System.Void OvrAvatarDriver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarLocalDriver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarLocalDriver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarLocalDriver*, creationType>()));
    }
  }; // OvrAvatarLocalDriver
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarLocalDriver), 204 + sizeof(float)> __GlobalNamespace_OvrAvatarLocalDriverSizeCheck;
  static_assert(sizeof(OvrAvatarLocalDriver) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarLocalDriver::GetMalibuControllerPose
// Il2CppName: GetMalibuControllerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarDriver::ControllerPose (GlobalNamespace::OvrAvatarLocalDriver::*)(::GlobalNamespace::OVRInput::Controller)>(&GlobalNamespace::OvrAvatarLocalDriver::GetMalibuControllerPose)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarLocalDriver*), "GetMalibuControllerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarLocalDriver::GetControllerPose
// Il2CppName: GetControllerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarDriver::ControllerPose (GlobalNamespace::OvrAvatarLocalDriver::*)(::GlobalNamespace::OVRInput::Controller)>(&GlobalNamespace::OvrAvatarLocalDriver::GetControllerPose)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarLocalDriver*), "GetControllerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarLocalDriver::CalculateCurrentPose
// Il2CppName: CalculateCurrentPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarLocalDriver::*)()>(&GlobalNamespace::OvrAvatarLocalDriver::CalculateCurrentPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarLocalDriver*), "CalculateCurrentPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarLocalDriver::UpdateTransforms
// Il2CppName: UpdateTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarLocalDriver::*)(::System::IntPtr)>(&GlobalNamespace::OvrAvatarLocalDriver::UpdateTransforms)> {
  static const MethodInfo* get() {
    static auto* sdkAvatar = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarLocalDriver*), "UpdateTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sdkAvatar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarLocalDriver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
