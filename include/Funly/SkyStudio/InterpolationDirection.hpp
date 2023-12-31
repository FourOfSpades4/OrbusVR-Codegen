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
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: InterpolationDirection
  struct InterpolationDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::InterpolationDirection, "Funly.SkyStudio", "InterpolationDirection");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.InterpolationDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct InterpolationDirection/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InterpolationDirection
    constexpr InterpolationDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Funly.SkyStudio.InterpolationDirection Auto
    static constexpr const int Auto = 0;
    // Get static field: static public Funly.SkyStudio.InterpolationDirection Auto
    static ::Funly::SkyStudio::InterpolationDirection _get_Auto();
    // Set static field: static public Funly.SkyStudio.InterpolationDirection Auto
    static void _set_Auto(::Funly::SkyStudio::InterpolationDirection value);
    // static field const value: static public Funly.SkyStudio.InterpolationDirection Foward
    static constexpr const int Foward = 1;
    // Get static field: static public Funly.SkyStudio.InterpolationDirection Foward
    static ::Funly::SkyStudio::InterpolationDirection _get_Foward();
    // Set static field: static public Funly.SkyStudio.InterpolationDirection Foward
    static void _set_Foward(::Funly::SkyStudio::InterpolationDirection value);
    // static field const value: static public Funly.SkyStudio.InterpolationDirection Reverse
    static constexpr const int Reverse = 2;
    // Get static field: static public Funly.SkyStudio.InterpolationDirection Reverse
    static ::Funly::SkyStudio::InterpolationDirection _get_Reverse();
    // Set static field: static public Funly.SkyStudio.InterpolationDirection Reverse
    static void _set_Reverse(::Funly::SkyStudio::InterpolationDirection value);
    // static field const value: static public Funly.SkyStudio.InterpolationDirection ShortestPath
    static constexpr const int ShortestPath = 3;
    // Get static field: static public Funly.SkyStudio.InterpolationDirection ShortestPath
    static ::Funly::SkyStudio::InterpolationDirection _get_ShortestPath();
    // Set static field: static public Funly.SkyStudio.InterpolationDirection ShortestPath
    static void _set_ShortestPath(::Funly::SkyStudio::InterpolationDirection value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Funly.SkyStudio.InterpolationDirection
  #pragma pack(pop)
  static check_size<sizeof(InterpolationDirection), 0 + sizeof(int)> __Funly_SkyStudio_InterpolationDirectionSizeCheck;
  static_assert(sizeof(InterpolationDirection) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
