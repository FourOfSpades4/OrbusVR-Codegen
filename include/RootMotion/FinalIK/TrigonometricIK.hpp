// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverTrigonometric
  class IKSolverTrigonometric;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: TrigonometricIK
  class TrigonometricIK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::TrigonometricIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TrigonometricIK*, "RootMotion.FinalIK", "TrigonometricIK");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.TrigonometricIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: AC1930
  // [AddComponentMenu] Offset: AC1930
  class TrigonometricIK : public ::RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    public:
    // public RootMotion.FinalIK.IKSolverTrigonometric solver
    // Size: 0x8
    // Offset: 0x38
    ::RootMotion::FinalIK::IKSolverTrigonometric* solver;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverTrigonometric*) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.IKSolverTrigonometric solver
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverTrigonometric*& dyn_solver();
    // private System.Void SupportGroup()
    // Offset: 0x11832EC
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1183338
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1183254
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x11832A0
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1183384
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    ::RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x118338C
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrigonometricIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::TrigonometricIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrigonometricIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.TrigonometricIK
  #pragma pack(pop)
  static check_size<sizeof(TrigonometricIK), 56 + sizeof(::RootMotion::FinalIK::IKSolverTrigonometric*)> __RootMotion_FinalIK_TrigonometricIKSizeCheck;
  static_assert(sizeof(TrigonometricIK) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::GetIKSolver
// Il2CppName: GetIKSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver* (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::GetIKSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "GetIKSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!