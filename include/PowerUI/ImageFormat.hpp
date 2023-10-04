// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: ImageFormat
  class ImageFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::ImageFormat);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::ImageFormat*, "PowerUI", "ImageFormat");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.ImageFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class ImageFormat : public ::Il2CppObject {
    public:
    // public System.String[] GetNames()
    // Offset: 0x1A4C774
    ::ArrayW<::StringW> GetNames();
    // public System.Int32 get_Height()
    // Offset: 0x1A4C77C
    int get_Height();
    // public System.Int32 get_Width()
    // Offset: 0x1A4C784
    int get_Width();
    // public UnityEngine.Material get_ImageMaterial()
    // Offset: 0x1A4C78C
    ::UnityEngine::Material* get_ImageMaterial();
    // public System.Void Clear()
    // Offset: 0x1A4C794
    void Clear();
    // public System.Void GoingOnDisplay()
    // Offset: 0x1A4C798
    void GoingOnDisplay();
    // public System.Void GoingOffDisplay()
    // Offset: 0x1A4C79C
    void GoingOffDisplay();
    // public System.Boolean DrawToAtlas(Blaze.TextureAtlas atlas, Blaze.AtlasLocation location)
    // Offset: 0x1A4C7A0
    bool DrawToAtlas(::Blaze::TextureAtlas* atlas, ::Blaze::AtlasLocation* location);
    // public System.Void .ctor()
    // Offset: 0x1A4C7A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageFormat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::ImageFormat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageFormat*, creationType>()));
    }
  }; // PowerUI.ImageFormat
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::ImageFormat::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::GetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::get_ImageMaterial
// Il2CppName: get_ImageMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::get_ImageMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "get_ImageMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::GoingOnDisplay
// Il2CppName: GoingOnDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::GoingOnDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "GoingOnDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::GoingOffDisplay
// Il2CppName: GoingOffDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::ImageFormat::*)()>(&PowerUI::ImageFormat::GoingOffDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "GoingOffDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::DrawToAtlas
// Il2CppName: DrawToAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::ImageFormat::*)(::Blaze::TextureAtlas*, ::Blaze::AtlasLocation*)>(&PowerUI::ImageFormat::DrawToAtlas)> {
  static const MethodInfo* get() {
    static auto* atlas = &::il2cpp_utils::GetClassFromName("Blaze", "TextureAtlas")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("Blaze", "AtlasLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormat*), "DrawToAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atlas, location});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!