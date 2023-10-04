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
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Forward declaring type: BorderStyle
  struct BorderStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::BorderStyle, "PowerUI.Css", "BorderStyle");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.BorderStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct BorderStyle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BorderStyle
    constexpr BorderStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PowerUI.Css.BorderStyle Solid
    static constexpr const int Solid = 0;
    // Get static field: static public PowerUI.Css.BorderStyle Solid
    static ::PowerUI::Css::BorderStyle _get_Solid();
    // Set static field: static public PowerUI.Css.BorderStyle Solid
    static void _set_Solid(::PowerUI::Css::BorderStyle value);
    // static field const value: static public PowerUI.Css.BorderStyle Dashed
    static constexpr const int Dashed = 1;
    // Get static field: static public PowerUI.Css.BorderStyle Dashed
    static ::PowerUI::Css::BorderStyle _get_Dashed();
    // Set static field: static public PowerUI.Css.BorderStyle Dashed
    static void _set_Dashed(::PowerUI::Css::BorderStyle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PowerUI.Css.BorderStyle
  #pragma pack(pop)
  static check_size<sizeof(BorderStyle), 0 + sizeof(int)> __PowerUI_Css_BorderStyleSizeCheck;
  static_assert(sizeof(BorderStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"