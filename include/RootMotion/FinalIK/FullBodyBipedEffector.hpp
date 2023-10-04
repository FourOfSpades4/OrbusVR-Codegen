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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FullBodyBipedEffector, "RootMotion.FinalIK", "FullBodyBipedEffector");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FullBodyBipedEffector
  // [TokenAttribute] Offset: FFFFFFFF
  struct FullBodyBipedEffector/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FullBodyBipedEffector
    constexpr FullBodyBipedEffector(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector Body
    static constexpr const int Body = 0;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector Body
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_Body();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector Body
    static void _set_Body(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector LeftShoulder
    static constexpr const int LeftShoulder = 1;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftShoulder
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_LeftShoulder();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftShoulder
    static void _set_LeftShoulder(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector RightShoulder
    static constexpr const int RightShoulder = 2;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightShoulder
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_RightShoulder();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightShoulder
    static void _set_RightShoulder(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector LeftThigh
    static constexpr const int LeftThigh = 3;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftThigh
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_LeftThigh();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftThigh
    static void _set_LeftThigh(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector RightThigh
    static constexpr const int RightThigh = 4;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightThigh
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_RightThigh();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightThigh
    static void _set_RightThigh(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector LeftHand
    static constexpr const int LeftHand = 5;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftHand
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_LeftHand();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftHand
    static void _set_LeftHand(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector RightHand
    static constexpr const int RightHand = 6;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightHand
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_RightHand();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightHand
    static void _set_RightHand(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector LeftFoot
    static constexpr const int LeftFoot = 7;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftFoot
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_LeftFoot();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector LeftFoot
    static void _set_LeftFoot(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedEffector RightFoot
    static constexpr const int RightFoot = 8;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightFoot
    static ::RootMotion::FinalIK::FullBodyBipedEffector _get_RightFoot();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedEffector RightFoot
    static void _set_RightFoot(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // RootMotion.FinalIK.FullBodyBipedEffector
  #pragma pack(pop)
  static check_size<sizeof(FullBodyBipedEffector), 0 + sizeof(int)> __RootMotion_FinalIK_FullBodyBipedEffectorSizeCheck;
  static_assert(sizeof(FullBodyBipedEffector) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"