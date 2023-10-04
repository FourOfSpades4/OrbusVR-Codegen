// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptor
#include "System/ComponentModel/TypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem*, "System.ComponentModel", "TypeDescriptor/AttributeFilterCacheItem");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::AttributeFilterCacheItem : public ::Il2CppObject {
    public:
    public:
    // private System.Attribute[] _filter
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Attribute*> filter;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Attribute*>) == 0x8);
    // System.Collections.ICollection FilteredMembers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ICollection* FilteredMembers;
    // Field size check
    static_assert(sizeof(::System::Collections::ICollection*) == 0x8);
    public:
    // Get instance field reference: private System.Attribute[] _filter
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Attribute*>& dyn__filter();
    // Get instance field reference: System.Collections.ICollection FilteredMembers
    [[deprecated("Use field access instead!")]] ::System::Collections::ICollection*& dyn_FilteredMembers();
    // System.Void .ctor(System.Attribute[] filter, System.Collections.ICollection filteredMembers)
    // Offset: 0x1A98AF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::AttributeFilterCacheItem* New_ctor(::ArrayW<::System::Attribute*> filter, ::System::Collections::ICollection* filteredMembers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::AttributeFilterCacheItem*, creationType>(filter, filteredMembers)));
    }
    // System.Boolean IsValid(System.Attribute[] filter)
    // Offset: 0x1A98B30
    bool IsValid(::ArrayW<::System::Attribute*> filter);
  }; // System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::AttributeFilterCacheItem), 24 + sizeof(::System::Collections::ICollection*)> __System_ComponentModel_TypeDescriptor_AttributeFilterCacheItemSizeCheck;
  static_assert(sizeof(TypeDescriptor::AttributeFilterCacheItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem::IsValid)> {
  static const MethodInfo* get() {
    static auto* filter = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::AttributeFilterCacheItem*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filter});
  }
};
