// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: ExternalCameraOculus
  class ExternalCameraOculus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LIV::SDK::Unity::ExternalCameraOculus);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::ExternalCameraOculus*, "LIV.SDK.Unity", "ExternalCameraOculus");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.ExternalCameraOculus
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AD1D50
  class ExternalCameraOculus : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean get_IsValid()
    // Offset: 0x10688C4
    bool get_IsValid();
    // private System.Void OnEnable()
    // Offset: 0x10688CC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x106892C
    void OnDisable();
    // private System.Void LateUpdate()
    // Offset: 0x1068980
    void LateUpdate();
    // private System.Void OnPreCull()
    // Offset: 0x1068AF4
    void OnPreCull();
    // private System.Void UpdateCamera()
    // Offset: 0x1068984
    void UpdateCamera();
    // private System.Void UpdateOpenVRDevice()
    // Offset: 0x1068928
    void UpdateOpenVRDevice();
    // public System.Void .ctor()
    // Offset: 0x1068AF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalCameraOculus* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::ExternalCameraOculus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalCameraOculus*, creationType>()));
    }
  }; // LIV.SDK.Unity.ExternalCameraOculus
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::OnPreCull
// Il2CppName: OnPreCull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::OnPreCull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "OnPreCull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::UpdateCamera
// Il2CppName: UpdateCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::UpdateCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "UpdateCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::UpdateOpenVRDevice
// Il2CppName: UpdateOpenVRDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::ExternalCameraOculus::*)()>(&LIV::SDK::Unity::ExternalCameraOculus::UpdateOpenVRDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::ExternalCameraOculus*), "UpdateOpenVRDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::ExternalCameraOculus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
