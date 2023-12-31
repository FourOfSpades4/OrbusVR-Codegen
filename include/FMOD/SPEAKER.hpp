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
  // Forward declaring type: SPEAKER
  struct SPEAKER;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::SPEAKER, "FMOD", "SPEAKER");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.SPEAKER
  // [TokenAttribute] Offset: FFFFFFFF
  struct SPEAKER/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SPEAKER
    constexpr SPEAKER(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.SPEAKER FRONT_LEFT
    static constexpr const int FRONT_LEFT = 0;
    // Get static field: static public FMOD.SPEAKER FRONT_LEFT
    static ::FMOD::SPEAKER _get_FRONT_LEFT();
    // Set static field: static public FMOD.SPEAKER FRONT_LEFT
    static void _set_FRONT_LEFT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER FRONT_RIGHT
    static constexpr const int FRONT_RIGHT = 1;
    // Get static field: static public FMOD.SPEAKER FRONT_RIGHT
    static ::FMOD::SPEAKER _get_FRONT_RIGHT();
    // Set static field: static public FMOD.SPEAKER FRONT_RIGHT
    static void _set_FRONT_RIGHT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER FRONT_CENTER
    static constexpr const int FRONT_CENTER = 2;
    // Get static field: static public FMOD.SPEAKER FRONT_CENTER
    static ::FMOD::SPEAKER _get_FRONT_CENTER();
    // Set static field: static public FMOD.SPEAKER FRONT_CENTER
    static void _set_FRONT_CENTER(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER LOW_FREQUENCY
    static constexpr const int LOW_FREQUENCY = 3;
    // Get static field: static public FMOD.SPEAKER LOW_FREQUENCY
    static ::FMOD::SPEAKER _get_LOW_FREQUENCY();
    // Set static field: static public FMOD.SPEAKER LOW_FREQUENCY
    static void _set_LOW_FREQUENCY(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER SURROUND_LEFT
    static constexpr const int SURROUND_LEFT = 4;
    // Get static field: static public FMOD.SPEAKER SURROUND_LEFT
    static ::FMOD::SPEAKER _get_SURROUND_LEFT();
    // Set static field: static public FMOD.SPEAKER SURROUND_LEFT
    static void _set_SURROUND_LEFT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER SURROUND_RIGHT
    static constexpr const int SURROUND_RIGHT = 5;
    // Get static field: static public FMOD.SPEAKER SURROUND_RIGHT
    static ::FMOD::SPEAKER _get_SURROUND_RIGHT();
    // Set static field: static public FMOD.SPEAKER SURROUND_RIGHT
    static void _set_SURROUND_RIGHT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER BACK_LEFT
    static constexpr const int BACK_LEFT = 6;
    // Get static field: static public FMOD.SPEAKER BACK_LEFT
    static ::FMOD::SPEAKER _get_BACK_LEFT();
    // Set static field: static public FMOD.SPEAKER BACK_LEFT
    static void _set_BACK_LEFT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER BACK_RIGHT
    static constexpr const int BACK_RIGHT = 7;
    // Get static field: static public FMOD.SPEAKER BACK_RIGHT
    static ::FMOD::SPEAKER _get_BACK_RIGHT();
    // Set static field: static public FMOD.SPEAKER BACK_RIGHT
    static void _set_BACK_RIGHT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER TOP_FRONT_LEFT
    static constexpr const int TOP_FRONT_LEFT = 8;
    // Get static field: static public FMOD.SPEAKER TOP_FRONT_LEFT
    static ::FMOD::SPEAKER _get_TOP_FRONT_LEFT();
    // Set static field: static public FMOD.SPEAKER TOP_FRONT_LEFT
    static void _set_TOP_FRONT_LEFT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER TOP_FRONT_RIGHT
    static constexpr const int TOP_FRONT_RIGHT = 9;
    // Get static field: static public FMOD.SPEAKER TOP_FRONT_RIGHT
    static ::FMOD::SPEAKER _get_TOP_FRONT_RIGHT();
    // Set static field: static public FMOD.SPEAKER TOP_FRONT_RIGHT
    static void _set_TOP_FRONT_RIGHT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER TOP_BACK_LEFT
    static constexpr const int TOP_BACK_LEFT = 10;
    // Get static field: static public FMOD.SPEAKER TOP_BACK_LEFT
    static ::FMOD::SPEAKER _get_TOP_BACK_LEFT();
    // Set static field: static public FMOD.SPEAKER TOP_BACK_LEFT
    static void _set_TOP_BACK_LEFT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER TOP_BACK_RIGHT
    static constexpr const int TOP_BACK_RIGHT = 11;
    // Get static field: static public FMOD.SPEAKER TOP_BACK_RIGHT
    static ::FMOD::SPEAKER _get_TOP_BACK_RIGHT();
    // Set static field: static public FMOD.SPEAKER TOP_BACK_RIGHT
    static void _set_TOP_BACK_RIGHT(::FMOD::SPEAKER value);
    // static field const value: static public FMOD.SPEAKER MAX
    static constexpr const int MAX = 12;
    // Get static field: static public FMOD.SPEAKER MAX
    static ::FMOD::SPEAKER _get_MAX();
    // Set static field: static public FMOD.SPEAKER MAX
    static void _set_MAX(::FMOD::SPEAKER value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.SPEAKER
  #pragma pack(pop)
  static check_size<sizeof(SPEAKER), 0 + sizeof(int)> __FMOD_SPEAKERSizeCheck;
  static_assert(sizeof(SPEAKER) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
