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
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventFieldFormat, "System.Diagnostics.Tracing", "EventFieldFormat");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventFieldFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventFieldFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventFieldFormat
    constexpr EventFieldFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat Default
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_Default();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat Default
    static void _set_Default(::System::Diagnostics::Tracing::EventFieldFormat value);
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat String
    static constexpr const int String = 2;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat String
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_String();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat String
    static void _set_String(::System::Diagnostics::Tracing::EventFieldFormat value);
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat Boolean
    static constexpr const int Boolean = 3;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat Boolean
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_Boolean();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat Boolean
    static void _set_Boolean(::System::Diagnostics::Tracing::EventFieldFormat value);
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat Hexadecimal
    static constexpr const int Hexadecimal = 4;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat Hexadecimal
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_Hexadecimal();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat Hexadecimal
    static void _set_Hexadecimal(::System::Diagnostics::Tracing::EventFieldFormat value);
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat Xml
    static constexpr const int Xml = 11;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat Xml
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_Xml();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat Xml
    static void _set_Xml(::System::Diagnostics::Tracing::EventFieldFormat value);
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat Json
    static constexpr const int Json = 12;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat Json
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_Json();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat Json
    static void _set_Json(::System::Diagnostics::Tracing::EventFieldFormat value);
    // static field const value: static public System.Diagnostics.Tracing.EventFieldFormat HResult
    static constexpr const int HResult = 15;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldFormat HResult
    static ::System::Diagnostics::Tracing::EventFieldFormat _get_HResult();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldFormat HResult
    static void _set_HResult(::System::Diagnostics::Tracing::EventFieldFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Diagnostics.Tracing.EventFieldFormat
  #pragma pack(pop)
  static check_size<sizeof(EventFieldFormat), 0 + sizeof(int)> __System_Diagnostics_Tracing_EventFieldFormatSizeCheck;
  static_assert(sizeof(EventFieldFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"