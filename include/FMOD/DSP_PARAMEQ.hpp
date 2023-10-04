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
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_PARAMEQ
  struct DSP_PARAMEQ;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_PARAMEQ, "FMOD", "DSP_PARAMEQ");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.DSP_PARAMEQ
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_PARAMEQ/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSP_PARAMEQ
    constexpr DSP_PARAMEQ(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.DSP_PARAMEQ CENTER
    static constexpr const int CENTER = 0;
    // Get static field: static public FMOD.DSP_PARAMEQ CENTER
    static ::FMOD::DSP_PARAMEQ _get_CENTER();
    // Set static field: static public FMOD.DSP_PARAMEQ CENTER
    static void _set_CENTER(::FMOD::DSP_PARAMEQ value);
    // static field const value: static public FMOD.DSP_PARAMEQ BANDWIDTH
    static constexpr const int BANDWIDTH = 1;
    // Get static field: static public FMOD.DSP_PARAMEQ BANDWIDTH
    static ::FMOD::DSP_PARAMEQ _get_BANDWIDTH();
    // Set static field: static public FMOD.DSP_PARAMEQ BANDWIDTH
    static void _set_BANDWIDTH(::FMOD::DSP_PARAMEQ value);
    // static field const value: static public FMOD.DSP_PARAMEQ GAIN
    static constexpr const int GAIN = 2;
    // Get static field: static public FMOD.DSP_PARAMEQ GAIN
    static ::FMOD::DSP_PARAMEQ _get_GAIN();
    // Set static field: static public FMOD.DSP_PARAMEQ GAIN
    static void _set_GAIN(::FMOD::DSP_PARAMEQ value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.DSP_PARAMEQ
  #pragma pack(pop)
  static check_size<sizeof(DSP_PARAMEQ), 0 + sizeof(int)> __FMOD_DSP_PARAMEQSizeCheck;
  static_assert(sizeof(DSP_PARAMEQ) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
