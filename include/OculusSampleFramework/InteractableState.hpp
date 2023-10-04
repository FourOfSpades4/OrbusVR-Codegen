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
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: InteractableState
  struct InteractableState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::InteractableState, "OculusSampleFramework", "InteractableState");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.InteractableState
  // [TokenAttribute] Offset: FFFFFFFF
  struct InteractableState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InteractableState
    constexpr InteractableState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OculusSampleFramework.InteractableState Default
    static constexpr const int Default = 0;
    // Get static field: static public OculusSampleFramework.InteractableState Default
    static ::OculusSampleFramework::InteractableState _get_Default();
    // Set static field: static public OculusSampleFramework.InteractableState Default
    static void _set_Default(::OculusSampleFramework::InteractableState value);
    // static field const value: static public OculusSampleFramework.InteractableState ProximityState
    static constexpr const int ProximityState = 1;
    // Get static field: static public OculusSampleFramework.InteractableState ProximityState
    static ::OculusSampleFramework::InteractableState _get_ProximityState();
    // Set static field: static public OculusSampleFramework.InteractableState ProximityState
    static void _set_ProximityState(::OculusSampleFramework::InteractableState value);
    // static field const value: static public OculusSampleFramework.InteractableState ContactState
    static constexpr const int ContactState = 2;
    // Get static field: static public OculusSampleFramework.InteractableState ContactState
    static ::OculusSampleFramework::InteractableState _get_ContactState();
    // Set static field: static public OculusSampleFramework.InteractableState ContactState
    static void _set_ContactState(::OculusSampleFramework::InteractableState value);
    // static field const value: static public OculusSampleFramework.InteractableState ActionState
    static constexpr const int ActionState = 3;
    // Get static field: static public OculusSampleFramework.InteractableState ActionState
    static ::OculusSampleFramework::InteractableState _get_ActionState();
    // Set static field: static public OculusSampleFramework.InteractableState ActionState
    static void _set_ActionState(::OculusSampleFramework::InteractableState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OculusSampleFramework.InteractableState
  #pragma pack(pop)
  static check_size<sizeof(InteractableState), 0 + sizeof(int)> __OculusSampleFramework_InteractableStateSizeCheck;
  static_assert(sizeof(InteractableState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
