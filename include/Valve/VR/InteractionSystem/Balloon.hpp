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
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Hand
  class Hand;
  // Forward declaring type: SoundPlayOneshot
  class SoundPlayOneshot;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Collision
  class Collision;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Balloon
  class Balloon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::Balloon);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::Balloon*, "Valve.VR.InteractionSystem", "Balloon");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.Balloon
  // [TokenAttribute] Offset: FFFFFFFF
  class Balloon : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Valve::VR::InteractionSystem::Balloon::BalloonColor
    struct BalloonColor;
    public:
    // private Valve.VR.InteractionSystem.Hand hand
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::InteractionSystem::Hand* hand;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Hand*) == 0x8);
    // public UnityEngine.GameObject popPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* popPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single maxVelocity
    // Size: 0x4
    // Offset: 0x28
    float maxVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lifetime
    // Size: 0x4
    // Offset: 0x2C
    float lifetime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean burstOnLifetimeEnd
    // Size: 0x1
    // Offset: 0x30
    bool burstOnLifetimeEnd;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: burstOnLifetimeEnd and: lifetimeEndParticlePrefab
    char __padding4[0x7] = {};
    // public UnityEngine.GameObject lifetimeEndParticlePrefab
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* lifetimeEndParticlePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public Valve.VR.InteractionSystem.SoundPlayOneshot lifetimeEndSound
    // Size: 0x8
    // Offset: 0x40
    ::Valve::VR::InteractionSystem::SoundPlayOneshot* lifetimeEndSound;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::SoundPlayOneshot*) == 0x8);
    // private System.Single destructTime
    // Size: 0x4
    // Offset: 0x48
    float destructTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single releaseTime
    // Size: 0x4
    // Offset: 0x4C
    float releaseTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Valve.VR.InteractionSystem.SoundPlayOneshot collisionSound
    // Size: 0x8
    // Offset: 0x50
    ::Valve::VR::InteractionSystem::SoundPlayOneshot* collisionSound;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::SoundPlayOneshot*) == 0x8);
    // private System.Single lastSoundTime
    // Size: 0x4
    // Offset: 0x58
    float lastSoundTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single soundDelay
    // Size: 0x4
    // Offset: 0x5C
    float soundDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Rigidbody balloonRigidbody
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Rigidbody* balloonRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private System.Boolean bParticlesSpawned
    // Size: 0x1
    // Offset: 0x68
    bool bParticlesSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Single s_flLastDeathSound
    static float _get_s_flLastDeathSound();
    // Set static field: static private System.Single s_flLastDeathSound
    static void _set_s_flLastDeathSound(float value);
    // Get instance field reference: private Valve.VR.InteractionSystem.Hand hand
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Hand*& dyn_hand();
    // Get instance field reference: public UnityEngine.GameObject popPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_popPrefab();
    // Get instance field reference: public System.Single maxVelocity
    [[deprecated("Use field access instead!")]] float& dyn_maxVelocity();
    // Get instance field reference: public System.Single lifetime
    [[deprecated("Use field access instead!")]] float& dyn_lifetime();
    // Get instance field reference: public System.Boolean burstOnLifetimeEnd
    [[deprecated("Use field access instead!")]] bool& dyn_burstOnLifetimeEnd();
    // Get instance field reference: public UnityEngine.GameObject lifetimeEndParticlePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_lifetimeEndParticlePrefab();
    // Get instance field reference: public Valve.VR.InteractionSystem.SoundPlayOneshot lifetimeEndSound
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::SoundPlayOneshot*& dyn_lifetimeEndSound();
    // Get instance field reference: private System.Single destructTime
    [[deprecated("Use field access instead!")]] float& dyn_destructTime();
    // Get instance field reference: private System.Single releaseTime
    [[deprecated("Use field access instead!")]] float& dyn_releaseTime();
    // Get instance field reference: public Valve.VR.InteractionSystem.SoundPlayOneshot collisionSound
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::SoundPlayOneshot*& dyn_collisionSound();
    // Get instance field reference: private System.Single lastSoundTime
    [[deprecated("Use field access instead!")]] float& dyn_lastSoundTime();
    // Get instance field reference: private System.Single soundDelay
    [[deprecated("Use field access instead!")]] float& dyn_soundDelay();
    // Get instance field reference: private UnityEngine.Rigidbody balloonRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_balloonRigidbody();
    // Get instance field reference: private System.Boolean bParticlesSpawned
    [[deprecated("Use field access instead!")]] bool& dyn_bParticlesSpawned();
    // private System.Void Start()
    // Offset: 0x11591AC
    void Start();
    // private System.Void Update()
    // Offset: 0x1159248
    void Update();
    // private System.Void SpawnParticles(UnityEngine.GameObject particlePrefab, Valve.VR.InteractionSystem.SoundPlayOneshot sound)
    // Offset: 0x1159304
    void SpawnParticles(::UnityEngine::GameObject* particlePrefab, ::Valve::VR::InteractionSystem::SoundPlayOneshot* sound);
    // private System.Void FixedUpdate()
    // Offset: 0x11595DC
    void FixedUpdate();
    // private System.Void ApplyDamage()
    // Offset: 0x115970C
    void ApplyDamage();
    // private System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x1159798
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // public System.Void SetColor(Valve.VR.InteractionSystem.Balloon/BalloonColor color)
    // Offset: 0x1159B70
    void SetColor(::Valve::VR::InteractionSystem::Balloon::BalloonColor color);
    // private UnityEngine.Color BalloonColorToRGB(Valve.VR.InteractionSystem.Balloon/BalloonColor balloonColorVar)
    // Offset: 0x1159C3C
    ::UnityEngine::Color BalloonColorToRGB(::Valve::VR::InteractionSystem::Balloon::BalloonColor balloonColorVar);
    // public System.Void .ctor()
    // Offset: 0x1159E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Balloon* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::Balloon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Balloon*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1159EA0
    static void _cctor();
  }; // Valve.VR.InteractionSystem.Balloon
  #pragma pack(pop)
  static check_size<sizeof(Balloon), 104 + sizeof(bool)> __Valve_VR_InteractionSystem_BalloonSizeCheck;
  static_assert(sizeof(Balloon) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)()>(&Valve::VR::InteractionSystem::Balloon::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)()>(&Valve::VR::InteractionSystem::Balloon::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::SpawnParticles
// Il2CppName: SpawnParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)(::UnityEngine::GameObject*, ::Valve::VR::InteractionSystem::SoundPlayOneshot*)>(&Valve::VR::InteractionSystem::Balloon::SpawnParticles)> {
  static const MethodInfo* get() {
    static auto* particlePrefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* sound = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "SoundPlayOneshot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "SpawnParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePrefab, sound});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)()>(&Valve::VR::InteractionSystem::Balloon::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::ApplyDamage
// Il2CppName: ApplyDamage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)()>(&Valve::VR::InteractionSystem::Balloon::ApplyDamage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "ApplyDamage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)(::UnityEngine::Collision*)>(&Valve::VR::InteractionSystem::Balloon::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Balloon::*)(::Valve::VR::InteractionSystem::Balloon::BalloonColor)>(&Valve::VR::InteractionSystem::Balloon::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Balloon/BalloonColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::BalloonColorToRGB
// Il2CppName: BalloonColorToRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Valve::VR::InteractionSystem::Balloon::*)(::Valve::VR::InteractionSystem::Balloon::BalloonColor)>(&Valve::VR::InteractionSystem::Balloon::BalloonColorToRGB)> {
  static const MethodInfo* get() {
    static auto* balloonColorVar = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Balloon/BalloonColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), "BalloonColorToRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{balloonColorVar});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Balloon::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Valve::VR::InteractionSystem::Balloon::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Balloon*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
