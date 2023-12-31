// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Seeker
#include "GlobalNamespace/Seeker.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Seeker::ModifierPass, "", "Seeker/ModifierPass");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Seeker/ModifierPass
  // [TokenAttribute] Offset: FFFFFFFF
  struct Seeker::ModifierPass/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ModifierPass
    constexpr ModifierPass(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Seeker/ModifierPass PreProcess
    static constexpr const int PreProcess = 0;
    // Get static field: static public Seeker/ModifierPass PreProcess
    static ::GlobalNamespace::Seeker::ModifierPass _get_PreProcess();
    // Set static field: static public Seeker/ModifierPass PreProcess
    static void _set_PreProcess(::GlobalNamespace::Seeker::ModifierPass value);
    // static field const value: static public Seeker/ModifierPass PostProcess
    static constexpr const int PostProcess = 2;
    // Get static field: static public Seeker/ModifierPass PostProcess
    static ::GlobalNamespace::Seeker::ModifierPass _get_PostProcess();
    // Set static field: static public Seeker/ModifierPass PostProcess
    static void _set_PostProcess(::GlobalNamespace::Seeker::ModifierPass value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Seeker/ModifierPass
  #pragma pack(pop)
  static check_size<sizeof(Seeker::ModifierPass), 0 + sizeof(int)> __GlobalNamespace_Seeker_ModifierPassSizeCheck;
  static_assert(sizeof(Seeker::ModifierPass) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
