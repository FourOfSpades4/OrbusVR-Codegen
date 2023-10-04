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
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: FormatUsage
  struct FormatUsage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::FormatUsage, "UnityEngine.Experimental.Rendering", "FormatUsage");
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.FormatUsage
  // [TokenAttribute] Offset: FFFFFFFF
  struct FormatUsage/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FormatUsage
    constexpr FormatUsage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage Sample
    static constexpr const int Sample = 0;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage Sample
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_Sample();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage Sample
    static void _set_Sample(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage Linear
    static constexpr const int Linear = 1;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage Linear
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_Linear();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage Linear
    static void _set_Linear(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage Render
    static constexpr const int Render = 3;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage Render
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_Render();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage Render
    static void _set_Render(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage Blend
    static constexpr const int Blend = 4;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage Blend
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_Blend();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage Blend
    static void _set_Blend(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage LoadStore
    static constexpr const int LoadStore = 8;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage LoadStore
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_LoadStore();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage LoadStore
    static void _set_LoadStore(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA2x
    static constexpr const int MSAA2x = 9;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA2x
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_MSAA2x();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA2x
    static void _set_MSAA2x(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA4x
    static constexpr const int MSAA4x = 10;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA4x
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_MSAA4x();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA4x
    static void _set_MSAA4x(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // static field const value: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA8x
    static constexpr const int MSAA8x = 11;
    // Get static field: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA8x
    static ::UnityEngine::Experimental::Rendering::FormatUsage _get_MSAA8x();
    // Set static field: static public UnityEngine.Experimental.Rendering.FormatUsage MSAA8x
    static void _set_MSAA8x(::UnityEngine::Experimental::Rendering::FormatUsage value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Experimental.Rendering.FormatUsage
  #pragma pack(pop)
  static check_size<sizeof(FormatUsage), 0 + sizeof(int)> __UnityEngine_Experimental_Rendering_FormatUsageSizeCheck;
  static_assert(sizeof(FormatUsage) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"