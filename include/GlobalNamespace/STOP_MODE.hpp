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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STOP_MODE
  struct STOP_MODE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STOP_MODE, "", "STOP_MODE");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: STOP_MODE
  // [TokenAttribute] Offset: FFFFFFFF
  struct STOP_MODE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: STOP_MODE
    constexpr STOP_MODE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public STOP_MODE AllowFadeout
    static constexpr const int AllowFadeout = 0;
    // Get static field: static public STOP_MODE AllowFadeout
    static ::GlobalNamespace::STOP_MODE _get_AllowFadeout();
    // Set static field: static public STOP_MODE AllowFadeout
    static void _set_AllowFadeout(::GlobalNamespace::STOP_MODE value);
    // static field const value: static public STOP_MODE Immediate
    static constexpr const int Immediate = 1;
    // Get static field: static public STOP_MODE Immediate
    static ::GlobalNamespace::STOP_MODE _get_Immediate();
    // Set static field: static public STOP_MODE Immediate
    static void _set_Immediate(::GlobalNamespace::STOP_MODE value);
    // static field const value: static public STOP_MODE None
    static constexpr const int None = 2;
    // Get static field: static public STOP_MODE None
    static ::GlobalNamespace::STOP_MODE _get_None();
    // Set static field: static public STOP_MODE None
    static void _set_None(::GlobalNamespace::STOP_MODE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // STOP_MODE
  #pragma pack(pop)
  static check_size<sizeof(STOP_MODE), 0 + sizeof(int)> __GlobalNamespace_STOP_MODESizeCheck;
  static_assert(sizeof(STOP_MODE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"