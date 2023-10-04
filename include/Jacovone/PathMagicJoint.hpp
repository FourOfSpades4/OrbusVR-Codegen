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
// Begin forward declares
// Forward declaring namespace: Jacovone
namespace Jacovone {
  // Forward declaring type: PathMagic
  class PathMagic;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Jacovone
namespace Jacovone {
  // Forward declaring type: PathMagicJoint
  class PathMagicJoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Jacovone::PathMagicJoint);
DEFINE_IL2CPP_ARG_TYPE(::Jacovone::PathMagicJoint*, "Jacovone", "PathMagicJoint");
// Type namespace: Jacovone
namespace Jacovone {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Jacovone.PathMagicJoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD1560
  class PathMagicJoint : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public Jacovone.PathMagic connectedPath
    // Size: 0x8
    // Offset: 0x18
    ::Jacovone::PathMagic* connectedPath;
    // Field size check
    static_assert(sizeof(::Jacovone::PathMagic*) == 0x8);
    // private UnityEngine.Rigidbody _rb
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rigidbody* rb;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private UnityEngine.Transform _tr
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* tr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 precision1
    // Size: 0x4
    // Offset: 0x30
    int precision1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 precision2
    // Size: 0x4
    // Offset: 0x34
    int precision2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean followPathOrientation
    // Size: 0x1
    // Offset: 0x38
    bool followPathOrientation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean motor
    // Size: 0x1
    // Offset: 0x39
    bool motor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: motor and: motorForce
    char __padding6[0x2] = {};
    // public System.Int32 motorForce
    // Size: 0x4
    // Offset: 0x3C
    int motorForce;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Jacovone.PathMagic connectedPath
    [[deprecated("Use field access instead!")]] ::Jacovone::PathMagic*& dyn_connectedPath();
    // Get instance field reference: private UnityEngine.Rigidbody _rb
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn__rb();
    // Get instance field reference: private UnityEngine.Transform _tr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__tr();
    // Get instance field reference: public System.Int32 precision1
    [[deprecated("Use field access instead!")]] int& dyn_precision1();
    // Get instance field reference: public System.Int32 precision2
    [[deprecated("Use field access instead!")]] int& dyn_precision2();
    // Get instance field reference: public System.Boolean followPathOrientation
    [[deprecated("Use field access instead!")]] bool& dyn_followPathOrientation();
    // Get instance field reference: public System.Boolean motor
    [[deprecated("Use field access instead!")]] bool& dyn_motor();
    // Get instance field reference: public System.Int32 motorForce
    [[deprecated("Use field access instead!")]] int& dyn_motorForce();
    // public System.Int32 get_Precision1()
    // Offset: 0x10605C0
    int get_Precision1();
    // public System.Void set_Precision1(System.Int32 value)
    // Offset: 0x10605C8
    void set_Precision1(int value);
    // public System.Int32 get_Precision2()
    // Offset: 0x10605D0
    int get_Precision2();
    // public System.Void set_Precision2(System.Int32 value)
    // Offset: 0x10605D8
    void set_Precision2(int value);
    // public System.Boolean get_FollowPathOrientation()
    // Offset: 0x10605E0
    bool get_FollowPathOrientation();
    // public System.Void set_FollowPathOrientation(System.Boolean value)
    // Offset: 0x10605E8
    void set_FollowPathOrientation(bool value);
    // public System.Boolean get_Motor()
    // Offset: 0x10605F4
    bool get_Motor();
    // public System.Void set_Motor(System.Boolean value)
    // Offset: 0x10605FC
    void set_Motor(bool value);
    // public System.Int32 get_MotorForce()
    // Offset: 0x1060608
    int get_MotorForce();
    // public System.Void set_MotorForce(System.Int32 value)
    // Offset: 0x1060610
    void set_MotorForce(int value);
    // private System.Void Awake()
    // Offset: 0x1060618
    void Awake();
    // private System.Void FixedUpdate()
    // Offset: 0x1060688
    void FixedUpdate();
    // private System.Single computePosAtMinDistance()
    // Offset: 0x1060B28
    float computePosAtMinDistance();
    // private UnityEngine.Vector3 GetPositionForPos(System.Single pos)
    // Offset: 0x1060D78
    ::UnityEngine::Vector3 GetPositionForPos(float pos);
    // public System.Void .ctor()
    // Offset: 0x1060F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathMagicJoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Jacovone::PathMagicJoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathMagicJoint*, creationType>()));
    }
  }; // Jacovone.PathMagicJoint
  #pragma pack(pop)
  static check_size<sizeof(PathMagicJoint), 60 + sizeof(int)> __Jacovone_PathMagicJointSizeCheck;
  static_assert(sizeof(PathMagicJoint) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::get_Precision1
// Il2CppName: get_Precision1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::get_Precision1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "get_Precision1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::set_Precision1
// Il2CppName: set_Precision1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)(int)>(&Jacovone::PathMagicJoint::set_Precision1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "set_Precision1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::get_Precision2
// Il2CppName: get_Precision2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::get_Precision2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "get_Precision2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::set_Precision2
// Il2CppName: set_Precision2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)(int)>(&Jacovone::PathMagicJoint::set_Precision2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "set_Precision2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::get_FollowPathOrientation
// Il2CppName: get_FollowPathOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::get_FollowPathOrientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "get_FollowPathOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::set_FollowPathOrientation
// Il2CppName: set_FollowPathOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)(bool)>(&Jacovone::PathMagicJoint::set_FollowPathOrientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "set_FollowPathOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::get_Motor
// Il2CppName: get_Motor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::get_Motor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "get_Motor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::set_Motor
// Il2CppName: set_Motor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)(bool)>(&Jacovone::PathMagicJoint::set_Motor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "set_Motor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::get_MotorForce
// Il2CppName: get_MotorForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::get_MotorForce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "get_MotorForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::set_MotorForce
// Il2CppName: set_MotorForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)(int)>(&Jacovone::PathMagicJoint::set_MotorForce)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "set_MotorForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::computePosAtMinDistance
// Il2CppName: computePosAtMinDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Jacovone::PathMagicJoint::*)()>(&Jacovone::PathMagicJoint::computePosAtMinDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "computePosAtMinDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::GetPositionForPos
// Il2CppName: GetPositionForPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Jacovone::PathMagicJoint::*)(float)>(&Jacovone::PathMagicJoint::GetPositionForPos)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::PathMagicJoint*), "GetPositionForPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: Jacovone::PathMagicJoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!