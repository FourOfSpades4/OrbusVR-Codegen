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
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: ArcheryTarget
  class ArcheryTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::ArcheryTarget);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::ArcheryTarget*, "Valve.VR.InteractionSystem", "ArcheryTarget");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.ArcheryTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class ArcheryTarget : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Valve::VR::InteractionSystem::ArcheryTarget::$FallDown$d__11
    class $FallDown$d__11;
    public:
    // public UnityEngine.Events.UnityEvent onTakeDamage
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Events::UnityEvent* onTakeDamage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public System.Boolean onceOnly
    // Size: 0x1
    // Offset: 0x20
    bool onceOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onceOnly and: targetCenter
    char __padding1[0x7] = {};
    // public UnityEngine.Transform targetCenter
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* targetCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform baseTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* baseTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform fallenDownTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* fallenDownTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single fallTime
    // Size: 0x4
    // Offset: 0x40
    float fallTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean targetEnabled
    // Size: 0x1
    // Offset: 0x44
    bool targetEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single targetRadius
    static constexpr const float targetRadius = 0.25;
    // Get static field: static private System.Single targetRadius
    static float _get_targetRadius();
    // Set static field: static private System.Single targetRadius
    static void _set_targetRadius(float value);
    // Get instance field reference: public UnityEngine.Events.UnityEvent onTakeDamage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onTakeDamage();
    // Get instance field reference: public System.Boolean onceOnly
    [[deprecated("Use field access instead!")]] bool& dyn_onceOnly();
    // Get instance field reference: public UnityEngine.Transform targetCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_targetCenter();
    // Get instance field reference: public UnityEngine.Transform baseTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_baseTransform();
    // Get instance field reference: public UnityEngine.Transform fallenDownTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fallenDownTransform();
    // Get instance field reference: public System.Single fallTime
    [[deprecated("Use field access instead!")]] float& dyn_fallTime();
    // Get instance field reference: private System.Boolean targetEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_targetEnabled();
    // private System.Void ApplyDamage()
    // Offset: 0x1155D4C
    void ApplyDamage();
    // private System.Void FireExposure()
    // Offset: 0x1155DB4
    void FireExposure();
    // private System.Void OnDamageTaken()
    // Offset: 0x1155D50
    void OnDamageTaken();
    // private System.Collections.IEnumerator FallDown()
    // Offset: 0x1155DB8
    ::System::Collections::IEnumerator* FallDown();
    // public System.Void .ctor()
    // Offset: 0x1155E58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArcheryTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::ArcheryTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArcheryTarget*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.ArcheryTarget
  #pragma pack(pop)
  static check_size<sizeof(ArcheryTarget), 68 + sizeof(bool)> __Valve_VR_InteractionSystem_ArcheryTargetSizeCheck;
  static_assert(sizeof(ArcheryTarget) == 0x45);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ArcheryTarget::ApplyDamage
// Il2CppName: ApplyDamage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ArcheryTarget::*)()>(&Valve::VR::InteractionSystem::ArcheryTarget::ApplyDamage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ArcheryTarget*), "ApplyDamage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ArcheryTarget::FireExposure
// Il2CppName: FireExposure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ArcheryTarget::*)()>(&Valve::VR::InteractionSystem::ArcheryTarget::FireExposure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ArcheryTarget*), "FireExposure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ArcheryTarget::OnDamageTaken
// Il2CppName: OnDamageTaken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ArcheryTarget::*)()>(&Valve::VR::InteractionSystem::ArcheryTarget::OnDamageTaken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ArcheryTarget*), "OnDamageTaken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ArcheryTarget::FallDown
// Il2CppName: FallDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Valve::VR::InteractionSystem::ArcheryTarget::*)()>(&Valve::VR::InteractionSystem::ArcheryTarget::FallDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ArcheryTarget*), "FallDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ArcheryTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!