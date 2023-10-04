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
  // Forward declaring type: H3Tag
  class H3Tag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::H3Tag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::H3Tag*, "PowerUI", "H3Tag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.H3Tag
  // [TokenAttribute] Offset: FFFFFFFF
  class H3Tag : public ::PowerUI::HtmlTagHandler {
    public:
    // public override System.String[] GetTags()
    // Offset: 0x1A488F0
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x1A489A0
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public System.Void .ctor()
    // Offset: 0x1A489FC
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static H3Tag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::H3Tag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<H3Tag*, creationType>()));
    }
  }; // PowerUI.H3Tag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::H3Tag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::H3Tag::*)()>(&PowerUI::H3Tag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::H3Tag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::H3Tag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::H3Tag::*)()>(&PowerUI::H3Tag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::H3Tag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::H3Tag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
