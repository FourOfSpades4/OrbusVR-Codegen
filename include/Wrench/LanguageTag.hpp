// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Wrench.LanguageTagHandler
#include "Wrench/LanguageTagHandler.hpp"
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
  // Forward declaring type: LanguageSet
  class LanguageSet;
  // Forward declaring type: LanguageElement
  class LanguageElement;
}
// Completed forward declares
// Type namespace: Wrench
namespace Wrench {
  // Forward declaring type: LanguageTag
  class LanguageTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Wrench::LanguageTag);
DEFINE_IL2CPP_ARG_TYPE(::Wrench::LanguageTag*, "Wrench", "LanguageTag");
// Type namespace: Wrench
namespace Wrench {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Wrench.LanguageTag
  // [TokenAttribute] Offset: FFFFFFFF
  class LanguageTag : public ::Wrench::LanguageTagHandler {
    public:
    // public System.Void Apply(Wrench.LanguageSet language, Wrench.LanguageElement element)
    // Offset: 0x282B380
    void Apply(::Wrench::LanguageSet* language, ::Wrench::LanguageElement* element);
    // public override System.String[] GetTags()
    // Offset: 0x282B218
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override System.Boolean SelfClosing()
    // Offset: 0x282B31C
    // Implemented from: Wrench.TagHandler
    // Base method: System.Boolean TagHandler::SelfClosing()
    bool SelfClosing();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x282B324
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public System.Void .ctor()
    // Offset: 0x282B37C
    // Implemented from: Wrench.LanguageTagHandler
    // Base method: System.Void LanguageTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Wrench::LanguageTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageTag*, creationType>()));
    }
  }; // Wrench.LanguageTag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Wrench::LanguageTag::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wrench::LanguageTag::*)(::Wrench::LanguageSet*, ::Wrench::LanguageElement*)>(&Wrench::LanguageTag::Apply)> {
  static const MethodInfo* get() {
    static auto* language = &::il2cpp_utils::GetClassFromName("Wrench", "LanguageSet")->byval_arg;
    static auto* element = &::il2cpp_utils::GetClassFromName("Wrench", "LanguageElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::LanguageTag*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{language, element});
  }
};
// Writing MetadataGetter for method: Wrench::LanguageTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Wrench::LanguageTag::*)()>(&Wrench::LanguageTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::LanguageTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wrench::LanguageTag::SelfClosing
// Il2CppName: SelfClosing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wrench::LanguageTag::*)()>(&Wrench::LanguageTag::SelfClosing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::LanguageTag*), "SelfClosing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wrench::LanguageTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (Wrench::LanguageTag::*)()>(&Wrench::LanguageTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::LanguageTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wrench::LanguageTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!