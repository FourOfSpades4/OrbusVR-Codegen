// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontFace
  class FontFace;
  // Forward declaring type: FontParser
  class FontParser;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontLoader
  class FontLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::FontLoader);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::FontLoader*, "InfiniText", "FontLoader");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.FontLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class FontLoader : public ::Il2CppObject {
    public:
    // static public InfiniText.FontFace DeferredLoad(System.Byte[] data)
    // Offset: 0x14A93C0
    static ::InfiniText::FontFace* DeferredLoad(::ArrayW<uint8_t> data);
    // static public InfiniText.FontFace Load(System.Byte[] data)
    // Offset: 0x14A99F0
    static ::InfiniText::FontFace* Load(::ArrayW<uint8_t> data);
    // static public InfiniText.FontFace Load(InfiniText.FontParser parser)
    // Offset: 0x14A9A54
    static ::InfiniText::FontFace* Load(::InfiniText::FontParser* parser);
    // static public System.Boolean Load(InfiniText.FontParser parser, InfiniText.FontFace font, System.Boolean full)
    // Offset: 0x14A947C
    static bool Load(::InfiniText::FontParser* parser, ::InfiniText::FontFace* font, bool full);
    // static public System.Boolean ReadTables(InfiniText.FontParser parser, InfiniText.FontFace font)
    // Offset: 0x14A8084
    static bool ReadTables(::InfiniText::FontParser* parser, ::InfiniText::FontFace* font);
  }; // InfiniText.FontLoader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::FontLoader::DeferredLoad
// Il2CppName: DeferredLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFace* (*)(::ArrayW<uint8_t>)>(&InfiniText::FontLoader::DeferredLoad)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontLoader*), "DeferredLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: InfiniText::FontLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFace* (*)(::ArrayW<uint8_t>)>(&InfiniText::FontLoader::Load)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: InfiniText::FontLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFace* (*)(::InfiniText::FontParser*)>(&InfiniText::FontLoader::Load)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: InfiniText::FontLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::InfiniText::FontParser*, ::InfiniText::FontFace*, bool)>(&InfiniText::FontLoader::Load)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    static auto* font = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFace")->byval_arg;
    static auto* full = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, font, full});
  }
};
// Writing MetadataGetter for method: InfiniText::FontLoader::ReadTables
// Il2CppName: ReadTables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::InfiniText::FontParser*, ::InfiniText::FontFace*)>(&InfiniText::FontLoader::ReadTables)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    static auto* font = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontLoader*), "ReadTables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, font});
  }
};
