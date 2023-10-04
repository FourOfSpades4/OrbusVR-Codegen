// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNameTable
#include "System/Xml/XmlNameTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: NameTable
  class NameTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::NameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NameTable*, "System.Xml", "NameTable");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.NameTable
  // [TokenAttribute] Offset: FFFFFFFF
  class NameTable : public ::System::Xml::XmlNameTable {
    public:
    // Nested type: ::System::Xml::NameTable::Entry
    class Entry;
    public:
    // private System.Xml.NameTable/Entry[] entries
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Xml::NameTable::Entry*> entries;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::NameTable::Entry*>) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 mask
    // Size: 0x4
    // Offset: 0x1C
    int mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 hashCodeRandomizer
    // Size: 0x4
    // Offset: 0x20
    int hashCodeRandomizer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Xml.NameTable/Entry[] entries
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::NameTable::Entry*>& dyn_entries();
    // Get instance field reference: private System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: private System.Int32 mask
    [[deprecated("Use field access instead!")]] int& dyn_mask();
    // Get instance field reference: private System.Int32 hashCodeRandomizer
    [[deprecated("Use field access instead!")]] int& dyn_hashCodeRandomizer();
    // private System.String AddEntry(System.String str, System.Int32 hashCode)
    // Offset: 0x1B3F1A4
    ::StringW AddEntry(::StringW str, int hashCode);
    // private System.Void Grow()
    // Offset: 0x1B3F7B0
    void Grow();
    // static private System.Boolean TextEquals(System.String str1, System.Char[] str2, System.Int32 str2Start, System.Int32 str2Length)
    // Offset: 0x1B3F4CC
    static bool TextEquals(::StringW str1, ::ArrayW<::Il2CppChar> str2, int str2Start, int str2Length);
    // public System.Void .ctor()
    // Offset: 0x1B3EF68
    // Implemented from: System.Xml.XmlNameTable
    // Base method: System.Void XmlNameTable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::NameTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameTable*, creationType>()));
    }
    // public override System.String Add(System.String key)
    // Offset: 0x1B3EFE0
    // Implemented from: System.Xml.XmlNameTable
    // Base method: System.String XmlNameTable::Add(System.String key)
    ::StringW Add(::StringW key);
    // public override System.String Add(System.Char[] key, System.Int32 start, System.Int32 len)
    // Offset: 0x1B3F2FC
    // Implemented from: System.Xml.XmlNameTable
    // Base method: System.String XmlNameTable::Add(System.Char[] key, System.Int32 start, System.Int32 len)
    ::StringW Add(::ArrayW<::Il2CppChar> key, int start, int len);
    // public override System.String Get(System.String value)
    // Offset: 0x1B3F5B8
    // Implemented from: System.Xml.XmlNameTable
    // Base method: System.String XmlNameTable::Get(System.String value)
    ::StringW Get(::StringW value);
  }; // System.Xml.NameTable
  #pragma pack(pop)
  static check_size<sizeof(NameTable), 32 + sizeof(int)> __System_Xml_NameTableSizeCheck;
  static_assert(sizeof(NameTable) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::NameTable::AddEntry
// Il2CppName: AddEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::NameTable::*)(::StringW, int)>(&System::Xml::NameTable::AddEntry)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::NameTable*), "AddEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, hashCode});
  }
};
// Writing MetadataGetter for method: System::Xml::NameTable::Grow
// Il2CppName: Grow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::NameTable::*)()>(&System::Xml::NameTable::Grow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::NameTable*), "Grow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::NameTable::TextEquals
// Il2CppName: TextEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::NameTable::TextEquals)> {
  static const MethodInfo* get() {
    static auto* str1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* str2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* str2Start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* str2Length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::NameTable*), "TextEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str1, str2, str2Start, str2Length});
  }
};
// Writing MetadataGetter for method: System::Xml::NameTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::NameTable::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::NameTable::*)(::StringW)>(&System::Xml::NameTable::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::NameTable*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Xml::NameTable::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::NameTable::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::NameTable::Add)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::NameTable*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, start, len});
  }
};
// Writing MetadataGetter for method: System::Xml::NameTable::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::NameTable::*)(::StringW)>(&System::Xml::NameTable::Get)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::NameTable*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
