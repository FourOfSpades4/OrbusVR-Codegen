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
  // Forward declaring type: FloatType
  struct FloatType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::FloatType, "PowerUI.Css", "FloatType");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.FloatType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FloatType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FloatType
    constexpr FloatType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PowerUI.Css.FloatType None
    static constexpr const int None = 0;
    // Get static field: static public PowerUI.Css.FloatType None
    static ::PowerUI::Css::FloatType _get_None();
    // Set static field: static public PowerUI.Css.FloatType None
    static void _set_None(::PowerUI::Css::FloatType value);
    // static field const value: static public PowerUI.Css.FloatType Left
    static constexpr const int Left = 1;
    // Get static field: static public PowerUI.Css.FloatType Left
    static ::PowerUI::Css::FloatType _get_Left();
    // Set static field: static public PowerUI.Css.FloatType Left
    static void _set_Left(::PowerUI::Css::FloatType value);
    // static field const value: static public PowerUI.Css.FloatType Right
    static constexpr const int Right = 2;
    // Get static field: static public PowerUI.Css.FloatType Right
    static ::PowerUI::Css::FloatType _get_Right();
    // Set static field: static public PowerUI.Css.FloatType Right
    static void _set_Right(::PowerUI::Css::FloatType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PowerUI.Css.FloatType
  #pragma pack(pop)
  static check_size<sizeof(FloatType), 0 + sizeof(int)> __PowerUI_Css_FloatTypeSizeCheck;
  static_assert(sizeof(FloatType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
