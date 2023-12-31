// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontParser
  class FontParser;
  // Forward declaring type: FontFace
  class FontFace;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: HeaderTables
  class HeaderTables;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::HeaderTables);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::HeaderTables*, "InfiniText", "HeaderTables");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.HeaderTables
  // [TokenAttribute] Offset: FFFFFFFF
  class HeaderTables : public ::Il2CppObject {
    public:
    // static public System.Boolean Load(InfiniText.FontParser parser, System.Int32 offset, InfiniText.FontFace font, out System.Int32 locFormatIndex)
    // Offset: 0x14A9B10
    static bool Load(::InfiniText::FontParser* parser, int offset, ::InfiniText::FontFace* font, ByRef<int> locFormatIndex);
  }; // InfiniText.HeaderTables
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::HeaderTables::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::InfiniText::FontParser*, int, ::InfiniText::FontFace*, ByRef<int>)>(&InfiniText::HeaderTables::Load)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* font = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFace")->byval_arg;
    static auto* locFormatIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::HeaderTables*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, offset, font, locFormatIndex});
  }
};
