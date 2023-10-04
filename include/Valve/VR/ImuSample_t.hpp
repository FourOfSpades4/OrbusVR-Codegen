// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector3d_t
#include "Valve/VR/HmdVector3d_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: ImuSample_t
  struct ImuSample_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::ImuSample_t, "Valve.VR", "ImuSample_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.ImuSample_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ImuSample_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double fSampleTime
    // Size: 0x8
    // Offset: 0x0
    double fSampleTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public Valve.VR.HmdVector3d_t vAccel
    // Size: 0x18
    // Offset: 0x8
    ::Valve::VR::HmdVector3d_t vAccel;
    // Field size check
    static_assert(sizeof(::Valve::VR::HmdVector3d_t) == 0x18);
    // public Valve.VR.HmdVector3d_t vGyro
    // Size: 0x18
    // Offset: 0x20
    ::Valve::VR::HmdVector3d_t vGyro;
    // Field size check
    static_assert(sizeof(::Valve::VR::HmdVector3d_t) == 0x18);
    // public System.UInt32 unOffScaleFlags
    // Size: 0x4
    // Offset: 0x38
    uint unOffScaleFlags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ImuSample_t
    constexpr ImuSample_t(double fSampleTime_ = {}, ::Valve::VR::HmdVector3d_t vAccel_ = {}, ::Valve::VR::HmdVector3d_t vGyro_ = {}, uint unOffScaleFlags_ = {}) noexcept : fSampleTime{fSampleTime_}, vAccel{vAccel_}, vGyro{vGyro_}, unOffScaleFlags{unOffScaleFlags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double fSampleTime
    [[deprecated("Use field access instead!")]] double& dyn_fSampleTime();
    // Get instance field reference: public Valve.VR.HmdVector3d_t vAccel
    [[deprecated("Use field access instead!")]] ::Valve::VR::HmdVector3d_t& dyn_vAccel();
    // Get instance field reference: public Valve.VR.HmdVector3d_t vGyro
    [[deprecated("Use field access instead!")]] ::Valve::VR::HmdVector3d_t& dyn_vGyro();
    // Get instance field reference: public System.UInt32 unOffScaleFlags
    [[deprecated("Use field access instead!")]] uint& dyn_unOffScaleFlags();
  }; // Valve.VR.ImuSample_t
  #pragma pack(pop)
  static check_size<sizeof(ImuSample_t), 56 + sizeof(uint)> __Valve_VR_ImuSample_tSizeCheck;
  static_assert(sizeof(ImuSample_t) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"