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
  // Forward declaring type: LOADING_STATE
  struct LOADING_STATE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::LOADING_STATE, "FMOD.Studio", "LOADING_STATE");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.Studio.LOADING_STATE
  // [TokenAttribute] Offset: FFFFFFFF
  struct LOADING_STATE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LOADING_STATE
    constexpr LOADING_STATE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.Studio.LOADING_STATE UNLOADING
    static constexpr const int UNLOADING = 0;
    // Get static field: static public FMOD.Studio.LOADING_STATE UNLOADING
    static ::FMOD::Studio::LOADING_STATE _get_UNLOADING();
    // Set static field: static public FMOD.Studio.LOADING_STATE UNLOADING
    static void _set_UNLOADING(::FMOD::Studio::LOADING_STATE value);
    // static field const value: static public FMOD.Studio.LOADING_STATE UNLOADED
    static constexpr const int UNLOADED = 1;
    // Get static field: static public FMOD.Studio.LOADING_STATE UNLOADED
    static ::FMOD::Studio::LOADING_STATE _get_UNLOADED();
    // Set static field: static public FMOD.Studio.LOADING_STATE UNLOADED
    static void _set_UNLOADED(::FMOD::Studio::LOADING_STATE value);
    // static field const value: static public FMOD.Studio.LOADING_STATE LOADING
    static constexpr const int LOADING = 2;
    // Get static field: static public FMOD.Studio.LOADING_STATE LOADING
    static ::FMOD::Studio::LOADING_STATE _get_LOADING();
    // Set static field: static public FMOD.Studio.LOADING_STATE LOADING
    static void _set_LOADING(::FMOD::Studio::LOADING_STATE value);
    // static field const value: static public FMOD.Studio.LOADING_STATE LOADED
    static constexpr const int LOADED = 3;
    // Get static field: static public FMOD.Studio.LOADING_STATE LOADED
    static ::FMOD::Studio::LOADING_STATE _get_LOADED();
    // Set static field: static public FMOD.Studio.LOADING_STATE LOADED
    static void _set_LOADED(::FMOD::Studio::LOADING_STATE value);
    // static field const value: static public FMOD.Studio.LOADING_STATE ERROR
    static constexpr const int ERROR = 4;
    // Get static field: static public FMOD.Studio.LOADING_STATE ERROR
    static ::FMOD::Studio::LOADING_STATE _get_ERROR();
    // Set static field: static public FMOD.Studio.LOADING_STATE ERROR
    static void _set_ERROR(::FMOD::Studio::LOADING_STATE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.Studio.LOADING_STATE
  #pragma pack(pop)
  static check_size<sizeof(LOADING_STATE), 0 + sizeof(int)> __FMOD_Studio_LOADING_STATESizeCheck;
  static_assert(sizeof(LOADING_STATE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
