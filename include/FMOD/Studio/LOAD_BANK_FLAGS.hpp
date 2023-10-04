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
  // Forward declaring type: LOAD_BANK_FLAGS
  struct LOAD_BANK_FLAGS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::LOAD_BANK_FLAGS, "FMOD.Studio", "LOAD_BANK_FLAGS");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.Studio.LOAD_BANK_FLAGS
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LOAD_BANK_FLAGS/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: LOAD_BANK_FLAGS
    constexpr LOAD_BANK_FLAGS(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.Studio.LOAD_BANK_FLAGS NORMAL
    static constexpr const uint NORMAL = 0u;
    // Get static field: static public FMOD.Studio.LOAD_BANK_FLAGS NORMAL
    static ::FMOD::Studio::LOAD_BANK_FLAGS _get_NORMAL();
    // Set static field: static public FMOD.Studio.LOAD_BANK_FLAGS NORMAL
    static void _set_NORMAL(::FMOD::Studio::LOAD_BANK_FLAGS value);
    // static field const value: static public FMOD.Studio.LOAD_BANK_FLAGS NONBLOCKING
    static constexpr const uint NONBLOCKING = 1u;
    // Get static field: static public FMOD.Studio.LOAD_BANK_FLAGS NONBLOCKING
    static ::FMOD::Studio::LOAD_BANK_FLAGS _get_NONBLOCKING();
    // Set static field: static public FMOD.Studio.LOAD_BANK_FLAGS NONBLOCKING
    static void _set_NONBLOCKING(::FMOD::Studio::LOAD_BANK_FLAGS value);
    // static field const value: static public FMOD.Studio.LOAD_BANK_FLAGS DECOMPRESS_SAMPLES
    static constexpr const uint DECOMPRESS_SAMPLES = 2u;
    // Get static field: static public FMOD.Studio.LOAD_BANK_FLAGS DECOMPRESS_SAMPLES
    static ::FMOD::Studio::LOAD_BANK_FLAGS _get_DECOMPRESS_SAMPLES();
    // Set static field: static public FMOD.Studio.LOAD_BANK_FLAGS DECOMPRESS_SAMPLES
    static void _set_DECOMPRESS_SAMPLES(::FMOD::Studio::LOAD_BANK_FLAGS value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // FMOD.Studio.LOAD_BANK_FLAGS
  #pragma pack(pop)
  static check_size<sizeof(LOAD_BANK_FLAGS), 0 + sizeof(uint)> __FMOD_Studio_LOAD_BANK_FLAGSSizeCheck;
  static_assert(sizeof(LOAD_BANK_FLAGS) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"