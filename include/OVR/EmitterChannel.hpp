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
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: EmitterChannel
  struct EmitterChannel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::EmitterChannel, "OVR", "EmitterChannel");
// Type namespace: OVR
namespace OVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.EmitterChannel
  // [TokenAttribute] Offset: FFFFFFFF
  struct EmitterChannel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EmitterChannel
    constexpr EmitterChannel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.EmitterChannel None
    static constexpr const int None = -1;
    // Get static field: static public OVR.EmitterChannel None
    static ::OVR::EmitterChannel _get_None();
    // Set static field: static public OVR.EmitterChannel None
    static void _set_None(::OVR::EmitterChannel value);
    // static field const value: static public OVR.EmitterChannel Reserved
    static constexpr const int Reserved = 0;
    // Get static field: static public OVR.EmitterChannel Reserved
    static ::OVR::EmitterChannel _get_Reserved();
    // Set static field: static public OVR.EmitterChannel Reserved
    static void _set_Reserved(::OVR::EmitterChannel value);
    // static field const value: static public OVR.EmitterChannel Any
    static constexpr const int Any = 1;
    // Get static field: static public OVR.EmitterChannel Any
    static ::OVR::EmitterChannel _get_Any();
    // Set static field: static public OVR.EmitterChannel Any
    static void _set_Any(::OVR::EmitterChannel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.EmitterChannel
  #pragma pack(pop)
  static check_size<sizeof(EmitterChannel), 0 + sizeof(int)> __OVR_EmitterChannelSizeCheck;
  static_assert(sizeof(EmitterChannel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
