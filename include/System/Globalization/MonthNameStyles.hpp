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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: MonthNameStyles
  struct MonthNameStyles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::MonthNameStyles, "System.Globalization", "MonthNameStyles");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.MonthNameStyles
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MonthNameStyles/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MonthNameStyles
    constexpr MonthNameStyles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.MonthNameStyles Regular
    static constexpr const int Regular = 0;
    // Get static field: static public System.Globalization.MonthNameStyles Regular
    static ::System::Globalization::MonthNameStyles _get_Regular();
    // Set static field: static public System.Globalization.MonthNameStyles Regular
    static void _set_Regular(::System::Globalization::MonthNameStyles value);
    // static field const value: static public System.Globalization.MonthNameStyles Genitive
    static constexpr const int Genitive = 1;
    // Get static field: static public System.Globalization.MonthNameStyles Genitive
    static ::System::Globalization::MonthNameStyles _get_Genitive();
    // Set static field: static public System.Globalization.MonthNameStyles Genitive
    static void _set_Genitive(::System::Globalization::MonthNameStyles value);
    // static field const value: static public System.Globalization.MonthNameStyles LeapYear
    static constexpr const int LeapYear = 2;
    // Get static field: static public System.Globalization.MonthNameStyles LeapYear
    static ::System::Globalization::MonthNameStyles _get_LeapYear();
    // Set static field: static public System.Globalization.MonthNameStyles LeapYear
    static void _set_LeapYear(::System::Globalization::MonthNameStyles value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.MonthNameStyles
  #pragma pack(pop)
  static check_size<sizeof(MonthNameStyles), 0 + sizeof(int)> __System_Globalization_MonthNameStylesSizeCheck;
  static_assert(sizeof(MonthNameStyles) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
