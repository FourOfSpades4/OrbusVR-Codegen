// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.FBIKChain
#include "RootMotion/FinalIK/FBIKChain.hpp"
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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FBIKChain::ChildConstraint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBIKChain::ChildConstraint*, "RootMotion.FinalIK", "FBIKChain/ChildConstraint");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBIKChain/ChildConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class FBIKChain::ChildConstraint : public ::Il2CppObject {
    public:
    public:
    // public System.Single pushElasticity
    // Size: 0x4
    // Offset: 0x10
    float pushElasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single pullElasticity
    // Size: 0x4
    // Offset: 0x14
    float pullElasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform bone1
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* bone1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform bone2
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* bone2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAC706C
    // private System.Single <nominalDistance>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float nominalDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAC707C
    // private System.Boolean <isRigid>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool isRigid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRigid and: crossFade
    char __padding5[0x3] = {};
    // private System.Single crossFade
    // Size: 0x4
    // Offset: 0x30
    float crossFade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single inverseCrossFade
    // Size: 0x4
    // Offset: 0x34
    float inverseCrossFade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 chain1Index
    // Size: 0x4
    // Offset: 0x38
    int chain1Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chain2Index
    // Size: 0x4
    // Offset: 0x3C
    int chain2Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Single pushElasticity
    [[deprecated("Use field access instead!")]] float& dyn_pushElasticity();
    // Get instance field reference: public System.Single pullElasticity
    [[deprecated("Use field access instead!")]] float& dyn_pullElasticity();
    // Get instance field reference: private UnityEngine.Transform bone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone1();
    // Get instance field reference: private UnityEngine.Transform bone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone2();
    // Get instance field reference: private System.Single <nominalDistance>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$nominalDistance$k__BackingField();
    // Get instance field reference: private System.Boolean <isRigid>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isRigid$k__BackingField();
    // Get instance field reference: private System.Single crossFade
    [[deprecated("Use field access instead!")]] float& dyn_crossFade();
    // Get instance field reference: private System.Single inverseCrossFade
    [[deprecated("Use field access instead!")]] float& dyn_inverseCrossFade();
    // Get instance field reference: private System.Int32 chain1Index
    [[deprecated("Use field access instead!")]] int& dyn_chain1Index();
    // Get instance field reference: private System.Int32 chain2Index
    [[deprecated("Use field access instead!")]] int& dyn_chain2Index();
    // public System.Single get_nominalDistance()
    // Offset: 0x1EB42E4
    float get_nominalDistance();
    // private System.Void set_nominalDistance(System.Single value)
    // Offset: 0x1EB42EC
    void set_nominalDistance(float value);
    // public System.Boolean get_isRigid()
    // Offset: 0x1EB42F4
    bool get_isRigid();
    // private System.Void set_isRigid(System.Boolean value)
    // Offset: 0x1EB42FC
    void set_isRigid(bool value);
    // public System.Void .ctor(UnityEngine.Transform bone1, UnityEngine.Transform bone2, System.Single pushElasticity, System.Single pullElasticity)
    // Offset: 0x1EB4308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBIKChain::ChildConstraint* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, float pushElasticity, float pullElasticity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FBIKChain::ChildConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBIKChain::ChildConstraint*, creationType>(bone1, bone2, pushElasticity, pullElasticity)));
    }
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1EB0D70
    void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void OnPreSolve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1EB16F4
    void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Solve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1EB3E98
    void Solve(::RootMotion::FinalIK::IKSolverFullBody* solver);
  }; // RootMotion.FinalIK.FBIKChain/ChildConstraint
  #pragma pack(pop)
  static check_size<sizeof(FBIKChain::ChildConstraint), 60 + sizeof(int)> __RootMotion_FinalIK_FBIKChain_ChildConstraintSizeCheck;
  static_assert(sizeof(FBIKChain::ChildConstraint) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::get_nominalDistance
// Il2CppName: get_nominalDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)()>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::get_nominalDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "get_nominalDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::set_nominalDistance
// Il2CppName: set_nominalDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)(float)>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::set_nominalDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "set_nominalDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::get_isRigid
// Il2CppName: get_isRigid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)()>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::get_isRigid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "get_isRigid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::set_isRigid
// Il2CppName: set_isRigid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)(bool)>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::set_isRigid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "set_isRigid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::OnPreSolve
// Il2CppName: OnPreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::OnPreSolve)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "OnPreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBIKChain::ChildConstraint::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBIKChain::ChildConstraint::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::FBIKChain::ChildConstraint::Solve)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBIKChain::ChildConstraint*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};