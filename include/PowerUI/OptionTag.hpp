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
  // Forward declaring type: SelectTag
  class SelectTag;
  // Forward declaring type: Element
  class Element;
  // Forward declaring type: UIEvent
  class UIEvent;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: OptionTag
  class OptionTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::OptionTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::OptionTag*, "PowerUI", "OptionTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.OptionTag
  // [TokenAttribute] Offset: FFFFFFFF
  class OptionTag : public ::PowerUI::HtmlTagHandler {
    public:
    public:
    // public System.Boolean Selected
    // Size: 0x1
    // Offset: 0x33
    bool Selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean FullyLoaded
    // Size: 0x1
    // Offset: 0x34
    bool FullyLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FullyLoaded and: Dropdown
    char __padding1[0x3] = {};
    // public PowerUI.SelectTag Dropdown
    // Size: 0x8
    // Offset: 0x38
    ::PowerUI::SelectTag* Dropdown;
    // Field size check
    static_assert(sizeof(::PowerUI::SelectTag*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean Selected
    [[deprecated("Use field access instead!")]] bool& dyn_Selected();
    // Get instance field reference: private System.Boolean FullyLoaded
    [[deprecated("Use field access instead!")]] bool& dyn_FullyLoaded();
    // Get instance field reference: public PowerUI.SelectTag Dropdown
    [[deprecated("Use field access instead!")]] ::PowerUI::SelectTag*& dyn_Dropdown();
    // private PowerUI.SelectTag GetSelect(PowerUI.Element element)
    // Offset: 0x1768764
    ::PowerUI::SelectTag* GetSelect(::PowerUI::Element* element);
    // public override System.String[] GetTags()
    // Offset: 0x17683FC
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x17684AC
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Boolean OnAttributeChange(System.String property)
    // Offset: 0x1768510
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnAttributeChange(System.String property)
    bool OnAttributeChange(::StringW property);
    // public override System.Void OnTagLoaded()
    // Offset: 0x1768714
    // Implemented from: Wrench.TagHandler
    // Base method: System.Void TagHandler::OnTagLoaded()
    void OnTagLoaded();
    // public override System.Boolean OnClick(PowerUI.UIEvent clickEvent)
    // Offset: 0x1768878
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnClick(PowerUI.UIEvent clickEvent)
    bool OnClick(::PowerUI::UIEvent* clickEvent);
    // public System.Void .ctor()
    // Offset: 0x1768508
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::OptionTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionTag*, creationType>()));
    }
  }; // PowerUI.OptionTag
  #pragma pack(pop)
  static check_size<sizeof(OptionTag), 56 + sizeof(::PowerUI::SelectTag*)> __PowerUI_OptionTagSizeCheck;
  static_assert(sizeof(OptionTag) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::OptionTag::GetSelect
// Il2CppName: GetSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::SelectTag* (PowerUI::OptionTag::*)(::PowerUI::Element*)>(&PowerUI::OptionTag::GetSelect)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OptionTag*), "GetSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: PowerUI::OptionTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::OptionTag::*)()>(&PowerUI::OptionTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OptionTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::OptionTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::OptionTag::*)()>(&PowerUI::OptionTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OptionTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::OptionTag::OnAttributeChange
// Il2CppName: OnAttributeChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::OptionTag::*)(::StringW)>(&PowerUI::OptionTag::OnAttributeChange)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OptionTag*), "OnAttributeChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: PowerUI::OptionTag::OnTagLoaded
// Il2CppName: OnTagLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::OptionTag::*)()>(&PowerUI::OptionTag::OnTagLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OptionTag*), "OnTagLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::OptionTag::OnClick
// Il2CppName: OnClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::OptionTag::*)(::PowerUI::UIEvent*)>(&PowerUI::OptionTag::OnClick)> {
  static const MethodInfo* get() {
    static auto* clickEvent = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OptionTag*), "OnClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickEvent});
  }
};
// Writing MetadataGetter for method: PowerUI::OptionTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
