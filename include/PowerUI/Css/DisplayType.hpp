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
  // Forward declaring type: DisplayType
  struct DisplayType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::DisplayType, "PowerUI.Css", "DisplayType");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.DisplayType
  // [TokenAttribute] Offset: FFFFFFFF
  struct DisplayType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DisplayType
    constexpr DisplayType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PowerUI.Css.DisplayType None
    static constexpr const int None = 0;
    // Get static field: static public PowerUI.Css.DisplayType None
    static ::PowerUI::Css::DisplayType _get_None();
    // Set static field: static public PowerUI.Css.DisplayType None
    static void _set_None(::PowerUI::Css::DisplayType value);
    // static field const value: static public PowerUI.Css.DisplayType Block
    static constexpr const int Block = 1;
    // Get static field: static public PowerUI.Css.DisplayType Block
    static ::PowerUI::Css::DisplayType _get_Block();
    // Set static field: static public PowerUI.Css.DisplayType Block
    static void _set_Block(::PowerUI::Css::DisplayType value);
    // static field const value: static public PowerUI.Css.DisplayType Inline
    static constexpr const int Inline = 2;
    // Get static field: static public PowerUI.Css.DisplayType Inline
    static ::PowerUI::Css::DisplayType _get_Inline();
    // Set static field: static public PowerUI.Css.DisplayType Inline
    static void _set_Inline(::PowerUI::Css::DisplayType value);
    // static field const value: static public PowerUI.Css.DisplayType InlineBlock
    static constexpr const int InlineBlock = 3;
    // Get static field: static public PowerUI.Css.DisplayType InlineBlock
    static ::PowerUI::Css::DisplayType _get_InlineBlock();
    // Set static field: static public PowerUI.Css.DisplayType InlineBlock
    static void _set_InlineBlock(::PowerUI::Css::DisplayType value);
    // static field const value: static public PowerUI.Css.DisplayType TableCell
    static constexpr const int TableCell = 4;
    // Get static field: static public PowerUI.Css.DisplayType TableCell
    static ::PowerUI::Css::DisplayType _get_TableCell();
    // Set static field: static public PowerUI.Css.DisplayType TableCell
    static void _set_TableCell(::PowerUI::Css::DisplayType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PowerUI.Css.DisplayType
  #pragma pack(pop)
  static check_size<sizeof(DisplayType), 0 + sizeof(int)> __PowerUI_Css_DisplayTypeSizeCheck;
  static_assert(sizeof(DisplayType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
