// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.HtmlTagHandler
#include "PowerUI/HtmlTagHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Document
  class Document;
  // Forward declaring type: TextPackage
  class TextPackage;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: IframeTag
  class IframeTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::IframeTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::IframeTag*, "PowerUI", "IframeTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.IframeTag
  // [TokenAttribute] Offset: FFFFFFFF
  class IframeTag : public ::PowerUI::HtmlTagHandler {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    public:
    // public System.String Src
    // Size: 0x8
    // Offset: 0x38
    ::StringW Src;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean Loaded
    // Size: 0x1
    // Offset: 0x40
    bool Loaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Loaded and: ContentDocument
    char __padding1[0x7] = {};
    // public PowerUI.Document ContentDocument
    // Size: 0x8
    // Offset: 0x48
    ::PowerUI::Document* ContentDocument;
    // Field size check
    static_assert(sizeof(::PowerUI::Document*) == 0x8);
    public:
    // Get instance field reference: public System.String Src
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Src();
    // Get instance field reference: public System.Boolean Loaded
    [[deprecated("Use field access instead!")]] bool& dyn_Loaded();
    // Get instance field reference: public PowerUI.Document ContentDocument
    [[deprecated("Use field access instead!")]] ::PowerUI::Document*& dyn_ContentDocument();
    // private System.Void LoadContent()
    // Offset: 0x1A4C044
    void LoadContent();
    // private System.Void OnTextReady(PowerUI.TextPackage package)
    // Offset: 0x1A4C278
    void OnTextReady(::PowerUI::TextPackage* package);
    // private System.Void SetContent(System.String text)
    // Offset: 0x1A4C22C
    void SetContent(::StringW text);
    // public System.Void .ctor()
    // Offset: 0x1A4BE54
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IframeTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::IframeTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IframeTag*, creationType>()));
    }
    // public override System.String[] GetTags()
    // Offset: 0x1A4BE80
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x1A4BF30
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Boolean OnAttributeChange(System.String property)
    // Offset: 0x1A4BF94
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnAttributeChange(System.String property)
    bool OnAttributeChange(::StringW property);
    // public override System.Void OnTagLoaded()
    // Offset: 0x1A4C348
    // Implemented from: Wrench.TagHandler
    // Base method: System.Void TagHandler::OnTagLoaded()
    void OnTagLoaded();
  }; // PowerUI.IframeTag
  #pragma pack(pop)
  static check_size<sizeof(IframeTag), 72 + sizeof(::PowerUI::Document*)> __PowerUI_IframeTagSizeCheck;
  static_assert(sizeof(IframeTag) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::IframeTag::LoadContent
// Il2CppName: LoadContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::IframeTag::*)()>(&PowerUI::IframeTag::LoadContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "LoadContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::IframeTag::OnTextReady
// Il2CppName: OnTextReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::IframeTag::*)(::PowerUI::TextPackage*)>(&PowerUI::IframeTag::OnTextReady)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "TextPackage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "OnTextReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package});
  }
};
// Writing MetadataGetter for method: PowerUI::IframeTag::SetContent
// Il2CppName: SetContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::IframeTag::*)(::StringW)>(&PowerUI::IframeTag::SetContent)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "SetContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: PowerUI::IframeTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::IframeTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::IframeTag::*)()>(&PowerUI::IframeTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::IframeTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::IframeTag::*)()>(&PowerUI::IframeTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::IframeTag::OnAttributeChange
// Il2CppName: OnAttributeChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::IframeTag::*)(::StringW)>(&PowerUI::IframeTag::OnAttributeChange)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "OnAttributeChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: PowerUI::IframeTag::OnTagLoaded
// Il2CppName: OnTagLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::IframeTag::*)()>(&PowerUI::IframeTag::OnTagLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::IframeTag*), "OnTagLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
