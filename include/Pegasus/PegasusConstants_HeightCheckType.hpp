// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pegasus.PegasusConstants
#include "Pegasus/PegasusConstants.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::PegasusConstants::HeightCheckType, "Pegasus", "PegasusConstants/HeightCheckType");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.PegasusConstants/HeightCheckType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PegasusConstants::HeightCheckType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HeightCheckType
    constexpr HeightCheckType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pegasus.PegasusConstants/HeightCheckType Collision
    static constexpr const int Collision = 0;
    // Get static field: static public Pegasus.PegasusConstants/HeightCheckType Collision
    static ::Pegasus::PegasusConstants::HeightCheckType _get_Collision();
    // Set static field: static public Pegasus.PegasusConstants/HeightCheckType Collision
    static void _set_Collision(::Pegasus::PegasusConstants::HeightCheckType value);
    // static field const value: static public Pegasus.PegasusConstants/HeightCheckType Terrain
    static constexpr const int Terrain = 1;
    // Get static field: static public Pegasus.PegasusConstants/HeightCheckType Terrain
    static ::Pegasus::PegasusConstants::HeightCheckType _get_Terrain();
    // Set static field: static public Pegasus.PegasusConstants/HeightCheckType Terrain
    static void _set_Terrain(::Pegasus::PegasusConstants::HeightCheckType value);
    // static field const value: static public Pegasus.PegasusConstants/HeightCheckType None
    static constexpr const int None = 2;
    // Get static field: static public Pegasus.PegasusConstants/HeightCheckType None
    static ::Pegasus::PegasusConstants::HeightCheckType _get_None();
    // Set static field: static public Pegasus.PegasusConstants/HeightCheckType None
    static void _set_None(::Pegasus::PegasusConstants::HeightCheckType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pegasus.PegasusConstants/HeightCheckType
  #pragma pack(pop)
  static check_size<sizeof(PegasusConstants::HeightCheckType), 0 + sizeof(int)> __Pegasus_PegasusConstants_HeightCheckTypeSizeCheck;
  static_assert(sizeof(PegasusConstants::HeightCheckType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
