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
  // Forward declaring type: ParticipantPropertyUpdateFrequency
  struct ParticipantPropertyUpdateFrequency;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::ParticipantPropertyUpdateFrequency, "VivoxUnity", "ParticipantPropertyUpdateFrequency");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.ParticipantPropertyUpdateFrequency
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultValueAttribute] Offset: ABCD88
  struct ParticipantPropertyUpdateFrequency/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParticipantPropertyUpdateFrequency
    constexpr ParticipantPropertyUpdateFrequency(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VivoxUnity.ParticipantPropertyUpdateFrequency StateChange
    static constexpr const int StateChange = 100;
    // Get static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency StateChange
    static ::VivoxUnity::ParticipantPropertyUpdateFrequency _get_StateChange();
    // Set static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency StateChange
    static void _set_StateChange(::VivoxUnity::ParticipantPropertyUpdateFrequency value);
    // static field const value: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update00Hz
    static constexpr const int Update00Hz = 0;
    // Get static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update00Hz
    static ::VivoxUnity::ParticipantPropertyUpdateFrequency _get_Update00Hz();
    // Set static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update00Hz
    static void _set_Update00Hz(::VivoxUnity::ParticipantPropertyUpdateFrequency value);
    // static field const value: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update01Hz
    static constexpr const int Update01Hz = 50;
    // Get static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update01Hz
    static ::VivoxUnity::ParticipantPropertyUpdateFrequency _get_Update01Hz();
    // Set static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update01Hz
    static void _set_Update01Hz(::VivoxUnity::ParticipantPropertyUpdateFrequency value);
    // static field const value: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update05Hz
    static constexpr const int Update05Hz = 10;
    // Get static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update05Hz
    static ::VivoxUnity::ParticipantPropertyUpdateFrequency _get_Update05Hz();
    // Set static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update05Hz
    static void _set_Update05Hz(::VivoxUnity::ParticipantPropertyUpdateFrequency value);
    // static field const value: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update10Hz
    static constexpr const int Update10Hz = 5;
    // Get static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update10Hz
    static ::VivoxUnity::ParticipantPropertyUpdateFrequency _get_Update10Hz();
    // Set static field: static public VivoxUnity.ParticipantPropertyUpdateFrequency Update10Hz
    static void _set_Update10Hz(::VivoxUnity::ParticipantPropertyUpdateFrequency value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VivoxUnity.ParticipantPropertyUpdateFrequency
  #pragma pack(pop)
  static check_size<sizeof(ParticipantPropertyUpdateFrequency), 0 + sizeof(int)> __VivoxUnity_ParticipantPropertyUpdateFrequencySizeCheck;
  static_assert(sizeof(ParticipantPropertyUpdateFrequency) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"