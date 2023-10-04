// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: CharacterProvider
  class CharacterProvider;
}
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: CharacterProviders
  class CharacterProviders;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::CharacterProviders);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::CharacterProviders*, "PowerUI", "CharacterProviders");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.CharacterProviders
  // [TokenAttribute] Offset: FFFFFFFF
  class CharacterProviders : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean Started
    static bool _get_Started();
    // Set static field: static private System.Boolean Started
    static void _set_Started(bool value);
    // Get static field: static public System.Boolean FixHeight
    static bool _get_FixHeight();
    // Set static field: static public System.Boolean FixHeight
    static void _set_FixHeight(bool value);
    // Get static field: static public System.String EmojiPath
    static ::StringW _get_EmojiPath();
    // Set static field: static public System.String EmojiPath
    static void _set_EmojiPath(::StringW value);
    // Get static field: static public System.Collections.Generic.List`1<PowerUI.CharacterProvider> Providers
    static ::System::Collections::Generic::List_1<::PowerUI::CharacterProvider*>* _get_Providers();
    // Set static field: static public System.Collections.Generic.List`1<PowerUI.CharacterProvider> Providers
    static void _set_Providers(::System::Collections::Generic::List_1<::PowerUI::CharacterProvider*>* value);
    // static public System.Void Setup()
    // Offset: 0xEBECD4
    static void Setup();
    // static public System.Void Add(PowerUI.CharacterProvider provider)
    // Offset: 0xEBEE30
    static void Add(::PowerUI::CharacterProvider* provider);
    // static public System.Int32 InsertIndex(PowerUI.CharacterProvider provider)
    // Offset: 0xEBEF7C
    static int InsertIndex(::PowerUI::CharacterProvider* provider);
    // static public System.Int32 SearchFor(System.Int32 code)
    // Offset: 0xEBF0B0
    static int SearchFor(int code);
    // static public PowerUI.CharacterProvider FindFor(System.Int32 code)
    // Offset: 0xEBF204
    static ::PowerUI::CharacterProvider* FindFor(int code);
    // static public System.Void FindInto(InfiniText.Glyph loadInto, System.Int32 charcode)
    // Offset: 0xEBF30C
    static void FindInto(::InfiniText::Glyph* loadInto, int charcode);
    // static private System.Void .cctor()
    // Offset: 0xEBF39C
    static void _cctor();
  }; // PowerUI.CharacterProviders
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::CharacterProviders::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::CharacterProviders::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::CharacterProviders::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::CharacterProvider*)>(&PowerUI::CharacterProviders::Add)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("PowerUI", "CharacterProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: PowerUI::CharacterProviders::InsertIndex
// Il2CppName: InsertIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::PowerUI::CharacterProvider*)>(&PowerUI::CharacterProviders::InsertIndex)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("PowerUI", "CharacterProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), "InsertIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: PowerUI::CharacterProviders::SearchFor
// Il2CppName: SearchFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&PowerUI::CharacterProviders::SearchFor)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), "SearchFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: PowerUI::CharacterProviders::FindFor
// Il2CppName: FindFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::CharacterProvider* (*)(int)>(&PowerUI::CharacterProviders::FindFor)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), "FindFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: PowerUI::CharacterProviders::FindInto
// Il2CppName: FindInto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::InfiniText::Glyph*, int)>(&PowerUI::CharacterProviders::FindInto)> {
  static const MethodInfo* get() {
    static auto* loadInto = &::il2cpp_utils::GetClassFromName("InfiniText", "Glyph")->byval_arg;
    static auto* charcode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), "FindInto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadInto, charcode});
  }
};
// Writing MetadataGetter for method: PowerUI::CharacterProviders::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::CharacterProviders::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CharacterProviders*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};