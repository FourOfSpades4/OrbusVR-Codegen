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
  // Forward declaring type: LoopMode
  struct LoopMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HighlightingSystem::LoopMode, "HighlightingSystem", "LoopMode");
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HighlightingSystem.LoopMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LoopMode
    constexpr LoopMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HighlightingSystem.LoopMode Once
    static constexpr const int Once = 0;
    // Get static field: static public HighlightingSystem.LoopMode Once
    static ::HighlightingSystem::LoopMode _get_Once();
    // Set static field: static public HighlightingSystem.LoopMode Once
    static void _set_Once(::HighlightingSystem::LoopMode value);
    // static field const value: static public HighlightingSystem.LoopMode Loop
    static constexpr const int Loop = 1;
    // Get static field: static public HighlightingSystem.LoopMode Loop
    static ::HighlightingSystem::LoopMode _get_Loop();
    // Set static field: static public HighlightingSystem.LoopMode Loop
    static void _set_Loop(::HighlightingSystem::LoopMode value);
    // static field const value: static public HighlightingSystem.LoopMode PingPong
    static constexpr const int PingPong = 2;
    // Get static field: static public HighlightingSystem.LoopMode PingPong
    static ::HighlightingSystem::LoopMode _get_PingPong();
    // Set static field: static public HighlightingSystem.LoopMode PingPong
    static void _set_PingPong(::HighlightingSystem::LoopMode value);
    // static field const value: static public HighlightingSystem.LoopMode ClampForever
    static constexpr const int ClampForever = 3;
    // Get static field: static public HighlightingSystem.LoopMode ClampForever
    static ::HighlightingSystem::LoopMode _get_ClampForever();
    // Set static field: static public HighlightingSystem.LoopMode ClampForever
    static void _set_ClampForever(::HighlightingSystem::LoopMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HighlightingSystem.LoopMode
  #pragma pack(pop)
  static check_size<sizeof(LoopMode), 0 + sizeof(int)> __HighlightingSystem_LoopModeSizeCheck;
  static_assert(sizeof(LoopMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
