// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: CapsuleCollider
  class CapsuleCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRBoneCapsule);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoneCapsule*, "", "OVRBoneCapsule");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRBoneCapsule
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRBoneCapsule : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAB9F3C
    // private System.Int16 <BoneIndex>k__BackingField
    // Size: 0x2
    // Offset: 0x10
    int16_t BoneIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: BoneIndex and: CapsuleRigidbody
    char __padding0[0x6] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAB9F4C
    // private UnityEngine.Rigidbody <CapsuleRigidbody>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rigidbody* CapsuleRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9F5C
    // private UnityEngine.CapsuleCollider <CapsuleCollider>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::CapsuleCollider* CapsuleCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::CapsuleCollider*) == 0x8);
    public:
    // Get instance field reference: private System.Int16 <BoneIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int16_t& dyn_$BoneIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.Rigidbody <CapsuleRigidbody>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_$CapsuleRigidbody$k__BackingField();
    // Get instance field reference: private UnityEngine.CapsuleCollider <CapsuleCollider>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::CapsuleCollider*& dyn_$CapsuleCollider$k__BackingField();
    // public System.Int16 get_BoneIndex()
    // Offset: 0xE8D8E8
    int16_t get_BoneIndex();
    // public System.Void set_BoneIndex(System.Int16 value)
    // Offset: 0xE8D8F0
    void set_BoneIndex(int16_t value);
    // public UnityEngine.Rigidbody get_CapsuleRigidbody()
    // Offset: 0xE8D8F8
    ::UnityEngine::Rigidbody* get_CapsuleRigidbody();
    // public System.Void set_CapsuleRigidbody(UnityEngine.Rigidbody value)
    // Offset: 0xE8D900
    void set_CapsuleRigidbody(::UnityEngine::Rigidbody* value);
    // public UnityEngine.CapsuleCollider get_CapsuleCollider()
    // Offset: 0xE8D908
    ::UnityEngine::CapsuleCollider* get_CapsuleCollider();
    // public System.Void set_CapsuleCollider(UnityEngine.CapsuleCollider value)
    // Offset: 0xE8D910
    void set_CapsuleCollider(::UnityEngine::CapsuleCollider* value);
    // public System.Void .ctor()
    // Offset: 0xE8D918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBoneCapsule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRBoneCapsule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBoneCapsule*, creationType>()));
    }
    // public System.Void .ctor(System.Int16 boneIndex, UnityEngine.Rigidbody capsuleRigidBody, UnityEngine.CapsuleCollider capsuleCollider)
    // Offset: 0xE8D920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBoneCapsule* New_ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRBoneCapsule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBoneCapsule*, creationType>(boneIndex, capsuleRigidBody, capsuleCollider)));
    }
  }; // OVRBoneCapsule
  #pragma pack(pop)
  static check_size<sizeof(OVRBoneCapsule), 32 + sizeof(::UnityEngine::CapsuleCollider*)> __GlobalNamespace_OVRBoneCapsuleSizeCheck;
  static_assert(sizeof(OVRBoneCapsule) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::get_BoneIndex
// Il2CppName: get_BoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (GlobalNamespace::OVRBoneCapsule::*)()>(&GlobalNamespace::OVRBoneCapsule::get_BoneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoneCapsule*), "get_BoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::set_BoneIndex
// Il2CppName: set_BoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBoneCapsule::*)(int16_t)>(&GlobalNamespace::OVRBoneCapsule::set_BoneIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoneCapsule*), "set_BoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::get_CapsuleRigidbody
// Il2CppName: get_CapsuleRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (GlobalNamespace::OVRBoneCapsule::*)()>(&GlobalNamespace::OVRBoneCapsule::get_CapsuleRigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoneCapsule*), "get_CapsuleRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::set_CapsuleRigidbody
// Il2CppName: set_CapsuleRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBoneCapsule::*)(::UnityEngine::Rigidbody*)>(&GlobalNamespace::OVRBoneCapsule::set_CapsuleRigidbody)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoneCapsule*), "set_CapsuleRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::get_CapsuleCollider
// Il2CppName: get_CapsuleCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CapsuleCollider* (GlobalNamespace::OVRBoneCapsule::*)()>(&GlobalNamespace::OVRBoneCapsule::get_CapsuleCollider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoneCapsule*), "get_CapsuleCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::set_CapsuleCollider
// Il2CppName: set_CapsuleCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBoneCapsule::*)(::UnityEngine::CapsuleCollider*)>(&GlobalNamespace::OVRBoneCapsule::set_CapsuleCollider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "CapsuleCollider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoneCapsule*), "set_CapsuleCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRBoneCapsule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
