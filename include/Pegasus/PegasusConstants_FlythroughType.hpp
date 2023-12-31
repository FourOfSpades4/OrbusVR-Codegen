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
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::PegasusConstants::FlythroughType, "Pegasus", "PegasusConstants/FlythroughType");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.PegasusConstants/FlythroughType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PegasusConstants::FlythroughType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FlythroughType
    constexpr FlythroughType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pegasus.PegasusConstants/FlythroughType SingleShot
    static constexpr const int SingleShot = 0;
    // Get static field: static public Pegasus.PegasusConstants/FlythroughType SingleShot
    static ::Pegasus::PegasusConstants::FlythroughType _get_SingleShot();
    // Set static field: static public Pegasus.PegasusConstants/FlythroughType SingleShot
    static void _set_SingleShot(::Pegasus::PegasusConstants::FlythroughType value);
    // static field const value: static public Pegasus.PegasusConstants/FlythroughType Looped
    static constexpr const int Looped = 1;
    // Get static field: static public Pegasus.PegasusConstants/FlythroughType Looped
    static ::Pegasus::PegasusConstants::FlythroughType _get_Looped();
    // Set static field: static public Pegasus.PegasusConstants/FlythroughType Looped
    static void _set_Looped(::Pegasus::PegasusConstants::FlythroughType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pegasus.PegasusConstants/FlythroughType
  #pragma pack(pop)
  static check_size<sizeof(PegasusConstants::FlythroughType), 0 + sizeof(int)> __Pegasus_PegasusConstants_FlythroughTypeSizeCheck;
  static_assert(sizeof(PegasusConstants::FlythroughType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
