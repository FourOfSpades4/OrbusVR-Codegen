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
  // Forward declaring type: BlurDirections
  struct BlurDirections;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HighlightingSystem::BlurDirections, "HighlightingSystem", "BlurDirections");
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HighlightingSystem.BlurDirections
  // [TokenAttribute] Offset: FFFFFFFF
  struct BlurDirections/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BlurDirections
    constexpr BlurDirections(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HighlightingSystem.BlurDirections Diagonal
    static constexpr const int Diagonal = 0;
    // Get static field: static public HighlightingSystem.BlurDirections Diagonal
    static ::HighlightingSystem::BlurDirections _get_Diagonal();
    // Set static field: static public HighlightingSystem.BlurDirections Diagonal
    static void _set_Diagonal(::HighlightingSystem::BlurDirections value);
    // static field const value: static public HighlightingSystem.BlurDirections Straight
    static constexpr const int Straight = 1;
    // Get static field: static public HighlightingSystem.BlurDirections Straight
    static ::HighlightingSystem::BlurDirections _get_Straight();
    // Set static field: static public HighlightingSystem.BlurDirections Straight
    static void _set_Straight(::HighlightingSystem::BlurDirections value);
    // static field const value: static public HighlightingSystem.BlurDirections All
    static constexpr const int All = 2;
    // Get static field: static public HighlightingSystem.BlurDirections All
    static ::HighlightingSystem::BlurDirections _get_All();
    // Set static field: static public HighlightingSystem.BlurDirections All
    static void _set_All(::HighlightingSystem::BlurDirections value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HighlightingSystem.BlurDirections
  #pragma pack(pop)
  static check_size<sizeof(BlurDirections), 0 + sizeof(int)> __HighlightingSystem_BlurDirectionsSizeCheck;
  static_assert(sizeof(BlurDirections) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
