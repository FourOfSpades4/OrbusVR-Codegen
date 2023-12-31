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
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Forward declaring type: ApertureShape
  struct ApertureShape;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AmplifyBloom::ApertureShape, "AmplifyBloom", "ApertureShape");
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyBloom.ApertureShape
  // [TokenAttribute] Offset: FFFFFFFF
  struct ApertureShape/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ApertureShape
    constexpr ApertureShape(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AmplifyBloom.ApertureShape Square
    static constexpr const int Square = 0;
    // Get static field: static public AmplifyBloom.ApertureShape Square
    static ::AmplifyBloom::ApertureShape _get_Square();
    // Set static field: static public AmplifyBloom.ApertureShape Square
    static void _set_Square(::AmplifyBloom::ApertureShape value);
    // static field const value: static public AmplifyBloom.ApertureShape Hexagon
    static constexpr const int Hexagon = 1;
    // Get static field: static public AmplifyBloom.ApertureShape Hexagon
    static ::AmplifyBloom::ApertureShape _get_Hexagon();
    // Set static field: static public AmplifyBloom.ApertureShape Hexagon
    static void _set_Hexagon(::AmplifyBloom::ApertureShape value);
    // static field const value: static public AmplifyBloom.ApertureShape Octagon
    static constexpr const int Octagon = 2;
    // Get static field: static public AmplifyBloom.ApertureShape Octagon
    static ::AmplifyBloom::ApertureShape _get_Octagon();
    // Set static field: static public AmplifyBloom.ApertureShape Octagon
    static void _set_Octagon(::AmplifyBloom::ApertureShape value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AmplifyBloom.ApertureShape
  #pragma pack(pop)
  static check_size<sizeof(ApertureShape), 0 + sizeof(int)> __AmplifyBloom_ApertureShapeSizeCheck;
  static_assert(sizeof(ApertureShape) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
