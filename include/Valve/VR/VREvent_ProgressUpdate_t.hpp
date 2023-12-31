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
  // Forward declaring type: VREvent_ProgressUpdate_t
  struct VREvent_ProgressUpdate_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_ProgressUpdate_t, "Valve.VR", "VREvent_ProgressUpdate_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_ProgressUpdate_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_ProgressUpdate_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 ulApplicationPropertyContainer
    // Size: 0x8
    // Offset: 0x0
    uint64_t ulApplicationPropertyContainer;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathDevice
    // Size: 0x8
    // Offset: 0x8
    uint64_t pathDevice;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathInputSource
    // Size: 0x8
    // Offset: 0x10
    uint64_t pathInputSource;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathProgressAction
    // Size: 0x8
    // Offset: 0x18
    uint64_t pathProgressAction;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathIcon
    // Size: 0x8
    // Offset: 0x20
    uint64_t pathIcon;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Single fProgress
    // Size: 0x4
    // Offset: 0x28
    float fProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_ProgressUpdate_t
    constexpr VREvent_ProgressUpdate_t(uint64_t ulApplicationPropertyContainer_ = {}, uint64_t pathDevice_ = {}, uint64_t pathInputSource_ = {}, uint64_t pathProgressAction_ = {}, uint64_t pathIcon_ = {}, float fProgress_ = {}) noexcept : ulApplicationPropertyContainer{ulApplicationPropertyContainer_}, pathDevice{pathDevice_}, pathInputSource{pathInputSource_}, pathProgressAction{pathProgressAction_}, pathIcon{pathIcon_}, fProgress{fProgress_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 ulApplicationPropertyContainer
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulApplicationPropertyContainer();
    // Get instance field reference: public System.UInt64 pathDevice
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathDevice();
    // Get instance field reference: public System.UInt64 pathInputSource
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathInputSource();
    // Get instance field reference: public System.UInt64 pathProgressAction
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathProgressAction();
    // Get instance field reference: public System.UInt64 pathIcon
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathIcon();
    // Get instance field reference: public System.Single fProgress
    [[deprecated("Use field access instead!")]] float& dyn_fProgress();
  }; // Valve.VR.VREvent_ProgressUpdate_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_ProgressUpdate_t), 40 + sizeof(float)> __Valve_VR_VREvent_ProgressUpdate_tSizeCheck;
  static_assert(sizeof(VREvent_ProgressUpdate_t) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
