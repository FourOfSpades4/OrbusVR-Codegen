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
  // Forward declaring type: SYSTEM_CALLBACK_TYPE
  struct SYSTEM_CALLBACK_TYPE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::SYSTEM_CALLBACK_TYPE, "FMOD", "SYSTEM_CALLBACK_TYPE");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.SYSTEM_CALLBACK_TYPE
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SYSTEM_CALLBACK_TYPE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: SYSTEM_CALLBACK_TYPE
    constexpr SYSTEM_CALLBACK_TYPE(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE DEVICELISTCHANGED
    static constexpr const uint DEVICELISTCHANGED = 1u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE DEVICELISTCHANGED
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_DEVICELISTCHANGED();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE DEVICELISTCHANGED
    static void _set_DEVICELISTCHANGED(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE DEVICELOST
    static constexpr const uint DEVICELOST = 2u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE DEVICELOST
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_DEVICELOST();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE DEVICELOST
    static void _set_DEVICELOST(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE MEMORYALLOCATIONFAILED
    static constexpr const uint MEMORYALLOCATIONFAILED = 4u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE MEMORYALLOCATIONFAILED
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_MEMORYALLOCATIONFAILED();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE MEMORYALLOCATIONFAILED
    static void _set_MEMORYALLOCATIONFAILED(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE THREADCREATED
    static constexpr const uint THREADCREATED = 8u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE THREADCREATED
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_THREADCREATED();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE THREADCREATED
    static void _set_THREADCREATED(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE BADDSPCONNECTION
    static constexpr const uint BADDSPCONNECTION = 16u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE BADDSPCONNECTION
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_BADDSPCONNECTION();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE BADDSPCONNECTION
    static void _set_BADDSPCONNECTION(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE PREMIX
    static constexpr const uint PREMIX = 32u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE PREMIX
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_PREMIX();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE PREMIX
    static void _set_PREMIX(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE POSTMIX
    static constexpr const uint POSTMIX = 64u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE POSTMIX
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_POSTMIX();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE POSTMIX
    static void _set_POSTMIX(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE ERROR
    static constexpr const uint ERROR = 128u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE ERROR
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_ERROR();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE ERROR
    static void _set_ERROR(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE MIDMIX
    static constexpr const uint MIDMIX = 256u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE MIDMIX
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_MIDMIX();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE MIDMIX
    static void _set_MIDMIX(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE THREADDESTROYED
    static constexpr const uint THREADDESTROYED = 512u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE THREADDESTROYED
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_THREADDESTROYED();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE THREADDESTROYED
    static void _set_THREADDESTROYED(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE PREUPDATE
    static constexpr const uint PREUPDATE = 1024u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE PREUPDATE
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_PREUPDATE();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE PREUPDATE
    static void _set_PREUPDATE(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE POSTUPDATE
    static constexpr const uint POSTUPDATE = 2048u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE POSTUPDATE
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_POSTUPDATE();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE POSTUPDATE
    static void _set_POSTUPDATE(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE RECORDLISTCHANGED
    static constexpr const uint RECORDLISTCHANGED = 4096u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE RECORDLISTCHANGED
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_RECORDLISTCHANGED();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE RECORDLISTCHANGED
    static void _set_RECORDLISTCHANGED(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // static field const value: static public FMOD.SYSTEM_CALLBACK_TYPE ALL
    static constexpr const uint ALL = 4294967295u;
    // Get static field: static public FMOD.SYSTEM_CALLBACK_TYPE ALL
    static ::FMOD::SYSTEM_CALLBACK_TYPE _get_ALL();
    // Set static field: static public FMOD.SYSTEM_CALLBACK_TYPE ALL
    static void _set_ALL(::FMOD::SYSTEM_CALLBACK_TYPE value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // FMOD.SYSTEM_CALLBACK_TYPE
  #pragma pack(pop)
  static check_size<sizeof(SYSTEM_CALLBACK_TYPE), 0 + sizeof(uint)> __FMOD_SYSTEM_CALLBACK_TYPESizeCheck;
  static_assert(sizeof(SYSTEM_CALLBACK_TYPE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
