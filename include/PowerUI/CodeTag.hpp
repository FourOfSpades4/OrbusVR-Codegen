// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.PreTag
#include "PowerUI/PreTag.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Wrench
namespace Wrench {
  // Skipping declaration: TagHandler because it is already included!
  // Forward declaring type: MLLexer
  class MLLexer;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: CodeTag
  class CodeTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::CodeTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::CodeTag*, "PowerUI", "CodeTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.CodeTag
  // [TokenAttribute] Offset: FFFFFFFF
  class CodeTag : public ::PowerUI::PreTag {
    public:
    // public override System.String[] GetTags()
    // Offset: 0xEBF9A4
    // Implemented from: PowerUI.PreTag
    // Base method: System.String[] PreTag::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0xEBFA54
    // Implemented from: PowerUI.PreTag
    // Base method: Wrench.TagHandler PreTag::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // protected override System.Boolean AtEnd(Wrench.MLLexer lexer)
    // Offset: 0xEBFAB8
    // Implemented from: PowerUI.PreTag
    // Base method: System.Boolean PreTag::AtEnd(Wrench.MLLexer lexer)
    bool AtEnd(::Wrench::MLLexer* lexer);
    // public System.Void .ctor()
    // Offset: 0xEBFAB0
    // Implemented from: PowerUI.PreTag
    // Base method: System.Void PreTag::.ctor()
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodeTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::CodeTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodeTag*, creationType>()));
    }
  }; // PowerUI.CodeTag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::CodeTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::CodeTag::*)()>(&PowerUI::CodeTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CodeTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::CodeTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::CodeTag::*)()>(&PowerUI::CodeTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CodeTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::CodeTag::AtEnd
// Il2CppName: AtEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::CodeTag::*)(::Wrench::MLLexer*)>(&PowerUI::CodeTag::AtEnd)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("Wrench", "MLLexer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CodeTag*), "AtEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer});
  }
};
// Writing MetadataGetter for method: PowerUI::CodeTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
