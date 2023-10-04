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
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlTypeCode, "System.Xml.Schema", "XmlTypeCode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlTypeCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlTypeCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlTypeCode
    constexpr XmlTypeCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XmlTypeCode None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Schema.XmlTypeCode None
    static ::System::Xml::Schema::XmlTypeCode _get_None();
    // Set static field: static public System.Xml.Schema.XmlTypeCode None
    static void _set_None(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Item
    static constexpr const int Item = 1;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Item
    static ::System::Xml::Schema::XmlTypeCode _get_Item();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Item
    static void _set_Item(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Node
    static constexpr const int Node = 2;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Node
    static ::System::Xml::Schema::XmlTypeCode _get_Node();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Node
    static void _set_Node(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Document
    static constexpr const int Document = 3;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Document
    static ::System::Xml::Schema::XmlTypeCode _get_Document();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Document
    static void _set_Document(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Element
    static constexpr const int Element = 4;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Element
    static ::System::Xml::Schema::XmlTypeCode _get_Element();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Element
    static void _set_Element(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Attribute
    static constexpr const int Attribute = 5;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Attribute
    static ::System::Xml::Schema::XmlTypeCode _get_Attribute();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Attribute
    static void _set_Attribute(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Namespace
    static constexpr const int Namespace = 6;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Namespace
    static ::System::Xml::Schema::XmlTypeCode _get_Namespace();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Namespace
    static void _set_Namespace(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode ProcessingInstruction
    static constexpr const int ProcessingInstruction = 7;
    // Get static field: static public System.Xml.Schema.XmlTypeCode ProcessingInstruction
    static ::System::Xml::Schema::XmlTypeCode _get_ProcessingInstruction();
    // Set static field: static public System.Xml.Schema.XmlTypeCode ProcessingInstruction
    static void _set_ProcessingInstruction(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Comment
    static constexpr const int Comment = 8;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Comment
    static ::System::Xml::Schema::XmlTypeCode _get_Comment();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Comment
    static void _set_Comment(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Text
    static constexpr const int Text = 9;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Text
    static ::System::Xml::Schema::XmlTypeCode _get_Text();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Text
    static void _set_Text(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode AnyAtomicType
    static constexpr const int AnyAtomicType = 10;
    // Get static field: static public System.Xml.Schema.XmlTypeCode AnyAtomicType
    static ::System::Xml::Schema::XmlTypeCode _get_AnyAtomicType();
    // Set static field: static public System.Xml.Schema.XmlTypeCode AnyAtomicType
    static void _set_AnyAtomicType(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode UntypedAtomic
    static constexpr const int UntypedAtomic = 11;
    // Get static field: static public System.Xml.Schema.XmlTypeCode UntypedAtomic
    static ::System::Xml::Schema::XmlTypeCode _get_UntypedAtomic();
    // Set static field: static public System.Xml.Schema.XmlTypeCode UntypedAtomic
    static void _set_UntypedAtomic(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode String
    static constexpr const int String = 12;
    // Get static field: static public System.Xml.Schema.XmlTypeCode String
    static ::System::Xml::Schema::XmlTypeCode _get_String();
    // Set static field: static public System.Xml.Schema.XmlTypeCode String
    static void _set_String(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Boolean
    static constexpr const int Boolean = 13;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Boolean
    static ::System::Xml::Schema::XmlTypeCode _get_Boolean();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Boolean
    static void _set_Boolean(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Decimal
    static constexpr const int Decimal = 14;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Decimal
    static ::System::Xml::Schema::XmlTypeCode _get_Decimal();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Decimal
    static void _set_Decimal(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Float
    static constexpr const int Float = 15;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Float
    static ::System::Xml::Schema::XmlTypeCode _get_Float();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Float
    static void _set_Float(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Double
    static constexpr const int Double = 16;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Double
    static ::System::Xml::Schema::XmlTypeCode _get_Double();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Double
    static void _set_Double(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Duration
    static constexpr const int Duration = 17;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Duration
    static ::System::Xml::Schema::XmlTypeCode _get_Duration();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Duration
    static void _set_Duration(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode DateTime
    static constexpr const int DateTime = 18;
    // Get static field: static public System.Xml.Schema.XmlTypeCode DateTime
    static ::System::Xml::Schema::XmlTypeCode _get_DateTime();
    // Set static field: static public System.Xml.Schema.XmlTypeCode DateTime
    static void _set_DateTime(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Time
    static constexpr const int Time = 19;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Time
    static ::System::Xml::Schema::XmlTypeCode _get_Time();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Time
    static void _set_Time(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Date
    static constexpr const int Date = 20;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Date
    static ::System::Xml::Schema::XmlTypeCode _get_Date();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Date
    static void _set_Date(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode GYearMonth
    static constexpr const int GYearMonth = 21;
    // Get static field: static public System.Xml.Schema.XmlTypeCode GYearMonth
    static ::System::Xml::Schema::XmlTypeCode _get_GYearMonth();
    // Set static field: static public System.Xml.Schema.XmlTypeCode GYearMonth
    static void _set_GYearMonth(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode GYear
    static constexpr const int GYear = 22;
    // Get static field: static public System.Xml.Schema.XmlTypeCode GYear
    static ::System::Xml::Schema::XmlTypeCode _get_GYear();
    // Set static field: static public System.Xml.Schema.XmlTypeCode GYear
    static void _set_GYear(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode GMonthDay
    static constexpr const int GMonthDay = 23;
    // Get static field: static public System.Xml.Schema.XmlTypeCode GMonthDay
    static ::System::Xml::Schema::XmlTypeCode _get_GMonthDay();
    // Set static field: static public System.Xml.Schema.XmlTypeCode GMonthDay
    static void _set_GMonthDay(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode GDay
    static constexpr const int GDay = 24;
    // Get static field: static public System.Xml.Schema.XmlTypeCode GDay
    static ::System::Xml::Schema::XmlTypeCode _get_GDay();
    // Set static field: static public System.Xml.Schema.XmlTypeCode GDay
    static void _set_GDay(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode GMonth
    static constexpr const int GMonth = 25;
    // Get static field: static public System.Xml.Schema.XmlTypeCode GMonth
    static ::System::Xml::Schema::XmlTypeCode _get_GMonth();
    // Set static field: static public System.Xml.Schema.XmlTypeCode GMonth
    static void _set_GMonth(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode HexBinary
    static constexpr const int HexBinary = 26;
    // Get static field: static public System.Xml.Schema.XmlTypeCode HexBinary
    static ::System::Xml::Schema::XmlTypeCode _get_HexBinary();
    // Set static field: static public System.Xml.Schema.XmlTypeCode HexBinary
    static void _set_HexBinary(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Base64Binary
    static constexpr const int Base64Binary = 27;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Base64Binary
    static ::System::Xml::Schema::XmlTypeCode _get_Base64Binary();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Base64Binary
    static void _set_Base64Binary(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode AnyUri
    static constexpr const int AnyUri = 28;
    // Get static field: static public System.Xml.Schema.XmlTypeCode AnyUri
    static ::System::Xml::Schema::XmlTypeCode _get_AnyUri();
    // Set static field: static public System.Xml.Schema.XmlTypeCode AnyUri
    static void _set_AnyUri(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode QName
    static constexpr const int QName = 29;
    // Get static field: static public System.Xml.Schema.XmlTypeCode QName
    static ::System::Xml::Schema::XmlTypeCode _get_QName();
    // Set static field: static public System.Xml.Schema.XmlTypeCode QName
    static void _set_QName(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Notation
    static constexpr const int Notation = 30;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Notation
    static ::System::Xml::Schema::XmlTypeCode _get_Notation();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Notation
    static void _set_Notation(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode NormalizedString
    static constexpr const int NormalizedString = 31;
    // Get static field: static public System.Xml.Schema.XmlTypeCode NormalizedString
    static ::System::Xml::Schema::XmlTypeCode _get_NormalizedString();
    // Set static field: static public System.Xml.Schema.XmlTypeCode NormalizedString
    static void _set_NormalizedString(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Token
    static constexpr const int Token = 32;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Token
    static ::System::Xml::Schema::XmlTypeCode _get_Token();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Token
    static void _set_Token(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Language
    static constexpr const int Language = 33;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Language
    static ::System::Xml::Schema::XmlTypeCode _get_Language();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Language
    static void _set_Language(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode NmToken
    static constexpr const int NmToken = 34;
    // Get static field: static public System.Xml.Schema.XmlTypeCode NmToken
    static ::System::Xml::Schema::XmlTypeCode _get_NmToken();
    // Set static field: static public System.Xml.Schema.XmlTypeCode NmToken
    static void _set_NmToken(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Name
    static constexpr const int Name = 35;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Name
    static ::System::Xml::Schema::XmlTypeCode _get_Name();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Name
    static void _set_Name(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode NCName
    static constexpr const int NCName = 36;
    // Get static field: static public System.Xml.Schema.XmlTypeCode NCName
    static ::System::Xml::Schema::XmlTypeCode _get_NCName();
    // Set static field: static public System.Xml.Schema.XmlTypeCode NCName
    static void _set_NCName(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Id
    static constexpr const int Id = 37;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Id
    static ::System::Xml::Schema::XmlTypeCode _get_Id();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Id
    static void _set_Id(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Idref
    static constexpr const int Idref = 38;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Idref
    static ::System::Xml::Schema::XmlTypeCode _get_Idref();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Idref
    static void _set_Idref(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Entity
    static constexpr const int Entity = 39;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Entity
    static ::System::Xml::Schema::XmlTypeCode _get_Entity();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Entity
    static void _set_Entity(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Integer
    static constexpr const int Integer = 40;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Integer
    static ::System::Xml::Schema::XmlTypeCode _get_Integer();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Integer
    static void _set_Integer(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode NonPositiveInteger
    static constexpr const int NonPositiveInteger = 41;
    // Get static field: static public System.Xml.Schema.XmlTypeCode NonPositiveInteger
    static ::System::Xml::Schema::XmlTypeCode _get_NonPositiveInteger();
    // Set static field: static public System.Xml.Schema.XmlTypeCode NonPositiveInteger
    static void _set_NonPositiveInteger(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode NegativeInteger
    static constexpr const int NegativeInteger = 42;
    // Get static field: static public System.Xml.Schema.XmlTypeCode NegativeInteger
    static ::System::Xml::Schema::XmlTypeCode _get_NegativeInteger();
    // Set static field: static public System.Xml.Schema.XmlTypeCode NegativeInteger
    static void _set_NegativeInteger(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Long
    static constexpr const int Long = 43;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Long
    static ::System::Xml::Schema::XmlTypeCode _get_Long();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Long
    static void _set_Long(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Int
    static constexpr const int Int = 44;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Int
    static ::System::Xml::Schema::XmlTypeCode _get_Int();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Int
    static void _set_Int(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Short
    static constexpr const int Short = 45;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Short
    static ::System::Xml::Schema::XmlTypeCode _get_Short();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Short
    static void _set_Short(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode Byte
    static constexpr const int Byte = 46;
    // Get static field: static public System.Xml.Schema.XmlTypeCode Byte
    static ::System::Xml::Schema::XmlTypeCode _get_Byte();
    // Set static field: static public System.Xml.Schema.XmlTypeCode Byte
    static void _set_Byte(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode NonNegativeInteger
    static constexpr const int NonNegativeInteger = 47;
    // Get static field: static public System.Xml.Schema.XmlTypeCode NonNegativeInteger
    static ::System::Xml::Schema::XmlTypeCode _get_NonNegativeInteger();
    // Set static field: static public System.Xml.Schema.XmlTypeCode NonNegativeInteger
    static void _set_NonNegativeInteger(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode UnsignedLong
    static constexpr const int UnsignedLong = 48;
    // Get static field: static public System.Xml.Schema.XmlTypeCode UnsignedLong
    static ::System::Xml::Schema::XmlTypeCode _get_UnsignedLong();
    // Set static field: static public System.Xml.Schema.XmlTypeCode UnsignedLong
    static void _set_UnsignedLong(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode UnsignedInt
    static constexpr const int UnsignedInt = 49;
    // Get static field: static public System.Xml.Schema.XmlTypeCode UnsignedInt
    static ::System::Xml::Schema::XmlTypeCode _get_UnsignedInt();
    // Set static field: static public System.Xml.Schema.XmlTypeCode UnsignedInt
    static void _set_UnsignedInt(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode UnsignedShort
    static constexpr const int UnsignedShort = 50;
    // Get static field: static public System.Xml.Schema.XmlTypeCode UnsignedShort
    static ::System::Xml::Schema::XmlTypeCode _get_UnsignedShort();
    // Set static field: static public System.Xml.Schema.XmlTypeCode UnsignedShort
    static void _set_UnsignedShort(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode UnsignedByte
    static constexpr const int UnsignedByte = 51;
    // Get static field: static public System.Xml.Schema.XmlTypeCode UnsignedByte
    static ::System::Xml::Schema::XmlTypeCode _get_UnsignedByte();
    // Set static field: static public System.Xml.Schema.XmlTypeCode UnsignedByte
    static void _set_UnsignedByte(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode PositiveInteger
    static constexpr const int PositiveInteger = 52;
    // Get static field: static public System.Xml.Schema.XmlTypeCode PositiveInteger
    static ::System::Xml::Schema::XmlTypeCode _get_PositiveInteger();
    // Set static field: static public System.Xml.Schema.XmlTypeCode PositiveInteger
    static void _set_PositiveInteger(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode YearMonthDuration
    static constexpr const int YearMonthDuration = 53;
    // Get static field: static public System.Xml.Schema.XmlTypeCode YearMonthDuration
    static ::System::Xml::Schema::XmlTypeCode _get_YearMonthDuration();
    // Set static field: static public System.Xml.Schema.XmlTypeCode YearMonthDuration
    static void _set_YearMonthDuration(::System::Xml::Schema::XmlTypeCode value);
    // static field const value: static public System.Xml.Schema.XmlTypeCode DayTimeDuration
    static constexpr const int DayTimeDuration = 54;
    // Get static field: static public System.Xml.Schema.XmlTypeCode DayTimeDuration
    static ::System::Xml::Schema::XmlTypeCode _get_DayTimeDuration();
    // Set static field: static public System.Xml.Schema.XmlTypeCode DayTimeDuration
    static void _set_DayTimeDuration(::System::Xml::Schema::XmlTypeCode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XmlTypeCode
  #pragma pack(pop)
  static check_size<sizeof(XmlTypeCode), 0 + sizeof(int)> __System_Xml_Schema_XmlTypeCodeSizeCheck;
  static_assert(sizeof(XmlTypeCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
