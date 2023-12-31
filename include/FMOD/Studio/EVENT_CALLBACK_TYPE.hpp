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
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: EVENT_CALLBACK_TYPE
  struct EVENT_CALLBACK_TYPE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::EVENT_CALLBACK_TYPE, "FMOD.Studio", "EVENT_CALLBACK_TYPE");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.Studio.EVENT_CALLBACK_TYPE
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EVENT_CALLBACK_TYPE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: EVENT_CALLBACK_TYPE
    constexpr EVENT_CALLBACK_TYPE(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE CREATED
    static constexpr const uint CREATED = 1u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE CREATED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_CREATED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE CREATED
    static void _set_CREATED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE DESTROYED
    static constexpr const uint DESTROYED = 2u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE DESTROYED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_DESTROYED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE DESTROYED
    static void _set_DESTROYED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE STARTING
    static constexpr const uint STARTING = 4u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE STARTING
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_STARTING();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE STARTING
    static void _set_STARTING(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE STARTED
    static constexpr const uint STARTED = 8u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE STARTED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_STARTED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE STARTED
    static void _set_STARTED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE RESTARTED
    static constexpr const uint RESTARTED = 16u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE RESTARTED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_RESTARTED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE RESTARTED
    static void _set_RESTARTED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE STOPPED
    static constexpr const uint STOPPED = 32u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE STOPPED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_STOPPED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE STOPPED
    static void _set_STOPPED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE START_FAILED
    static constexpr const uint START_FAILED = 64u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE START_FAILED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_START_FAILED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE START_FAILED
    static void _set_START_FAILED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE CREATE_PROGRAMMER_SOUND
    static constexpr const uint CREATE_PROGRAMMER_SOUND = 128u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE CREATE_PROGRAMMER_SOUND
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_CREATE_PROGRAMMER_SOUND();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE CREATE_PROGRAMMER_SOUND
    static void _set_CREATE_PROGRAMMER_SOUND(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE DESTROY_PROGRAMMER_SOUND
    static constexpr const uint DESTROY_PROGRAMMER_SOUND = 256u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE DESTROY_PROGRAMMER_SOUND
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_DESTROY_PROGRAMMER_SOUND();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE DESTROY_PROGRAMMER_SOUND
    static void _set_DESTROY_PROGRAMMER_SOUND(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE PLUGIN_CREATED
    static constexpr const uint PLUGIN_CREATED = 512u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE PLUGIN_CREATED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_PLUGIN_CREATED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE PLUGIN_CREATED
    static void _set_PLUGIN_CREATED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE PLUGIN_DESTROYED
    static constexpr const uint PLUGIN_DESTROYED = 1024u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE PLUGIN_DESTROYED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_PLUGIN_DESTROYED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE PLUGIN_DESTROYED
    static void _set_PLUGIN_DESTROYED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE TIMELINE_MARKER
    static constexpr const uint TIMELINE_MARKER = 2048u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE TIMELINE_MARKER
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_TIMELINE_MARKER();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE TIMELINE_MARKER
    static void _set_TIMELINE_MARKER(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE TIMELINE_BEAT
    static constexpr const uint TIMELINE_BEAT = 4096u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE TIMELINE_BEAT
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_TIMELINE_BEAT();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE TIMELINE_BEAT
    static void _set_TIMELINE_BEAT(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE SOUND_PLAYED
    static constexpr const uint SOUND_PLAYED = 8192u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE SOUND_PLAYED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_SOUND_PLAYED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE SOUND_PLAYED
    static void _set_SOUND_PLAYED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE SOUND_STOPPED
    static constexpr const uint SOUND_STOPPED = 16384u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE SOUND_STOPPED
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_SOUND_STOPPED();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE SOUND_STOPPED
    static void _set_SOUND_STOPPED(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE REAL_TO_VIRTUAL
    static constexpr const uint REAL_TO_VIRTUAL = 32768u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE REAL_TO_VIRTUAL
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_REAL_TO_VIRTUAL();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE REAL_TO_VIRTUAL
    static void _set_REAL_TO_VIRTUAL(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE VIRTUAL_TO_REAL
    static constexpr const uint VIRTUAL_TO_REAL = 65536u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE VIRTUAL_TO_REAL
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_VIRTUAL_TO_REAL();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE VIRTUAL_TO_REAL
    static void _set_VIRTUAL_TO_REAL(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // static field const value: static public FMOD.Studio.EVENT_CALLBACK_TYPE ALL
    static constexpr const uint ALL = 4294967295u;
    // Get static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE ALL
    static ::FMOD::Studio::EVENT_CALLBACK_TYPE _get_ALL();
    // Set static field: static public FMOD.Studio.EVENT_CALLBACK_TYPE ALL
    static void _set_ALL(::FMOD::Studio::EVENT_CALLBACK_TYPE value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // FMOD.Studio.EVENT_CALLBACK_TYPE
  #pragma pack(pop)
  static check_size<sizeof(EVENT_CALLBACK_TYPE), 0 + sizeof(uint)> __FMOD_Studio_EVENT_CALLBACK_TYPESizeCheck;
  static_assert(sizeof(EVENT_CALLBACK_TYPE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
