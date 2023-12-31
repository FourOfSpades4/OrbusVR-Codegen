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
// Completed includes
// Begin forward declares
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontParser
  class FontParser;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: LigatureSubstitution
  class LigatureSubstitution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::LigatureSubstitution);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::LigatureSubstitution*, "InfiniText", "LigatureSubstitution");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.LigatureSubstitution
  // [TokenAttribute] Offset: FFFFFFFF
  class LigatureSubstitution : public ::Il2CppObject {
    public:
    // public System.Void Load(InfiniText.FontParser parser)
    // Offset: 0x14AD8D0
    void Load(::InfiniText::FontParser* parser);
    // public System.Void .ctor()
    // Offset: 0x14AD8C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LigatureSubstitution* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::LigatureSubstitution::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LigatureSubstitution*, creationType>()));
    }
  }; // InfiniText.LigatureSubstitution
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::LigatureSubstitution::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::LigatureSubstitution::*)(::InfiniText::FontParser*)>(&InfiniText::LigatureSubstitution::Load)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::LigatureSubstitution*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: InfiniText::LigatureSubstitution::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
