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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVRFingerSplay
  struct EVRFingerSplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRFingerSplay, "Valve.VR", "EVRFingerSplay");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRFingerSplay
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRFingerSplay/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRFingerSplay
    constexpr EVRFingerSplay(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRFingerSplay Thumb_Index
    static constexpr const int Thumb_Index = 0;
    // Get static field: static public Valve.VR.EVRFingerSplay Thumb_Index
    static ::Valve::VR::EVRFingerSplay _get_Thumb_Index();
    // Set static field: static public Valve.VR.EVRFingerSplay Thumb_Index
    static void _set_Thumb_Index(::Valve::VR::EVRFingerSplay value);
    // static field const value: static public Valve.VR.EVRFingerSplay Index_Middle
    static constexpr const int Index_Middle = 1;
    // Get static field: static public Valve.VR.EVRFingerSplay Index_Middle
    static ::Valve::VR::EVRFingerSplay _get_Index_Middle();
    // Set static field: static public Valve.VR.EVRFingerSplay Index_Middle
    static void _set_Index_Middle(::Valve::VR::EVRFingerSplay value);
    // static field const value: static public Valve.VR.EVRFingerSplay Middle_Ring
    static constexpr const int Middle_Ring = 2;
    // Get static field: static public Valve.VR.EVRFingerSplay Middle_Ring
    static ::Valve::VR::EVRFingerSplay _get_Middle_Ring();
    // Set static field: static public Valve.VR.EVRFingerSplay Middle_Ring
    static void _set_Middle_Ring(::Valve::VR::EVRFingerSplay value);
    // static field const value: static public Valve.VR.EVRFingerSplay Ring_Pinky
    static constexpr const int Ring_Pinky = 3;
    // Get static field: static public Valve.VR.EVRFingerSplay Ring_Pinky
    static ::Valve::VR::EVRFingerSplay _get_Ring_Pinky();
    // Set static field: static public Valve.VR.EVRFingerSplay Ring_Pinky
    static void _set_Ring_Pinky(::Valve::VR::EVRFingerSplay value);
    // static field const value: static public Valve.VR.EVRFingerSplay Count
    static constexpr const int Count = 4;
    // Get static field: static public Valve.VR.EVRFingerSplay Count
    static ::Valve::VR::EVRFingerSplay _get_Count();
    // Set static field: static public Valve.VR.EVRFingerSplay Count
    static void _set_Count(::Valve::VR::EVRFingerSplay value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVRFingerSplay
  #pragma pack(pop)
  static check_size<sizeof(EVRFingerSplay), 0 + sizeof(int)> __Valve_VR_EVRFingerSplaySizeCheck;
  static_assert(sizeof(EVRFingerSplay) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"