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
  // Forward declaring type: Initialization
  struct Initialization;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::PlayerLoop::Initialization, "UnityEngine.Experimental.PlayerLoop", "Initialization");
// Type namespace: UnityEngine.Experimental.PlayerLoop
namespace UnityEngine::Experimental::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.PlayerLoop.Initialization
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: A6FB88
  struct Initialization/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::Initialization::PlayerUpdateTime
    struct PlayerUpdateTime;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::Initialization::AsyncUploadTimeSlicedUpdate
    struct AsyncUploadTimeSlicedUpdate;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::Initialization::SynchronizeState
    struct SynchronizeState;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::Initialization::SynchronizeInputs
    struct SynchronizeInputs;
    // Nested type: ::UnityEngine::Experimental::PlayerLoop::Initialization::XREarlyUpdate
    struct XREarlyUpdate;
    // Creating value type constructor for type: Initialization
    constexpr Initialization() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.Experimental.PlayerLoop.Initialization
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
