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
// Type namespace: Vectrosity
namespace Vectrosity {
  // Forward declaring type: Joins
  struct Joins;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Vectrosity::Joins, "Vectrosity", "Joins");
// Type namespace: Vectrosity
namespace Vectrosity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Vectrosity.Joins
  // [TokenAttribute] Offset: FFFFFFFF
  struct Joins/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Joins
    constexpr Joins(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Vectrosity.Joins Fill
    static constexpr const int Fill = 0;
    // Get static field: static public Vectrosity.Joins Fill
    static ::Vectrosity::Joins _get_Fill();
    // Set static field: static public Vectrosity.Joins Fill
    static void _set_Fill(::Vectrosity::Joins value);
    // static field const value: static public Vectrosity.Joins Weld
    static constexpr const int Weld = 1;
    // Get static field: static public Vectrosity.Joins Weld
    static ::Vectrosity::Joins _get_Weld();
    // Set static field: static public Vectrosity.Joins Weld
    static void _set_Weld(::Vectrosity::Joins value);
    // static field const value: static public Vectrosity.Joins None
    static constexpr const int None = 2;
    // Get static field: static public Vectrosity.Joins None
    static ::Vectrosity::Joins _get_None();
    // Set static field: static public Vectrosity.Joins None
    static void _set_None(::Vectrosity::Joins value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Vectrosity.Joins
  #pragma pack(pop)
  static check_size<sizeof(Joins), 0 + sizeof(int)> __Vectrosity_JoinsSizeCheck;
  static_assert(sizeof(Joins) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
