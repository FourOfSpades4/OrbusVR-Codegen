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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: InternalObjectTypeE
  struct InternalObjectTypeE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalObjectTypeE");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalObjectTypeE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InternalObjectTypeE
    constexpr InternalObjectTypeE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Empty
    static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Empty
    static void _set_Empty(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Object
    static constexpr const int Object = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Object
    static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE _get_Object();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Object
    static void _set_Object(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Array
    static constexpr const int Array = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Array
    static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE _get_Array();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE Array
    static void _set_Array(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
  #pragma pack(pop)
  static check_size<sizeof(InternalObjectTypeE), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalObjectTypeESizeCheck;
  static_assert(sizeof(InternalObjectTypeE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
