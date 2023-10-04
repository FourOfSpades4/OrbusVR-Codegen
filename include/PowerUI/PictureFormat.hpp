// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.ImageFormat
#include "PowerUI/ImageFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: TextureAtlas
  class TextureAtlas;
  // Forward declaring type: AtlasLocation
  class AtlasLocation;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: PictureFormat
  class PictureFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::PictureFormat);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::PictureFormat*, "PowerUI", "PictureFormat");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.PictureFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class PictureFormat : public ::PowerUI::ImageFormat {
    public:
    public:
    // public UnityEngine.Texture2D Image
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Texture2D* Image;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public UnityEngine.Material IsolatedMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* IsolatedMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Texture2D Image
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_Image();
    // Get instance field reference: public UnityEngine.Material IsolatedMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_IsolatedMaterial();
    // public override System.String[] GetNames()
    // Offset: 0x1768BB8
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.String[] ImageFormat::GetNames()
    ::ArrayW<::StringW> GetNames();
    // public override System.Int32 get_Height()
    // Offset: 0x1768EB4
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Int32 ImageFormat::get_Height()
    int get_Height();
    // public override System.Int32 get_Width()
    // Offset: 0x1768EE8
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Int32 ImageFormat::get_Width()
    int get_Width();
    // public override UnityEngine.Material get_ImageMaterial()
    // Offset: 0x1768F1C
    // Implemented from: PowerUI.ImageFormat
    // Base method: UnityEngine.Material ImageFormat::get_ImageMaterial()
    ::UnityEngine::Material* get_ImageMaterial();
    // public override System.Boolean DrawToAtlas(Blaze.TextureAtlas atlas, Blaze.AtlasLocation location)
    // Offset: 0x1769120
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Boolean ImageFormat::DrawToAtlas(Blaze.TextureAtlas atlas, Blaze.AtlasLocation location)
    bool DrawToAtlas(::Blaze::TextureAtlas* atlas, ::Blaze::AtlasLocation* location);
    // public System.Void .ctor()
    // Offset: 0x17692F4
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Void ImageFormat::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PictureFormat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::PictureFormat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PictureFormat*, creationType>()));
    }
  }; // PowerUI.PictureFormat
  #pragma pack(pop)
  static check_size<sizeof(PictureFormat), 24 + sizeof(::UnityEngine::Material*)> __PowerUI_PictureFormatSizeCheck;
  static_assert(sizeof(PictureFormat) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::PictureFormat::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::PictureFormat::*)()>(&PowerUI::PictureFormat::GetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::PictureFormat*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::PictureFormat::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::PictureFormat::*)()>(&PowerUI::PictureFormat::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::PictureFormat*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::PictureFormat::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::PictureFormat::*)()>(&PowerUI::PictureFormat::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::PictureFormat*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::PictureFormat::get_ImageMaterial
// Il2CppName: get_ImageMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (PowerUI::PictureFormat::*)()>(&PowerUI::PictureFormat::get_ImageMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::PictureFormat*), "get_ImageMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::PictureFormat::DrawToAtlas
// Il2CppName: DrawToAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::PictureFormat::*)(::Blaze::TextureAtlas*, ::Blaze::AtlasLocation*)>(&PowerUI::PictureFormat::DrawToAtlas)> {
  static const MethodInfo* get() {
    static auto* atlas = &::il2cpp_utils::GetClassFromName("Blaze", "TextureAtlas")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("Blaze", "AtlasLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::PictureFormat*), "DrawToAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atlas, location});
  }
};
// Writing MetadataGetter for method: PowerUI::PictureFormat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
