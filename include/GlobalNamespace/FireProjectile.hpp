// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
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
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ButtonScript
  class ButtonScript;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FireProjectile
  class FireProjectile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FireProjectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireProjectile*, "", "FireProjectile");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: FireProjectile
  // [TokenAttribute] Offset: FFFFFFFF
  class FireProjectile : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RaycastHit hit
    // Size: 0x2C
    // Offset: 0x18
    ::UnityEngine::RaycastHit hit;
    // Field size check
    static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2C);
    // Padding between fields: hit and: projectiles
    char __padding0[0x4] = {};
    // public UnityEngine.GameObject[] projectiles
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::GameObject*> projectiles;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.Transform spawnPosition
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* spawnPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 currentProjectile
    // Size: 0x4
    // Offset: 0x58
    int currentProjectile;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x5C
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private ButtonScript selectedProjectileButton
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::ButtonScript* selectedProjectileButton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ButtonScript*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RaycastHit hit
    [[deprecated("Use field access instead!")]] ::UnityEngine::RaycastHit& dyn_hit();
    // Get instance field reference: public UnityEngine.GameObject[] projectiles
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_projectiles();
    // Get instance field reference: public UnityEngine.Transform spawnPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_spawnPosition();
    // Get instance field reference: public System.Int32 currentProjectile
    [[deprecated("Use field access instead!")]] int& dyn_currentProjectile();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: private ButtonScript selectedProjectileButton
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ButtonScript*& dyn_selectedProjectileButton();
    // private System.Void Start()
    // Offset: 0x28EA048
    void Start();
    // private System.Void Update()
    // Offset: 0x28EA0C0
    void Update();
    // public System.Void nextEffect()
    // Offset: 0x28EA6A8
    void nextEffect();
    // public System.Void previousEffect()
    // Offset: 0x28EA704
    void previousEffect();
    // public System.Void AdjustSpeed(System.Single newSpeed)
    // Offset: 0x28EA748
    void AdjustSpeed(float newSpeed);
    // public System.Void .ctor()
    // Offset: 0x28EA750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireProjectile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FireProjectile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireProjectile*, creationType>()));
    }
  }; // FireProjectile
  #pragma pack(pop)
  static check_size<sizeof(FireProjectile), 96 + sizeof(::GlobalNamespace::ButtonScript*)> __GlobalNamespace_FireProjectileSizeCheck;
  static_assert(sizeof(FireProjectile) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireProjectile::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireProjectile::*)()>(&GlobalNamespace::FireProjectile::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireProjectile*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireProjectile::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireProjectile::*)()>(&GlobalNamespace::FireProjectile::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireProjectile*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireProjectile::nextEffect
// Il2CppName: nextEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireProjectile::*)()>(&GlobalNamespace::FireProjectile::nextEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireProjectile*), "nextEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireProjectile::previousEffect
// Il2CppName: previousEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireProjectile::*)()>(&GlobalNamespace::FireProjectile::previousEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireProjectile*), "previousEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireProjectile::AdjustSpeed
// Il2CppName: AdjustSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireProjectile::*)(float)>(&GlobalNamespace::FireProjectile::AdjustSpeed)> {
  static const MethodInfo* get() {
    static auto* newSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireProjectile*), "AdjustSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSpeed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireProjectile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
