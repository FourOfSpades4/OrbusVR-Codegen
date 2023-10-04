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
  // Forward declaring type: RenderMode
  struct RenderMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderMode, "UnityEngine", "RenderMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RenderMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderMode
    constexpr RenderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderMode ScreenSpaceOverlay
    static constexpr const int ScreenSpaceOverlay = 0;
    // Get static field: static public UnityEngine.RenderMode ScreenSpaceOverlay
    static ::UnityEngine::RenderMode _get_ScreenSpaceOverlay();
    // Set static field: static public UnityEngine.RenderMode ScreenSpaceOverlay
    static void _set_ScreenSpaceOverlay(::UnityEngine::RenderMode value);
    // static field const value: static public UnityEngine.RenderMode ScreenSpaceCamera
    static constexpr const int ScreenSpaceCamera = 1;
    // Get static field: static public UnityEngine.RenderMode ScreenSpaceCamera
    static ::UnityEngine::RenderMode _get_ScreenSpaceCamera();
    // Set static field: static public UnityEngine.RenderMode ScreenSpaceCamera
    static void _set_ScreenSpaceCamera(::UnityEngine::RenderMode value);
    // static field const value: static public UnityEngine.RenderMode WorldSpace
    static constexpr const int WorldSpace = 2;
    // Get static field: static public UnityEngine.RenderMode WorldSpace
    static ::UnityEngine::RenderMode _get_WorldSpace();
    // Set static field: static public UnityEngine.RenderMode WorldSpace
    static void _set_WorldSpace(::UnityEngine::RenderMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.RenderMode
  #pragma pack(pop)
  static check_size<sizeof(RenderMode), 0 + sizeof(int)> __UnityEngine_RenderModeSizeCheck;
  static_assert(sizeof(RenderMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
