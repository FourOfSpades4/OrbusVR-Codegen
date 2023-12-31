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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystemSimulationSpace
  struct ParticleSystemSimulationSpace;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::MainModule, "UnityEngine", "ParticleSystem/MainModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/MainModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::MainModule/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: MainModule
    constexpr MainModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
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
    // Offset: 0xBD3614
    // ABORTED: conflicts with another method.  MainModule(::UnityEngine::ParticleSystem* particleSystem);
    // public System.Single get_duration()
    // Offset: 0xBD361C
    float get_duration();
    // public System.Boolean get_loop()
    // Offset: 0xBD3624
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0xBD362C
    void set_loop(bool value);
    // public UnityEngine.ParticleSystem/MinMaxCurve get_startDelay()
    // Offset: 0xBD3638
    ::UnityEngine::ParticleSystem::MinMaxCurve get_startDelay();
    // public System.Single get_startSizeMultiplier()
    // Offset: 0xBD3678
    float get_startSizeMultiplier();
    // public System.Void set_startSizeMultiplier(System.Single value)
    // Offset: 0xBD3680
    void set_startSizeMultiplier(float value);
    // public System.Void set_startColor(UnityEngine.ParticleSystem/MinMaxGradient value)
    // Offset: 0xBD3688
    void set_startColor(::UnityEngine::ParticleSystem::MinMaxGradient value);
    // public System.Void set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace value)
    // Offset: 0xBD36CC
    void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value);
    // public System.Void set_playOnAwake(System.Boolean value)
    // Offset: 0xBD36D4
    void set_playOnAwake(bool value);
    // public System.Int32 get_maxParticles()
    // Offset: 0xBD36E0
    int get_maxParticles();
    // public System.Void set_maxParticles(System.Int32 value)
    // Offset: 0xBD36E8
    void set_maxParticles(int value);
    // static private System.Single GetDuration(UnityEngine.ParticleSystem system)
    // Offset: 0x2895D10
    static float GetDuration(::UnityEngine::ParticleSystem* system);
    // static private System.Void SetLoop(UnityEngine.ParticleSystem system, System.Boolean value)
    // Offset: 0x2895DFC
    static void SetLoop(::UnityEngine::ParticleSystem* system, bool value);
    // static private System.Boolean GetLoop(UnityEngine.ParticleSystem system)
    // Offset: 0x2895D84
    static bool GetLoop(::UnityEngine::ParticleSystem* system);
    // static private System.Void GetStartDelay(UnityEngine.ParticleSystem system, ref UnityEngine.ParticleSystem/MinMaxCurve curve)
    // Offset: 0x2895EB0
    static void GetStartDelay(::UnityEngine::ParticleSystem* system, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve> curve);
    // static private System.Void SetStartSizeXMultiplier(UnityEngine.ParticleSystem system, System.Single value)
    // Offset: 0x2895F90
    static void SetStartSizeXMultiplier(::UnityEngine::ParticleSystem* system, float value);
    // static private System.Single GetStartSizeXMultiplier(UnityEngine.ParticleSystem system)
    // Offset: 0x2895F24
    static float GetStartSizeXMultiplier(::UnityEngine::ParticleSystem* system);
    // static private System.Void SetStartColor(UnityEngine.ParticleSystem system, ref UnityEngine.ParticleSystem/MinMaxGradient gradient)
    // Offset: 0x289600C
    static void SetStartColor(::UnityEngine::ParticleSystem* system, ByRef<::UnityEngine::ParticleSystem::MinMaxGradient> gradient);
    // static private System.Void SetSimulationSpace(UnityEngine.ParticleSystem system, UnityEngine.ParticleSystemSimulationSpace value)
    // Offset: 0x2896088
    static void SetSimulationSpace(::UnityEngine::ParticleSystem* system, ::UnityEngine::ParticleSystemSimulationSpace value);
    // static private System.Void SetPlayOnAwake(UnityEngine.ParticleSystem system, System.Boolean value)
    // Offset: 0x2896108
    static void SetPlayOnAwake(::UnityEngine::ParticleSystem* system, bool value);
    // static private System.Void SetMaxParticles(UnityEngine.ParticleSystem system, System.Int32 value)
    // Offset: 0x28961F8
    static void SetMaxParticles(::UnityEngine::ParticleSystem* system, int value);
    // static private System.Int32 GetMaxParticles(UnityEngine.ParticleSystem system)
    // Offset: 0x2896184
    static int GetMaxParticles(::UnityEngine::ParticleSystem* system);
  }; // UnityEngine.ParticleSystem/MainModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::MainModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_MainModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::MainModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::MainModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(bool)>(&UnityEngine::ParticleSystem::MainModule::set_loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startDelay
// Il2CppName: get_startDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem::MinMaxCurve (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_startDelay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startSizeMultiplier
// Il2CppName: get_startSizeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_startSizeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startSizeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startSizeMultiplier
// Il2CppName: set_startSizeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(float)>(&UnityEngine::ParticleSystem::MainModule::set_startSizeMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startSizeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(::UnityEngine::ParticleSystem::MinMaxGradient)>(&UnityEngine::ParticleSystem::MainModule::set_startColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_simulationSpace
// Il2CppName: set_simulationSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(::UnityEngine::ParticleSystemSimulationSpace)>(&UnityEngine::ParticleSystem::MainModule::set_simulationSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystemSimulationSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_simulationSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_playOnAwake
// Il2CppName: set_playOnAwake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(bool)>(&UnityEngine::ParticleSystem::MainModule::set_playOnAwake)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_playOnAwake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_maxParticles
// Il2CppName: get_maxParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_maxParticles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_maxParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_maxParticles
// Il2CppName: set_maxParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(int)>(&UnityEngine::ParticleSystem::MainModule::set_maxParticles)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_maxParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::GetDuration
// Il2CppName: GetDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::ParticleSystem*)>(&UnityEngine::ParticleSystem::MainModule::GetDuration)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "GetDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::SetLoop
// Il2CppName: SetLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, bool)>(&UnityEngine::ParticleSystem::MainModule::SetLoop)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "SetLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::GetLoop
// Il2CppName: GetLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ParticleSystem*)>(&UnityEngine::ParticleSystem::MainModule::GetLoop)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "GetLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::GetStartDelay
// Il2CppName: GetStartDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::MainModule::GetStartDelay)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "GetStartDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::SetStartSizeXMultiplier
// Il2CppName: SetStartSizeXMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, float)>(&UnityEngine::ParticleSystem::MainModule::SetStartSizeXMultiplier)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "SetStartSizeXMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::GetStartSizeXMultiplier
// Il2CppName: GetStartSizeXMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::ParticleSystem*)>(&UnityEngine::ParticleSystem::MainModule::GetStartSizeXMultiplier)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "GetStartSizeXMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::SetStartColor
// Il2CppName: SetStartColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, ByRef<::UnityEngine::ParticleSystem::MinMaxGradient>)>(&UnityEngine::ParticleSystem::MainModule::SetStartColor)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* gradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "SetStartColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, gradient});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::SetSimulationSpace
// Il2CppName: SetSimulationSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSimulationSpace)>(&UnityEngine::ParticleSystem::MainModule::SetSimulationSpace)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystemSimulationSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "SetSimulationSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::SetPlayOnAwake
// Il2CppName: SetPlayOnAwake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, bool)>(&UnityEngine::ParticleSystem::MainModule::SetPlayOnAwake)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "SetPlayOnAwake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::SetMaxParticles
// Il2CppName: SetMaxParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ParticleSystem*, int)>(&UnityEngine::ParticleSystem::MainModule::SetMaxParticles)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "SetMaxParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::GetMaxParticles
// Il2CppName: GetMaxParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::ParticleSystem*)>(&UnityEngine::ParticleSystem::MainModule::GetMaxParticles)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "GetMaxParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system});
  }
};
