// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XsdDateTime
#include "System/Xml/Schema/XsdDateTime.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode, "System.Xml.Schema", "XsdDateTime/DateTimeTypeCode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XsdDateTime/DateTimeTypeCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct XsdDateTime::DateTimeTypeCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateTimeTypeCode
    constexpr DateTimeTypeCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode DateTime
    static constexpr const int DateTime = 0;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode DateTime
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_DateTime();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode DateTime
    static void _set_DateTime(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode Time
    static constexpr const int Time = 1;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode Time
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_Time();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode Time
    static void _set_Time(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode Date
    static constexpr const int Date = 2;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode Date
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_Date();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode Date
    static void _set_Date(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GYearMonth
    static constexpr const int GYearMonth = 3;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GYearMonth
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_GYearMonth();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GYearMonth
    static void _set_GYearMonth(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GYear
    static constexpr const int GYear = 4;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GYear
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_GYear();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GYear
    static void _set_GYear(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GMonthDay
    static constexpr const int GMonthDay = 5;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GMonthDay
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_GMonthDay();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GMonthDay
    static void _set_GMonthDay(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GDay
    static constexpr const int GDay = 6;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GDay
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_GDay();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GDay
    static void _set_GDay(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GMonth
    static constexpr const int GMonth = 7;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GMonth
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_GMonth();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode GMonth
    static void _set_GMonth(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // static field const value: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode XdrDateTime
    static constexpr const int XdrDateTime = 8;
    // Get static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode XdrDateTime
    static ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode _get_XdrDateTime();
    // Set static field: static public System.Xml.Schema.XsdDateTime/DateTimeTypeCode XdrDateTime
    static void _set_XdrDateTime(::System::Xml::Schema::XsdDateTime::DateTimeTypeCode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XsdDateTime/DateTimeTypeCode
  #pragma pack(pop)
  static check_size<sizeof(XsdDateTime::DateTimeTypeCode), 0 + sizeof(int)> __System_Xml_Schema_XsdDateTime_DateTimeTypeCodeSizeCheck;
  static_assert(sizeof(XsdDateTime::DateTimeTypeCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
