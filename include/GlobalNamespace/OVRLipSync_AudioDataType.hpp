// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRLipSync
#include "GlobalNamespace/OVRLipSync.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSync::AudioDataType, "", "OVRLipSync/AudioDataType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSync/AudioDataType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRLipSync::AudioDataType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AudioDataType
    constexpr AudioDataType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRLipSync/AudioDataType S16_Mono
    static constexpr const int S16_Mono = 0;
    // Get static field: static public OVRLipSync/AudioDataType S16_Mono
    static ::GlobalNamespace::OVRLipSync::AudioDataType _get_S16_Mono();
    // Set static field: static public OVRLipSync/AudioDataType S16_Mono
    static void _set_S16_Mono(::GlobalNamespace::OVRLipSync::AudioDataType value);
    // static field const value: static public OVRLipSync/AudioDataType S16_Stereo
    static constexpr const int S16_Stereo = 1;
    // Get static field: static public OVRLipSync/AudioDataType S16_Stereo
    static ::GlobalNamespace::OVRLipSync::AudioDataType _get_S16_Stereo();
    // Set static field: static public OVRLipSync/AudioDataType S16_Stereo
    static void _set_S16_Stereo(::GlobalNamespace::OVRLipSync::AudioDataType value);
    // static field const value: static public OVRLipSync/AudioDataType F32_Mono
    static constexpr const int F32_Mono = 2;
    // Get static field: static public OVRLipSync/AudioDataType F32_Mono
    static ::GlobalNamespace::OVRLipSync::AudioDataType _get_F32_Mono();
    // Set static field: static public OVRLipSync/AudioDataType F32_Mono
    static void _set_F32_Mono(::GlobalNamespace::OVRLipSync::AudioDataType value);
    // static field const value: static public OVRLipSync/AudioDataType F32_Stereo
    static constexpr const int F32_Stereo = 3;
    // Get static field: static public OVRLipSync/AudioDataType F32_Stereo
    static ::GlobalNamespace::OVRLipSync::AudioDataType _get_F32_Stereo();
    // Set static field: static public OVRLipSync/AudioDataType F32_Stereo
    static void _set_F32_Stereo(::GlobalNamespace::OVRLipSync::AudioDataType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRLipSync/AudioDataType
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSync::AudioDataType), 0 + sizeof(int)> __GlobalNamespace_OVRLipSync_AudioDataTypeSizeCheck;
  static_assert(sizeof(OVRLipSync::AudioDataType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"