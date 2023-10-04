// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.SearchPattern2
#include "System/IO/SearchPattern2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchPattern2::OpCode, "System.IO", "SearchPattern2/OpCode");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchPattern2/OpCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SearchPattern2::OpCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OpCode
    constexpr OpCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.SearchPattern2/OpCode ExactString
    static constexpr const int ExactString = 0;
    // Get static field: static public System.IO.SearchPattern2/OpCode ExactString
    static ::System::IO::SearchPattern2::OpCode _get_ExactString();
    // Set static field: static public System.IO.SearchPattern2/OpCode ExactString
    static void _set_ExactString(::System::IO::SearchPattern2::OpCode value);
    // static field const value: static public System.IO.SearchPattern2/OpCode AnyChar
    static constexpr const int AnyChar = 1;
    // Get static field: static public System.IO.SearchPattern2/OpCode AnyChar
    static ::System::IO::SearchPattern2::OpCode _get_AnyChar();
    // Set static field: static public System.IO.SearchPattern2/OpCode AnyChar
    static void _set_AnyChar(::System::IO::SearchPattern2::OpCode value);
    // static field const value: static public System.IO.SearchPattern2/OpCode AnyString
    static constexpr const int AnyString = 2;
    // Get static field: static public System.IO.SearchPattern2/OpCode AnyString
    static ::System::IO::SearchPattern2::OpCode _get_AnyString();
    // Set static field: static public System.IO.SearchPattern2/OpCode AnyString
    static void _set_AnyString(::System::IO::SearchPattern2::OpCode value);
    // static field const value: static public System.IO.SearchPattern2/OpCode End
    static constexpr const int End = 3;
    // Get static field: static public System.IO.SearchPattern2/OpCode End
    static ::System::IO::SearchPattern2::OpCode _get_End();
    // Set static field: static public System.IO.SearchPattern2/OpCode End
    static void _set_End(::System::IO::SearchPattern2::OpCode value);
    // static field const value: static public System.IO.SearchPattern2/OpCode True
    static constexpr const int True = 4;
    // Get static field: static public System.IO.SearchPattern2/OpCode True
    static ::System::IO::SearchPattern2::OpCode _get_True();
    // Set static field: static public System.IO.SearchPattern2/OpCode True
    static void _set_True(::System::IO::SearchPattern2::OpCode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.IO.SearchPattern2/OpCode
  #pragma pack(pop)
  static check_size<sizeof(SearchPattern2::OpCode), 0 + sizeof(int)> __System_IO_SearchPattern2_OpCodeSizeCheck;
  static_assert(sizeof(SearchPattern2::OpCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
