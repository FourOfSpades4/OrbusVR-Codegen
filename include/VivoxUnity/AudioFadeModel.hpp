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
  // Forward declaring type: AudioFadeModel
  struct AudioFadeModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::AudioFadeModel, "VivoxUnity", "AudioFadeModel");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.AudioFadeModel
  // [TokenAttribute] Offset: FFFFFFFF
  struct AudioFadeModel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AudioFadeModel
    constexpr AudioFadeModel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VivoxUnity.AudioFadeModel None
    static constexpr const int None = 0;
    // Get static field: static public VivoxUnity.AudioFadeModel None
    static ::VivoxUnity::AudioFadeModel _get_None();
    // Set static field: static public VivoxUnity.AudioFadeModel None
    static void _set_None(::VivoxUnity::AudioFadeModel value);
    // static field const value: static public VivoxUnity.AudioFadeModel InverseByDistance
    static constexpr const int InverseByDistance = 1;
    // Get static field: static public VivoxUnity.AudioFadeModel InverseByDistance
    static ::VivoxUnity::AudioFadeModel _get_InverseByDistance();
    // Set static field: static public VivoxUnity.AudioFadeModel InverseByDistance
    static void _set_InverseByDistance(::VivoxUnity::AudioFadeModel value);
    // static field const value: static public VivoxUnity.AudioFadeModel LinearByDistance
    static constexpr const int LinearByDistance = 2;
    // Get static field: static public VivoxUnity.AudioFadeModel LinearByDistance
    static ::VivoxUnity::AudioFadeModel _get_LinearByDistance();
    // Set static field: static public VivoxUnity.AudioFadeModel LinearByDistance
    static void _set_LinearByDistance(::VivoxUnity::AudioFadeModel value);
    // static field const value: static public VivoxUnity.AudioFadeModel ExponentialByDistance
    static constexpr const int ExponentialByDistance = 3;
    // Get static field: static public VivoxUnity.AudioFadeModel ExponentialByDistance
    static ::VivoxUnity::AudioFadeModel _get_ExponentialByDistance();
    // Set static field: static public VivoxUnity.AudioFadeModel ExponentialByDistance
    static void _set_ExponentialByDistance(::VivoxUnity::AudioFadeModel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VivoxUnity.AudioFadeModel
  #pragma pack(pop)
  static check_size<sizeof(AudioFadeModel), 0 + sizeof(int)> __VivoxUnity_AudioFadeModelSizeCheck;
  static_assert(sizeof(AudioFadeModel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
