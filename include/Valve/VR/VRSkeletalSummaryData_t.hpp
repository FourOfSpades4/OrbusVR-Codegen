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
  // Forward declaring type: VRSkeletalSummaryData_t
  struct VRSkeletalSummaryData_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VRSkeletalSummaryData_t, "Valve.VR", "VRSkeletalSummaryData_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VRSkeletalSummaryData_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRSkeletalSummaryData_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single flFingerCurl0
    // Size: 0x4
    // Offset: 0x0
    float flFingerCurl0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerCurl1
    // Size: 0x4
    // Offset: 0x4
    float flFingerCurl1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerCurl2
    // Size: 0x4
    // Offset: 0x8
    float flFingerCurl2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerCurl3
    // Size: 0x4
    // Offset: 0xC
    float flFingerCurl3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerCurl4
    // Size: 0x4
    // Offset: 0x10
    float flFingerCurl4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerSplay0
    // Size: 0x4
    // Offset: 0x14
    float flFingerSplay0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerSplay1
    // Size: 0x4
    // Offset: 0x18
    float flFingerSplay1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerSplay2
    // Size: 0x4
    // Offset: 0x1C
    float flFingerSplay2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flFingerSplay3
    // Size: 0x4
    // Offset: 0x20
    float flFingerSplay3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VRSkeletalSummaryData_t
    constexpr VRSkeletalSummaryData_t(float flFingerCurl0_ = {}, float flFingerCurl1_ = {}, float flFingerCurl2_ = {}, float flFingerCurl3_ = {}, float flFingerCurl4_ = {}, float flFingerSplay0_ = {}, float flFingerSplay1_ = {}, float flFingerSplay2_ = {}, float flFingerSplay3_ = {}) noexcept : flFingerCurl0{flFingerCurl0_}, flFingerCurl1{flFingerCurl1_}, flFingerCurl2{flFingerCurl2_}, flFingerCurl3{flFingerCurl3_}, flFingerCurl4{flFingerCurl4_}, flFingerSplay0{flFingerSplay0_}, flFingerSplay1{flFingerSplay1_}, flFingerSplay2{flFingerSplay2_}, flFingerSplay3{flFingerSplay3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single flFingerCurl0
    [[deprecated("Use field access instead!")]] float& dyn_flFingerCurl0();
    // Get instance field reference: public System.Single flFingerCurl1
    [[deprecated("Use field access instead!")]] float& dyn_flFingerCurl1();
    // Get instance field reference: public System.Single flFingerCurl2
    [[deprecated("Use field access instead!")]] float& dyn_flFingerCurl2();
    // Get instance field reference: public System.Single flFingerCurl3
    [[deprecated("Use field access instead!")]] float& dyn_flFingerCurl3();
    // Get instance field reference: public System.Single flFingerCurl4
    [[deprecated("Use field access instead!")]] float& dyn_flFingerCurl4();
    // Get instance field reference: public System.Single flFingerSplay0
    [[deprecated("Use field access instead!")]] float& dyn_flFingerSplay0();
    // Get instance field reference: public System.Single flFingerSplay1
    [[deprecated("Use field access instead!")]] float& dyn_flFingerSplay1();
    // Get instance field reference: public System.Single flFingerSplay2
    [[deprecated("Use field access instead!")]] float& dyn_flFingerSplay2();
    // Get instance field reference: public System.Single flFingerSplay3
    [[deprecated("Use field access instead!")]] float& dyn_flFingerSplay3();
  }; // Valve.VR.VRSkeletalSummaryData_t
  #pragma pack(pop)
  static check_size<sizeof(VRSkeletalSummaryData_t), 32 + sizeof(float)> __Valve_VR_VRSkeletalSummaryData_tSizeCheck;
  static_assert(sizeof(VRSkeletalSummaryData_t) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"