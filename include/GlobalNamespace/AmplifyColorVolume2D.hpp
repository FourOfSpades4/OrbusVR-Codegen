// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AmplifyColorVolumeBase
#include "GlobalNamespace/AmplifyColorVolumeBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider2D
  class Collider2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AmplifyColorVolume2D
  class AmplifyColorVolume2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AmplifyColorVolume2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AmplifyColorVolume2D*, "", "AmplifyColorVolume2D");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColorVolume2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ACCD60
  // [RequireComponent] Offset: ACCD60
  class AmplifyColorVolume2D : public ::GlobalNamespace::AmplifyColorVolumeBase {
    public:
    // private System.Void OnTriggerEnter2D(UnityEngine.Collider2D other)
    // Offset: 0xF090D0
    void OnTriggerEnter2D(::UnityEngine::Collider2D* other);
    // private System.Void OnTriggerExit2D(UnityEngine.Collider2D other)
    // Offset: 0xF0921C
    void OnTriggerExit2D(::UnityEngine::Collider2D* other);
    // public System.Void .ctor()
    // Offset: 0xF09368
    // Implemented from: AmplifyColorVolumeBase
    // Base method: System.Void AmplifyColorVolumeBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmplifyColorVolume2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AmplifyColorVolume2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmplifyColorVolume2D*, creationType>()));
    }
  }; // AmplifyColorVolume2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorVolume2D::OnTriggerEnter2D
// Il2CppName: OnTriggerEnter2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AmplifyColorVolume2D::*)(::UnityEngine::Collider2D*)>(&GlobalNamespace::AmplifyColorVolume2D::OnTriggerEnter2D)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AmplifyColorVolume2D*), "OnTriggerEnter2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorVolume2D::OnTriggerExit2D
// Il2CppName: OnTriggerExit2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AmplifyColorVolume2D::*)(::UnityEngine::Collider2D*)>(&GlobalNamespace::AmplifyColorVolume2D::OnTriggerExit2D)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AmplifyColorVolume2D*), "OnTriggerExit2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorVolume2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
