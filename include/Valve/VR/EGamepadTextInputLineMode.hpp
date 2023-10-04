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
  // Forward declaring type: EGamepadTextInputLineMode
  struct EGamepadTextInputLineMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EGamepadTextInputLineMode, "Valve.VR", "EGamepadTextInputLineMode");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EGamepadTextInputLineMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct EGamepadTextInputLineMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EGamepadTextInputLineMode
    constexpr EGamepadTextInputLineMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeSingleLine
    static constexpr const int k_EGamepadTextInputLineModeSingleLine = 0;
    // Get static field: static public Valve.VR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeSingleLine
    static ::Valve::VR::EGamepadTextInputLineMode _get_k_EGamepadTextInputLineModeSingleLine();
    // Set static field: static public Valve.VR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeSingleLine
    static void _set_k_EGamepadTextInputLineModeSingleLine(::Valve::VR::EGamepadTextInputLineMode value);
    // static field const value: static public Valve.VR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeMultipleLines
    static constexpr const int k_EGamepadTextInputLineModeMultipleLines = 1;
    // Get static field: static public Valve.VR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeMultipleLines
    static ::Valve::VR::EGamepadTextInputLineMode _get_k_EGamepadTextInputLineModeMultipleLines();
    // Set static field: static public Valve.VR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeMultipleLines
    static void _set_k_EGamepadTextInputLineModeMultipleLines(::Valve::VR::EGamepadTextInputLineMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EGamepadTextInputLineMode
  #pragma pack(pop)
  static check_size<sizeof(EGamepadTextInputLineMode), 0 + sizeof(int)> __Valve_VR_EGamepadTextInputLineModeSizeCheck;
  static_assert(sizeof(EGamepadTextInputLineMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
