// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
// Including type: System.ComponentModel.TypeDescriptor/TypeDescriptionNode
#include "System/ComponentModel/TypeDescriptor_TypeDescriptionNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: EventDescriptor
  class EventDescriptor;
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
  // Forward declaring type: EventDescriptorCollection
  class EventDescriptorCollection;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor/*, public ::System::ValueType, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.ComponentModel.TypeDescriptor/TypeDescriptionNode _node
    // Size: 0x8
    // Offset: 0x0
    ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*) == 0x8);
    // private System.Type _objectType
    // Size: 0x8
    // Offset: 0x8
    ::System::Type* objectType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Object _instance
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: DefaultTypeDescriptor
    constexpr DefaultTypeDescriptor(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node_ = {}, ::System::Type* objectType_ = {}, ::Il2CppObject* instance_ = {}) noexcept : node{node_}, objectType{objectType_}, instance{instance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Get instance field reference: private System.ComponentModel.TypeDescriptor/TypeDescriptionNode _node
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*& dyn__node();
    // Get instance field reference: private System.Type _objectType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__objectType();
    // Get instance field reference: private System.Object _instance
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__instance();
    // System.Void .ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode node, System.Type objectType, System.Object instance)
    // Offset: 0xBA975C
    // ABORTED: conflicts with another method.  DefaultTypeDescriptor(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node, ::System::Type* objectType, ::Il2CppObject* instance);
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0xBA9768
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetClassName()
    // Offset: 0xBA9770
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
    // Offset: 0xBA9778
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0xBA9780
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
    // private System.ComponentModel.EventDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
    // Offset: 0xBA9788
    ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();
    // private System.ComponentModel.PropertyDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
    // Offset: 0xBA9790
    ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetEditor(System.Type editorBaseType)
    // Offset: 0xBA9798
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents()
    // Offset: 0xBA97A0
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents(System.Attribute[] attributes)
    // Offset: 0xBA97A8
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes);
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties()
    // Offset: 0xBA97B0
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(System.Attribute[] attributes)
    // Offset: 0xBA97B8
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes);
  }; // System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), 16 + sizeof(::Il2CppObject*)> __System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptorSizeCheck;
  static_assert(sizeof(TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::DefaultTypeDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  static const MethodInfo* get() {
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorBaseType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
