// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: HighlightPlus.RayCastSource
#include "HighlightPlus/RayCastSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: HighlightPlus
namespace HighlightPlus {
  // Forward declaring type: HighlightEffect
  class HighlightEffect;
}
// Completed forward declares
// Type namespace: HighlightPlus
namespace HighlightPlus {
  // Forward declaring type: HighlightManager
  class HighlightManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HighlightPlus::HighlightManager);
DEFINE_IL2CPP_ARG_TYPE(::HighlightPlus::HighlightManager*, "HighlightPlus", "HighlightManager");
// Type namespace: HighlightPlus
namespace HighlightPlus {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HighlightPlus.HighlightManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD21F8
  // [HelpURLAttribute] Offset: AD21F8
  class HighlightManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.LayerMask layerMask
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // Padding between fields: layerMask and: raycastCamera
    char __padding0[0x4] = {};
    // public UnityEngine.Camera raycastCamera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* raycastCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // public HighlightPlus.RayCastSource raycastSource
    // Size: 0x4
    // Offset: 0x28
    ::HighlightPlus::RayCastSource raycastSource;
    // Field size check
    static_assert(sizeof(::HighlightPlus::RayCastSource) == 0x4);
    // Padding between fields: raycastSource and: baseEffect
    char __padding2[0x4] = {};
    // private HighlightPlus.HighlightEffect baseEffect
    // Size: 0x8
    // Offset: 0x30
    ::HighlightPlus::HighlightEffect* baseEffect;
    // Field size check
    static_assert(sizeof(::HighlightPlus::HighlightEffect*) == 0x8);
    // private HighlightPlus.HighlightEffect currentEffect
    // Size: 0x8
    // Offset: 0x38
    ::HighlightPlus::HighlightEffect* currentEffect;
    // Field size check
    static_assert(sizeof(::HighlightPlus::HighlightEffect*) == 0x8);
    // private UnityEngine.Transform currentObject
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* currentObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.LayerMask layerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_layerMask();
    // Get instance field reference: public UnityEngine.Camera raycastCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_raycastCamera();
    // Get instance field reference: public HighlightPlus.RayCastSource raycastSource
    [[deprecated("Use field access instead!")]] ::HighlightPlus::RayCastSource& dyn_raycastSource();
    // Get instance field reference: private HighlightPlus.HighlightEffect baseEffect
    [[deprecated("Use field access instead!")]] ::HighlightPlus::HighlightEffect*& dyn_baseEffect();
    // Get instance field reference: private HighlightPlus.HighlightEffect currentEffect
    [[deprecated("Use field access instead!")]] ::HighlightPlus::HighlightEffect*& dyn_currentEffect();
    // Get instance field reference: private UnityEngine.Transform currentObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_currentObject();
    // private System.Void OnEnable()
    // Offset: 0x149B07C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x149B2E8
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x149B4F0
    void Update();
    // private System.Void SwitchesCollider(UnityEngine.Transform newObject)
    // Offset: 0x149B2F0
    void SwitchesCollider(::UnityEngine::Transform* newObject);
    // static public UnityEngine.Camera GetCamera()
    // Offset: 0x149B238
    static ::UnityEngine::Camera* GetCamera();
    // public System.Void .ctor()
    // Offset: 0x149B778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HighlightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HighlightPlus::HighlightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HighlightManager*, creationType>()));
    }
  }; // HighlightPlus.HighlightManager
  #pragma pack(pop)
  static check_size<sizeof(HighlightManager), 64 + sizeof(::UnityEngine::Transform*)> __HighlightPlus_HighlightManagerSizeCheck;
  static_assert(sizeof(HighlightManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HighlightPlus::HighlightManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HighlightPlus::HighlightManager::*)()>(&HighlightPlus::HighlightManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightPlus::HighlightManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightPlus::HighlightManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HighlightPlus::HighlightManager::*)()>(&HighlightPlus::HighlightManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightPlus::HighlightManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightPlus::HighlightManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HighlightPlus::HighlightManager::*)()>(&HighlightPlus::HighlightManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightPlus::HighlightManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightPlus::HighlightManager::SwitchesCollider
// Il2CppName: SwitchesCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HighlightPlus::HighlightManager::*)(::UnityEngine::Transform*)>(&HighlightPlus::HighlightManager::SwitchesCollider)> {
  static const MethodInfo* get() {
    static auto* newObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HighlightPlus::HighlightManager*), "SwitchesCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newObject});
  }
};
// Writing MetadataGetter for method: HighlightPlus::HighlightManager::GetCamera
// Il2CppName: GetCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (*)()>(&HighlightPlus::HighlightManager::GetCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightPlus::HighlightManager*), "GetCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightPlus::HighlightManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
