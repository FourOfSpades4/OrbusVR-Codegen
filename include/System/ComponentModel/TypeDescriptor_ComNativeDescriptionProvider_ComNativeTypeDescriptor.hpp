// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
// Including type: System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider
#include "System/ComponentModel/TypeDescriptor_ComNativeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComNativeDescriptorHandler
  class IComNativeDescriptorHandler;
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor : public ::Il2CppObject/*, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.ComponentModel.IComNativeDescriptorHandler _handler
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::IComNativeDescriptorHandler* handler;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::IComNativeDescriptorHandler*) == 0x8);
    // private System.Object _instance
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Get instance field reference: private System.ComponentModel.IComNativeDescriptorHandler _handler
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::IComNativeDescriptorHandler*& dyn__handler();
    // Get instance field reference: private System.Object _instance
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__instance();
    // System.Void .ctor(System.ComponentModel.IComNativeDescriptorHandler handler, System.Object instance)
    // Offset: 0x1A9921C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor* New_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler, ::Il2CppObject* instance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*, creationType>(handler, instance)));
    }
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0x1A99254
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetClassName()
    // Offset: 0x1A99310
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
    // Offset: 0x1A993D0
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0x1A993D8
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
    // private System.ComponentModel.EventDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
    // Offset: 0x1A99498
    ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();
    // private System.ComponentModel.PropertyDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
    // Offset: 0x1A99558
    ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetEditor(System.Type editorBaseType)
    // Offset: 0x1A99618
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents()
    // Offset: 0x1A996E8
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents(System.Attribute[] attributes)
    // Offset: 0x1A997A8
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes);
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties()
    // Offset: 0x1A99878
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(System.Attribute[] attributes)
    // Offset: 0x1A9993C
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes);
  }; // System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor), 24 + sizeof(::Il2CppObject*)> __System_ComponentModel_TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptorSizeCheck;
  static_assert(sizeof(TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  static const MethodInfo* get() {
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorBaseType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
