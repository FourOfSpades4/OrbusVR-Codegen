// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Wrench.Gender
#include "Wrench/Gender.hpp"
// Including type: Wrench.WhitespaceMode
#include "Wrench/WhitespaceMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Wrench
namespace Wrench {
  // Forward declaring type: LanguageChange
  class LanguageChange;
  // Forward declaring type: TextModifierChange
  class TextModifierChange;
}
// Completed forward declares
// Type namespace: Wrench
namespace Wrench {
  // Forward declaring type: Text
  class Text;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Wrench::Text);
DEFINE_IL2CPP_ARG_TYPE(::Wrench::Text*, "Wrench", "Text");
// Type namespace: Wrench
namespace Wrench {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Wrench.Text
  // [TokenAttribute] Offset: FFFFFFFF
  class Text : public ::Il2CppObject {
    public:
    // Get static field: static private System.String _Language
    static ::StringW _get__Language();
    // Set static field: static private System.String _Language
    static void _set__Language(::StringW value);
    // Get static field: static public System.String VariableModifiers
    static ::StringW _get_VariableModifiers();
    // Set static field: static public System.String VariableModifiers
    static void _set_VariableModifiers(::StringW value);
    // Get static field: static private Wrench.Gender _Gender
    static ::Wrench::Gender _get__Gender();
    // Set static field: static private Wrench.Gender _Gender
    static void _set__Gender(::Wrench::Gender value);
    // [CompilerGeneratedAttribute] Offset: 0xADECC4
    // Get static field: static private Wrench.LanguageChange OnLanguageChanged
    static ::Wrench::LanguageChange* _get_OnLanguageChanged();
    // Set static field: static private Wrench.LanguageChange OnLanguageChanged
    static void _set_OnLanguageChanged(::Wrench::LanguageChange* value);
    // [CompilerGeneratedAttribute] Offset: 0xADECD4
    // Get static field: static private Wrench.TextModifierChange OnGenderChanged
    static ::Wrench::TextModifierChange* _get_OnGenderChanged();
    // Set static field: static private Wrench.TextModifierChange OnGenderChanged
    static void _set_OnGenderChanged(::Wrench::TextModifierChange* value);
    // Get static field: static public Wrench.WhitespaceMode Whitespace
    static ::Wrench::WhitespaceMode _get_Whitespace();
    // Set static field: static public Wrench.WhitespaceMode Whitespace
    static void _set_Whitespace(::Wrench::WhitespaceMode value);
    // static public System.Void add_OnLanguageChanged(Wrench.LanguageChange value)
    // Offset: 0x282FC60
    static void add_OnLanguageChanged(::Wrench::LanguageChange* value);
    // static public System.Void remove_OnLanguageChanged(Wrench.LanguageChange value)
    // Offset: 0x282FD90
    static void remove_OnLanguageChanged(::Wrench::LanguageChange* value);
    // static public System.Void add_OnGenderChanged(Wrench.TextModifierChange value)
    // Offset: 0x282FEC0
    static void add_OnGenderChanged(::Wrench::TextModifierChange* value);
    // static public System.Void remove_OnGenderChanged(Wrench.TextModifierChange value)
    // Offset: 0x282FFF0
    static void remove_OnGenderChanged(::Wrench::TextModifierChange* value);
    // static public System.Void Setup(System.String defaultLanguage)
    // Offset: 0x2830120
    static void Setup(::StringW defaultLanguage);
    // static public Wrench.Gender get_Gender()
    // Offset: 0x283026C
    static ::Wrench::Gender get_Gender();
    // static public System.Void set_Gender(Wrench.Gender value)
    // Offset: 0x28302D4
    static void set_Gender(::Wrench::Gender value);
    // static public System.String get_Language()
    // Offset: 0x2830840
    static ::StringW get_Language();
    // static public System.Void set_Language(System.String value)
    // Offset: 0x2830184
    static void set_Language(::StringW value);
    // static public System.Void LanguageChanged()
    // Offset: 0x28308A8
    static void LanguageChanged();
    // static public System.String Escape(System.String xml)
    // Offset: 0x2830968
    static ::StringW Escape(::StringW xml);
    // static private System.Void .cctor()
    // Offset: 0x2830AD0
    static void _cctor();
  }; // Wrench.Text
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Wrench::Text::add_OnLanguageChanged
// Il2CppName: add_OnLanguageChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Wrench::LanguageChange*)>(&Wrench::Text::add_OnLanguageChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Wrench", "LanguageChange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "add_OnLanguageChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Wrench::Text::remove_OnLanguageChanged
// Il2CppName: remove_OnLanguageChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Wrench::LanguageChange*)>(&Wrench::Text::remove_OnLanguageChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Wrench", "LanguageChange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "remove_OnLanguageChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Wrench::Text::add_OnGenderChanged
// Il2CppName: add_OnGenderChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Wrench::TextModifierChange*)>(&Wrench::Text::add_OnGenderChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Wrench", "TextModifierChange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "add_OnGenderChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Wrench::Text::remove_OnGenderChanged
// Il2CppName: remove_OnGenderChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Wrench::TextModifierChange*)>(&Wrench::Text::remove_OnGenderChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Wrench", "TextModifierChange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "remove_OnGenderChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Wrench::Text::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Wrench::Text::Setup)> {
  static const MethodInfo* get() {
    static auto* defaultLanguage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultLanguage});
  }
};
// Writing MetadataGetter for method: Wrench::Text::get_Gender
// Il2CppName: get_Gender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::Gender (*)()>(&Wrench::Text::get_Gender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "get_Gender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wrench::Text::set_Gender
// Il2CppName: set_Gender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Wrench::Gender)>(&Wrench::Text::set_Gender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Wrench", "Gender")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "set_Gender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Wrench::Text::get_Language
// Il2CppName: get_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Wrench::Text::get_Language)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "get_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wrench::Text::set_Language
// Il2CppName: set_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Wrench::Text::set_Language)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "set_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Wrench::Text::LanguageChanged
// Il2CppName: LanguageChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Wrench::Text::LanguageChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "LanguageChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wrench::Text::Escape
// Il2CppName: Escape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Wrench::Text::Escape)> {
  static const MethodInfo* get() {
    static auto* xml = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), "Escape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xml});
  }
};
// Writing MetadataGetter for method: Wrench::Text::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Wrench::Text::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wrench::Text*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
