// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
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
  // Forward declaring type: NameTables
  class NameTables;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::NameTables);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::NameTables*, "InfiniText", "NameTables");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.NameTables
  // [TokenAttribute] Offset: FFFFFFFF
  class NameTables : public ::Il2CppObject {
    public:
    // Get static field: static private System.String[] PropertyMap
    static ::ArrayW<::StringW> _get_PropertyMap();
    // Set static field: static private System.String[] PropertyMap
    static void _set_PropertyMap(::ArrayW<::StringW> value);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.String> Load(InfiniText.FontParser parser, System.Int32 start, InfiniText.FontFace font)
    // Offset: 0x1053C5C
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Load(::InfiniText::FontParser* parser, int start, ::InfiniText::FontFace* font);
    // static private System.Void .cctor()
    // Offset: 0x1054198
    static void _cctor();
  }; // InfiniText.NameTables
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::NameTables::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::InfiniText::FontParser*, int, ::InfiniText::FontFace*)>(&InfiniText::NameTables::Load)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("InfiniText", "FontParser")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* font = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::NameTables*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, start, font});
  }
};
// Writing MetadataGetter for method: InfiniText::NameTables::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&InfiniText::NameTables::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::NameTables*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
