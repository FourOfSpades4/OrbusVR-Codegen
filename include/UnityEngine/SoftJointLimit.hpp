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
  // Forward declaring type: SoftJointLimit
  struct SoftJointLimit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SoftJointLimit, "UnityEngine", "SoftJointLimit");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SoftJointLimit
  // [TokenAttribute] Offset: FFFFFFFF
  struct SoftJointLimit/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single m_Limit
    // Size: 0x4
    // Offset: 0x0
    float m_Limit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Bounciness
    // Size: 0x4
    // Offset: 0x4
    float m_Bounciness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_ContactDistance
    // Size: 0x4
    // Offset: 0x8
    float m_ContactDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SoftJointLimit
    constexpr SoftJointLimit(float m_Limit_ = {}, float m_Bounciness_ = {}, float m_ContactDistance_ = {}) noexcept : m_Limit{m_Limit_}, m_Bounciness{m_Bounciness_}, m_ContactDistance{m_ContactDistance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single m_Limit
    [[deprecated("Use field access instead!")]] float& dyn_m_Limit();
    // Get instance field reference: private System.Single m_Bounciness
    [[deprecated("Use field access instead!")]] float& dyn_m_Bounciness();
    // Get instance field reference: private System.Single m_ContactDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_ContactDistance();
    // public System.Void set_limit(System.Single value)
    // Offset: 0xBD2164
    void set_limit(float value);
  }; // UnityEngine.SoftJointLimit
  #pragma pack(pop)
  static check_size<sizeof(SoftJointLimit), 8 + sizeof(float)> __UnityEngine_SoftJointLimitSizeCheck;
  static_assert(sizeof(SoftJointLimit) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SoftJointLimit::set_limit
// Il2CppName: set_limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SoftJointLimit::*)(float)>(&UnityEngine::SoftJointLimit::set_limit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SoftJointLimit), "set_limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
