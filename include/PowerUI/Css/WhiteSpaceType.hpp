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
  // Forward declaring type: WhiteSpaceType
  struct WhiteSpaceType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::WhiteSpaceType, "PowerUI.Css", "WhiteSpaceType");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.WhiteSpaceType
  // [TokenAttribute] Offset: FFFFFFFF
  struct WhiteSpaceType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WhiteSpaceType
    constexpr WhiteSpaceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PowerUI.Css.WhiteSpaceType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public PowerUI.Css.WhiteSpaceType Normal
    static ::PowerUI::Css::WhiteSpaceType _get_Normal();
    // Set static field: static public PowerUI.Css.WhiteSpaceType Normal
    static void _set_Normal(::PowerUI::Css::WhiteSpaceType value);
    // static field const value: static public PowerUI.Css.WhiteSpaceType NoWrap
    static constexpr const int NoWrap = 1;
    // Get static field: static public PowerUI.Css.WhiteSpaceType NoWrap
    static ::PowerUI::Css::WhiteSpaceType _get_NoWrap();
    // Set static field: static public PowerUI.Css.WhiteSpaceType NoWrap
    static void _set_NoWrap(::PowerUI::Css::WhiteSpaceType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PowerUI.Css.WhiteSpaceType
  #pragma pack(pop)
  static check_size<sizeof(WhiteSpaceType), 0 + sizeof(int)> __PowerUI_Css_WhiteSpaceTypeSizeCheck;
  static_assert(sizeof(WhiteSpaceType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
