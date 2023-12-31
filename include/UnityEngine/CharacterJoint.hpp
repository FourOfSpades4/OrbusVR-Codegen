// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Joint
#include "UnityEngine/Joint.hpp"
// Including type: UnityEngine.JointDrive
#include "UnityEngine/JointDrive.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SoftJointLimit
  struct SoftJointLimit;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterJoint
  class CharacterJoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CharacterJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterJoint*, "UnityEngine", "CharacterJoint");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CharacterJoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: A814F8
  // [NativeHeaderAttribute] Offset: A814F8
  class CharacterJoint : public ::UnityEngine::Joint {
    public:
    public:
    // [ObsoleteAttribute] Offset: 0xA81790
    // public UnityEngine.Quaternion targetRotation
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion targetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // [ObsoleteAttribute] Offset: 0xA817CC
    // public UnityEngine.Vector3 targetAngularVelocity
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 targetAngularVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [ObsoleteAttribute] Offset: 0xA81808
    // public UnityEngine.JointDrive rotationDrive
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::JointDrive rotationDrive;
    // Field size check
    static_assert(sizeof(::UnityEngine::JointDrive) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Quaternion targetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_targetRotation();
    // Get instance field reference: public UnityEngine.Vector3 targetAngularVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_targetAngularVelocity();
    // Get instance field reference: public UnityEngine.JointDrive rotationDrive
    [[deprecated("Use field access instead!")]] ::UnityEngine::JointDrive& dyn_rotationDrive();
    // public System.Void set_swingAxis(UnityEngine.Vector3 value)
    // Offset: 0x2871990
    void set_swingAxis(::UnityEngine::Vector3 value);
    // public UnityEngine.SoftJointLimit get_lowTwistLimit()
    // Offset: 0x2871A2C
    ::UnityEngine::SoftJointLimit get_lowTwistLimit();
    // public System.Void set_lowTwistLimit(UnityEngine.SoftJointLimit value)
    // Offset: 0x2871AD0
    void set_lowTwistLimit(::UnityEngine::SoftJointLimit value);
    // public UnityEngine.SoftJointLimit get_highTwistLimit()
    // Offset: 0x2871B6C
    ::UnityEngine::SoftJointLimit get_highTwistLimit();
    // public System.Void set_highTwistLimit(UnityEngine.SoftJointLimit value)
    // Offset: 0x2871C10
    void set_highTwistLimit(::UnityEngine::SoftJointLimit value);
    // public UnityEngine.SoftJointLimit get_swing1Limit()
    // Offset: 0x2871CAC
    ::UnityEngine::SoftJointLimit get_swing1Limit();
    // public System.Void set_swing1Limit(UnityEngine.SoftJointLimit value)
    // Offset: 0x2871D50
    void set_swing1Limit(::UnityEngine::SoftJointLimit value);
    // private System.Void set_swingAxis_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x28719B8
    void set_swingAxis_Injected(ByRef<::UnityEngine::Vector3> value);
    // private System.Void get_lowTwistLimit_Injected(out UnityEngine.SoftJointLimit ret)
    // Offset: 0x2871A5C
    void get_lowTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);
    // private System.Void set_lowTwistLimit_Injected(ref UnityEngine.SoftJointLimit value)
    // Offset: 0x2871AF8
    void set_lowTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);
    // private System.Void get_highTwistLimit_Injected(out UnityEngine.SoftJointLimit ret)
    // Offset: 0x2871B9C
    void get_highTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);
    // private System.Void set_highTwistLimit_Injected(ref UnityEngine.SoftJointLimit value)
    // Offset: 0x2871C38
    void set_highTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);
    // private System.Void get_swing1Limit_Injected(out UnityEngine.SoftJointLimit ret)
    // Offset: 0x2871CDC
    void get_swing1Limit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);
    // private System.Void set_swing1Limit_Injected(ref UnityEngine.SoftJointLimit value)
    // Offset: 0x2871D78
    void set_swing1Limit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);
  }; // UnityEngine.CharacterJoint
  #pragma pack(pop)
  static check_size<sizeof(CharacterJoint), 52 + sizeof(::UnityEngine::JointDrive)> __UnityEngine_CharacterJointSizeCheck;
  static_assert(sizeof(CharacterJoint) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_swingAxis
// Il2CppName: set_swingAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(::UnityEngine::Vector3)>(&UnityEngine::CharacterJoint::set_swingAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_swingAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::get_lowTwistLimit
// Il2CppName: get_lowTwistLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SoftJointLimit (UnityEngine::CharacterJoint::*)()>(&UnityEngine::CharacterJoint::get_lowTwistLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "get_lowTwistLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_lowTwistLimit
// Il2CppName: set_lowTwistLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&UnityEngine::CharacterJoint::set_lowTwistLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_lowTwistLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::get_highTwistLimit
// Il2CppName: get_highTwistLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SoftJointLimit (UnityEngine::CharacterJoint::*)()>(&UnityEngine::CharacterJoint::get_highTwistLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "get_highTwistLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_highTwistLimit
// Il2CppName: set_highTwistLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&UnityEngine::CharacterJoint::set_highTwistLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_highTwistLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::get_swing1Limit
// Il2CppName: get_swing1Limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SoftJointLimit (UnityEngine::CharacterJoint::*)()>(&UnityEngine::CharacterJoint::get_swing1Limit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "get_swing1Limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_swing1Limit
// Il2CppName: set_swing1Limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&UnityEngine::CharacterJoint::set_swing1Limit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_swing1Limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_swingAxis_Injected
// Il2CppName: set_swingAxis_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::CharacterJoint::set_swingAxis_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_swingAxis_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::get_lowTwistLimit_Injected
// Il2CppName: get_lowTwistLimit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::SoftJointLimit>)>(&UnityEngine::CharacterJoint::get_lowTwistLimit_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "get_lowTwistLimit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_lowTwistLimit_Injected
// Il2CppName: set_lowTwistLimit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::SoftJointLimit>)>(&UnityEngine::CharacterJoint::set_lowTwistLimit_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_lowTwistLimit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::get_highTwistLimit_Injected
// Il2CppName: get_highTwistLimit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::SoftJointLimit>)>(&UnityEngine::CharacterJoint::get_highTwistLimit_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "get_highTwistLimit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_highTwistLimit_Injected
// Il2CppName: set_highTwistLimit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::SoftJointLimit>)>(&UnityEngine::CharacterJoint::set_highTwistLimit_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_highTwistLimit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::get_swing1Limit_Injected
// Il2CppName: get_swing1Limit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::SoftJointLimit>)>(&UnityEngine::CharacterJoint::get_swing1Limit_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "get_swing1Limit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterJoint::set_swing1Limit_Injected
// Il2CppName: set_swing1Limit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterJoint::*)(ByRef<::UnityEngine::SoftJointLimit>)>(&UnityEngine::CharacterJoint::set_swing1Limit_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SoftJointLimit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterJoint*), "set_swing1Limit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
