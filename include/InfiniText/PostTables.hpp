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
  // Forward declaring type: PostTables
  class PostTables;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::PostTables);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::PostTables*, "InfiniText", "PostTables");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.PostTables
  // [TokenAttribute] Offset: FFFFFFFF
  class PostTables : public ::Il2CppObject {
    public:
    // static public System.Void Load(InfiniText.FontParser parser, System.Int32 offset, InfiniText.FontFace font, out System.Int32 numberOfGlyphs)
    // Offset: 0x1055E00
    static void Load(::InfiniText::FontParser* parser, int offset, ::InfiniText::FontFace* font, ByRef<int> numberOfGlyphs);
  }; // InfiniText.PostTables
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::PostTables::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::InfiniText::FontParser*, int, ::InfiniText::FontFace*, ByRef<int>)>(&InfiniText::PostTables::Load)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* font = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFace")->byval_arg;
    static auto* numberOfGlyphs = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::PostTables*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, offset, font, numberOfGlyphs});
  }
};
