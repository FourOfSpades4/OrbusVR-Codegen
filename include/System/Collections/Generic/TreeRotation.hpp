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
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: TreeRotation
  struct TreeRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::TreeRotation, "System.Collections.Generic", "TreeRotation");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.TreeRotation
  // [TokenAttribute] Offset: FFFFFFFF
  struct TreeRotation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: TreeRotation
    constexpr TreeRotation(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Collections.Generic.TreeRotation Left
    static constexpr const uint8_t Left = 0u;
    // Get static field: static public System.Collections.Generic.TreeRotation Left
    static ::System::Collections::Generic::TreeRotation _get_Left();
    // Set static field: static public System.Collections.Generic.TreeRotation Left
    static void _set_Left(::System::Collections::Generic::TreeRotation value);
    // static field const value: static public System.Collections.Generic.TreeRotation LeftRight
    static constexpr const uint8_t LeftRight = 1u;
    // Get static field: static public System.Collections.Generic.TreeRotation LeftRight
    static ::System::Collections::Generic::TreeRotation _get_LeftRight();
    // Set static field: static public System.Collections.Generic.TreeRotation LeftRight
    static void _set_LeftRight(::System::Collections::Generic::TreeRotation value);
    // static field const value: static public System.Collections.Generic.TreeRotation Right
    static constexpr const uint8_t Right = 2u;
    // Get static field: static public System.Collections.Generic.TreeRotation Right
    static ::System::Collections::Generic::TreeRotation _get_Right();
    // Set static field: static public System.Collections.Generic.TreeRotation Right
    static void _set_Right(::System::Collections::Generic::TreeRotation value);
    // static field const value: static public System.Collections.Generic.TreeRotation RightLeft
    static constexpr const uint8_t RightLeft = 3u;
    // Get static field: static public System.Collections.Generic.TreeRotation RightLeft
    static ::System::Collections::Generic::TreeRotation _get_RightLeft();
    // Set static field: static public System.Collections.Generic.TreeRotation RightLeft
    static void _set_RightLeft(::System::Collections::Generic::TreeRotation value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // System.Collections.Generic.TreeRotation
  #pragma pack(pop)
  static check_size<sizeof(TreeRotation), 0 + sizeof(uint8_t)> __System_Collections_Generic_TreeRotationSizeCheck;
  static_assert(sizeof(TreeRotation) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
