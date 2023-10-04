// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ReflectTypeDescriptionProvider
#include "System/ComponentModel/ReflectTypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: EventDescriptorCollection
  class EventDescriptorCollection;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: EventDescriptor
  class EventDescriptor;
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
  // Forward declaring type: EditorAttribute
  class EditorAttribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, "System.ComponentModel", "ReflectTypeDescriptionProvider/ReflectedTypeData");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectTypeDescriptionProvider::ReflectedTypeData : public ::Il2CppObject {
    public:
    public:
    // private System.Type _type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.ComponentModel.AttributeCollection _attributes
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::AttributeCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::AttributeCollection*) == 0x8);
    // private System.ComponentModel.EventDescriptorCollection _events
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::EventDescriptorCollection* events;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::EventDescriptorCollection*) == 0x8);
    // private System.ComponentModel.PropertyDescriptorCollection _properties
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::PropertyDescriptorCollection* properties;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyDescriptorCollection*) == 0x8);
    // private System.ComponentModel.TypeConverter _converter
    // Size: 0x8
    // Offset: 0x30
    ::System::ComponentModel::TypeConverter* converter;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeConverter*) == 0x8);
    // private System.Object[] _editors
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppObject*> editors;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Type[] _editorTypes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Type*> editorTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Int32 _editorCount
    // Size: 0x4
    // Offset: 0x48
    int editorCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // Get instance field reference: private System.ComponentModel.AttributeCollection _attributes
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::AttributeCollection*& dyn__attributes();
    // Get instance field reference: private System.ComponentModel.EventDescriptorCollection _events
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::EventDescriptorCollection*& dyn__events();
    // Get instance field reference: private System.ComponentModel.PropertyDescriptorCollection _properties
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyDescriptorCollection*& dyn__properties();
    // Get instance field reference: private System.ComponentModel.TypeConverter _converter
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::TypeConverter*& dyn__converter();
    // Get instance field reference: private System.Object[] _editors
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__editors();
    // Get instance field reference: private System.Type[] _editorTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__editorTypes();
    // Get instance field reference: private System.Int32 _editorCount
    [[deprecated("Use field access instead!")]] int& dyn__editorCount();
    // System.Void .ctor(System.Type type)
    // Offset: 0x1BB2680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectTypeDescriptionProvider::ReflectedTypeData* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectTypeDescriptionProvider::ReflectedTypeData*, creationType>(type)));
    }
    // System.Boolean get_IsPopulated()
    // Offset: 0x1BB2324
    bool get_IsPopulated();
    // System.ComponentModel.AttributeCollection GetAttributes()
    // Offset: 0x1BACC84
    ::System::ComponentModel::AttributeCollection* GetAttributes();
    // System.String GetClassName(System.Object instance)
    // Offset: 0x1BAD720
    ::StringW GetClassName(::Il2CppObject* instance);
    // System.String GetComponentName(System.Object instance)
    // Offset: 0x1BAD788
    ::StringW GetComponentName(::Il2CppObject* instance);
    // System.ComponentModel.TypeConverter GetConverter(System.Object instance)
    // Offset: 0x1BAD984
    ::System::ComponentModel::TypeConverter* GetConverter(::Il2CppObject* instance);
    // System.ComponentModel.EventDescriptor GetDefaultEvent(System.Object instance)
    // Offset: 0x1BAE018
    ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::Il2CppObject* instance);
    // System.ComponentModel.PropertyDescriptor GetDefaultProperty(System.Object instance)
    // Offset: 0x1BAE27C
    ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::Il2CppObject* instance);
    // System.Object GetEditor(System.Object instance, System.Type editorBaseType)
    // Offset: 0x1BAE4F0
    ::Il2CppObject* GetEditor(::Il2CppObject* instance, ::System::Type* editorBaseType);
    // static private System.ComponentModel.EditorAttribute GetEditorAttribute(System.ComponentModel.AttributeCollection attributes, System.Type editorBaseType)
    // Offset: 0x1BB4E74
    static ::System::ComponentModel::EditorAttribute* GetEditorAttribute(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* editorBaseType);
    // System.ComponentModel.EventDescriptorCollection GetEvents()
    // Offset: 0x1BAF028
    ::System::ComponentModel::EventDescriptorCollection* GetEvents();
    // System.ComponentModel.PropertyDescriptorCollection GetProperties()
    // Offset: 0x1BB2370
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();
    // private System.Type GetTypeFromName(System.String typeName)
    // Offset: 0x1BB4910
    ::System::Type* GetTypeFromName(::StringW typeName);
    // System.Void Refresh()
    // Offset: 0x1BB3BE8
    void Refresh();
  }; // System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
  #pragma pack(pop)
  static check_size<sizeof(ReflectTypeDescriptionProvider::ReflectedTypeData), 72 + sizeof(int)> __System_ComponentModel_ReflectTypeDescriptionProvider_ReflectedTypeDataSizeCheck;
  static_assert(sizeof(ReflectTypeDescriptionProvider::ReflectedTypeData) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::get_IsPopulated
// Il2CppName: get_IsPopulated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::get_IsPopulated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "get_IsPopulated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetClassName
// Il2CppName: GetClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetClassName)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetComponentName
// Il2CppName: GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetComponentName)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetConverter)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetDefaultEvent
// Il2CppName: GetDefaultEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetDefaultEvent)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetDefaultEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetDefaultProperty
// Il2CppName: GetDefaultProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetDefaultProperty)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetDefaultProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetEditor
// Il2CppName: GetEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetEditor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, editorBaseType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetEditorAttribute
// Il2CppName: GetEditorAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EditorAttribute* (*)(::System::ComponentModel::AttributeCollection*, ::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetEditorAttribute)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "AttributeCollection")->byval_arg;
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetEditorAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes, editorBaseType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetEvents
// Il2CppName: GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetTypeFromName
// Il2CppName: GetTypeFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::StringW)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetTypeFromName)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetTypeFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
