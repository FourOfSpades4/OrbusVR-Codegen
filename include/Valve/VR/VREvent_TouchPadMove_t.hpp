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
  // Forward declaring type: VREvent_TouchPadMove_t
  struct VREvent_TouchPadMove_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_TouchPadMove_t, "Valve.VR", "VREvent_TouchPadMove_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_TouchPadMove_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_TouchPadMove_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean bFingerDown
    // Size: 0x1
    // Offset: 0x0
    bool bFingerDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bFingerDown and: flSecondsFingerDown
    char __padding0[0x3] = {};
    // public System.Single flSecondsFingerDown
    // Size: 0x4
    // Offset: 0x4
    float flSecondsFingerDown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fValueXFirst
    // Size: 0x4
    // Offset: 0x8
    float fValueXFirst;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fValueYFirst
    // Size: 0x4
    // Offset: 0xC
    float fValueYFirst;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fValueXRaw
    // Size: 0x4
    // Offset: 0x10
    float fValueXRaw;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fValueYRaw
    // Size: 0x4
    // Offset: 0x14
    float fValueYRaw;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_TouchPadMove_t
    constexpr VREvent_TouchPadMove_t(bool bFingerDown_ = {}, float flSecondsFingerDown_ = {}, float fValueXFirst_ = {}, float fValueYFirst_ = {}, float fValueXRaw_ = {}, float fValueYRaw_ = {}) noexcept : bFingerDown{bFingerDown_}, flSecondsFingerDown{flSecondsFingerDown_}, fValueXFirst{fValueXFirst_}, fValueYFirst{fValueYFirst_}, fValueXRaw{fValueXRaw_}, fValueYRaw{fValueYRaw_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean bFingerDown
    [[deprecated("Use field access instead!")]] bool& dyn_bFingerDown();
    // Get instance field reference: public System.Single flSecondsFingerDown
    [[deprecated("Use field access instead!")]] float& dyn_flSecondsFingerDown();
    // Get instance field reference: public System.Single fValueXFirst
    [[deprecated("Use field access instead!")]] float& dyn_fValueXFirst();
    // Get instance field reference: public System.Single fValueYFirst
    [[deprecated("Use field access instead!")]] float& dyn_fValueYFirst();
    // Get instance field reference: public System.Single fValueXRaw
    [[deprecated("Use field access instead!")]] float& dyn_fValueXRaw();
    // Get instance field reference: public System.Single fValueYRaw
    [[deprecated("Use field access instead!")]] float& dyn_fValueYRaw();
  }; // Valve.VR.VREvent_TouchPadMove_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_TouchPadMove_t), 20 + sizeof(float)> __Valve_VR_VREvent_TouchPadMove_tSizeCheck;
  static_assert(sizeof(VREvent_TouchPadMove_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
