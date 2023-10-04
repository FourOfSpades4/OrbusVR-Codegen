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
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Interactable
  class Interactable;
  // Forward declaring type: Hand
  class Hand;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: SeeThru
  class SeeThru;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::SeeThru);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::SeeThru*, "Valve.VR.InteractionSystem", "SeeThru");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.SeeThru
  // [TokenAttribute] Offset: FFFFFFFF
  class SeeThru : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Material seeThruMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* seeThruMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.GameObject seeThru
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* seeThru;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private Valve.VR.InteractionSystem.Interactable interactable
    // Size: 0x8
    // Offset: 0x28
    ::Valve::VR::InteractionSystem::Interactable* interactable;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Interactable*) == 0x8);
    // private UnityEngine.Renderer sourceRenderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* sourceRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Renderer destRenderer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Renderer* destRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Material seeThruMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_seeThruMaterial();
    // Get instance field reference: private UnityEngine.GameObject seeThru
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_seeThru();
    // Get instance field reference: private Valve.VR.InteractionSystem.Interactable interactable
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Interactable*& dyn_interactable();
    // Get instance field reference: private UnityEngine.Renderer sourceRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_sourceRenderer();
    // Get instance field reference: private UnityEngine.Renderer destRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_destRenderer();
    // private System.Void Awake()
    // Offset: 0xDBE984
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xDBF1CC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xDBF2A8
    void OnDisable();
    // private System.Void AttachedToHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDBF384
    void AttachedToHand(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void DetachedFromHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDBF3B8
    void DetachedFromHand(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void Update()
    // Offset: 0xDBF3EC
    void Update();
    // public System.Void .ctor()
    // Offset: 0xDBF754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SeeThru* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::SeeThru::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SeeThru*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.SeeThru
  #pragma pack(pop)
  static check_size<sizeof(SeeThru), 56 + sizeof(::UnityEngine::Renderer*)> __Valve_VR_InteractionSystem_SeeThruSizeCheck;
  static_assert(sizeof(SeeThru) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SeeThru::*)()>(&Valve::VR::InteractionSystem::SeeThru::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SeeThru*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SeeThru::*)()>(&Valve::VR::InteractionSystem::SeeThru::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SeeThru*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SeeThru::*)()>(&Valve::VR::InteractionSystem::SeeThru::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SeeThru*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::AttachedToHand
// Il2CppName: AttachedToHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SeeThru::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::SeeThru::AttachedToHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SeeThru*), "AttachedToHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::DetachedFromHand
// Il2CppName: DetachedFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SeeThru::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::SeeThru::DetachedFromHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SeeThru*), "DetachedFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SeeThru::*)()>(&Valve::VR::InteractionSystem::SeeThru::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SeeThru*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SeeThru::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!