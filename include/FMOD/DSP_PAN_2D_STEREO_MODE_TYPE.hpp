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
  // Forward declaring type: DSP_PAN_2D_STEREO_MODE_TYPE
  struct DSP_PAN_2D_STEREO_MODE_TYPE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_PAN_2D_STEREO_MODE_TYPE, "FMOD", "DSP_PAN_2D_STEREO_MODE_TYPE");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.DSP_PAN_2D_STEREO_MODE_TYPE
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_PAN_2D_STEREO_MODE_TYPE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSP_PAN_2D_STEREO_MODE_TYPE
    constexpr DSP_PAN_2D_STEREO_MODE_TYPE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.DSP_PAN_2D_STEREO_MODE_TYPE DISTRIBUTED
    static constexpr const int DISTRIBUTED = 0;
    // Get static field: static public FMOD.DSP_PAN_2D_STEREO_MODE_TYPE DISTRIBUTED
    static ::FMOD::DSP_PAN_2D_STEREO_MODE_TYPE _get_DISTRIBUTED();
    // Set static field: static public FMOD.DSP_PAN_2D_STEREO_MODE_TYPE DISTRIBUTED
    static void _set_DISTRIBUTED(::FMOD::DSP_PAN_2D_STEREO_MODE_TYPE value);
    // static field const value: static public FMOD.DSP_PAN_2D_STEREO_MODE_TYPE DISCRETE
    static constexpr const int DISCRETE = 1;
    // Get static field: static public FMOD.DSP_PAN_2D_STEREO_MODE_TYPE DISCRETE
    static ::FMOD::DSP_PAN_2D_STEREO_MODE_TYPE _get_DISCRETE();
    // Set static field: static public FMOD.DSP_PAN_2D_STEREO_MODE_TYPE DISCRETE
    static void _set_DISCRETE(::FMOD::DSP_PAN_2D_STEREO_MODE_TYPE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.DSP_PAN_2D_STEREO_MODE_TYPE
  #pragma pack(pop)
  static check_size<sizeof(DSP_PAN_2D_STEREO_MODE_TYPE), 0 + sizeof(int)> __FMOD_DSP_PAN_2D_STEREO_MODE_TYPESizeCheck;
  static_assert(sizeof(DSP_PAN_2D_STEREO_MODE_TYPE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
