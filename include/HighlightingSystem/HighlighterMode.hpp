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
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Forward declaring type: HighlighterMode
  struct HighlighterMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HighlightingSystem::HighlighterMode, "HighlightingSystem", "HighlighterMode");
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HighlightingSystem.HighlighterMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct HighlighterMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HighlighterMode
    constexpr HighlighterMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HighlightingSystem.HighlighterMode Disabled
    static constexpr const int Disabled = -1;
    // Get static field: static public HighlightingSystem.HighlighterMode Disabled
    static ::HighlightingSystem::HighlighterMode _get_Disabled();
    // Set static field: static public HighlightingSystem.HighlighterMode Disabled
    static void _set_Disabled(::HighlightingSystem::HighlighterMode value);
    // static field const value: static public HighlightingSystem.HighlighterMode Default
    static constexpr const int Default = 0;
    // Get static field: static public HighlightingSystem.HighlighterMode Default
    static ::HighlightingSystem::HighlighterMode _get_Default();
    // Set static field: static public HighlightingSystem.HighlighterMode Default
    static void _set_Default(::HighlightingSystem::HighlighterMode value);
    // static field const value: static public HighlightingSystem.HighlighterMode Overlay
    static constexpr const int Overlay = 1;
    // Get static field: static public HighlightingSystem.HighlighterMode Overlay
    static ::HighlightingSystem::HighlighterMode _get_Overlay();
    // Set static field: static public HighlightingSystem.HighlighterMode Overlay
    static void _set_Overlay(::HighlightingSystem::HighlighterMode value);
    // static field const value: static public HighlightingSystem.HighlighterMode Occluder
    static constexpr const int Occluder = 2;
    // Get static field: static public HighlightingSystem.HighlighterMode Occluder
    static ::HighlightingSystem::HighlighterMode _get_Occluder();
    // Set static field: static public HighlightingSystem.HighlighterMode Occluder
    static void _set_Occluder(::HighlightingSystem::HighlighterMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HighlightingSystem.HighlighterMode
  #pragma pack(pop)
  static check_size<sizeof(HighlighterMode), 0 + sizeof(int)> __HighlightingSystem_HighlighterModeSizeCheck;
  static_assert(sizeof(HighlighterMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
