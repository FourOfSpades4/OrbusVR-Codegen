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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ColorWriteMask
  struct ColorWriteMask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ColorWriteMask, "UnityEngine.Rendering", "ColorWriteMask");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ColorWriteMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ColorWriteMask/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ColorWriteMask
    constexpr ColorWriteMask(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ColorWriteMask Alpha
    static constexpr const int Alpha = 1;
    // Get static field: static public UnityEngine.Rendering.ColorWriteMask Alpha
    static ::UnityEngine::Rendering::ColorWriteMask _get_Alpha();
    // Set static field: static public UnityEngine.Rendering.ColorWriteMask Alpha
    static void _set_Alpha(::UnityEngine::Rendering::ColorWriteMask value);
    // static field const value: static public UnityEngine.Rendering.ColorWriteMask Blue
    static constexpr const int Blue = 2;
    // Get static field: static public UnityEngine.Rendering.ColorWriteMask Blue
    static ::UnityEngine::Rendering::ColorWriteMask _get_Blue();
    // Set static field: static public UnityEngine.Rendering.ColorWriteMask Blue
    static void _set_Blue(::UnityEngine::Rendering::ColorWriteMask value);
    // static field const value: static public UnityEngine.Rendering.ColorWriteMask Green
    static constexpr const int Green = 4;
    // Get static field: static public UnityEngine.Rendering.ColorWriteMask Green
    static ::UnityEngine::Rendering::ColorWriteMask _get_Green();
    // Set static field: static public UnityEngine.Rendering.ColorWriteMask Green
    static void _set_Green(::UnityEngine::Rendering::ColorWriteMask value);
    // static field const value: static public UnityEngine.Rendering.ColorWriteMask Red
    static constexpr const int Red = 8;
    // Get static field: static public UnityEngine.Rendering.ColorWriteMask Red
    static ::UnityEngine::Rendering::ColorWriteMask _get_Red();
    // Set static field: static public UnityEngine.Rendering.ColorWriteMask Red
    static void _set_Red(::UnityEngine::Rendering::ColorWriteMask value);
    // static field const value: static public UnityEngine.Rendering.ColorWriteMask All
    static constexpr const int All = 15;
    // Get static field: static public UnityEngine.Rendering.ColorWriteMask All
    static ::UnityEngine::Rendering::ColorWriteMask _get_All();
    // Set static field: static public UnityEngine.Rendering.ColorWriteMask All
    static void _set_All(::UnityEngine::Rendering::ColorWriteMask value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.ColorWriteMask
  #pragma pack(pop)
  static check_size<sizeof(ColorWriteMask), 0 + sizeof(int)> __UnityEngine_Rendering_ColorWriteMaskSizeCheck;
  static_assert(sizeof(ColorWriteMask) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
