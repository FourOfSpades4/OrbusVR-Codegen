// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_METERING_INFO
  struct DSP_METERING_INFO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_METERING_INFO, "FMOD", "DSP_METERING_INFO");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x1A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.DSP_METERING_INFO
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_METERING_INFO/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 numsamples
    // Size: 0x4
    // Offset: 0x0
    int numsamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numsamples and: peaklevel
    char __padding0[0x4] = {};
    // public System.Single[] peaklevel
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> peaklevel;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] rmslevel
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> rmslevel;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Int16 numchannels
    // Size: 0x2
    // Offset: 0x18
    int16_t numchannels;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Creating value type constructor for type: DSP_METERING_INFO
    constexpr DSP_METERING_INFO(int numsamples_ = {}, ::ArrayW<float> peaklevel_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> rmslevel_ = ::ArrayW<float>(static_cast<void*>(nullptr)), int16_t numchannels_ = {}) noexcept : numsamples{numsamples_}, peaklevel{peaklevel_}, rmslevel{rmslevel_}, numchannels{numchannels_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 numsamples
    [[deprecated("Use field access instead!")]] int& dyn_numsamples();
    // Get instance field reference: public System.Single[] peaklevel
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_peaklevel();
    // Get instance field reference: public System.Single[] rmslevel
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_rmslevel();
    // Get instance field reference: public System.Int16 numchannels
    [[deprecated("Use field access instead!")]] int16_t& dyn_numchannels();
  }; // FMOD.DSP_METERING_INFO
  #pragma pack(pop)
  static check_size<sizeof(DSP_METERING_INFO), 24 + sizeof(int16_t)> __FMOD_DSP_METERING_INFOSizeCheck;
  static_assert(sizeof(DSP_METERING_INFO) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
