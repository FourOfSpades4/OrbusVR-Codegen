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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ProjectileScript
  class ProjectileScript;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProjectileScript);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProjectileScript*, "", "ProjectileScript");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: ProjectileScript
  // [TokenAttribute] Offset: FFFFFFFF
  class ProjectileScript : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject impactParticle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* impactParticle;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject projectileParticle
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* projectileParticle;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject[] trailParticles
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> trailParticles;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.Vector3 impactNormal
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 impactNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject impactParticle
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_impactParticle();
    // Get instance field reference: public UnityEngine.GameObject projectileParticle
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_projectileParticle();
    // Get instance field reference: public UnityEngine.GameObject[] trailParticles
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_trailParticles();
    // Get instance field reference: public UnityEngine.Vector3 impactNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_impactNormal();
    // private System.Void Start()
    // Offset: 0xE21924
    void Start();
    // private System.Void OnCollisionEnter(UnityEngine.Collision hit)
    // Offset: 0xE21A8C
    void OnCollisionEnter(::UnityEngine::Collision* hit);
    // public System.Void .ctor()
    // Offset: 0xE21E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProjectileScript* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ProjectileScript::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProjectileScript*, creationType>()));
    }
  }; // ProjectileScript
  #pragma pack(pop)
  static check_size<sizeof(ProjectileScript), 48 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_ProjectileScriptSizeCheck;
  static_assert(sizeof(ProjectileScript) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProjectileScript::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProjectileScript::*)()>(&GlobalNamespace::ProjectileScript::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileScript*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileScript::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProjectileScript::*)(::UnityEngine::Collision*)>(&GlobalNamespace::ProjectileScript::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileScript*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hit});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileScript::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!