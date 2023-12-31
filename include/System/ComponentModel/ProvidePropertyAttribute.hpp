// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ProvidePropertyAttribute
  class ProvidePropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ProvidePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ProvidePropertyAttribute*, "System.ComponentModel", "ProvidePropertyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ProvidePropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A658DC
  class ProvidePropertyAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String propertyName
    // Size: 0x8
    // Offset: 0x10
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String receiverTypeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW receiverTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private readonly System.String propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_propertyName();
    // Get instance field reference: private readonly System.String receiverTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_receiverTypeName();
    // public System.String get_PropertyName()
    // Offset: 0x1BA6D8C
    ::StringW get_PropertyName();
    // public System.String get_ReceiverTypeName()
    // Offset: 0x1BA6D94
    ::StringW get_ReceiverTypeName();
    // public override System.Object get_TypeId()
    // Offset: 0x1BA6D9C
    // Implemented from: System.Attribute
    // Base method: System.Object Attribute::get_TypeId()
    ::Il2CppObject* get_TypeId();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1BA6DE8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1BA6E94
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.ProvidePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(ProvidePropertyAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_ProvidePropertyAttributeSizeCheck;
  static_assert(sizeof(ProvidePropertyAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::get_PropertyName
// Il2CppName: get_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ProvidePropertyAttribute::*)()>(&System::ComponentModel::ProvidePropertyAttribute::get_PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "get_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName
// Il2CppName: get_ReceiverTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ProvidePropertyAttribute::*)()>(&System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "get_ReceiverTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::get_TypeId
// Il2CppName: get_TypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ProvidePropertyAttribute::*)()>(&System::ComponentModel::ProvidePropertyAttribute::get_TypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "get_TypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ProvidePropertyAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::ProvidePropertyAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ProvidePropertyAttribute::*)()>(&System::ComponentModel::ProvidePropertyAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
