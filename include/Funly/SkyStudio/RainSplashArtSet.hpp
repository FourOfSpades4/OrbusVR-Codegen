// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Funly.SkyStudio.SpriteArtSet
#include "Funly/SkyStudio/SpriteArtSet.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: RainSplashArtItem
  class RainSplashArtItem;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: RainSplashArtSet
  class RainSplashArtSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::RainSplashArtSet);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::RainSplashArtSet*, "Funly.SkyStudio", "RainSplashArtSet");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.RainSplashArtSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: AD2590
  class RainSplashArtSet : public ::Funly::SkyStudio::SpriteArtSet {
    public:
    public:
    // public System.Collections.Generic.List`1<Funly.SkyStudio.RainSplashArtItem> rainSplashArtItems
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashArtItem*>* rainSplashArtItems;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashArtItem*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<Funly.SkyStudio.RainSplashArtItem> rainSplashArtItems
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashArtItem*>*& dyn_rainSplashArtItems();
    // public System.Void .ctor()
    // Offset: 0x1514C9C
    // Implemented from: Funly.SkyStudio.SpriteArtSet
    // Base method: System.Void SpriteArtSet::.ctor()
    // Base method: System.Void BaseArtSet::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RainSplashArtSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::RainSplashArtSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RainSplashArtSet*, creationType>()));
    }
  }; // Funly.SkyStudio.RainSplashArtSet
  #pragma pack(pop)
  static check_size<sizeof(RainSplashArtSet), 24 + sizeof(::System::Collections::Generic::List_1<::Funly::SkyStudio::RainSplashArtItem*>*)> __Funly_SkyStudio_RainSplashArtSetSizeCheck;
  static_assert(sizeof(RainSplashArtSet) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::RainSplashArtSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
