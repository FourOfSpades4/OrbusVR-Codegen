// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverHeuristic
  class IKSolverHeuristic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverHeuristic);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverHeuristic*, "RootMotion.FinalIK", "IKSolverHeuristic");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverHeuristic
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverHeuristic : public ::RootMotion::FinalIK::IKSolver {
    public:
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single tolerance
    // Size: 0x4
    // Offset: 0x60
    float tolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxIterations
    // Size: 0x4
    // Offset: 0x64
    int maxIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean useRotationLimits
    // Size: 0x1
    // Offset: 0x68
    bool useRotationLimits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean XY
    // Size: 0x1
    // Offset: 0x69
    bool XY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: XY and: bones
    char __padding4[0x6] = {};
    // public RootMotion.FinalIK.IKSolver/Bone[] bones
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::RootMotion::FinalIK::IKSolver::Bone*> bones;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKSolver::Bone*>) == 0x8);
    // protected UnityEngine.Vector3 lastLocalDirection
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 lastLocalDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // protected System.Single chainLength
    // Size: 0x4
    // Offset: 0x84
    float chainLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single tolerance
    [[deprecated("Use field access instead!")]] float& dyn_tolerance();
    // Get instance field reference: public System.Int32 maxIterations
    [[deprecated("Use field access instead!")]] int& dyn_maxIterations();
    // Get instance field reference: public System.Boolean useRotationLimits
    [[deprecated("Use field access instead!")]] bool& dyn_useRotationLimits();
    // Get instance field reference: public System.Boolean XY
    [[deprecated("Use field access instead!")]] bool& dyn_XY();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/Bone[] bones
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKSolver::Bone*>& dyn_bones();
    // Get instance field reference: protected UnityEngine.Vector3 lastLocalDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastLocalDirection();
    // Get instance field reference: protected System.Single chainLength
    [[deprecated("Use field access instead!")]] float& dyn_chainLength();
    // public System.Boolean SetChain(UnityEngine.Transform[] hierarchy, UnityEngine.Transform root)
    // Offset: 0x208DA78
    bool SetChain(::ArrayW<::UnityEngine::Transform*> hierarchy, ::UnityEngine::Transform* root);
    // public System.Void AddBone(UnityEngine.Transform bone)
    // Offset: 0x208DC90
    void AddBone(::UnityEngine::Transform* bone);
    // protected System.Int32 get_minBones()
    // Offset: 0x208E504
    int get_minBones();
    // protected System.Boolean get_boneLengthCanBeZero()
    // Offset: 0x208E50C
    bool get_boneLengthCanBeZero();
    // protected System.Boolean get_allowCommonParent()
    // Offset: 0x208E514
    bool get_allowCommonParent();
    // protected System.Void InitiateBones()
    // Offset: 0x208E524
    void InitiateBones();
    // protected UnityEngine.Vector3 get_localDirection()
    // Offset: 0x208ED5C
    ::UnityEngine::Vector3 get_localDirection();
    // protected System.Single get_positionOffset()
    // Offset: 0x208EF3C
    float get_positionOffset();
    // protected UnityEngine.Vector3 GetSingularityOffset()
    // Offset: 0x208F000
    ::UnityEngine::Vector3 GetSingularityOffset();
    // private System.Boolean SingularityDetected()
    // Offset: 0x208F4D0
    bool SingularityDetected();
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x208DE5C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x208DEF8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x208DFAC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::StringW> message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x208E3C8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::ArrayW<::RootMotion::FinalIK::IKSolver::Point*> GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x208E3D0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    ::RootMotion::FinalIK::IKSolver::Point* GetPoint(::UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x208E51C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x208E520
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x208F848
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverHeuristic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverHeuristic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverHeuristic*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverHeuristic
  #pragma pack(pop)
  static check_size<sizeof(IKSolverHeuristic), 132 + sizeof(float)> __RootMotion_FinalIK_IKSolverHeuristicSizeCheck;
  static_assert(sizeof(IKSolverHeuristic) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)(::ArrayW<::UnityEngine::Transform*>, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverHeuristic::SetChain)> {
  static const MethodInfo* get() {
    static auto* hierarchy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hierarchy, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::AddBone
// Il2CppName: AddBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverHeuristic::AddBone)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "AddBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_minBones
// Il2CppName: get_minBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_minBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_minBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_boneLengthCanBeZero
// Il2CppName: get_boneLengthCanBeZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_boneLengthCanBeZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_boneLengthCanBeZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_allowCommonParent
// Il2CppName: get_allowCommonParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_allowCommonParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_allowCommonParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::InitiateBones
// Il2CppName: InitiateBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::InitiateBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "InitiateBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_localDirection
// Il2CppName: get_localDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_localDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_localDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_positionOffset
// Il2CppName: get_positionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_positionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_positionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::GetSingularityOffset
// Il2CppName: GetSingularityOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::GetSingularityOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "GetSingularityOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::SingularityDetected
// Il2CppName: SingularityDetected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::SingularityDetected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "SingularityDetected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::IKSolverHeuristic::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolver::Point*> (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverHeuristic::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverHeuristic::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
