// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SkeletonConstants, "", "OVRPlugin/SkeletonConstants");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/SkeletonConstants
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SkeletonConstants/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SkeletonConstants
    constexpr SkeletonConstants(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/SkeletonConstants MaxHandBones
    static constexpr const int MaxHandBones = 24;
    // Get static field: static public OVRPlugin/SkeletonConstants MaxHandBones
    static ::GlobalNamespace::OVRPlugin::SkeletonConstants _get_MaxHandBones();
    // Set static field: static public OVRPlugin/SkeletonConstants MaxHandBones
    static void _set_MaxHandBones(::GlobalNamespace::OVRPlugin::SkeletonConstants value);
    // static field const value: static public OVRPlugin/SkeletonConstants MaxBones
    static constexpr const int MaxBones = 50;
    // Get static field: static public OVRPlugin/SkeletonConstants MaxBones
    static ::GlobalNamespace::OVRPlugin::SkeletonConstants _get_MaxBones();
    // Set static field: static public OVRPlugin/SkeletonConstants MaxBones
    static void _set_MaxBones(::GlobalNamespace::OVRPlugin::SkeletonConstants value);
    // static field const value: static public OVRPlugin/SkeletonConstants MaxBoneCapsules
    static constexpr const int MaxBoneCapsules = 19;
    // Get static field: static public OVRPlugin/SkeletonConstants MaxBoneCapsules
    static ::GlobalNamespace::OVRPlugin::SkeletonConstants _get_MaxBoneCapsules();
    // Set static field: static public OVRPlugin/SkeletonConstants MaxBoneCapsules
    static void _set_MaxBoneCapsules(::GlobalNamespace::OVRPlugin::SkeletonConstants value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/SkeletonConstants
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SkeletonConstants), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_SkeletonConstantsSizeCheck;
  static_assert(sizeof(OVRPlugin::SkeletonConstants) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"