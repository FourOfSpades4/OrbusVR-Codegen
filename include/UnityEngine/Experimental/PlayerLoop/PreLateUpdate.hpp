// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::PlayerLoop
namespace UnityEngine::Experimental::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.PlayerLoop
namespace UnityEngine::Experimental::PlayerLoop {
  // Forward declaring type: PreLateUpdate
  struct PreLateUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::PlayerLoop::PreLateUpdate, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate");
// Type namespace: UnityEngine.Experimental.PlayerLoop
namespace UnityEngine::Experimental::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.PlayerLoop.PreLateUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: A6FFC8
  struct PreLateUpdate/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::AIUpdatePostScript
    struct AIUpdatePostScript;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::DirectorUpdateAnimationBegin
    struct DirectorUpdateAnimationBegin;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::LegacyAnimationUpdate
    struct LegacyAnimationUpdate;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::DirectorUpdateAnimationEnd
    struct DirectorUpdateAnimationEnd;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::DirectorDeferredEvaluate
    struct DirectorDeferredEvaluate;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::UpdateNetworkManager
    struct UpdateNetworkManager;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::UpdateMasterServerInterface
    struct UpdateMasterServerInterface;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::UNetUpdate
    struct UNetUpdate;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::EndGraphicsJobsAfterScriptUpdate
    struct EndGraphicsJobsAfterScriptUpdate;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::ParticleSystemBeginUpdateAll
    struct ParticleSystemBeginUpdateAll;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::ScriptRunBehaviourLateUpdate
    struct ScriptRunBehaviourLateUpdate;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::PreLateUpdate::ConstraintManagerUpdate
    struct ConstraintManagerUpdate;
    // Creating value type constructor for type: PreLateUpdate
    constexpr PreLateUpdate() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.Experimental.PlayerLoop.PreLateUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
