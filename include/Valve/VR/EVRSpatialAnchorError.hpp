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
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRSpatialAnchorError, "Valve.VR", "EVRSpatialAnchorError");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRSpatialAnchorError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRSpatialAnchorError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRSpatialAnchorError
    constexpr EVRSpatialAnchorError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRSpatialAnchorError Success
    static constexpr const int Success = 0;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError Success
    static ::Valve::VR::EVRSpatialAnchorError _get_Success();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError Success
    static void _set_Success(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError Internal
    static constexpr const int Internal = 1;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError Internal
    static ::Valve::VR::EVRSpatialAnchorError _get_Internal();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError Internal
    static void _set_Internal(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError UnknownHandle
    static constexpr const int UnknownHandle = 2;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError UnknownHandle
    static ::Valve::VR::EVRSpatialAnchorError _get_UnknownHandle();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError UnknownHandle
    static void _set_UnknownHandle(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError ArrayTooSmall
    static constexpr const int ArrayTooSmall = 3;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError ArrayTooSmall
    static ::Valve::VR::EVRSpatialAnchorError _get_ArrayTooSmall();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError ArrayTooSmall
    static void _set_ArrayTooSmall(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError InvalidDescriptorChar
    static constexpr const int InvalidDescriptorChar = 4;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError InvalidDescriptorChar
    static ::Valve::VR::EVRSpatialAnchorError _get_InvalidDescriptorChar();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError InvalidDescriptorChar
    static void _set_InvalidDescriptorChar(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError NotYetAvailable
    static constexpr const int NotYetAvailable = 5;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError NotYetAvailable
    static ::Valve::VR::EVRSpatialAnchorError _get_NotYetAvailable();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError NotYetAvailable
    static void _set_NotYetAvailable(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError NotAvailableInThisUniverse
    static constexpr const int NotAvailableInThisUniverse = 6;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError NotAvailableInThisUniverse
    static ::Valve::VR::EVRSpatialAnchorError _get_NotAvailableInThisUniverse();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError NotAvailableInThisUniverse
    static void _set_NotAvailableInThisUniverse(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError PermanentlyUnavailable
    static constexpr const int PermanentlyUnavailable = 7;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError PermanentlyUnavailable
    static ::Valve::VR::EVRSpatialAnchorError _get_PermanentlyUnavailable();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError PermanentlyUnavailable
    static void _set_PermanentlyUnavailable(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError WrongDriver
    static constexpr const int WrongDriver = 8;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError WrongDriver
    static ::Valve::VR::EVRSpatialAnchorError _get_WrongDriver();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError WrongDriver
    static void _set_WrongDriver(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError DescriptorTooLong
    static constexpr const int DescriptorTooLong = 9;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError DescriptorTooLong
    static ::Valve::VR::EVRSpatialAnchorError _get_DescriptorTooLong();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError DescriptorTooLong
    static void _set_DescriptorTooLong(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError Unknown
    static constexpr const int Unknown = 10;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError Unknown
    static ::Valve::VR::EVRSpatialAnchorError _get_Unknown();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError Unknown
    static void _set_Unknown(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError NoRoomCalibration
    static constexpr const int NoRoomCalibration = 11;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError NoRoomCalibration
    static ::Valve::VR::EVRSpatialAnchorError _get_NoRoomCalibration();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError NoRoomCalibration
    static void _set_NoRoomCalibration(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError InvalidArgument
    static constexpr const int InvalidArgument = 12;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError InvalidArgument
    static ::Valve::VR::EVRSpatialAnchorError _get_InvalidArgument();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError InvalidArgument
    static void _set_InvalidArgument(::Valve::VR::EVRSpatialAnchorError value);
    // static field const value: static public Valve.VR.EVRSpatialAnchorError UnknownDriver
    static constexpr const int UnknownDriver = 13;
    // Get static field: static public Valve.VR.EVRSpatialAnchorError UnknownDriver
    static ::Valve::VR::EVRSpatialAnchorError _get_UnknownDriver();
    // Set static field: static public Valve.VR.EVRSpatialAnchorError UnknownDriver
    static void _set_UnknownDriver(::Valve::VR::EVRSpatialAnchorError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVRSpatialAnchorError
  #pragma pack(pop)
  static check_size<sizeof(EVRSpatialAnchorError), 0 + sizeof(int)> __Valve_VR_EVRSpatialAnchorErrorSizeCheck;
  static_assert(sizeof(EVRSpatialAnchorError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
