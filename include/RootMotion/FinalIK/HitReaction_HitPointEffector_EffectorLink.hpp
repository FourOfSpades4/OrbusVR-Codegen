// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReaction/HitPointEffector
#include "RootMotion/FinalIK/HitReaction_HitPointEffector.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*, "RootMotion.FinalIK", "HitReaction/HitPointEffector/EffectorLink");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReaction::HitPointEffector::EffectorLink : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAC9900
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xAC9938
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastValue
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 lastValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 current
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effector
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedEffector& dyn_effector();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: private UnityEngine.Vector3 lastValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastValue();
    // Get instance field reference: private UnityEngine.Vector3 current
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_current();
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Vector3 offset, System.Single crossFader)
    // Offset: 0x20B5C44
    void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Vector3 offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x20B59E0
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x20B5FB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointEffector::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointEffector::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointEffector::EffectorLink), 36 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_HitReaction_HitPointEffector_EffectorLinkSizeCheck;
  static_assert(sizeof(HitReaction::HitPointEffector::EffectorLink) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::Apply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* crossFader = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, offset, crossFader});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::*)()>(&RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
