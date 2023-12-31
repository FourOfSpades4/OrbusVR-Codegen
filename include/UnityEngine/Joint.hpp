// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Joint
  class Joint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Joint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Joint*, "UnityEngine", "Joint");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Joint
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A8138C
  // [RequireComponent] Offset: A8138C
  // [NativeClassAttribute] Offset: A8138C
  class Joint : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Rigidbody get_connectedBody()
    // Offset: 0x287257C
    ::UnityEngine::Rigidbody* get_connectedBody();
    // public System.Void set_connectedBody(UnityEngine.Rigidbody value)
    // Offset: 0x28725E8
    void set_connectedBody(::UnityEngine::Rigidbody* value);
    // public System.Void set_anchor(UnityEngine.Vector3 value)
    // Offset: 0x287265C
    void set_anchor(::UnityEngine::Vector3 value);
    // public System.Void set_connectedAnchor(UnityEngine.Vector3 value)
    // Offset: 0x28726F8
    void set_connectedAnchor(::UnityEngine::Vector3 value);
    // public System.Void set_autoConfigureConnectedAnchor(System.Boolean value)
    // Offset: 0x2872794
    void set_autoConfigureConnectedAnchor(bool value);
    // public System.Void set_breakForce(System.Single value)
    // Offset: 0x2872808
    void set_breakForce(float value);
    // public System.Void set_breakTorque(System.Single value)
    // Offset: 0x287287C
    void set_breakTorque(float value);
    // public System.Void set_enableCollision(System.Boolean value)
    // Offset: 0x28728F0
    void set_enableCollision(bool value);
    // public System.Void set_enablePreprocessing(System.Boolean value)
    // Offset: 0x2872964
    void set_enablePreprocessing(bool value);
    // private System.Void set_anchor_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2872684
    void set_anchor_Injected(ByRef<::UnityEngine::Vector3> value);
    // private System.Void set_connectedAnchor_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2872720
    void set_connectedAnchor_Injected(ByRef<::UnityEngine::Vector3> value);
  }; // UnityEngine.Joint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Joint::get_connectedBody
// Il2CppName: get_connectedBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (UnityEngine::Joint::*)()>(&UnityEngine::Joint::get_connectedBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "get_connectedBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedBody
// Il2CppName: set_connectedBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(::UnityEngine::Rigidbody*)>(&UnityEngine::Joint::set_connectedBody)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_anchor
// Il2CppName: set_anchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(::UnityEngine::Vector3)>(&UnityEngine::Joint::set_anchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_anchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedAnchor
// Il2CppName: set_connectedAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(::UnityEngine::Vector3)>(&UnityEngine::Joint::set_connectedAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_autoConfigureConnectedAnchor
// Il2CppName: set_autoConfigureConnectedAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(bool)>(&UnityEngine::Joint::set_autoConfigureConnectedAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_autoConfigureConnectedAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_breakForce
// Il2CppName: set_breakForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(float)>(&UnityEngine::Joint::set_breakForce)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_breakForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_breakTorque
// Il2CppName: set_breakTorque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(float)>(&UnityEngine::Joint::set_breakTorque)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_breakTorque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_enableCollision
// Il2CppName: set_enableCollision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(bool)>(&UnityEngine::Joint::set_enableCollision)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_enableCollision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_enablePreprocessing
// Il2CppName: set_enablePreprocessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(bool)>(&UnityEngine::Joint::set_enablePreprocessing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_enablePreprocessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_anchor_Injected
// Il2CppName: set_anchor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Joint::set_anchor_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_anchor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedAnchor_Injected
// Il2CppName: set_connectedAnchor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Joint::set_connectedAnchor_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedAnchor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
