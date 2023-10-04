// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Funly.SkyStudio.SpriteArtItem
#include "Funly/SkyStudio/SpriteArtItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: RainSplashArtItem
  class RainSplashArtItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::RainSplashArtItem);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::RainSplashArtItem*, "Funly.SkyStudio", "RainSplashArtItem");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.RainSplashArtItem
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: AD2530
  class RainSplashArtItem : public ::Funly::SkyStudio::SpriteArtItem {
    public:
    public:
    // [RangeAttribute] Offset: 0xAE191C
    // public System.Single intensityMultiplier
    // Size: 0x4
    // Offset: 0x50
    float intensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAE1934
    // public System.Single scaleMultiplier
    // Size: 0x4
    // Offset: 0x54
    float scaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single intensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_intensityMultiplier();
    // Get instance field reference: public System.Single scaleMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_scaleMultiplier();
    // public System.Void .ctor()
    // Offset: 0x1514C90
    // Implemented from: Funly.SkyStudio.SpriteArtItem
    // Base method: System.Void SpriteArtItem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RainSplashArtItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::RainSplashArtItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RainSplashArtItem*, creationType>()));
    }
  }; // Funly.SkyStudio.RainSplashArtItem
  #pragma pack(pop)
  static check_size<sizeof(RainSplashArtItem), 84 + sizeof(float)> __Funly_SkyStudio_RainSplashArtItemSizeCheck;
  static_assert(sizeof(RainSplashArtItem) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashArtItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!