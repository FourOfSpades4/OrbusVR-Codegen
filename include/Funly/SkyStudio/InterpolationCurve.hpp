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
  // Forward declaring type: InterpolationCurve
  struct InterpolationCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::InterpolationCurve, "Funly.SkyStudio", "InterpolationCurve");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.InterpolationCurve
  // [TokenAttribute] Offset: FFFFFFFF
  struct InterpolationCurve/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InterpolationCurve
    constexpr InterpolationCurve(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Funly.SkyStudio.InterpolationCurve Linear
    static constexpr const int Linear = 0;
    // Get static field: static public Funly.SkyStudio.InterpolationCurve Linear
    static ::Funly::SkyStudio::InterpolationCurve _get_Linear();
    // Set static field: static public Funly.SkyStudio.InterpolationCurve Linear
    static void _set_Linear(::Funly::SkyStudio::InterpolationCurve value);
    // static field const value: static public Funly.SkyStudio.InterpolationCurve EaseInEaseOut
    static constexpr const int EaseInEaseOut = 1;
    // Get static field: static public Funly.SkyStudio.InterpolationCurve EaseInEaseOut
    static ::Funly::SkyStudio::InterpolationCurve _get_EaseInEaseOut();
    // Set static field: static public Funly.SkyStudio.InterpolationCurve EaseInEaseOut
    static void _set_EaseInEaseOut(::Funly::SkyStudio::InterpolationCurve value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Funly.SkyStudio.InterpolationCurve
  #pragma pack(pop)
  static check_size<sizeof(InterpolationCurve), 0 + sizeof(int)> __Funly_SkyStudio_InterpolationCurveSizeCheck;
  static_assert(sizeof(InterpolationCurve) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
