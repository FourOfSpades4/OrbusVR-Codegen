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
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: PauseOnInputLoss
  class PauseOnInputLoss;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::PauseOnInputLoss);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::PauseOnInputLoss*, "OculusSampleFramework", "PauseOnInputLoss");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.PauseOnInputLoss
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseOnInputLoss : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Start()
    // Offset: 0xD7AB0C
    void Start();
    // private System.Void OnInputFocusLost()
    // Offset: 0xD7ABD8
    void OnInputFocusLost();
    // private System.Void OnInputFocusAcquired()
    // Offset: 0xD7ABE4
    void OnInputFocusAcquired();
    // public System.Void .ctor()
    // Offset: 0xD7ABF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseOnInputLoss* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::PauseOnInputLoss::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseOnInputLoss*, creationType>()));
    }
  }; // OculusSampleFramework.PauseOnInputLoss
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::PauseOnInputLoss::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::PauseOnInputLoss::*)()>(&OculusSampleFramework::PauseOnInputLoss::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PauseOnInputLoss*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PauseOnInputLoss::OnInputFocusLost
// Il2CppName: OnInputFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::PauseOnInputLoss::*)()>(&OculusSampleFramework::PauseOnInputLoss::OnInputFocusLost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PauseOnInputLoss*), "OnInputFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PauseOnInputLoss::OnInputFocusAcquired
// Il2CppName: OnInputFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::PauseOnInputLoss::*)()>(&OculusSampleFramework::PauseOnInputLoss::OnInputFocusAcquired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PauseOnInputLoss*), "OnInputFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PauseOnInputLoss::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
