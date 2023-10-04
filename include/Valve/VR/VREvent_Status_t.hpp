// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_Status_t
  struct VREvent_Status_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_Status_t, "Valve.VR", "VREvent_Status_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Status_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Status_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 statusState
    // Size: 0x4
    // Offset: 0x0
    uint statusState;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_Status_t
    constexpr VREvent_Status_t(uint statusState_ = {}) noexcept : statusState{statusState_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return statusState;
    }
    // Get instance field reference: public System.UInt32 statusState
    [[deprecated("Use field access instead!")]] uint& dyn_statusState();
  }; // Valve.VR.VREvent_Status_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Status_t), 0 + sizeof(uint)> __Valve_VR_VREvent_Status_tSizeCheck;
  static_assert(sizeof(VREvent_Status_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
