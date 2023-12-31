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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: QuickProjectile
  class QuickProjectile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickProjectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickProjectile*, "", "QuickProjectile");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: QuickProjectile
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickProjectile : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x20
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxTimeAlive
    // Size: 0x4
    // Offset: 0x24
    float maxTimeAlive;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: public System.Single maxTimeAlive
    [[deprecated("Use field access instead!")]] float& dyn_maxTimeAlive();
    // private System.Void Start()
    // Offset: 0xE26690
    void Start();
    // private System.Void Update()
    // Offset: 0xE2671C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE269A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickProjectile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickProjectile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickProjectile*, creationType>()));
    }
  }; // QuickProjectile
  #pragma pack(pop)
  static check_size<sizeof(QuickProjectile), 36 + sizeof(float)> __GlobalNamespace_QuickProjectileSizeCheck;
  static_assert(sizeof(QuickProjectile) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickProjectile::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickProjectile::*)()>(&GlobalNamespace::QuickProjectile::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickProjectile*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickProjectile::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickProjectile::*)()>(&GlobalNamespace::QuickProjectile::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickProjectile*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickProjectile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
