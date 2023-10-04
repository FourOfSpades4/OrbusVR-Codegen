// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.Css.DisplayableProperty
#include "PowerUI/Css/DisplayableProperty.hpp"
// Including type: UnityEngine.FilterMode
#include "UnityEngine/FilterMode.hpp"
// Including type: PowerUI.Css.BackgroundClipping
#include "PowerUI/Css/BackgroundClipping.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI::Css
namespace PowerUI::Css {
  // Forward declaring type: Value
  class Value;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ImagePackage
  class ImagePackage;
  // Forward declaring type: Element
  class Element;
}
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: AtlasLocation
  class AtlasLocation;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Forward declaring type: BackgroundImage
  class BackgroundImage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::Css::BackgroundImage);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::BackgroundImage*, "PowerUI.Css", "BackgroundImage");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.BackgroundImage
  // [TokenAttribute] Offset: FFFFFFFF
  class BackgroundImage : public ::PowerUI::Css::DisplayableProperty {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // public PowerUI.Css.Value OffsetX
    // Size: 0x8
    // Offset: 0x30
    ::PowerUI::Css::Value* OffsetX;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Value*) == 0x8);
    // public PowerUI.Css.Value OffsetY
    // Size: 0x8
    // Offset: 0x38
    ::PowerUI::Css::Value* OffsetY;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Value*) == 0x8);
    // public PowerUI.Css.Value SizeX
    // Size: 0x8
    // Offset: 0x40
    ::PowerUI::Css::Value* SizeX;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Value*) == 0x8);
    // public PowerUI.Css.Value SizeY
    // Size: 0x8
    // Offset: 0x48
    ::PowerUI::Css::Value* SizeY;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Value*) == 0x8);
    // public System.Boolean RepeatX
    // Size: 0x1
    // Offset: 0x50
    bool RepeatX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RepeatY
    // Size: 0x1
    // Offset: 0x51
    bool RepeatY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RepeatY and: Image
    char __padding5[0x6] = {};
    // public PowerUI.ImagePackage Image
    // Size: 0x8
    // Offset: 0x58
    ::PowerUI::ImagePackage* Image;
    // Field size check
    static_assert(sizeof(::PowerUI::ImagePackage*) == 0x8);
    // public System.Boolean ForcedIsolate
    // Size: 0x1
    // Offset: 0x60
    bool ForcedIsolate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ForcedIsolate and: ImageLocation
    char __padding7[0x7] = {};
    // public Blaze.AtlasLocation ImageLocation
    // Size: 0x8
    // Offset: 0x68
    ::Blaze::AtlasLocation* ImageLocation;
    // Field size check
    static_assert(sizeof(::Blaze::AtlasLocation*) == 0x8);
    // public UnityEngine.FilterMode Filtering
    // Size: 0x4
    // Offset: 0x70
    ::UnityEngine::FilterMode Filtering;
    // Field size check
    static_assert(sizeof(::UnityEngine::FilterMode) == 0x4);
    // public PowerUI.Css.BackgroundClipping Clipping
    // Size: 0x4
    // Offset: 0x74
    ::PowerUI::Css::BackgroundClipping Clipping;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::BackgroundClipping) == 0x4);
    public:
    // Get instance field reference: public PowerUI.Css.Value OffsetX
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Value*& dyn_OffsetX();
    // Get instance field reference: public PowerUI.Css.Value OffsetY
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Value*& dyn_OffsetY();
    // Get instance field reference: public PowerUI.Css.Value SizeX
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Value*& dyn_SizeX();
    // Get instance field reference: public PowerUI.Css.Value SizeY
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Value*& dyn_SizeY();
    // Get instance field reference: public System.Boolean RepeatX
    [[deprecated("Use field access instead!")]] bool& dyn_RepeatX();
    // Get instance field reference: public System.Boolean RepeatY
    [[deprecated("Use field access instead!")]] bool& dyn_RepeatY();
    // Get instance field reference: public PowerUI.ImagePackage Image
    [[deprecated("Use field access instead!")]] ::PowerUI::ImagePackage*& dyn_Image();
    // Get instance field reference: public System.Boolean ForcedIsolate
    [[deprecated("Use field access instead!")]] bool& dyn_ForcedIsolate();
    // Get instance field reference: public Blaze.AtlasLocation ImageLocation
    [[deprecated("Use field access instead!")]] ::Blaze::AtlasLocation*& dyn_ImageLocation();
    // Get instance field reference: public UnityEngine.FilterMode Filtering
    [[deprecated("Use field access instead!")]] ::UnityEngine::FilterMode& dyn_Filtering();
    // Get instance field reference: public PowerUI.Css.BackgroundClipping Clipping
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::BackgroundClipping& dyn_Clipping();
    // public System.Boolean Overlaps(PowerUI.Css.BackgroundImage image)
    // Offset: 0xEC0B98
    bool Overlaps(::PowerUI::Css::BackgroundImage* image);
    // public System.Void SetImage(UnityEngine.Texture2D image)
    // Offset: 0xEC0CB0
    void SetImage(::UnityEngine::Texture2D* image);
    // public System.Void SetImage(PowerUI.ImagePackage package)
    // Offset: 0xEBE2C4
    void SetImage(::PowerUI::ImagePackage* package);
    // public System.Void ImageReady(PowerUI.ImagePackage package)
    // Offset: 0xEC0ECC
    void ImageReady(::PowerUI::ImagePackage* package);
    // public System.Void .ctor(PowerUI.Element element)
    // Offset: 0xEBE290
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Void DisplayableProperty::.ctor(PowerUI.Element element)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BackgroundImage* New_ctor(::PowerUI::Element* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::Css::BackgroundImage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BackgroundImage*, creationType>(element)));
    }
    // public override System.Void SetOverlayColour(UnityEngine.Color colour)
    // Offset: 0xEC0B94
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Void DisplayableProperty::SetOverlayColour(UnityEngine.Color colour)
    void SetOverlayColour(::UnityEngine::Color colour);
    // public override System.Void OnBatchDestroy()
    // Offset: 0xEC0BFC
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Void DisplayableProperty::OnBatchDestroy()
    void OnBatchDestroy();
    // public override System.Void Paint()
    // Offset: 0xEC0C14
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Void DisplayableProperty::Paint()
    void Paint();
    // protected override System.Void NowOffScreen()
    // Offset: 0xEC10D0
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Void DisplayableProperty::NowOffScreen()
    void NowOffScreen();
    // protected override System.Boolean NowOnScreen()
    // Offset: 0xEC1104
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Boolean DisplayableProperty::NowOnScreen()
    bool NowOnScreen();
    // protected override System.Void Layout()
    // Offset: 0xEC1278
    // Implemented from: PowerUI.Css.DisplayableProperty
    // Base method: System.Void DisplayableProperty::Layout()
    void Layout();
  }; // PowerUI.Css.BackgroundImage
  #pragma pack(pop)
  static check_size<sizeof(BackgroundImage), 116 + sizeof(::PowerUI::Css::BackgroundClipping)> __PowerUI_Css_BackgroundImageSizeCheck;
  static_assert(sizeof(BackgroundImage) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::Overlaps
// Il2CppName: Overlaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::Css::BackgroundImage::*)(::PowerUI::Css::BackgroundImage*)>(&PowerUI::Css::BackgroundImage::Overlaps)> {
  static const MethodInfo* get() {
    static auto* image = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "BackgroundImage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "Overlaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{image});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::SetImage
// Il2CppName: SetImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)(::UnityEngine::Texture2D*)>(&PowerUI::Css::BackgroundImage::SetImage)> {
  static const MethodInfo* get() {
    static auto* image = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "SetImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{image});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::SetImage
// Il2CppName: SetImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)(::PowerUI::ImagePackage*)>(&PowerUI::Css::BackgroundImage::SetImage)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "ImagePackage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "SetImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::ImageReady
// Il2CppName: ImageReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)(::PowerUI::ImagePackage*)>(&PowerUI::Css::BackgroundImage::ImageReady)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "ImagePackage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "ImageReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::SetOverlayColour
// Il2CppName: SetOverlayColour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)(::UnityEngine::Color)>(&PowerUI::Css::BackgroundImage::SetOverlayColour)> {
  static const MethodInfo* get() {
    static auto* colour = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "SetOverlayColour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colour});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::OnBatchDestroy
// Il2CppName: OnBatchDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)()>(&PowerUI::Css::BackgroundImage::OnBatchDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "OnBatchDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::Paint
// Il2CppName: Paint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)()>(&PowerUI::Css::BackgroundImage::Paint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "Paint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::NowOffScreen
// Il2CppName: NowOffScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)()>(&PowerUI::Css::BackgroundImage::NowOffScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "NowOffScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::NowOnScreen
// Il2CppName: NowOnScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::Css::BackgroundImage::*)()>(&PowerUI::Css::BackgroundImage::NowOnScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "NowOnScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::BackgroundImage::Layout
// Il2CppName: Layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::BackgroundImage::*)()>(&PowerUI::Css::BackgroundImage::Layout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::BackgroundImage*), "Layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};