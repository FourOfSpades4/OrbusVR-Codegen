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
  // Forward declaring type: INITFLAGS
  struct INITFLAGS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::INITFLAGS, "FMOD", "INITFLAGS");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.INITFLAGS
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct INITFLAGS/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: INITFLAGS
    constexpr INITFLAGS(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.INITFLAGS NORMAL
    static constexpr const uint NORMAL = 0u;
    // Get static field: static public FMOD.INITFLAGS NORMAL
    static ::FMOD::INITFLAGS _get_NORMAL();
    // Set static field: static public FMOD.INITFLAGS NORMAL
    static void _set_NORMAL(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS STREAM_FROM_UPDATE
    static constexpr const uint STREAM_FROM_UPDATE = 1u;
    // Get static field: static public FMOD.INITFLAGS STREAM_FROM_UPDATE
    static ::FMOD::INITFLAGS _get_STREAM_FROM_UPDATE();
    // Set static field: static public FMOD.INITFLAGS STREAM_FROM_UPDATE
    static void _set_STREAM_FROM_UPDATE(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS MIX_FROM_UPDATE
    static constexpr const uint MIX_FROM_UPDATE = 2u;
    // Get static field: static public FMOD.INITFLAGS MIX_FROM_UPDATE
    static ::FMOD::INITFLAGS _get_MIX_FROM_UPDATE();
    // Set static field: static public FMOD.INITFLAGS MIX_FROM_UPDATE
    static void _set_MIX_FROM_UPDATE(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS _3D_RIGHTHANDED
    static constexpr const uint _3D_RIGHTHANDED = 4u;
    // Get static field: static public FMOD.INITFLAGS _3D_RIGHTHANDED
    static ::FMOD::INITFLAGS _get__3D_RIGHTHANDED();
    // Set static field: static public FMOD.INITFLAGS _3D_RIGHTHANDED
    static void _set__3D_RIGHTHANDED(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS CHANNEL_LOWPASS
    static constexpr const uint CHANNEL_LOWPASS = 256u;
    // Get static field: static public FMOD.INITFLAGS CHANNEL_LOWPASS
    static ::FMOD::INITFLAGS _get_CHANNEL_LOWPASS();
    // Set static field: static public FMOD.INITFLAGS CHANNEL_LOWPASS
    static void _set_CHANNEL_LOWPASS(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS CHANNEL_DISTANCEFILTER
    static constexpr const uint CHANNEL_DISTANCEFILTER = 512u;
    // Get static field: static public FMOD.INITFLAGS CHANNEL_DISTANCEFILTER
    static ::FMOD::INITFLAGS _get_CHANNEL_DISTANCEFILTER();
    // Set static field: static public FMOD.INITFLAGS CHANNEL_DISTANCEFILTER
    static void _set_CHANNEL_DISTANCEFILTER(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS PROFILE_ENABLE
    static constexpr const uint PROFILE_ENABLE = 65536u;
    // Get static field: static public FMOD.INITFLAGS PROFILE_ENABLE
    static ::FMOD::INITFLAGS _get_PROFILE_ENABLE();
    // Set static field: static public FMOD.INITFLAGS PROFILE_ENABLE
    static void _set_PROFILE_ENABLE(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS VOL0_BECOMES_VIRTUAL
    static constexpr const uint VOL0_BECOMES_VIRTUAL = 131072u;
    // Get static field: static public FMOD.INITFLAGS VOL0_BECOMES_VIRTUAL
    static ::FMOD::INITFLAGS _get_VOL0_BECOMES_VIRTUAL();
    // Set static field: static public FMOD.INITFLAGS VOL0_BECOMES_VIRTUAL
    static void _set_VOL0_BECOMES_VIRTUAL(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS GEOMETRY_USECLOSEST
    static constexpr const uint GEOMETRY_USECLOSEST = 262144u;
    // Get static field: static public FMOD.INITFLAGS GEOMETRY_USECLOSEST
    static ::FMOD::INITFLAGS _get_GEOMETRY_USECLOSEST();
    // Set static field: static public FMOD.INITFLAGS GEOMETRY_USECLOSEST
    static void _set_GEOMETRY_USECLOSEST(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS PREFER_DOLBY_DOWNMIX
    static constexpr const uint PREFER_DOLBY_DOWNMIX = 524288u;
    // Get static field: static public FMOD.INITFLAGS PREFER_DOLBY_DOWNMIX
    static ::FMOD::INITFLAGS _get_PREFER_DOLBY_DOWNMIX();
    // Set static field: static public FMOD.INITFLAGS PREFER_DOLBY_DOWNMIX
    static void _set_PREFER_DOLBY_DOWNMIX(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS THREAD_UNSAFE
    static constexpr const uint THREAD_UNSAFE = 1048576u;
    // Get static field: static public FMOD.INITFLAGS THREAD_UNSAFE
    static ::FMOD::INITFLAGS _get_THREAD_UNSAFE();
    // Set static field: static public FMOD.INITFLAGS THREAD_UNSAFE
    static void _set_THREAD_UNSAFE(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS PROFILE_METER_ALL
    static constexpr const uint PROFILE_METER_ALL = 2097152u;
    // Get static field: static public FMOD.INITFLAGS PROFILE_METER_ALL
    static ::FMOD::INITFLAGS _get_PROFILE_METER_ALL();
    // Set static field: static public FMOD.INITFLAGS PROFILE_METER_ALL
    static void _set_PROFILE_METER_ALL(::FMOD::INITFLAGS value);
    // static field const value: static public FMOD.INITFLAGS DISABLE_SRS_HIGHPASSFILTER
    static constexpr const uint DISABLE_SRS_HIGHPASSFILTER = 4194304u;
    // Get static field: static public FMOD.INITFLAGS DISABLE_SRS_HIGHPASSFILTER
    static ::FMOD::INITFLAGS _get_DISABLE_SRS_HIGHPASSFILTER();
    // Set static field: static public FMOD.INITFLAGS DISABLE_SRS_HIGHPASSFILTER
    static void _set_DISABLE_SRS_HIGHPASSFILTER(::FMOD::INITFLAGS value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // FMOD.INITFLAGS
  #pragma pack(pop)
  static check_size<sizeof(INITFLAGS), 0 + sizeof(uint)> __FMOD_INITFLAGSSizeCheck;
  static_assert(sizeof(INITFLAGS) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
