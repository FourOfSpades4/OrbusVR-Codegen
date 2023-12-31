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
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: FontTag
  class FontTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::FontTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::FontTag*, "PowerUI", "FontTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.FontTag
  // [TokenAttribute] Offset: FFFFFFFF
  class FontTag : public ::PowerUI::HtmlTagHandler {
    public:
    // public override System.String[] GetTags()
    // Offset: 0x1A46964
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x1A46A14
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Boolean OnAttributeChange(System.String property)
    // Offset: 0x1A46A78
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnAttributeChange(System.String property)
    bool OnAttributeChange(::StringW property);
    // public System.Void .ctor()
    // Offset: 0x1A46A70
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FontTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::FontTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FontTag*, creationType>()));
    }
  }; // PowerUI.FontTag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::FontTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::FontTag::*)()>(&PowerUI::FontTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FontTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::FontTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::FontTag::*)()>(&PowerUI::FontTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FontTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::FontTag::OnAttributeChange
// Il2CppName: OnAttributeChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::FontTag::*)(::StringW)>(&PowerUI::FontTag::OnAttributeChange)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FontTag*), "OnAttributeChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: PowerUI::FontTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
