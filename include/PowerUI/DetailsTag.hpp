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
  // Forward declaring type: DetailsTag
  class DetailsTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::DetailsTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::DetailsTag*, "PowerUI", "DetailsTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.DetailsTag
  // [TokenAttribute] Offset: FFFFFFFF
  class DetailsTag : public ::PowerUI::HtmlTagHandler {
    public:
    // public override System.String[] GetTags()
    // Offset: 0x185470C
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x18547BC
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Void OnChildrenLoaded()
    // Offset: 0x1854820
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::OnChildrenLoaded()
    void OnChildrenLoaded();
    // public System.Void .ctor()
    // Offset: 0x1854818
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DetailsTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::DetailsTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DetailsTag*, creationType>()));
    }
  }; // PowerUI.DetailsTag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::DetailsTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::DetailsTag::*)()>(&PowerUI::DetailsTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DetailsTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DetailsTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::DetailsTag::*)()>(&PowerUI::DetailsTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DetailsTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DetailsTag::OnChildrenLoaded
// Il2CppName: OnChildrenLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DetailsTag::*)()>(&PowerUI::DetailsTag::OnChildrenLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DetailsTag*), "OnChildrenLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DetailsTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!