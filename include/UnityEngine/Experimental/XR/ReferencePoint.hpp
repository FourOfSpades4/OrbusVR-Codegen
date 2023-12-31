// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.XR.TrackableId
#include "UnityEngine/Experimental/XR/TrackableId.hpp"
// Including type: UnityEngine.Experimental.XR.TrackingState
#include "UnityEngine/Experimental/XR/TrackingState.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: ReferencePoint
  struct ReferencePoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::ReferencePoint, "UnityEngine.Experimental.XR", "ReferencePoint");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.XR.ReferencePoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A8F1A4
  // [NativeHeaderAttribute] Offset: A8F1A4
  // [NativeHeaderAttribute] Offset: A8F1A4
  struct ReferencePoint/*, public ::System::ValueType*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA8FAD0
    // [CompilerGeneratedAttribute] Offset: 0xA8FAD0
    // private UnityEngine.Experimental.XR.TrackableId <Id>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Experimental::XR::TrackableId Id;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::TrackableId) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xA8FB0C
    // [DebuggerBrowsableAttribute] Offset: 0xA8FB0C
    // private UnityEngine.Experimental.XR.TrackingState <TrackingState>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::Experimental::XR::TrackingState TrackingState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::TrackingState) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xA8FB48
    // [CompilerGeneratedAttribute] Offset: 0xA8FB48
    // private UnityEngine.Pose <Pose>k__BackingField
    // Size: 0x1C
    // Offset: 0x14
    ::UnityEngine::Pose Pose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    public:
    // Creating value type constructor for type: ReferencePoint
    constexpr ReferencePoint(::UnityEngine::Experimental::XR::TrackableId Id_ = {}, ::UnityEngine::Experimental::XR::TrackingState TrackingState_ = {}, ::UnityEngine::Pose Pose_ = {}) noexcept : Id{Id_}, TrackingState{TrackingState_}, Pose{Pose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Experimental.XR.TrackableId <Id>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::TrackableId& dyn_$Id$k__BackingField();
    // Get instance field reference: private UnityEngine.Experimental.XR.TrackingState <TrackingState>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::TrackingState& dyn_$TrackingState$k__BackingField();
    // Get instance field reference: private UnityEngine.Pose <Pose>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$Pose$k__BackingField();
  }; // UnityEngine.Experimental.XR.ReferencePoint
  #pragma pack(pop)
  static check_size<sizeof(ReferencePoint), 20 + sizeof(::UnityEngine::Pose)> __UnityEngine_Experimental_XR_ReferencePointSizeCheck;
  static_assert(sizeof(ReferencePoint) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
