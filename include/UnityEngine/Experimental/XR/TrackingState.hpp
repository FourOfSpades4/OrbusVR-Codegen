// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: TrackingState
  struct TrackingState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::TrackingState, "UnityEngine.Experimental.XR", "TrackingState");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.XR.TrackingState
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A8F35C
  struct TrackingState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TrackingState
    constexpr TrackingState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.XR.TrackingState Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.Experimental.XR.TrackingState Unknown
    static ::UnityEngine::Experimental::XR::TrackingState _get_Unknown();
    // Set static field: static public UnityEngine.Experimental.XR.TrackingState Unknown
    static void _set_Unknown(::UnityEngine::Experimental::XR::TrackingState value);
    // static field const value: static public UnityEngine.Experimental.XR.TrackingState Tracking
    static constexpr const int Tracking = 1;
    // Get static field: static public UnityEngine.Experimental.XR.TrackingState Tracking
    static ::UnityEngine::Experimental::XR::TrackingState _get_Tracking();
    // Set static field: static public UnityEngine.Experimental.XR.TrackingState Tracking
    static void _set_Tracking(::UnityEngine::Experimental::XR::TrackingState value);
    // static field const value: static public UnityEngine.Experimental.XR.TrackingState Unavailable
    static constexpr const int Unavailable = 2;
    // Get static field: static public UnityEngine.Experimental.XR.TrackingState Unavailable
    static ::UnityEngine::Experimental::XR::TrackingState _get_Unavailable();
    // Set static field: static public UnityEngine.Experimental.XR.TrackingState Unavailable
    static void _set_Unavailable(::UnityEngine::Experimental::XR::TrackingState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Experimental.XR.TrackingState
  #pragma pack(pop)
  static check_size<sizeof(TrackingState), 0 + sizeof(int)> __UnityEngine_Experimental_XR_TrackingStateSizeCheck;
  static_assert(sizeof(TrackingState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
