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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVRCompositorTimingMode
  struct EVRCompositorTimingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRCompositorTimingMode, "Valve.VR", "EVRCompositorTimingMode");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRCompositorTimingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRCompositorTimingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRCompositorTimingMode
    constexpr EVRCompositorTimingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRCompositorTimingMode Implicit
    static constexpr const int Implicit = 0;
    // Get static field: static public Valve.VR.EVRCompositorTimingMode Implicit
    static ::Valve::VR::EVRCompositorTimingMode _get_Implicit();
    // Set static field: static public Valve.VR.EVRCompositorTimingMode Implicit
    static void _set_Implicit(::Valve::VR::EVRCompositorTimingMode value);
    // static field const value: static public Valve.VR.EVRCompositorTimingMode Explicit_RuntimePerformsPostPresentHandoff
    static constexpr const int Explicit_RuntimePerformsPostPresentHandoff = 1;
    // Get static field: static public Valve.VR.EVRCompositorTimingMode Explicit_RuntimePerformsPostPresentHandoff
    static ::Valve::VR::EVRCompositorTimingMode _get_Explicit_RuntimePerformsPostPresentHandoff();
    // Set static field: static public Valve.VR.EVRCompositorTimingMode Explicit_RuntimePerformsPostPresentHandoff
    static void _set_Explicit_RuntimePerformsPostPresentHandoff(::Valve::VR::EVRCompositorTimingMode value);
    // static field const value: static public Valve.VR.EVRCompositorTimingMode Explicit_ApplicationPerformsPostPresentHandoff
    static constexpr const int Explicit_ApplicationPerformsPostPresentHandoff = 2;
    // Get static field: static public Valve.VR.EVRCompositorTimingMode Explicit_ApplicationPerformsPostPresentHandoff
    static ::Valve::VR::EVRCompositorTimingMode _get_Explicit_ApplicationPerformsPostPresentHandoff();
    // Set static field: static public Valve.VR.EVRCompositorTimingMode Explicit_ApplicationPerformsPostPresentHandoff
    static void _set_Explicit_ApplicationPerformsPostPresentHandoff(::Valve::VR::EVRCompositorTimingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVRCompositorTimingMode
  #pragma pack(pop)
  static check_size<sizeof(EVRCompositorTimingMode), 0 + sizeof(int)> __Valve_VR_EVRCompositorTimingModeSizeCheck;
  static_assert(sizeof(EVRCompositorTimingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
