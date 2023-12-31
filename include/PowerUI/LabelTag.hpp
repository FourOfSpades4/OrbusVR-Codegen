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
  // Forward declaring type: Element
  class Element;
  // Forward declaring type: UIEvent
  class UIEvent;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: LabelTag
  class LabelTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::LabelTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::LabelTag*, "PowerUI", "LabelTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.LabelTag
  // [TokenAttribute] Offset: FFFFFFFF
  class LabelTag : public ::PowerUI::HtmlTagHandler {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    public:
    // public System.String ForElement
    // Size: 0x8
    // Offset: 0x38
    ::StringW ForElement;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return ForElement;
    }
    // Get instance field reference: public System.String ForElement
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ForElement();
    // public PowerUI.Element GetFor()
    // Offset: 0x1A53CB8
    ::PowerUI::Element* GetFor();
    // public override System.String[] GetTags()
    // Offset: 0x1A53AFC
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x1A53BAC
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Boolean OnAttributeChange(System.String property)
    // Offset: 0x1A53C10
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnAttributeChange(System.String property)
    bool OnAttributeChange(::StringW property);
    // public override System.Boolean OnClick(PowerUI.UIEvent clickEvent)
    // Offset: 0x1A53DE8
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnClick(PowerUI.UIEvent clickEvent)
    bool OnClick(::PowerUI::UIEvent* clickEvent);
    // public System.Void .ctor()
    // Offset: 0x1A53C08
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LabelTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::LabelTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LabelTag*, creationType>()));
    }
  }; // PowerUI.LabelTag
  #pragma pack(pop)
  static check_size<sizeof(LabelTag), 56 + sizeof(::StringW)> __PowerUI_LabelTagSizeCheck;
  static_assert(sizeof(LabelTag) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::LabelTag::GetFor
// Il2CppName: GetFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Element* (PowerUI::LabelTag::*)()>(&PowerUI::LabelTag::GetFor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::LabelTag*), "GetFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::LabelTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::LabelTag::*)()>(&PowerUI::LabelTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::LabelTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::LabelTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::LabelTag::*)()>(&PowerUI::LabelTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::LabelTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::LabelTag::OnAttributeChange
// Il2CppName: OnAttributeChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::LabelTag::*)(::StringW)>(&PowerUI::LabelTag::OnAttributeChange)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::LabelTag*), "OnAttributeChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: PowerUI::LabelTag::OnClick
// Il2CppName: OnClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::LabelTag::*)(::PowerUI::UIEvent*)>(&PowerUI::LabelTag::OnClick)> {
  static const MethodInfo* get() {
    static auto* clickEvent = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::LabelTag*), "OnClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickEvent});
  }
};
// Writing MetadataGetter for method: PowerUI::LabelTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
