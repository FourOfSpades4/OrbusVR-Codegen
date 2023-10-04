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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpritePackingMode
  struct SpritePackingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpritePackingMode, "UnityEngine", "SpritePackingMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpritePackingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpritePackingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpritePackingMode
    constexpr SpritePackingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SpritePackingMode Tight
    static constexpr const int Tight = 0;
    // Get static field: static public UnityEngine.SpritePackingMode Tight
    static ::UnityEngine::SpritePackingMode _get_Tight();
    // Set static field: static public UnityEngine.SpritePackingMode Tight
    static void _set_Tight(::UnityEngine::SpritePackingMode value);
    // static field const value: static public UnityEngine.SpritePackingMode Rectangle
    static constexpr const int Rectangle = 1;
    // Get static field: static public UnityEngine.SpritePackingMode Rectangle
    static ::UnityEngine::SpritePackingMode _get_Rectangle();
    // Set static field: static public UnityEngine.SpritePackingMode Rectangle
    static void _set_Rectangle(::UnityEngine::SpritePackingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.SpritePackingMode
  #pragma pack(pop)
  static check_size<sizeof(SpritePackingMode), 0 + sizeof(int)> __UnityEngine_SpritePackingModeSizeCheck;
  static_assert(sizeof(SpritePackingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
