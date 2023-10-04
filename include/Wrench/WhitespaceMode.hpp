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
// Type namespace: Wrench
namespace Wrench {
  // Forward declaring type: WhitespaceMode
  struct WhitespaceMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Wrench::WhitespaceMode, "Wrench", "WhitespaceMode");
// Type namespace: Wrench
namespace Wrench {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Wrench.WhitespaceMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct WhitespaceMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WhitespaceMode
    constexpr WhitespaceMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Wrench.WhitespaceMode Preserve
    static constexpr const int Preserve = 0;
    // Get static field: static public Wrench.WhitespaceMode Preserve
    static ::Wrench::WhitespaceMode _get_Preserve();
    // Set static field: static public Wrench.WhitespaceMode Preserve
    static void _set_Preserve(::Wrench::WhitespaceMode value);
    // static field const value: static public Wrench.WhitespaceMode Normal
    static constexpr const int Normal = 1;
    // Get static field: static public Wrench.WhitespaceMode Normal
    static ::Wrench::WhitespaceMode _get_Normal();
    // Set static field: static public Wrench.WhitespaceMode Normal
    static void _set_Normal(::Wrench::WhitespaceMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Wrench.WhitespaceMode
  #pragma pack(pop)
  static check_size<sizeof(WhitespaceMode), 0 + sizeof(int)> __Wrench_WhitespaceModeSizeCheck;
  static_assert(sizeof(WhitespaceMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
