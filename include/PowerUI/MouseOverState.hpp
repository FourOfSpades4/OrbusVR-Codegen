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
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: MouseOverState
  struct MouseOverState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::MouseOverState, "PowerUI", "MouseOverState");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.MouseOverState
  // [TokenAttribute] Offset: FFFFFFFF
  struct MouseOverState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MouseOverState
    constexpr MouseOverState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PowerUI.MouseOverState Over
    static constexpr const int Over = 0;
    // Get static field: static public PowerUI.MouseOverState Over
    static ::PowerUI::MouseOverState _get_Over();
    // Set static field: static public PowerUI.MouseOverState Over
    static void _set_Over(::PowerUI::MouseOverState value);
    // static field const value: static public PowerUI.MouseOverState Out
    static constexpr const int Out = 1;
    // Get static field: static public PowerUI.MouseOverState Out
    static ::PowerUI::MouseOverState _get_Out();
    // Set static field: static public PowerUI.MouseOverState Out
    static void _set_Out(::PowerUI::MouseOverState value);
    // static field const value: static public PowerUI.MouseOverState OverConsumed
    static constexpr const int OverConsumed = 2;
    // Get static field: static public PowerUI.MouseOverState OverConsumed
    static ::PowerUI::MouseOverState _get_OverConsumed();
    // Set static field: static public PowerUI.MouseOverState OverConsumed
    static void _set_OverConsumed(::PowerUI::MouseOverState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PowerUI.MouseOverState
  #pragma pack(pop)
  static check_size<sizeof(MouseOverState), 0 + sizeof(int)> __PowerUI_MouseOverStateSizeCheck;
  static_assert(sizeof(MouseOverState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
