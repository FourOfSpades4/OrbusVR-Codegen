// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Funly.SkyStudio.BaseKeyframe
#include "Funly/SkyStudio/BaseKeyframe.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: TextureKeyframe
  class TextureKeyframe;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::TextureKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::TextureKeyframe*, "Funly.SkyStudio", "TextureKeyframe");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.TextureKeyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureKeyframe : public ::Funly::SkyStudio::BaseKeyframe {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // public UnityEngine.Texture texture
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Texture* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Texture*
    constexpr operator ::UnityEngine::Texture*() const noexcept {
      return texture;
    }
    // Get instance field reference: public UnityEngine.Texture texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_texture();
    // public System.Void .ctor(UnityEngine.Texture texture, System.Single time)
    // Offset: 0x151B058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureKeyframe* New_ctor(::UnityEngine::Texture* texture, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::TextureKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureKeyframe*, creationType>(texture, time)));
    }
    // public System.Void .ctor(Funly.SkyStudio.TextureKeyframe keyframe)
    // Offset: 0x1522620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureKeyframe* New_ctor(::Funly::SkyStudio::TextureKeyframe* keyframe) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::TextureKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureKeyframe*, creationType>(keyframe)));
    }
  }; // Funly.SkyStudio.TextureKeyframe
  #pragma pack(pop)
  static check_size<sizeof(TextureKeyframe), 40 + sizeof(::UnityEngine::Texture*)> __Funly_SkyStudio_TextureKeyframeSizeCheck;
  static_assert(sizeof(TextureKeyframe) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::TextureKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Funly::SkyStudio::TextureKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
