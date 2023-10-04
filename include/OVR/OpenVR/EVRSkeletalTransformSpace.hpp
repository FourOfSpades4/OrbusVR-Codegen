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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSkeletalTransformSpace, "OVR.OpenVR", "EVRSkeletalTransformSpace");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRSkeletalTransformSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRSkeletalTransformSpace/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRSkeletalTransformSpace
    constexpr EVRSkeletalTransformSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRSkeletalTransformSpace Model
    static constexpr const int Model = 0;
    // Get static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Model
    static ::OVR::OpenVR::EVRSkeletalTransformSpace _get_Model();
    // Set static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Model
    static void _set_Model(::OVR::OpenVR::EVRSkeletalTransformSpace value);
    // static field const value: static public OVR.OpenVR.EVRSkeletalTransformSpace Parent
    static constexpr const int Parent = 1;
    // Get static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Parent
    static ::OVR::OpenVR::EVRSkeletalTransformSpace _get_Parent();
    // Set static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Parent
    static void _set_Parent(::OVR::OpenVR::EVRSkeletalTransformSpace value);
    // static field const value: static public OVR.OpenVR.EVRSkeletalTransformSpace Additive
    static constexpr const int Additive = 2;
    // Get static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Additive
    static ::OVR::OpenVR::EVRSkeletalTransformSpace _get_Additive();
    // Set static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Additive
    static void _set_Additive(::OVR::OpenVR::EVRSkeletalTransformSpace value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.EVRSkeletalTransformSpace
  #pragma pack(pop)
  static check_size<sizeof(EVRSkeletalTransformSpace), 0 + sizeof(int)> __OVR_OpenVR_EVRSkeletalTransformSpaceSizeCheck;
  static_assert(sizeof(EVRSkeletalTransformSpace) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"