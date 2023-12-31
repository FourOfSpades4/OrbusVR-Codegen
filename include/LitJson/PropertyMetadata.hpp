// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LitJson.JsonIgnoreWhen
#include "LitJson/JsonIgnoreWhen.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: PropertyMetadata
  struct PropertyMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LitJson::PropertyMetadata, "LitJson", "PropertyMetadata");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x22
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LitJson.PropertyMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  struct PropertyMetadata/*, public ::System::ValueType*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xADCD78
    // private System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADCD88
    // private System.Reflection.MemberInfo <Info>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::System::Reflection::MemberInfo* Info;
    // Field size check
    static_assert(sizeof(::System::Reflection::MemberInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADCD98
    // private LitJson.JsonIgnoreWhen <Ignore>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::LitJson::JsonIgnoreWhen Ignore;
    // Field size check
    static_assert(sizeof(::LitJson::JsonIgnoreWhen) == 0x4);
    // Padding between fields: Ignore and: Alias
    char __padding2[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xADCDA8
    // private System.String <Alias>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Alias;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADCDB8
    // private System.Boolean <IsField>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool IsField;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xADCDC8
    // private System.Boolean <Include>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool Include;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: PropertyMetadata
    constexpr PropertyMetadata(::System::Type* Type_ = {}, ::System::Reflection::MemberInfo* Info_ = {}, ::LitJson::JsonIgnoreWhen Ignore_ = {}, ::StringW Alias_ = {}, bool IsField_ = {}, bool Include_ = {}) noexcept : Type{Type_}, Info{Info_}, Ignore{Ignore_}, Alias{Alias_}, IsField{IsField_}, Include{Include_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Type <Type>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$Type$k__BackingField();
    // Get instance field reference: private System.Reflection.MemberInfo <Info>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Reflection::MemberInfo*& dyn_$Info$k__BackingField();
    // Get instance field reference: private LitJson.JsonIgnoreWhen <Ignore>k__BackingField
    [[deprecated("Use field access instead!")]] ::LitJson::JsonIgnoreWhen& dyn_$Ignore$k__BackingField();
    // Get instance field reference: private System.String <Alias>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Alias$k__BackingField();
    // Get instance field reference: private System.Boolean <IsField>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsField$k__BackingField();
    // Get instance field reference: private System.Boolean <Include>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Include$k__BackingField();
    // public System.Type get_Type()
    // Offset: 0xB96FC8
    ::System::Type* get_Type();
    // public System.Void set_Type(System.Type value)
    // Offset: 0xB96FD0
    void set_Type(::System::Type* value);
    // public System.Reflection.MemberInfo get_Info()
    // Offset: 0xB96FD8
    ::System::Reflection::MemberInfo* get_Info();
    // public System.Void set_Info(System.Reflection.MemberInfo value)
    // Offset: 0xB96FE0
    void set_Info(::System::Reflection::MemberInfo* value);
    // public LitJson.JsonIgnoreWhen get_Ignore()
    // Offset: 0xB96FE8
    ::LitJson::JsonIgnoreWhen get_Ignore();
    // public System.Void set_Ignore(LitJson.JsonIgnoreWhen value)
    // Offset: 0xB96FF0
    void set_Ignore(::LitJson::JsonIgnoreWhen value);
    // public System.String get_Alias()
    // Offset: 0xB96FF8
    ::StringW get_Alias();
    // public System.Void set_Alias(System.String value)
    // Offset: 0xB97000
    void set_Alias(::StringW value);
    // public System.Boolean get_IsField()
    // Offset: 0xB97008
    bool get_IsField();
    // public System.Void set_IsField(System.Boolean value)
    // Offset: 0xB97010
    void set_IsField(bool value);
    // public System.Boolean get_Include()
    // Offset: 0xB9701C
    bool get_Include();
    // public System.Void set_Include(System.Boolean value)
    // Offset: 0xB97024
    void set_Include(bool value);
  }; // LitJson.PropertyMetadata
  #pragma pack(pop)
  static check_size<sizeof(PropertyMetadata), 33 + sizeof(bool)> __LitJson_PropertyMetadataSizeCheck;
  static_assert(sizeof(PropertyMetadata) == 0x22);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LitJson::PropertyMetadata::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (LitJson::PropertyMetadata::*)()>(&LitJson::PropertyMetadata::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::PropertyMetadata::*)(::System::Type*)>(&LitJson::PropertyMetadata::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::get_Info
// Il2CppName: get_Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (LitJson::PropertyMetadata::*)()>(&LitJson::PropertyMetadata::get_Info)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "get_Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::set_Info
// Il2CppName: set_Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::PropertyMetadata::*)(::System::Reflection::MemberInfo*)>(&LitJson::PropertyMetadata::set_Info)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "set_Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::get_Ignore
// Il2CppName: get_Ignore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LitJson::JsonIgnoreWhen (LitJson::PropertyMetadata::*)()>(&LitJson::PropertyMetadata::get_Ignore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "get_Ignore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::set_Ignore
// Il2CppName: set_Ignore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::PropertyMetadata::*)(::LitJson::JsonIgnoreWhen)>(&LitJson::PropertyMetadata::set_Ignore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LitJson", "JsonIgnoreWhen")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "set_Ignore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::get_Alias
// Il2CppName: get_Alias
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LitJson::PropertyMetadata::*)()>(&LitJson::PropertyMetadata::get_Alias)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "get_Alias", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::set_Alias
// Il2CppName: set_Alias
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::PropertyMetadata::*)(::StringW)>(&LitJson::PropertyMetadata::set_Alias)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "set_Alias", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::get_IsField
// Il2CppName: get_IsField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::PropertyMetadata::*)()>(&LitJson::PropertyMetadata::get_IsField)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "get_IsField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::set_IsField
// Il2CppName: set_IsField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::PropertyMetadata::*)(bool)>(&LitJson::PropertyMetadata::set_IsField)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "set_IsField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::get_Include
// Il2CppName: get_Include
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::PropertyMetadata::*)()>(&LitJson::PropertyMetadata::get_Include)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "get_Include", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::PropertyMetadata::set_Include
// Il2CppName: set_Include
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::PropertyMetadata::*)(bool)>(&LitJson::PropertyMetadata::set_Include)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::PropertyMetadata), "set_Include", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
