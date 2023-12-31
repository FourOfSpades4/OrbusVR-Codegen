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
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::PegasusConstants::FlythroughEndAction, "Pegasus", "PegasusConstants/FlythroughEndAction");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.PegasusConstants/FlythroughEndAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct PegasusConstants::FlythroughEndAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FlythroughEndAction
    constexpr FlythroughEndAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pegasus.PegasusConstants/FlythroughEndAction StopFlythrough
    static constexpr const int StopFlythrough = 0;
    // Get static field: static public Pegasus.PegasusConstants/FlythroughEndAction StopFlythrough
    static ::Pegasus::PegasusConstants::FlythroughEndAction _get_StopFlythrough();
    // Set static field: static public Pegasus.PegasusConstants/FlythroughEndAction StopFlythrough
    static void _set_StopFlythrough(::Pegasus::PegasusConstants::FlythroughEndAction value);
    // static field const value: static public Pegasus.PegasusConstants/FlythroughEndAction QuitApplication
    static constexpr const int QuitApplication = 1;
    // Get static field: static public Pegasus.PegasusConstants/FlythroughEndAction QuitApplication
    static ::Pegasus::PegasusConstants::FlythroughEndAction _get_QuitApplication();
    // Set static field: static public Pegasus.PegasusConstants/FlythroughEndAction QuitApplication
    static void _set_QuitApplication(::Pegasus::PegasusConstants::FlythroughEndAction value);
    // static field const value: static public Pegasus.PegasusConstants/FlythroughEndAction PlayNextPegasus
    static constexpr const int PlayNextPegasus = 2;
    // Get static field: static public Pegasus.PegasusConstants/FlythroughEndAction PlayNextPegasus
    static ::Pegasus::PegasusConstants::FlythroughEndAction _get_PlayNextPegasus();
    // Set static field: static public Pegasus.PegasusConstants/FlythroughEndAction PlayNextPegasus
    static void _set_PlayNextPegasus(::Pegasus::PegasusConstants::FlythroughEndAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pegasus.PegasusConstants/FlythroughEndAction
  #pragma pack(pop)
  static check_size<sizeof(PegasusConstants::FlythroughEndAction), 0 + sizeof(int)> __Pegasus_PegasusConstants_FlythroughEndActionSizeCheck;
  static_assert(sizeof(PegasusConstants::FlythroughEndAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
