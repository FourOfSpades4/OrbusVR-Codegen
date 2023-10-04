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
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::ChaperoneCalibrationState, "Valve.VR", "ChaperoneCalibrationState");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.ChaperoneCalibrationState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChaperoneCalibrationState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChaperoneCalibrationState
    constexpr ChaperoneCalibrationState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.ChaperoneCalibrationState OK
    static constexpr const int OK = 1;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState OK
    static ::Valve::VR::ChaperoneCalibrationState _get_OK();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState OK
    static void _set_OK(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Warning
    static constexpr const int Warning = 100;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Warning
    static ::Valve::VR::ChaperoneCalibrationState _get_Warning();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Warning
    static void _set_Warning(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Warning_BaseStationMayHaveMoved
    static constexpr const int Warning_BaseStationMayHaveMoved = 101;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Warning_BaseStationMayHaveMoved
    static ::Valve::VR::ChaperoneCalibrationState _get_Warning_BaseStationMayHaveMoved();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Warning_BaseStationMayHaveMoved
    static void _set_Warning_BaseStationMayHaveMoved(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Warning_BaseStationRemoved
    static constexpr const int Warning_BaseStationRemoved = 102;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Warning_BaseStationRemoved
    static ::Valve::VR::ChaperoneCalibrationState _get_Warning_BaseStationRemoved();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Warning_BaseStationRemoved
    static void _set_Warning_BaseStationRemoved(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Warning_SeatedBoundsInvalid
    static constexpr const int Warning_SeatedBoundsInvalid = 103;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Warning_SeatedBoundsInvalid
    static ::Valve::VR::ChaperoneCalibrationState _get_Warning_SeatedBoundsInvalid();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Warning_SeatedBoundsInvalid
    static void _set_Warning_SeatedBoundsInvalid(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Error
    static constexpr const int Error = 200;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Error
    static ::Valve::VR::ChaperoneCalibrationState _get_Error();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Error
    static void _set_Error(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Error_BaseStationUninitialized
    static constexpr const int Error_BaseStationUninitialized = 201;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Error_BaseStationUninitialized
    static ::Valve::VR::ChaperoneCalibrationState _get_Error_BaseStationUninitialized();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Error_BaseStationUninitialized
    static void _set_Error_BaseStationUninitialized(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Error_BaseStationConflict
    static constexpr const int Error_BaseStationConflict = 202;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Error_BaseStationConflict
    static ::Valve::VR::ChaperoneCalibrationState _get_Error_BaseStationConflict();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Error_BaseStationConflict
    static void _set_Error_BaseStationConflict(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Error_PlayAreaInvalid
    static constexpr const int Error_PlayAreaInvalid = 203;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Error_PlayAreaInvalid
    static ::Valve::VR::ChaperoneCalibrationState _get_Error_PlayAreaInvalid();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Error_PlayAreaInvalid
    static void _set_Error_PlayAreaInvalid(::Valve::VR::ChaperoneCalibrationState value);
    // static field const value: static public Valve.VR.ChaperoneCalibrationState Error_CollisionBoundsInvalid
    static constexpr const int Error_CollisionBoundsInvalid = 204;
    // Get static field: static public Valve.VR.ChaperoneCalibrationState Error_CollisionBoundsInvalid
    static ::Valve::VR::ChaperoneCalibrationState _get_Error_CollisionBoundsInvalid();
    // Set static field: static public Valve.VR.ChaperoneCalibrationState Error_CollisionBoundsInvalid
    static void _set_Error_CollisionBoundsInvalid(::Valve::VR::ChaperoneCalibrationState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.ChaperoneCalibrationState
  #pragma pack(pop)
  static check_size<sizeof(ChaperoneCalibrationState), 0 + sizeof(int)> __Valve_VR_ChaperoneCalibrationStateSizeCheck;
  static_assert(sizeof(ChaperoneCalibrationState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"