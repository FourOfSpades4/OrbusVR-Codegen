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
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: PhysicMaterial
  class PhysicMaterial;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collision
  class Collision;
}
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: SoundPlayOneshot
  class SoundPlayOneshot;
  // Forward declaring type: PlaySound
  class PlaySound;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Arrow
  class Arrow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::Arrow);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::Arrow*, "Valve.VR.InteractionSystem", "Arrow");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.Arrow
  // [TokenAttribute] Offset: FFFFFFFF
  class Arrow : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.ParticleSystem glintParticle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* glintParticle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // public UnityEngine.Rigidbody arrowHeadRB
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rigidbody* arrowHeadRB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Rigidbody shaftRB
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rigidbody* shaftRB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.PhysicMaterial targetPhysMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::PhysicMaterial* targetPhysMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::PhysicMaterial*) == 0x8);
    // private UnityEngine.Vector3 prevPosition
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 prevPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion prevRotation
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Quaternion prevRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 prevVelocity
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 prevVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 prevHeadPosition
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 prevHeadPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: prevHeadPosition and: fireReleaseSound
    char __padding7[0x4] = {};
    // public Valve.VR.InteractionSystem.SoundPlayOneshot fireReleaseSound
    // Size: 0x8
    // Offset: 0x70
    ::Valve::VR::InteractionSystem::SoundPlayOneshot* fireReleaseSound;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::SoundPlayOneshot*) == 0x8);
    // public Valve.VR.InteractionSystem.SoundPlayOneshot airReleaseSound
    // Size: 0x8
    // Offset: 0x78
    ::Valve::VR::InteractionSystem::SoundPlayOneshot* airReleaseSound;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::SoundPlayOneshot*) == 0x8);
    // public Valve.VR.InteractionSystem.SoundPlayOneshot hitTargetSound
    // Size: 0x8
    // Offset: 0x80
    ::Valve::VR::InteractionSystem::SoundPlayOneshot* hitTargetSound;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::SoundPlayOneshot*) == 0x8);
    // public Valve.VR.InteractionSystem.PlaySound hitGroundSound
    // Size: 0x8
    // Offset: 0x88
    ::Valve::VR::InteractionSystem::PlaySound* hitGroundSound;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::PlaySound*) == 0x8);
    // private System.Boolean inFlight
    // Size: 0x1
    // Offset: 0x90
    bool inFlight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean released
    // Size: 0x1
    // Offset: 0x91
    bool released;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasSpreadFire
    // Size: 0x1
    // Offset: 0x92
    bool hasSpreadFire;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasSpreadFire and: travelledFrames
    char __padding14[0x1] = {};
    // private System.Int32 travelledFrames
    // Size: 0x4
    // Offset: 0x94
    int travelledFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.GameObject scaleParentObject
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::GameObject* scaleParentObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.ParticleSystem glintParticle
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_glintParticle();
    // Get instance field reference: public UnityEngine.Rigidbody arrowHeadRB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_arrowHeadRB();
    // Get instance field reference: public UnityEngine.Rigidbody shaftRB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_shaftRB();
    // Get instance field reference: public UnityEngine.PhysicMaterial targetPhysMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::PhysicMaterial*& dyn_targetPhysMaterial();
    // Get instance field reference: private UnityEngine.Vector3 prevPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_prevPosition();
    // Get instance field reference: private UnityEngine.Quaternion prevRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_prevRotation();
    // Get instance field reference: private UnityEngine.Vector3 prevVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_prevVelocity();
    // Get instance field reference: private UnityEngine.Vector3 prevHeadPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_prevHeadPosition();
    // Get instance field reference: public Valve.VR.InteractionSystem.SoundPlayOneshot fireReleaseSound
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::SoundPlayOneshot*& dyn_fireReleaseSound();
    // Get instance field reference: public Valve.VR.InteractionSystem.SoundPlayOneshot airReleaseSound
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::SoundPlayOneshot*& dyn_airReleaseSound();
    // Get instance field reference: public Valve.VR.InteractionSystem.SoundPlayOneshot hitTargetSound
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::SoundPlayOneshot*& dyn_hitTargetSound();
    // Get instance field reference: public Valve.VR.InteractionSystem.PlaySound hitGroundSound
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::PlaySound*& dyn_hitGroundSound();
    // Get instance field reference: private System.Boolean inFlight
    [[deprecated("Use field access instead!")]] bool& dyn_inFlight();
    // Get instance field reference: private System.Boolean released
    [[deprecated("Use field access instead!")]] bool& dyn_released();
    // Get instance field reference: private System.Boolean hasSpreadFire
    [[deprecated("Use field access instead!")]] bool& dyn_hasSpreadFire();
    // Get instance field reference: private System.Int32 travelledFrames
    [[deprecated("Use field access instead!")]] int& dyn_travelledFrames();
    // Get instance field reference: private UnityEngine.GameObject scaleParentObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_scaleParentObject();
    // private System.Void Start()
    // Offset: 0x1156188
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x1156210
    void FixedUpdate();
    // public System.Void ArrowReleased(System.Single inputVelocity)
    // Offset: 0x1156334
    void ArrowReleased(float inputVelocity);
    // private System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x11567F0
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // private System.Void StickInTarget(UnityEngine.Collision collision, System.Boolean bSkipRayCast)
    // Offset: 0x11570C8
    void StickInTarget(::UnityEngine::Collision* collision, bool bSkipRayCast);
    // private System.Void OnDestroy()
    // Offset: 0x1157960
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1157A14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Arrow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::Arrow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Arrow*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.Arrow
  #pragma pack(pop)
  static check_size<sizeof(Arrow), 152 + sizeof(::UnityEngine::GameObject*)> __Valve_VR_InteractionSystem_ArrowSizeCheck;
  static_assert(sizeof(Arrow) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Arrow::*)()>(&Valve::VR::InteractionSystem::Arrow::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Arrow*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Arrow::*)()>(&Valve::VR::InteractionSystem::Arrow::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Arrow*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::ArrowReleased
// Il2CppName: ArrowReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Arrow::*)(float)>(&Valve::VR::InteractionSystem::Arrow::ArrowReleased)> {
  static const MethodInfo* get() {
    static auto* inputVelocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Arrow*), "ArrowReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputVelocity});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Arrow::*)(::UnityEngine::Collision*)>(&Valve::VR::InteractionSystem::Arrow::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Arrow*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::StickInTarget
// Il2CppName: StickInTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Arrow::*)(::UnityEngine::Collision*, bool)>(&Valve::VR::InteractionSystem::Arrow::StickInTarget)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    static auto* bSkipRayCast = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Arrow*), "StickInTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision, bSkipRayCast});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Arrow::*)()>(&Valve::VR::InteractionSystem::Arrow::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Arrow*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Arrow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
