// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Funly.SkyStudio.ISkyModule
#include "Funly/SkyStudio/ISkyModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: SkyProfile
  class SkyProfile;
  // Forward declaring type: WeatherEnclosure
  class WeatherEnclosure;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: RainDownfallController
  class RainDownfallController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::RainDownfallController);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::RainDownfallController*, "Funly.SkyStudio", "RainDownfallController");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.RainDownfallController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD27A8
  class RainDownfallController : public ::UnityEngine::MonoBehaviour/*, public ::Funly::SkyStudio::ISkyModule*/ {
    public:
    public:
    // public UnityEngine.MeshRenderer rainMeshRenderer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MeshRenderer* rainMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public UnityEngine.Material rainMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* rainMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock m_PropertyBlock
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::MaterialPropertyBlock* m_PropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private UnityEngine.AudioSource m_RainAudioSource
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* m_RainAudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single m_TimeOfDay
    // Size: 0x4
    // Offset: 0x38
    float m_TimeOfDay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_TimeOfDay and: m_SkyProfile
    char __padding4[0x4] = {};
    // private Funly.SkyStudio.SkyProfile m_SkyProfile
    // Size: 0x8
    // Offset: 0x40
    ::Funly::SkyStudio::SkyProfile* m_SkyProfile;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::SkyProfile*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Funly::SkyStudio::ISkyModule
    operator ::Funly::SkyStudio::ISkyModule() noexcept {
      return *reinterpret_cast<::Funly::SkyStudio::ISkyModule*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.MeshRenderer rainMeshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_rainMeshRenderer();
    // Get instance field reference: public UnityEngine.Material rainMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_rainMaterial();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock m_PropertyBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn_m_PropertyBlock();
    // Get instance field reference: private UnityEngine.AudioSource m_RainAudioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_m_RainAudioSource();
    // Get instance field reference: private System.Single m_TimeOfDay
    [[deprecated("Use field access instead!")]] float& dyn_m_TimeOfDay();
    // Get instance field reference: private Funly.SkyStudio.SkyProfile m_SkyProfile
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::SkyProfile*& dyn_m_SkyProfile();
    // public System.Void SetWeatherEnclosure(Funly.SkyStudio.WeatherEnclosure enclosure)
    // Offset: 0x1514704
    void SetWeatherEnclosure(::Funly::SkyStudio::WeatherEnclosure* enclosure);
    // private System.Void Update()
    // Offset: 0x1514BF8
    void Update();
    // public System.Void UpdateForTimeOfDay(Funly.SkyStudio.SkyProfile skyProfile, System.Single timeOfDay)
    // Offset: 0x15148CC
    void UpdateForTimeOfDay(::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay);
    // public System.Void .ctor()
    // Offset: 0x1514C88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RainDownfallController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::RainDownfallController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RainDownfallController*, creationType>()));
    }
  }; // Funly.SkyStudio.RainDownfallController
  #pragma pack(pop)
  static check_size<sizeof(RainDownfallController), 64 + sizeof(::Funly::SkyStudio::SkyProfile*)> __Funly_SkyStudio_RainDownfallControllerSizeCheck;
  static_assert(sizeof(RainDownfallController) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::RainDownfallController::SetWeatherEnclosure
// Il2CppName: SetWeatherEnclosure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainDownfallController::*)(::Funly::SkyStudio::WeatherEnclosure*)>(&Funly::SkyStudio::RainDownfallController::SetWeatherEnclosure)> {
  static const MethodInfo* get() {
    static auto* enclosure = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "WeatherEnclosure")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainDownfallController*), "SetWeatherEnclosure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enclosure});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainDownfallController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainDownfallController::*)()>(&Funly::SkyStudio::RainDownfallController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainDownfallController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainDownfallController::UpdateForTimeOfDay
// Il2CppName: UpdateForTimeOfDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainDownfallController::*)(::Funly::SkyStudio::SkyProfile*, float)>(&Funly::SkyStudio::RainDownfallController::UpdateForTimeOfDay)> {
  static const MethodInfo* get() {
    static auto* skyProfile = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "SkyProfile")->byval_arg;
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainDownfallController*), "UpdateForTimeOfDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skyProfile, timeOfDay});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainDownfallController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
