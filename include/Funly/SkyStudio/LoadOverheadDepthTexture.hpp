// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: WeatherDepthCamera
  class WeatherDepthCamera;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RawImage
  class RawImage;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: LoadOverheadDepthTexture
  class LoadOverheadDepthTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::LoadOverheadDepthTexture);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::LoadOverheadDepthTexture*, "Funly.SkyStudio", "LoadOverheadDepthTexture");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.LoadOverheadDepthTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD2670
  class LoadOverheadDepthTexture : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Funly.SkyStudio.WeatherDepthCamera m_RainCamera
    // Size: 0x8
    // Offset: 0x18
    ::Funly::SkyStudio::WeatherDepthCamera* m_RainCamera;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::WeatherDepthCamera*) == 0x8);
    // private UnityEngine.UI.RawImage m_Image
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::RawImage* m_Image;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::RawImage*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Funly.SkyStudio.WeatherDepthCamera m_RainCamera
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::WeatherDepthCamera*& dyn_m_RainCamera();
    // Get instance field reference: private UnityEngine.UI.RawImage m_Image
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::RawImage*& dyn_m_Image();
    // private System.Void Start()
    // Offset: 0x15122F0
    void Start();
    // private System.Void Update()
    // Offset: 0x151237C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x15123C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadOverheadDepthTexture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::LoadOverheadDepthTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadOverheadDepthTexture*, creationType>()));
    }
  }; // Funly.SkyStudio.LoadOverheadDepthTexture
  #pragma pack(pop)
  static check_size<sizeof(LoadOverheadDepthTexture), 32 + sizeof(::UnityEngine::UI::RawImage*)> __Funly_SkyStudio_LoadOverheadDepthTextureSizeCheck;
  static_assert(sizeof(LoadOverheadDepthTexture) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::LoadOverheadDepthTexture::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::LoadOverheadDepthTexture::*)()>(&Funly::SkyStudio::LoadOverheadDepthTexture::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::LoadOverheadDepthTexture*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::LoadOverheadDepthTexture::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::LoadOverheadDepthTexture::*)()>(&Funly::SkyStudio::LoadOverheadDepthTexture::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::LoadOverheadDepthTexture*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::LoadOverheadDepthTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
