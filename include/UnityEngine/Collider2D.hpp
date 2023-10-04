// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider2D
  class Collider2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Collider2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider2D*, "UnityEngine", "Collider2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Collider2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A9FC6C
  // [RequireComponent] Offset: A9FC6C
  // [RequiredByNativeCodeAttribute] Offset: A9FC6C
  class Collider2D : public ::UnityEngine::Behaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x2892724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Collider2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Collider2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Collider2D*, creationType>()));
    }
    // public System.Void set_isTrigger(System.Boolean value)
    // Offset: 0x289272C
    void set_isTrigger(bool value);
    // public UnityEngine.Vector2 get_offset()
    // Offset: 0x28927A0
    ::UnityEngine::Vector2 get_offset();
    // private System.Void get_offset_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x28927C8
    void get_offset_Injected(ByRef<::UnityEngine::Vector2> ret);
  }; // UnityEngine.Collider2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Collider2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Collider2D::set_isTrigger
// Il2CppName: set_isTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider2D::*)(bool)>(&UnityEngine::Collider2D::set_isTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "set_isTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider2D::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Collider2D::*)()>(&UnityEngine::Collider2D::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider2D::get_offset_Injected
// Il2CppName: get_offset_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Collider2D::get_offset_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "get_offset_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};