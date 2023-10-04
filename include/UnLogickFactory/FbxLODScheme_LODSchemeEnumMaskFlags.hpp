// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnLogickFactory.FbxLODScheme
#include "UnLogickFactory/FbxLODScheme.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags, "UnLogickFactory", "FbxLODScheme/LODSchemeEnumMaskFlags");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct FbxLODScheme::LODSchemeEnumMaskFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LODSchemeEnumMaskFlags
    constexpr LODSchemeEnumMaskFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags MainCamera
    static constexpr const int MainCamera = 1;
    // Get static field: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags MainCamera
    static ::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags _get_MainCamera();
    // Set static field: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags MainCamera
    static void _set_MainCamera(::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags value);
    // static field const value: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags OtherCameras
    static constexpr const int OtherCameras = 2;
    // Get static field: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags OtherCameras
    static ::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags _get_OtherCameras();
    // Set static field: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags OtherCameras
    static void _set_OtherCameras(::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags value);
    // static field const value: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags PerformCulling
    static constexpr const int PerformCulling = 4;
    // Get static field: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags PerformCulling
    static ::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags _get_PerformCulling();
    // Set static field: static public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags PerformCulling
    static void _set_PerformCulling(::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags
  #pragma pack(pop)
  static check_size<sizeof(FbxLODScheme::LODSchemeEnumMaskFlags), 0 + sizeof(int)> __UnLogickFactory_FbxLODScheme_LODSchemeEnumMaskFlagsSizeCheck;
  static_assert(sizeof(FbxLODScheme::LODSchemeEnumMaskFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"