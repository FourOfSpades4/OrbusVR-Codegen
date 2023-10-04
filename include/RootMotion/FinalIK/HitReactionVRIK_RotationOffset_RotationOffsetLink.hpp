// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/RotationOffset
#include "RootMotion/FinalIK/HitReactionVRIK_RotationOffset.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/RotationOffset
#include "RootMotion/FinalIK/IKSolverVR_RotationOffset.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset/RotationOffsetLink");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RotationOffset/RotationOffsetLink
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIK::RotationOffset::RotationOffsetLink : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAC9A6C
    // public RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverVR::RotationOffset) == 0x4);
    // [TooltipAttribute] Offset: 0xAC9AA4
    // [RangeAttribute] Offset: 0xAC9AA4
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion lastValue
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion lastValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion current
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Quaternion current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverVR::RotationOffset& dyn_rotationOffset();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: private UnityEngine.Quaternion lastValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_lastValue();
    // Get instance field reference: private UnityEngine.Quaternion current
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_current();
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.Quaternion offset, System.Single crossFader)
    // Offset: 0x20B7344
    void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Quaternion offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x20B6FC4
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x20B74BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::RotationOffset::RotationOffsetLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::RotationOffset::RotationOffsetLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReactionVRIK/RotationOffset/RotationOffsetLink
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::RotationOffset::RotationOffsetLink), 40 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_HitReactionVRIK_RotationOffset_RotationOffsetLinkSizeCheck;
  static_assert(sizeof(HitReactionVRIK::RotationOffset::RotationOffsetLink) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::Apply)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* crossFader = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, offset, crossFader});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::*)()>(&RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!