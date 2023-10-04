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
  // Forward declaring type: DSP_PAN
  struct DSP_PAN;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_PAN, "FMOD", "DSP_PAN");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.DSP_PAN
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_PAN/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSP_PAN
    constexpr DSP_PAN(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.DSP_PAN MODE
    static constexpr const int MODE = 0;
    // Get static field: static public FMOD.DSP_PAN MODE
    static ::FMOD::DSP_PAN _get_MODE();
    // Set static field: static public FMOD.DSP_PAN MODE
    static void _set_MODE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_STEREO_POSITION
    static constexpr const int _2D_STEREO_POSITION = 1;
    // Get static field: static public FMOD.DSP_PAN _2D_STEREO_POSITION
    static ::FMOD::DSP_PAN _get__2D_STEREO_POSITION();
    // Set static field: static public FMOD.DSP_PAN _2D_STEREO_POSITION
    static void _set__2D_STEREO_POSITION(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_DIRECTION
    static constexpr const int _2D_DIRECTION = 2;
    // Get static field: static public FMOD.DSP_PAN _2D_DIRECTION
    static ::FMOD::DSP_PAN _get__2D_DIRECTION();
    // Set static field: static public FMOD.DSP_PAN _2D_DIRECTION
    static void _set__2D_DIRECTION(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_EXTENT
    static constexpr const int _2D_EXTENT = 3;
    // Get static field: static public FMOD.DSP_PAN _2D_EXTENT
    static ::FMOD::DSP_PAN _get__2D_EXTENT();
    // Set static field: static public FMOD.DSP_PAN _2D_EXTENT
    static void _set__2D_EXTENT(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_ROTATION
    static constexpr const int _2D_ROTATION = 4;
    // Get static field: static public FMOD.DSP_PAN _2D_ROTATION
    static ::FMOD::DSP_PAN _get__2D_ROTATION();
    // Set static field: static public FMOD.DSP_PAN _2D_ROTATION
    static void _set__2D_ROTATION(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_LFE_LEVEL
    static constexpr const int _2D_LFE_LEVEL = 5;
    // Get static field: static public FMOD.DSP_PAN _2D_LFE_LEVEL
    static ::FMOD::DSP_PAN _get__2D_LFE_LEVEL();
    // Set static field: static public FMOD.DSP_PAN _2D_LFE_LEVEL
    static void _set__2D_LFE_LEVEL(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_STEREO_MODE
    static constexpr const int _2D_STEREO_MODE = 6;
    // Get static field: static public FMOD.DSP_PAN _2D_STEREO_MODE
    static ::FMOD::DSP_PAN _get__2D_STEREO_MODE();
    // Set static field: static public FMOD.DSP_PAN _2D_STEREO_MODE
    static void _set__2D_STEREO_MODE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_STEREO_SEPARATION
    static constexpr const int _2D_STEREO_SEPARATION = 7;
    // Get static field: static public FMOD.DSP_PAN _2D_STEREO_SEPARATION
    static ::FMOD::DSP_PAN _get__2D_STEREO_SEPARATION();
    // Set static field: static public FMOD.DSP_PAN _2D_STEREO_SEPARATION
    static void _set__2D_STEREO_SEPARATION(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_STEREO_AXIS
    static constexpr const int _2D_STEREO_AXIS = 8;
    // Get static field: static public FMOD.DSP_PAN _2D_STEREO_AXIS
    static ::FMOD::DSP_PAN _get__2D_STEREO_AXIS();
    // Set static field: static public FMOD.DSP_PAN _2D_STEREO_AXIS
    static void _set__2D_STEREO_AXIS(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN ENABLED_SPEAKERS
    static constexpr const int ENABLED_SPEAKERS = 9;
    // Get static field: static public FMOD.DSP_PAN ENABLED_SPEAKERS
    static ::FMOD::DSP_PAN _get_ENABLED_SPEAKERS();
    // Set static field: static public FMOD.DSP_PAN ENABLED_SPEAKERS
    static void _set_ENABLED_SPEAKERS(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_POSITION
    static constexpr const int _3D_POSITION = 10;
    // Get static field: static public FMOD.DSP_PAN _3D_POSITION
    static ::FMOD::DSP_PAN _get__3D_POSITION();
    // Set static field: static public FMOD.DSP_PAN _3D_POSITION
    static void _set__3D_POSITION(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_ROLLOFF
    static constexpr const int _3D_ROLLOFF = 11;
    // Get static field: static public FMOD.DSP_PAN _3D_ROLLOFF
    static ::FMOD::DSP_PAN _get__3D_ROLLOFF();
    // Set static field: static public FMOD.DSP_PAN _3D_ROLLOFF
    static void _set__3D_ROLLOFF(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_MIN_DISTANCE
    static constexpr const int _3D_MIN_DISTANCE = 12;
    // Get static field: static public FMOD.DSP_PAN _3D_MIN_DISTANCE
    static ::FMOD::DSP_PAN _get__3D_MIN_DISTANCE();
    // Set static field: static public FMOD.DSP_PAN _3D_MIN_DISTANCE
    static void _set__3D_MIN_DISTANCE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_MAX_DISTANCE
    static constexpr const int _3D_MAX_DISTANCE = 13;
    // Get static field: static public FMOD.DSP_PAN _3D_MAX_DISTANCE
    static ::FMOD::DSP_PAN _get__3D_MAX_DISTANCE();
    // Set static field: static public FMOD.DSP_PAN _3D_MAX_DISTANCE
    static void _set__3D_MAX_DISTANCE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_EXTENT_MODE
    static constexpr const int _3D_EXTENT_MODE = 14;
    // Get static field: static public FMOD.DSP_PAN _3D_EXTENT_MODE
    static ::FMOD::DSP_PAN _get__3D_EXTENT_MODE();
    // Set static field: static public FMOD.DSP_PAN _3D_EXTENT_MODE
    static void _set__3D_EXTENT_MODE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_SOUND_SIZE
    static constexpr const int _3D_SOUND_SIZE = 15;
    // Get static field: static public FMOD.DSP_PAN _3D_SOUND_SIZE
    static ::FMOD::DSP_PAN _get__3D_SOUND_SIZE();
    // Set static field: static public FMOD.DSP_PAN _3D_SOUND_SIZE
    static void _set__3D_SOUND_SIZE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_MIN_EXTENT
    static constexpr const int _3D_MIN_EXTENT = 16;
    // Get static field: static public FMOD.DSP_PAN _3D_MIN_EXTENT
    static ::FMOD::DSP_PAN _get__3D_MIN_EXTENT();
    // Set static field: static public FMOD.DSP_PAN _3D_MIN_EXTENT
    static void _set__3D_MIN_EXTENT(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _3D_PAN_BLEND
    static constexpr const int _3D_PAN_BLEND = 17;
    // Get static field: static public FMOD.DSP_PAN _3D_PAN_BLEND
    static ::FMOD::DSP_PAN _get__3D_PAN_BLEND();
    // Set static field: static public FMOD.DSP_PAN _3D_PAN_BLEND
    static void _set__3D_PAN_BLEND(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN LFE_UPMIX_ENABLED
    static constexpr const int LFE_UPMIX_ENABLED = 18;
    // Get static field: static public FMOD.DSP_PAN LFE_UPMIX_ENABLED
    static ::FMOD::DSP_PAN _get_LFE_UPMIX_ENABLED();
    // Set static field: static public FMOD.DSP_PAN LFE_UPMIX_ENABLED
    static void _set_LFE_UPMIX_ENABLED(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN OVERALL_GAIN
    static constexpr const int OVERALL_GAIN = 19;
    // Get static field: static public FMOD.DSP_PAN OVERALL_GAIN
    static ::FMOD::DSP_PAN _get_OVERALL_GAIN();
    // Set static field: static public FMOD.DSP_PAN OVERALL_GAIN
    static void _set_OVERALL_GAIN(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN SURROUND_SPEAKER_MODE
    static constexpr const int SURROUND_SPEAKER_MODE = 20;
    // Get static field: static public FMOD.DSP_PAN SURROUND_SPEAKER_MODE
    static ::FMOD::DSP_PAN _get_SURROUND_SPEAKER_MODE();
    // Set static field: static public FMOD.DSP_PAN SURROUND_SPEAKER_MODE
    static void _set_SURROUND_SPEAKER_MODE(::FMOD::DSP_PAN value);
    // static field const value: static public FMOD.DSP_PAN _2D_HEIGHT_BLEND
    static constexpr const int _2D_HEIGHT_BLEND = 21;
    // Get static field: static public FMOD.DSP_PAN _2D_HEIGHT_BLEND
    static ::FMOD::DSP_PAN _get__2D_HEIGHT_BLEND();
    // Set static field: static public FMOD.DSP_PAN _2D_HEIGHT_BLEND
    static void _set__2D_HEIGHT_BLEND(::FMOD::DSP_PAN value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.DSP_PAN
  #pragma pack(pop)
  static check_size<sizeof(DSP_PAN), 0 + sizeof(int)> __FMOD_DSP_PANSizeCheck;
  static_assert(sizeof(DSP_PAN) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"