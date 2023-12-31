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
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRCameraSubsystem
  class XRCameraSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: FrameReceivedEventArgs
  struct FrameReceivedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::FrameReceivedEventArgs, "UnityEngine.Experimental.XR", "FrameReceivedEventArgs");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.XR.FrameReceivedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  struct FrameReceivedEventArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.Experimental.XR.XRCameraSubsystem m_CameraSubsystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Experimental::XR::XRCameraSubsystem* m_CameraSubsystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::XRCameraSubsystem*) == 0x8);
    public:
    // Creating value type constructor for type: FrameReceivedEventArgs
    constexpr FrameReceivedEventArgs(::UnityEngine::Experimental::XR::XRCameraSubsystem* m_CameraSubsystem_ = {}) noexcept : m_CameraSubsystem{m_CameraSubsystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Experimental::XR::XRCameraSubsystem*
    constexpr operator ::UnityEngine::Experimental::XR::XRCameraSubsystem*() const noexcept {
      return m_CameraSubsystem;
    }
    // Get instance field reference: UnityEngine.Experimental.XR.XRCameraSubsystem m_CameraSubsystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::XRCameraSubsystem*& dyn_m_CameraSubsystem();
  }; // UnityEngine.Experimental.XR.FrameReceivedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(FrameReceivedEventArgs), 0 + sizeof(::UnityEngine::Experimental::XR::XRCameraSubsystem*)> __UnityEngine_Experimental_XR_FrameReceivedEventArgsSizeCheck;
  static_assert(sizeof(FrameReceivedEventArgs) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
