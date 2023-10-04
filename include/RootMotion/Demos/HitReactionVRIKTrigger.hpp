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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: HitReactionVRIK
  class HitReactionVRIK;
}
// Completed forward declares
// Type namespace: RootMotion.Demos
namespace RootMotion::Demos {
  // Forward declaring type: HitReactionVRIKTrigger
  class HitReactionVRIKTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::Demos::HitReactionVRIKTrigger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Demos::HitReactionVRIKTrigger*, "RootMotion.Demos", "HitReactionVRIKTrigger");
// Type namespace: RootMotion.Demos
namespace RootMotion::Demos {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Demos.HitReactionVRIKTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIKTrigger : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private RootMotion.FinalIK.HitReactionVRIK hitReaction
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::HitReactionVRIK* hitReaction;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::HitReactionVRIK*) == 0x8);
    // private System.Single hitForce
    // Size: 0x4
    // Offset: 0x20
    float hitForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: hitForce and: colliderName
    char __padding1[0x4] = {};
    // private System.String colliderName
    // Size: 0x8
    // Offset: 0x28
    ::StringW colliderName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private RootMotion.FinalIK.HitReactionVRIK hitReaction
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::HitReactionVRIK*& dyn_hitReaction();
    // Get instance field reference: private System.Single hitForce
    [[deprecated("Use field access instead!")]] float& dyn_hitForce();
    // Get instance field reference: private System.String colliderName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_colliderName();
    // private System.Void Update()
    // Offset: 0x1EA4DE0
    void Update();
    // private System.Void OnGUI()
    // Offset: 0x1EA4FEC
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x1EA50BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIKTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::Demos::HitReactionVRIKTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIKTrigger*, creationType>()));
    }
  }; // RootMotion.Demos.HitReactionVRIKTrigger
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIKTrigger), 40 + sizeof(::StringW)> __RootMotion_Demos_HitReactionVRIKTriggerSizeCheck;
  static_assert(sizeof(HitReactionVRIKTrigger) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Demos::HitReactionVRIKTrigger::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::HitReactionVRIKTrigger::*)()>(&RootMotion::Demos::HitReactionVRIKTrigger::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::HitReactionVRIKTrigger*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::HitReactionVRIKTrigger::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::HitReactionVRIKTrigger::*)()>(&RootMotion::Demos::HitReactionVRIKTrigger::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::HitReactionVRIKTrigger*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::HitReactionVRIKTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!