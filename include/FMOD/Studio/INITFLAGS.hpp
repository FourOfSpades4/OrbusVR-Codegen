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
  // Forward declaring type: INITFLAGS
  struct INITFLAGS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::INITFLAGS, "FMOD.Studio", "INITFLAGS");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.Studio.INITFLAGS
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
    // static field const value: static public FMOD.Studio.INITFLAGS NORMAL
    static constexpr const uint NORMAL = 0u;
    // Get static field: static public FMOD.Studio.INITFLAGS NORMAL
    static ::FMOD::Studio::INITFLAGS _get_NORMAL();
    // Set static field: static public FMOD.Studio.INITFLAGS NORMAL
    static void _set_NORMAL(::FMOD::Studio::INITFLAGS value);
    // static field const value: static public FMOD.Studio.INITFLAGS LIVEUPDATE
    static constexpr const uint LIVEUPDATE = 1u;
    // Get static field: static public FMOD.Studio.INITFLAGS LIVEUPDATE
    static ::FMOD::Studio::INITFLAGS _get_LIVEUPDATE();
    // Set static field: static public FMOD.Studio.INITFLAGS LIVEUPDATE
    static void _set_LIVEUPDATE(::FMOD::Studio::INITFLAGS value);
    // static field const value: static public FMOD.Studio.INITFLAGS ALLOW_MISSING_PLUGINS
    static constexpr const uint ALLOW_MISSING_PLUGINS = 2u;
    // Get static field: static public FMOD.Studio.INITFLAGS ALLOW_MISSING_PLUGINS
    static ::FMOD::Studio::INITFLAGS _get_ALLOW_MISSING_PLUGINS();
    // Set static field: static public FMOD.Studio.INITFLAGS ALLOW_MISSING_PLUGINS
    static void _set_ALLOW_MISSING_PLUGINS(::FMOD::Studio::INITFLAGS value);
    // static field const value: static public FMOD.Studio.INITFLAGS SYNCHRONOUS_UPDATE
    static constexpr const uint SYNCHRONOUS_UPDATE = 4u;
    // Get static field: static public FMOD.Studio.INITFLAGS SYNCHRONOUS_UPDATE
    static ::FMOD::Studio::INITFLAGS _get_SYNCHRONOUS_UPDATE();
    // Set static field: static public FMOD.Studio.INITFLAGS SYNCHRONOUS_UPDATE
    static void _set_SYNCHRONOUS_UPDATE(::FMOD::Studio::INITFLAGS value);
    // static field const value: static public FMOD.Studio.INITFLAGS DEFERRED_CALLBACKS
    static constexpr const uint DEFERRED_CALLBACKS = 8u;
    // Get static field: static public FMOD.Studio.INITFLAGS DEFERRED_CALLBACKS
    static ::FMOD::Studio::INITFLAGS _get_DEFERRED_CALLBACKS();
    // Set static field: static public FMOD.Studio.INITFLAGS DEFERRED_CALLBACKS
    static void _set_DEFERRED_CALLBACKS(::FMOD::Studio::INITFLAGS value);
    // static field const value: static public FMOD.Studio.INITFLAGS LOAD_FROM_UPDATE
    static constexpr const uint LOAD_FROM_UPDATE = 16u;
    // Get static field: static public FMOD.Studio.INITFLAGS LOAD_FROM_UPDATE
    static ::FMOD::Studio::INITFLAGS _get_LOAD_FROM_UPDATE();
    // Set static field: static public FMOD.Studio.INITFLAGS LOAD_FROM_UPDATE
    static void _set_LOAD_FROM_UPDATE(::FMOD::Studio::INITFLAGS value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // FMOD.Studio.INITFLAGS
  #pragma pack(pop)
  static check_size<sizeof(INITFLAGS), 0 + sizeof(uint)> __FMOD_Studio_INITFLAGSSizeCheck;
  static_assert(sizeof(INITFLAGS) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"