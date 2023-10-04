// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.FBBIKHeadEffector
#include "RootMotion/FinalIK/FBBIKHeadEffector.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKHeadEffector::BendBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKHeadEffector::BendBone*, "RootMotion.FinalIK", "FBBIKHeadEffector/BendBone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBBIKHeadEffector/BendBone
  // [TokenAttribute] Offset: FFFFFFFF
  class FBBIKHeadEffector::BendBone : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAC6FC0
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC6FF8
    // [RangeAttribute] Offset: 0xAC6FF8
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: private UnityEngine.Quaternion defaultLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultLocalRotation();
    // public System.Void .ctor()
    // Offset: 0x1EAFAE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector::BendBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FBBIKHeadEffector::BendBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector::BendBone*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1EAFB68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector::BendBone* New_ctor(::UnityEngine::Transform* transform, float weight) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FBBIKHeadEffector::BendBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector::BendBone*, creationType>(transform, weight)));
    }
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1EAC38C
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x1EAC9D8
    void FixTransforms();
  }; // RootMotion.FinalIK.FBBIKHeadEffector/BendBone
  #pragma pack(pop)
  static check_size<sizeof(FBBIKHeadEffector::BendBone), 28 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_FBBIKHeadEffector_BendBoneSizeCheck;
  static_assert(sizeof(FBBIKHeadEffector::BendBone) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::BendBone::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::BendBone::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::BendBone::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::BendBone::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};