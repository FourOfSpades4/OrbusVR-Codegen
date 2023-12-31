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
  // Forward declaring type: SPEAKERMODE
  struct SPEAKERMODE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::SPEAKERMODE, "FMOD", "SPEAKERMODE");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.SPEAKERMODE
  // [TokenAttribute] Offset: FFFFFFFF
  struct SPEAKERMODE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SPEAKERMODE
    constexpr SPEAKERMODE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.SPEAKERMODE DEFAULT
    static constexpr const int DEFAULT = 0;
    // Get static field: static public FMOD.SPEAKERMODE DEFAULT
    static ::FMOD::SPEAKERMODE _get_DEFAULT();
    // Set static field: static public FMOD.SPEAKERMODE DEFAULT
    static void _set_DEFAULT(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE RAW
    static constexpr const int RAW = 1;
    // Get static field: static public FMOD.SPEAKERMODE RAW
    static ::FMOD::SPEAKERMODE _get_RAW();
    // Set static field: static public FMOD.SPEAKERMODE RAW
    static void _set_RAW(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE MONO
    static constexpr const int MONO = 2;
    // Get static field: static public FMOD.SPEAKERMODE MONO
    static ::FMOD::SPEAKERMODE _get_MONO();
    // Set static field: static public FMOD.SPEAKERMODE MONO
    static void _set_MONO(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE STEREO
    static constexpr const int STEREO = 3;
    // Get static field: static public FMOD.SPEAKERMODE STEREO
    static ::FMOD::SPEAKERMODE _get_STEREO();
    // Set static field: static public FMOD.SPEAKERMODE STEREO
    static void _set_STEREO(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE QUAD
    static constexpr const int QUAD = 4;
    // Get static field: static public FMOD.SPEAKERMODE QUAD
    static ::FMOD::SPEAKERMODE _get_QUAD();
    // Set static field: static public FMOD.SPEAKERMODE QUAD
    static void _set_QUAD(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE SURROUND
    static constexpr const int SURROUND = 5;
    // Get static field: static public FMOD.SPEAKERMODE SURROUND
    static ::FMOD::SPEAKERMODE _get_SURROUND();
    // Set static field: static public FMOD.SPEAKERMODE SURROUND
    static void _set_SURROUND(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE _5POINT1
    static constexpr const int _5POINT1 = 6;
    // Get static field: static public FMOD.SPEAKERMODE _5POINT1
    static ::FMOD::SPEAKERMODE _get__5POINT1();
    // Set static field: static public FMOD.SPEAKERMODE _5POINT1
    static void _set__5POINT1(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE _7POINT1
    static constexpr const int _7POINT1 = 7;
    // Get static field: static public FMOD.SPEAKERMODE _7POINT1
    static ::FMOD::SPEAKERMODE _get__7POINT1();
    // Set static field: static public FMOD.SPEAKERMODE _7POINT1
    static void _set__7POINT1(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE _7POINT1POINT4
    static constexpr const int _7POINT1POINT4 = 8;
    // Get static field: static public FMOD.SPEAKERMODE _7POINT1POINT4
    static ::FMOD::SPEAKERMODE _get__7POINT1POINT4();
    // Set static field: static public FMOD.SPEAKERMODE _7POINT1POINT4
    static void _set__7POINT1POINT4(::FMOD::SPEAKERMODE value);
    // static field const value: static public FMOD.SPEAKERMODE MAX
    static constexpr const int MAX = 9;
    // Get static field: static public FMOD.SPEAKERMODE MAX
    static ::FMOD::SPEAKERMODE _get_MAX();
    // Set static field: static public FMOD.SPEAKERMODE MAX
    static void _set_MAX(::FMOD::SPEAKERMODE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.SPEAKERMODE
  #pragma pack(pop)
  static check_size<sizeof(SPEAKERMODE), 0 + sizeof(int)> __FMOD_SPEAKERMODESizeCheck;
  static_assert(sizeof(SPEAKERMODE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
