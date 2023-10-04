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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: TypeAliases
  class TypeAliases;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::TypeAliases);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::TypeAliases*, "Nitro", "TypeAliases");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.TypeAliases
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeAliases : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Type> AliasMap
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _get_AliasMap();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Type> AliasMap
    static void _set_AliasMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* value);
    // static public System.Void Add(System.String alias, System.Type forType)
    // Offset: 0x16EA970
    static void Add(::StringW alias, ::System::Type* forType);
    // static public System.Type Find(System.String alias)
    // Offset: 0x16EAAF8
    static ::System::Type* Find(::StringW alias);
    // static public System.Void Setup()
    // Offset: 0x16EAB9C
    static void Setup();
    // static private System.Void .cctor()
    // Offset: 0x16EAFDC
    static void _cctor();
  }; // Nitro.TypeAliases
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::TypeAliases::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Type*)>(&Nitro::TypeAliases::Add)> {
  static const MethodInfo* get() {
    static auto* alias = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* forType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeAliases*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alias, forType});
  }
};
// Writing MetadataGetter for method: Nitro::TypeAliases::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&Nitro::TypeAliases::Find)> {
  static const MethodInfo* get() {
    static auto* alias = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeAliases*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alias});
  }
};
// Writing MetadataGetter for method: Nitro::TypeAliases::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Nitro::TypeAliases::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeAliases*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::TypeAliases::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Nitro::TypeAliases::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeAliases*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
