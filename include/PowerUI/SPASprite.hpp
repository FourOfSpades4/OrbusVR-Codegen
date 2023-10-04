// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: SPA
  class SPA;
  // Forward declaring type: SPAReader
  class SPAReader;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: TextureAtlas
  class TextureAtlas;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: SPASprite
  class SPASprite;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::SPASprite);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::SPASprite*, "PowerUI", "SPASprite");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.SPASprite
  // [TokenAttribute] Offset: FFFFFFFF
  class SPASprite : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 ID
    // Size: 0x4
    // Offset: 0x10
    int _ID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Width
    // Size: 0x4
    // Offset: 0x14
    int Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Height
    // Size: 0x4
    // Offset: 0x18
    int Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Height and: Animation
    char __padding2[0x4] = {};
    // public PowerUI.SPA Animation
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::SPA* Animation;
    // Field size check
    static_assert(sizeof(::PowerUI::SPA*) == 0x8);
    // public System.Int32 FrameCount
    // Size: 0x4
    // Offset: 0x28
    int FrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: FrameCount and: Sprite
    char __padding4[0x4] = {};
    // public UnityEngine.Texture2D Sprite
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Texture2D* Sprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public UnityEngine.Vector2 TextureScale
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Vector2 TextureScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Int32 VerticalFrameCount
    // Size: 0x4
    // Offset: 0x40
    int VerticalFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: VerticalFrameCount and: LoadedAtlas
    char __padding7[0x4] = {};
    // private Blaze.TextureAtlas LoadedAtlas
    // Size: 0x8
    // Offset: 0x48
    ::Blaze::TextureAtlas* LoadedAtlas;
    // Field size check
    static_assert(sizeof(::Blaze::TextureAtlas*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 ID
    [[deprecated("Use field access instead!")]] int& dyn_ID();
    // Get instance field reference: public System.Int32 Width
    [[deprecated("Use field access instead!")]] int& dyn_Width();
    // Get instance field reference: public System.Int32 Height
    [[deprecated("Use field access instead!")]] int& dyn_Height();
    // Get instance field reference: public PowerUI.SPA Animation
    [[deprecated("Use field access instead!")]] ::PowerUI::SPA*& dyn_Animation();
    // Get instance field reference: public System.Int32 FrameCount
    [[deprecated("Use field access instead!")]] int& dyn_FrameCount();
    // Get instance field reference: public UnityEngine.Texture2D Sprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_Sprite();
    // Get instance field reference: public UnityEngine.Vector2 TextureScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_TextureScale();
    // Get instance field reference: public System.Int32 VerticalFrameCount
    [[deprecated("Use field access instead!")]] int& dyn_VerticalFrameCount();
    // Get instance field reference: private Blaze.TextureAtlas LoadedAtlas
    [[deprecated("Use field access instead!")]] ::Blaze::TextureAtlas*& dyn_LoadedAtlas();
    // public Blaze.TextureAtlas get_Atlas()
    // Offset: 0x1770E80
    ::Blaze::TextureAtlas* get_Atlas();
    // public System.Void .ctor(PowerUI.SPA animation, System.Int32 id)
    // Offset: 0x176F840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SPASprite* New_ctor(::PowerUI::SPA* animation, int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::SPASprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SPASprite*, creationType>(animation, id)));
    }
    // public System.Void .ctor(PowerUI.SPA animation, PowerUI.SPAReader reader, System.Int32 id)
    // Offset: 0x176F964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SPASprite* New_ctor(::PowerUI::SPA* animation, ::PowerUI::SPAReader* reader, int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::SPASprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SPASprite*, creationType>(animation, reader, id)));
    }
    // public System.Void SetSprite(UnityEngine.Texture2D sprite, System.Int32 totalFrameCount)
    // Offset: 0x17711A8
    void SetSprite(::UnityEngine::Texture2D* sprite, int totalFrameCount);
  }; // PowerUI.SPASprite
  #pragma pack(pop)
  static check_size<sizeof(SPASprite), 72 + sizeof(::Blaze::TextureAtlas*)> __PowerUI_SPASpriteSizeCheck;
  static_assert(sizeof(SPASprite) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::SPASprite::get_Atlas
// Il2CppName: get_Atlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Blaze::TextureAtlas* (PowerUI::SPASprite::*)()>(&PowerUI::SPASprite::get_Atlas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SPASprite*), "get_Atlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SPASprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::SPASprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::SPASprite::SetSprite
// Il2CppName: SetSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SPASprite::*)(::UnityEngine::Texture2D*, int)>(&PowerUI::SPASprite::SetSprite)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* totalFrameCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SPASprite*), "SetSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, totalFrameCount});
  }
};