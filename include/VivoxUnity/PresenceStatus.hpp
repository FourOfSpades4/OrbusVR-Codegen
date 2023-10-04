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
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: PresenceStatus
  struct PresenceStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::PresenceStatus, "VivoxUnity", "PresenceStatus");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.PresenceStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct PresenceStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PresenceStatus
    constexpr PresenceStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VivoxUnity.PresenceStatus Available
    static constexpr const int Available = 2;
    // Get static field: static public VivoxUnity.PresenceStatus Available
    static ::VivoxUnity::PresenceStatus _get_Available();
    // Set static field: static public VivoxUnity.PresenceStatus Available
    static void _set_Available(::VivoxUnity::PresenceStatus value);
    // static field const value: static public VivoxUnity.PresenceStatus DoNotDisturb
    static constexpr const int DoNotDisturb = 3;
    // Get static field: static public VivoxUnity.PresenceStatus DoNotDisturb
    static ::VivoxUnity::PresenceStatus _get_DoNotDisturb();
    // Set static field: static public VivoxUnity.PresenceStatus DoNotDisturb
    static void _set_DoNotDisturb(::VivoxUnity::PresenceStatus value);
    // static field const value: static public VivoxUnity.PresenceStatus Away
    static constexpr const int Away = 5;
    // Get static field: static public VivoxUnity.PresenceStatus Away
    static ::VivoxUnity::PresenceStatus _get_Away();
    // Set static field: static public VivoxUnity.PresenceStatus Away
    static void _set_Away(::VivoxUnity::PresenceStatus value);
    // static field const value: static public VivoxUnity.PresenceStatus InACall
    static constexpr const int InACall = 6;
    // Get static field: static public VivoxUnity.PresenceStatus InACall
    static ::VivoxUnity::PresenceStatus _get_InACall();
    // Set static field: static public VivoxUnity.PresenceStatus InACall
    static void _set_InACall(::VivoxUnity::PresenceStatus value);
    // static field const value: static public VivoxUnity.PresenceStatus Unavailable
    static constexpr const int Unavailable = 0;
    // Get static field: static public VivoxUnity.PresenceStatus Unavailable
    static ::VivoxUnity::PresenceStatus _get_Unavailable();
    // Set static field: static public VivoxUnity.PresenceStatus Unavailable
    static void _set_Unavailable(::VivoxUnity::PresenceStatus value);
    // static field const value: static public VivoxUnity.PresenceStatus Chat
    static constexpr const int Chat = 10;
    // Get static field: static public VivoxUnity.PresenceStatus Chat
    static ::VivoxUnity::PresenceStatus _get_Chat();
    // Set static field: static public VivoxUnity.PresenceStatus Chat
    static void _set_Chat(::VivoxUnity::PresenceStatus value);
    // static field const value: static public VivoxUnity.PresenceStatus ExtendedAway
    static constexpr const int ExtendedAway = 11;
    // Get static field: static public VivoxUnity.PresenceStatus ExtendedAway
    static ::VivoxUnity::PresenceStatus _get_ExtendedAway();
    // Set static field: static public VivoxUnity.PresenceStatus ExtendedAway
    static void _set_ExtendedAway(::VivoxUnity::PresenceStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VivoxUnity.PresenceStatus
  #pragma pack(pop)
  static check_size<sizeof(PresenceStatus), 0 + sizeof(int)> __VivoxUnity_PresenceStatusSizeCheck;
  static_assert(sizeof(PresenceStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"