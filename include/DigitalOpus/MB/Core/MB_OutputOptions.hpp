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
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_OutputOptions
  struct MB_OutputOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_OutputOptions, "DigitalOpus.MB.Core", "MB_OutputOptions");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_OutputOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB_OutputOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MB_OutputOptions
    constexpr MB_OutputOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DigitalOpus.MB.Core.MB_OutputOptions bakeIntoPrefab
    static constexpr const int bakeIntoPrefab = 0;
    // Get static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeIntoPrefab
    static ::DigitalOpus::MB::Core::MB_OutputOptions _get_bakeIntoPrefab();
    // Set static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeIntoPrefab
    static void _set_bakeIntoPrefab(::DigitalOpus::MB::Core::MB_OutputOptions value);
    // static field const value: static public DigitalOpus.MB.Core.MB_OutputOptions bakeMeshsInPlace
    static constexpr const int bakeMeshsInPlace = 1;
    // Get static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeMeshsInPlace
    static ::DigitalOpus::MB::Core::MB_OutputOptions _get_bakeMeshsInPlace();
    // Set static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeMeshsInPlace
    static void _set_bakeMeshsInPlace(::DigitalOpus::MB::Core::MB_OutputOptions value);
    // static field const value: static public DigitalOpus.MB.Core.MB_OutputOptions bakeTextureAtlasesOnly
    static constexpr const int bakeTextureAtlasesOnly = 2;
    // Get static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeTextureAtlasesOnly
    static ::DigitalOpus::MB::Core::MB_OutputOptions _get_bakeTextureAtlasesOnly();
    // Set static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeTextureAtlasesOnly
    static void _set_bakeTextureAtlasesOnly(::DigitalOpus::MB::Core::MB_OutputOptions value);
    // static field const value: static public DigitalOpus.MB.Core.MB_OutputOptions bakeIntoSceneObject
    static constexpr const int bakeIntoSceneObject = 3;
    // Get static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeIntoSceneObject
    static ::DigitalOpus::MB::Core::MB_OutputOptions _get_bakeIntoSceneObject();
    // Set static field: static public DigitalOpus.MB.Core.MB_OutputOptions bakeIntoSceneObject
    static void _set_bakeIntoSceneObject(::DigitalOpus::MB::Core::MB_OutputOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DigitalOpus.MB.Core.MB_OutputOptions
  #pragma pack(pop)
  static check_size<sizeof(MB_OutputOptions), 0 + sizeof(int)> __DigitalOpus_MB_Core_MB_OutputOptionsSizeCheck;
  static_assert(sizeof(MB_OutputOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
