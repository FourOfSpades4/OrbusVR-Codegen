// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VRControllerAxis_t
#include "Valve/VR/VRControllerAxis_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VRControllerState_t, "Valve.VR", "VRControllerState_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VRControllerState_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRControllerState_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 unPacketNum
    // Size: 0x4
    // Offset: 0x0
    uint unPacketNum;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: unPacketNum and: ulButtonPressed
    char __padding0[0x4] = {};
    // public System.UInt64 ulButtonPressed
    // Size: 0x8
    // Offset: 0x8
    uint64_t ulButtonPressed;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 ulButtonTouched
    // Size: 0x8
    // Offset: 0x10
    uint64_t ulButtonTouched;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public Valve.VR.VRControllerAxis_t rAxis0
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::VRControllerAxis_t rAxis0;
    // Field size check
    static_assert(sizeof(::Valve::VR::VRControllerAxis_t) == 0x8);
    // public Valve.VR.VRControllerAxis_t rAxis1
    // Size: 0x8
    // Offset: 0x20
    ::Valve::VR::VRControllerAxis_t rAxis1;
    // Field size check
    static_assert(sizeof(::Valve::VR::VRControllerAxis_t) == 0x8);
    // public Valve.VR.VRControllerAxis_t rAxis2
    // Size: 0x8
    // Offset: 0x28
    ::Valve::VR::VRControllerAxis_t rAxis2;
    // Field size check
    static_assert(sizeof(::Valve::VR::VRControllerAxis_t) == 0x8);
    // public Valve.VR.VRControllerAxis_t rAxis3
    // Size: 0x8
    // Offset: 0x30
    ::Valve::VR::VRControllerAxis_t rAxis3;
    // Field size check
    static_assert(sizeof(::Valve::VR::VRControllerAxis_t) == 0x8);
    // public Valve.VR.VRControllerAxis_t rAxis4
    // Size: 0x8
    // Offset: 0x38
    ::Valve::VR::VRControllerAxis_t rAxis4;
    // Field size check
    static_assert(sizeof(::Valve::VR::VRControllerAxis_t) == 0x8);
    public:
    // Creating value type constructor for type: VRControllerState_t
    constexpr VRControllerState_t(uint unPacketNum_ = {}, uint64_t ulButtonPressed_ = {}, uint64_t ulButtonTouched_ = {}, ::Valve::VR::VRControllerAxis_t rAxis0_ = {}, ::Valve::VR::VRControllerAxis_t rAxis1_ = {}, ::Valve::VR::VRControllerAxis_t rAxis2_ = {}, ::Valve::VR::VRControllerAxis_t rAxis3_ = {}, ::Valve::VR::VRControllerAxis_t rAxis4_ = {}) noexcept : unPacketNum{unPacketNum_}, ulButtonPressed{ulButtonPressed_}, ulButtonTouched{ulButtonTouched_}, rAxis0{rAxis0_}, rAxis1{rAxis1_}, rAxis2{rAxis2_}, rAxis3{rAxis3_}, rAxis4{rAxis4_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 unPacketNum
    [[deprecated("Use field access instead!")]] uint& dyn_unPacketNum();
    // Get instance field reference: public System.UInt64 ulButtonPressed
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulButtonPressed();
    // Get instance field reference: public System.UInt64 ulButtonTouched
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulButtonTouched();
    // Get instance field reference: public Valve.VR.VRControllerAxis_t rAxis0
    [[deprecated("Use field access instead!")]] ::Valve::VR::VRControllerAxis_t& dyn_rAxis0();
    // Get instance field reference: public Valve.VR.VRControllerAxis_t rAxis1
    [[deprecated("Use field access instead!")]] ::Valve::VR::VRControllerAxis_t& dyn_rAxis1();
    // Get instance field reference: public Valve.VR.VRControllerAxis_t rAxis2
    [[deprecated("Use field access instead!")]] ::Valve::VR::VRControllerAxis_t& dyn_rAxis2();
    // Get instance field reference: public Valve.VR.VRControllerAxis_t rAxis3
    [[deprecated("Use field access instead!")]] ::Valve::VR::VRControllerAxis_t& dyn_rAxis3();
    // Get instance field reference: public Valve.VR.VRControllerAxis_t rAxis4
    [[deprecated("Use field access instead!")]] ::Valve::VR::VRControllerAxis_t& dyn_rAxis4();
  }; // Valve.VR.VRControllerState_t
  #pragma pack(pop)
  static check_size<sizeof(VRControllerState_t), 56 + sizeof(::Valve::VR::VRControllerAxis_t)> __Valve_VR_VRControllerState_tSizeCheck;
  static_assert(sizeof(VRControllerState_t) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"