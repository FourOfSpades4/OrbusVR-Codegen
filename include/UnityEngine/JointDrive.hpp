// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: JointDrive
  struct JointDrive;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JointDrive, "UnityEngine", "JointDrive");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.JointDrive
  // [TokenAttribute] Offset: FFFFFFFF
  struct JointDrive/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single m_PositionSpring
    // Size: 0x4
    // Offset: 0x0
    float m_PositionSpring;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_PositionDamper
    // Size: 0x4
    // Offset: 0x4
    float m_PositionDamper;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_MaximumForce
    // Size: 0x4
    // Offset: 0x8
    float m_MaximumForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: JointDrive
    constexpr JointDrive(float m_PositionSpring_ = {}, float m_PositionDamper_ = {}, float m_MaximumForce_ = {}) noexcept : m_PositionSpring{m_PositionSpring_}, m_PositionDamper{m_PositionDamper_}, m_MaximumForce{m_MaximumForce_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single m_PositionSpring
    [[deprecated("Use field access instead!")]] float& dyn_m_PositionSpring();
    // Get instance field reference: private System.Single m_PositionDamper
    [[deprecated("Use field access instead!")]] float& dyn_m_PositionDamper();
    // Get instance field reference: private System.Single m_MaximumForce
    [[deprecated("Use field access instead!")]] float& dyn_m_MaximumForce();
  }; // UnityEngine.JointDrive
  #pragma pack(pop)
  static check_size<sizeof(JointDrive), 8 + sizeof(float)> __UnityEngine_JointDriveSizeCheck;
  static_assert(sizeof(JointDrive) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"