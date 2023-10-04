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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_Notification_t
  struct VREvent_Notification_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Notification_t, "OVR.OpenVR", "VREvent_Notification_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Notification_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Notification_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 ulUserValue
    // Size: 0x8
    // Offset: 0x0
    uint64_t ulUserValue;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt32 notificationId
    // Size: 0x4
    // Offset: 0x8
    uint notificationId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_Notification_t
    constexpr VREvent_Notification_t(uint64_t ulUserValue_ = {}, uint notificationId_ = {}) noexcept : ulUserValue{ulUserValue_}, notificationId{notificationId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 ulUserValue
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulUserValue();
    // Get instance field reference: public System.UInt32 notificationId
    [[deprecated("Use field access instead!")]] uint& dyn_notificationId();
  }; // OVR.OpenVR.VREvent_Notification_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Notification_t), 8 + sizeof(uint)> __OVR_OpenVR_VREvent_Notification_tSizeCheck;
  static_assert(sizeof(VREvent_Notification_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
