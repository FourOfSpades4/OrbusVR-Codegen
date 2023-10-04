// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_InputActionManifestLoad_t
  struct VREvent_InputActionManifestLoad_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_InputActionManifestLoad_t, "Valve.VR", "VREvent_InputActionManifestLoad_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_InputActionManifestLoad_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_InputActionManifestLoad_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 pathAppKey
    // Size: 0x8
    // Offset: 0x0
    uint64_t pathAppKey;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathMessage
    // Size: 0x8
    // Offset: 0x8
    uint64_t pathMessage;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathMessageParam
    // Size: 0x8
    // Offset: 0x10
    uint64_t pathMessageParam;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathManifestPath
    // Size: 0x8
    // Offset: 0x18
    uint64_t pathManifestPath;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VREvent_InputActionManifestLoad_t
    constexpr VREvent_InputActionManifestLoad_t(uint64_t pathAppKey_ = {}, uint64_t pathMessage_ = {}, uint64_t pathMessageParam_ = {}, uint64_t pathManifestPath_ = {}) noexcept : pathAppKey{pathAppKey_}, pathMessage{pathMessage_}, pathMessageParam{pathMessageParam_}, pathManifestPath{pathManifestPath_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 pathAppKey
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathAppKey();
    // Get instance field reference: public System.UInt64 pathMessage
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathMessage();
    // Get instance field reference: public System.UInt64 pathMessageParam
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathMessageParam();
    // Get instance field reference: public System.UInt64 pathManifestPath
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathManifestPath();
  }; // Valve.VR.VREvent_InputActionManifestLoad_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_InputActionManifestLoad_t), 24 + sizeof(uint64_t)> __Valve_VR_VREvent_InputActionManifestLoad_tSizeCheck;
  static_assert(sizeof(VREvent_InputActionManifestLoad_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"