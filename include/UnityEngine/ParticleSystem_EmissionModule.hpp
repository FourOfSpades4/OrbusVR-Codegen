// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/EmissionModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::EmissionModule/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: EmissionModule
    constexpr EmissionModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: private UnityEngine.ParticleSystem m_ParticleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0xBD341C
    // ABORTED: conflicts with another method.  EmissionModule(::UnityEngine::ParticleSystem* particleSystem);
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0xBD3424
    void set_enabled(bool value);
    // public System.Void set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve value)
    // Offset: 0xBD3430
    void set_rateOverTime(::UnityEngine::ParticleSystem::MinMaxCurve value);
    // public System.Single get_rateOverTimeMultiplier()
    // Offset: 0xBD3464
    float get_rateOverTimeMultiplier();
    // public System.Void set_rateOverTimeMultiplier(System.Single value)
    // Offset: 0xBD346C
    void set_rateOverTimeMultiplier(float value);
    // static private System.Void SetEnabled(UnityEngine.ParticleSystem system, System.Boolean value)
    // Offset: 0x2895B28
    static void SetEnabled(::UnityEngine::ParticleSystem* system, bool value);
    // static private System.Void SetRateOverTime(UnityEngine.ParticleSystem system, ref UnityEngine.ParticleSystem/MinMaxCurve curve)
    // Offset: 0x2895BA4
    static void SetRateOverTime(::UnityEngine::ParticleSystem* system, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve> curve);
    // static private System.Void SetRateOverTimeMultiplier(UnityEngine.ParticleSystem system, System.Single value)
    // Offset: 0x2895C94
    static void SetRateOverTimeMultiplier(::UnityEngine::ParticleSystem* system, float value);
    // static private System.Single GetRateOverTimeMultiplier(UnityEngine.ParticleSystem system)
    // Offset: 0x2895C20
    static float GetRateOverTimeMultiplier(::UnityEngine::ParticleSystem* system);
  }; // UnityEngine.ParticleSystem/EmissionModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::EmissionModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_EmissionModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::EmissionModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::EmissionModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(bool)>(&UnityEngine::ParticleSystem::EmissionModule::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_rateOverTime
// Il2CppName: set_rateOverTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(::UnityEngine::ParticleSystem::MinMaxCurve)>(&UnityEngine::ParticleSystem::EmissionModule::set_rateOverTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_rateOverTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_rateOverTimeMultiplier
// Il2CppName: get_rateOverTimeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::EmissionModule::*)()>(&UnityEngine::ParticleSystem::EmissionModule::get_rateOverTimeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_rateOverTimeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_rateOverTimeMultiplier
// Il2CppName: set_rateOverTimeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(float)>(&UnityEngine::ParticleSystem::EmissionModule::set_rateOverTimeMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_rateOverTimeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetEnabled
// Il2CppName: SetEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, bool)>(&UnityEngine::ParticleSystem::EmissionModule::SetEnabled)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetRateOverTime
// Il2CppName: SetRateOverTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::EmissionModule::SetRateOverTime)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetRateOverTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetRateOverTimeMultiplier
// Il2CppName: SetRateOverTimeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, float)>(&UnityEngine::ParticleSystem::EmissionModule::SetRateOverTimeMultiplier)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetRateOverTimeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::GetRateOverTimeMultiplier
// Il2CppName: GetRateOverTimeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::ParticleSystem*)>(&UnityEngine::ParticleSystem::EmissionModule::GetRateOverTimeMultiplier)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "GetRateOverTimeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system});
  }
};
