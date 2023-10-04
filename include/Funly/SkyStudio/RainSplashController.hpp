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
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: SkyProfile
  class SkyProfile;
  // Forward declaring type: RainSplashRenderer
  class RainSplashRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: RainSplashController
  class RainSplashController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::RainSplashController);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::RainSplashController*, "Funly.SkyStudio", "RainSplashController");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.RainSplashController
  // [TokenAttribute] Offset: FFFFFFFF
  class RainSplashController : public ::UnityEngine::MonoBehaviour/*, public ::Funly::SkyStudio::ISkyModule*/ {
    public:
    public:
    // private Funly.SkyStudio.SkyProfile m_SkyProfile
    // Size: 0x8
    // Offset: 0x18
    ::Funly::SkyStudio::SkyProfile* m_SkyProfile;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::SkyProfile*) == 0x8);
    // private System.Single m_TimeOfDay
    // Size: 0x4
    // Offset: 0x20
    float m_TimeOfDay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_TimeOfDay and: m_SplashRenderers
    char __padding1[0x4] = {};
    // private System.Collections.Generic.List`1<Funly.SkyStudio.RainSplashRenderer> m_SplashRenderers
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashRenderer*>* m_SplashRenderers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashRenderer*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Funly::SkyStudio::ISkyModule
    operator ::Funly::SkyStudio::ISkyModule() noexcept {
      return *reinterpret_cast<::Funly::SkyStudio::ISkyModule*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Funly.SkyStudio.SkyProfile m_SkyProfile
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::SkyProfile*& dyn_m_SkyProfile();
    // Get instance field reference: private System.Single m_TimeOfDay
    [[deprecated("Use field access instead!")]] float& dyn_m_TimeOfDay();
    // Get instance field reference: private System.Collections.Generic.List`1<Funly.SkyStudio.RainSplashRenderer> m_SplashRenderers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashRenderer*>*& dyn_m_SplashRenderers();
    // private System.Void Start()
    // Offset: 0x1514CA4
    void Start();
    // public System.Void UpdateForTimeOfDay(Funly.SkyStudio.SkyProfile skyProfile, System.Single timeOfDay)
    // Offset: 0x1514E54
    void UpdateForTimeOfDay(::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay);
    // public System.Void Update()
    // Offset: 0x1514E60
    void Update();
    // public System.Void ClearSplashRenderers()
    // Offset: 0x1514D40
    void ClearSplashRenderers();
    // public System.Void CreateSplashRenderers()
    // Offset: 0x151515C
    void CreateSplashRenderers();
    // public System.Void .ctor()
    // Offset: 0x1515380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RainSplashController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::RainSplashController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RainSplashController*, creationType>()));
    }
  }; // Funly.SkyStudio.RainSplashController
  #pragma pack(pop)
  static check_size<sizeof(RainSplashController), 40 + sizeof(::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashRenderer*>*)> __Funly_SkyStudio_RainSplashControllerSizeCheck;
  static_assert(sizeof(RainSplashController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainSplashController::*)()>(&Funly::SkyStudio::RainSplashController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainSplashController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashController::UpdateForTimeOfDay
// Il2CppName: UpdateForTimeOfDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainSplashController::*)(::Funly::SkyStudio::SkyProfile*, float)>(&Funly::SkyStudio::RainSplashController::UpdateForTimeOfDay)> {
  static const MethodInfo* get() {
    static auto* skyProfile = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "SkyProfile")->byval_arg;
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainSplashController*), "UpdateForTimeOfDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skyProfile, timeOfDay});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainSplashController::*)()>(&Funly::SkyStudio::RainSplashController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainSplashController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashController::ClearSplashRenderers
// Il2CppName: ClearSplashRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainSplashController::*)()>(&Funly::SkyStudio::RainSplashController::ClearSplashRenderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainSplashController*), "ClearSplashRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashController::CreateSplashRenderers
// Il2CppName: CreateSplashRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::RainSplashController::*)()>(&Funly::SkyStudio::RainSplashController::CreateSplashRenderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::RainSplashController*), "CreateSplashRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
