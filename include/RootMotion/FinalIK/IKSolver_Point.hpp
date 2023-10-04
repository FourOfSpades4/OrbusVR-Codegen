// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
NEED_NO_BOX(::RootMotion::FinalIK::IKSolver::Point);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolver::Point*, "RootMotion.FinalIK", "IKSolver/Point");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver/Point
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolver::Point : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xAC708C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 solverPosition
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 solverPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion solverRotation
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Quaternion solverRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 defaultLocalPosition
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 defaultLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: public UnityEngine.Vector3 solverPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_solverPosition();
    // Get instance field reference: public UnityEngine.Quaternion solverRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_solverRotation();
    // Get instance field reference: public UnityEngine.Vector3 defaultLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_defaultLocalPosition();
    // Get instance field reference: public UnityEngine.Quaternion defaultLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultLocalRotation();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x20C2D2C
    void StoreDefaultLocalState();
    // public System.Void FixTransform()
    // Offset: 0x20C2D90
    void FixTransform();
    // public System.Void UpdateSolverPosition()
    // Offset: 0x20C2F60
    void UpdateSolverPosition();
    // public System.Void UpdateSolverLocalPosition()
    // Offset: 0x20C2FA0
    void UpdateSolverLocalPosition();
    // public System.Void UpdateSolverState()
    // Offset: 0x20C2FE0
    void UpdateSolverState();
    // public System.Void UpdateSolverLocalState()
    // Offset: 0x20C3044
    void UpdateSolverLocalState();
    // public System.Void .ctor()
    // Offset: 0x20C2620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Point* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolver::Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Point*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolver/Point
  #pragma pack(pop)
  static check_size<sizeof(IKSolver::Point), 68 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_IKSolver_PointSizeCheck;
  static_assert(sizeof(IKSolver::Point) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Point::*)()>(&RootMotion::FinalIK::IKSolver::Point::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Point*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::FixTransform
// Il2CppName: FixTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Point::*)()>(&RootMotion::FinalIK::IKSolver::Point::FixTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Point*), "FixTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::UpdateSolverPosition
// Il2CppName: UpdateSolverPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Point::*)()>(&RootMotion::FinalIK::IKSolver::Point::UpdateSolverPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Point*), "UpdateSolverPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::UpdateSolverLocalPosition
// Il2CppName: UpdateSolverLocalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Point::*)()>(&RootMotion::FinalIK::IKSolver::Point::UpdateSolverLocalPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Point*), "UpdateSolverLocalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::UpdateSolverState
// Il2CppName: UpdateSolverState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Point::*)()>(&RootMotion::FinalIK::IKSolver::Point::UpdateSolverState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Point*), "UpdateSolverState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::UpdateSolverLocalState
// Il2CppName: UpdateSolverLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Point::*)()>(&RootMotion::FinalIK::IKSolver::Point::UpdateSolverLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Point*), "UpdateSolverLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!