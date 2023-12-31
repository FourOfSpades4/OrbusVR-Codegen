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
  // Forward declaring type: DSP_OBJECTPAN
  struct DSP_OBJECTPAN;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_OBJECTPAN, "FMOD", "DSP_OBJECTPAN");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.DSP_OBJECTPAN
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_OBJECTPAN/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSP_OBJECTPAN
    constexpr DSP_OBJECTPAN(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_POSITION
    static constexpr const int _3D_POSITION = 0;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_POSITION
    static ::FMOD::DSP_OBJECTPAN _get__3D_POSITION();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_POSITION
    static void _set__3D_POSITION(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_ROLLOFF
    static constexpr const int _3D_ROLLOFF = 1;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_ROLLOFF
    static ::FMOD::DSP_OBJECTPAN _get__3D_ROLLOFF();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_ROLLOFF
    static void _set__3D_ROLLOFF(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_MIN_DISTANCE
    static constexpr const int _3D_MIN_DISTANCE = 2;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_MIN_DISTANCE
    static ::FMOD::DSP_OBJECTPAN _get__3D_MIN_DISTANCE();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_MIN_DISTANCE
    static void _set__3D_MIN_DISTANCE(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_MAX_DISTANCE
    static constexpr const int _3D_MAX_DISTANCE = 3;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_MAX_DISTANCE
    static ::FMOD::DSP_OBJECTPAN _get__3D_MAX_DISTANCE();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_MAX_DISTANCE
    static void _set__3D_MAX_DISTANCE(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_EXTENT_MODE
    static constexpr const int _3D_EXTENT_MODE = 4;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_EXTENT_MODE
    static ::FMOD::DSP_OBJECTPAN _get__3D_EXTENT_MODE();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_EXTENT_MODE
    static void _set__3D_EXTENT_MODE(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_SOUND_SIZE
    static constexpr const int _3D_SOUND_SIZE = 5;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_SOUND_SIZE
    static ::FMOD::DSP_OBJECTPAN _get__3D_SOUND_SIZE();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_SOUND_SIZE
    static void _set__3D_SOUND_SIZE(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN _3D_MIN_EXTENT
    static constexpr const int _3D_MIN_EXTENT = 6;
    // Get static field: static public FMOD.DSP_OBJECTPAN _3D_MIN_EXTENT
    static ::FMOD::DSP_OBJECTPAN _get__3D_MIN_EXTENT();
    // Set static field: static public FMOD.DSP_OBJECTPAN _3D_MIN_EXTENT
    static void _set__3D_MIN_EXTENT(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN OVERALL_GAIN
    static constexpr const int OVERALL_GAIN = 7;
    // Get static field: static public FMOD.DSP_OBJECTPAN OVERALL_GAIN
    static ::FMOD::DSP_OBJECTPAN _get_OVERALL_GAIN();
    // Set static field: static public FMOD.DSP_OBJECTPAN OVERALL_GAIN
    static void _set_OVERALL_GAIN(::FMOD::DSP_OBJECTPAN value);
    // static field const value: static public FMOD.DSP_OBJECTPAN OUTPUTGAIN
    static constexpr const int OUTPUTGAIN = 8;
    // Get static field: static public FMOD.DSP_OBJECTPAN OUTPUTGAIN
    static ::FMOD::DSP_OBJECTPAN _get_OUTPUTGAIN();
    // Set static field: static public FMOD.DSP_OBJECTPAN OUTPUTGAIN
    static void _set_OUTPUTGAIN(::FMOD::DSP_OBJECTPAN value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.DSP_OBJECTPAN
  #pragma pack(pop)
  static check_size<sizeof(DSP_OBJECTPAN), 0 + sizeof(int)> __FMOD_DSP_OBJECTPANSizeCheck;
  static_assert(sizeof(DSP_OBJECTPAN) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
