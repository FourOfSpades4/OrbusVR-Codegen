// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pegasus.PegasusConstants
#include "Pegasus/PegasusConstants.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::PegasusConstants::PegasusAnimationState, "Pegasus", "PegasusConstants/PegasusAnimationState");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.PegasusConstants/PegasusAnimationState
  // [TokenAttribute] Offset: FFFFFFFF
  struct PegasusConstants::PegasusAnimationState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PegasusAnimationState
    constexpr PegasusAnimationState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pegasus.PegasusConstants/PegasusAnimationState Idle
    static constexpr const int Idle = 0;
    // Get static field: static public Pegasus.PegasusConstants/PegasusAnimationState Idle
    static ::Pegasus::PegasusConstants::PegasusAnimationState _get_Idle();
    // Set static field: static public Pegasus.PegasusConstants/PegasusAnimationState Idle
    static void _set_Idle(::Pegasus::PegasusConstants::PegasusAnimationState value);
    // static field const value: static public Pegasus.PegasusConstants/PegasusAnimationState Walking
    static constexpr const int Walking = 1;
    // Get static field: static public Pegasus.PegasusConstants/PegasusAnimationState Walking
    static ::Pegasus::PegasusConstants::PegasusAnimationState _get_Walking();
    // Set static field: static public Pegasus.PegasusConstants/PegasusAnimationState Walking
    static void _set_Walking(::Pegasus::PegasusConstants::PegasusAnimationState value);
    // static field const value: static public Pegasus.PegasusConstants/PegasusAnimationState Running
    static constexpr const int Running = 2;
    // Get static field: static public Pegasus.PegasusConstants/PegasusAnimationState Running
    static ::Pegasus::PegasusConstants::PegasusAnimationState _get_Running();
    // Set static field: static public Pegasus.PegasusConstants/PegasusAnimationState Running
    static void _set_Running(::Pegasus::PegasusConstants::PegasusAnimationState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pegasus.PegasusConstants/PegasusAnimationState
  #pragma pack(pop)
  static check_size<sizeof(PegasusConstants::PegasusAnimationState), 0 + sizeof(int)> __Pegasus_PegasusConstants_PegasusAnimationStateSizeCheck;
  static_assert(sizeof(PegasusConstants::PegasusAnimationState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
