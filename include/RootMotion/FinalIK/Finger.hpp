// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: Finger
  class Finger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::Finger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Finger*, "RootMotion.FinalIK", "Finger");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Finger
  // [TokenAttribute] Offset: FFFFFFFF
  class Finger : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::FinalIK::Finger::DOF
    struct DOF;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.Finger/DOF
    // [TokenAttribute] Offset: FFFFFFFF
    struct DOF/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DOF
      constexpr DOF(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.Finger/DOF One
      static constexpr const int One = 0;
      // Get static field: static public RootMotion.FinalIK.Finger/DOF One
      static ::RootMotion::FinalIK::Finger::DOF _get_One();
      // Set static field: static public RootMotion.FinalIK.Finger/DOF One
      static void _set_One(::RootMotion::FinalIK::Finger::DOF value);
      // static field const value: static public RootMotion.FinalIK.Finger/DOF Three
      static constexpr const int Three = 1;
      // Get static field: static public RootMotion.FinalIK.Finger/DOF Three
      static ::RootMotion::FinalIK::Finger::DOF _get_Three();
      // Set static field: static public RootMotion.FinalIK.Finger/DOF Three
      static void _set_Three(::RootMotion::FinalIK::Finger::DOF value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // RootMotion.FinalIK.Finger/DOF
    #pragma pack(pop)
    static check_size<sizeof(Finger::DOF), 0 + sizeof(int)> __RootMotion_FinalIK_Finger_DOFSizeCheck;
    static_assert(sizeof(Finger::DOF) == 0x4);
    public:
    // [TooltipAttribute] Offset: 0xAC2EA4
    // [RangeAttribute] Offset: 0xAC2EA4
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x10
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAC2EF8
    // [RangeAttribute] Offset: 0xAC2EF8
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x14
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAC2F4C
    // public RootMotion.FinalIK.Finger/DOF rotationDOF
    // Size: 0x4
    // Offset: 0x18
    ::RootMotion::FinalIK::Finger::DOF rotationDOF;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::Finger::DOF) == 0x4);
    // Padding between fields: rotationDOF and: bone1
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0xAC2F84
    // public UnityEngine.Transform bone1
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* bone1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC2FBC
    // public UnityEngine.Transform bone2
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* bone2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC2FF4
    // public UnityEngine.Transform bone3
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* bone3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC302C
    // public UnityEngine.Transform tip
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* tip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC3064
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAC309C
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: solver
    char __padding8[0x7] = {};
    // private RootMotion.FinalIK.IKSolverLimb solver
    // Size: 0x8
    // Offset: 0x50
    ::RootMotion::FinalIK::IKSolverLimb* solver;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // private UnityEngine.Quaternion bone3RelativeToTarget
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Quaternion bone3RelativeToTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bone3DefaultLocalPosition
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 bone3DefaultLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion bone3DefaultLocalRotation
    // Size: 0x10
    // Offset: 0x74
    ::UnityEngine::Quaternion bone3DefaultLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bone1Axis
    // Size: 0xC
    // Offset: 0x84
    ::UnityEngine::Vector3 bone1Axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 tipAxis
    // Size: 0xC
    // Offset: 0x90
    ::UnityEngine::Vector3 tipAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: public System.Single rotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_rotationWeight();
    // Get instance field reference: public RootMotion.FinalIK.Finger/DOF rotationDOF
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::Finger::DOF& dyn_rotationDOF();
    // Get instance field reference: public UnityEngine.Transform bone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone1();
    // Get instance field reference: public UnityEngine.Transform bone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone2();
    // Get instance field reference: public UnityEngine.Transform bone3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone3();
    // Get instance field reference: public UnityEngine.Transform tip
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_tip();
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: private System.Boolean <initiated>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$initiated$k__BackingField();
    // Get instance field reference: private RootMotion.FinalIK.IKSolverLimb solver
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLimb*& dyn_solver();
    // Get instance field reference: private UnityEngine.Quaternion bone3RelativeToTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_bone3RelativeToTarget();
    // Get instance field reference: private UnityEngine.Vector3 bone3DefaultLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bone3DefaultLocalPosition();
    // Get instance field reference: private UnityEngine.Quaternion bone3DefaultLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_bone3DefaultLocalRotation();
    // Get instance field reference: private UnityEngine.Vector3 bone1Axis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bone1Axis();
    // Get instance field reference: private UnityEngine.Vector3 tipAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tipAxis();
    // public System.Boolean get_initiated()
    // Offset: 0x1EB4354
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1EB435C
    void set_initiated(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x1EB4368
    ::UnityEngine::Vector3 get_IKPosition();
    // public System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x1EB4398
    void set_IKPosition(::UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_IKRotation()
    // Offset: 0x1EB43E4
    ::UnityEngine::Quaternion get_IKRotation();
    // public System.Void set_IKRotation(UnityEngine.Quaternion value)
    // Offset: 0x1EB4414
    void set_IKRotation(::UnityEngine::Quaternion value);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x1EB4464
    bool IsValid(ByRef<::StringW> errorMessage);
    // public System.Void Initiate(UnityEngine.Transform hand, System.Int32 index)
    // Offset: 0x1EB4564
    void Initiate(::UnityEngine::Transform* hand, int index);
    // public System.Void FixTransforms()
    // Offset: 0x1EB4A70
    void FixTransforms();
    // public System.Void Update(System.Single masterWeight)
    // Offset: 0x1EB4B94
    void Update(float masterWeight);
    // public System.Void .ctor()
    // Offset: 0x1EB508C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Finger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::Finger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Finger*, creationType>()));
    }
  }; // RootMotion.FinalIK.Finger
  #pragma pack(pop)
  static check_size<sizeof(Finger), 144 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_FingerSizeCheck;
  static_assert(sizeof(Finger) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Finger::DOF, "RootMotion.FinalIK", "Finger/DOF");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(bool)>(&RootMotion::FinalIK::Finger::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::get_IKPosition
// Il2CppName: get_IKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::get_IKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "get_IKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::set_IKPosition
// Il2CppName: set_IKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::Finger::set_IKPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "set_IKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::get_IKRotation
// Il2CppName: get_IKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::get_IKRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "get_IKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::set_IKRotation
// Il2CppName: set_IKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::Finger::set_IKRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "set_IKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Finger::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::Finger::IsValid)> {
  static const MethodInfo* get() {
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(::UnityEngine::Transform*, int)>(&RootMotion::FinalIK::Finger::Initiate)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(float)>(&RootMotion::FinalIK::Finger::Update)> {
  static const MethodInfo* get() {
    static auto* masterWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{masterWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
