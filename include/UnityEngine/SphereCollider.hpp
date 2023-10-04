// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SphereCollider
  class SphereCollider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SphereCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SphereCollider*, "UnityEngine", "SphereCollider");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SphereCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A81340
  // [RequiredByNativeCodeAttribute] Offset: A81340
  class SphereCollider : public ::UnityEngine::Collider {
    public:
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x2878170
    ::UnityEngine::Vector3 get_center();
    // public System.Single get_radius()
    // Offset: 0x2878214
    float get_radius();
    // public System.Void set_radius(System.Single value)
    // Offset: 0x2878280
    void set_radius(float value);
    // private System.Void get_center_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x28781A0
    void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);
  }; // UnityEngine.SphereCollider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SphereCollider::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::SphereCollider::*)()>(&UnityEngine::SphereCollider::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SphereCollider*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SphereCollider::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SphereCollider::*)()>(&UnityEngine::SphereCollider::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SphereCollider*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SphereCollider::set_radius
// Il2CppName: set_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SphereCollider::*)(float)>(&UnityEngine::SphereCollider::set_radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SphereCollider*), "set_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SphereCollider::get_center_Injected
// Il2CppName: get_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SphereCollider::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::SphereCollider::get_center_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SphereCollider*), "get_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
