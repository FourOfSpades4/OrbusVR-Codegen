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
  // Forward declaring type: CHANNELCONTROL_CALLBACK_TYPE
  struct CHANNELCONTROL_CALLBACK_TYPE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::CHANNELCONTROL_CALLBACK_TYPE, "FMOD", "CHANNELCONTROL_CALLBACK_TYPE");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.CHANNELCONTROL_CALLBACK_TYPE
  // [TokenAttribute] Offset: FFFFFFFF
  struct CHANNELCONTROL_CALLBACK_TYPE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CHANNELCONTROL_CALLBACK_TYPE
    constexpr CHANNELCONTROL_CALLBACK_TYPE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE END
    static constexpr const int END = 0;
    // Get static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE END
    static ::FMOD::CHANNELCONTROL_CALLBACK_TYPE _get_END();
    // Set static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE END
    static void _set_END(::FMOD::CHANNELCONTROL_CALLBACK_TYPE value);
    // static field const value: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE VIRTUALVOICE
    static constexpr const int VIRTUALVOICE = 1;
    // Get static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE VIRTUALVOICE
    static ::FMOD::CHANNELCONTROL_CALLBACK_TYPE _get_VIRTUALVOICE();
    // Set static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE VIRTUALVOICE
    static void _set_VIRTUALVOICE(::FMOD::CHANNELCONTROL_CALLBACK_TYPE value);
    // static field const value: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE SYNCPOINT
    static constexpr const int SYNCPOINT = 2;
    // Get static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE SYNCPOINT
    static ::FMOD::CHANNELCONTROL_CALLBACK_TYPE _get_SYNCPOINT();
    // Set static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE SYNCPOINT
    static void _set_SYNCPOINT(::FMOD::CHANNELCONTROL_CALLBACK_TYPE value);
    // static field const value: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE OCCLUSION
    static constexpr const int OCCLUSION = 3;
    // Get static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE OCCLUSION
    static ::FMOD::CHANNELCONTROL_CALLBACK_TYPE _get_OCCLUSION();
    // Set static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE OCCLUSION
    static void _set_OCCLUSION(::FMOD::CHANNELCONTROL_CALLBACK_TYPE value);
    // static field const value: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE MAX
    static constexpr const int MAX = 4;
    // Get static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE MAX
    static ::FMOD::CHANNELCONTROL_CALLBACK_TYPE _get_MAX();
    // Set static field: static public FMOD.CHANNELCONTROL_CALLBACK_TYPE MAX
    static void _set_MAX(::FMOD::CHANNELCONTROL_CALLBACK_TYPE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.CHANNELCONTROL_CALLBACK_TYPE
  #pragma pack(pop)
  static check_size<sizeof(CHANNELCONTROL_CALLBACK_TYPE), 0 + sizeof(int)> __FMOD_CHANNELCONTROL_CALLBACK_TYPESizeCheck;
  static_assert(sizeof(CHANNELCONTROL_CALLBACK_TYPE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"