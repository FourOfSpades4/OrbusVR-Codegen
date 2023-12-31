// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.PropertyDescriptor
#include "System/ComponentModel/PropertyDescriptor.hpp"
// Including type: System.Collections.Specialized.BitVector32
#include "System/Collections/Specialized/BitVector32.hpp"
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
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceSwitch
  class TraceSwitch;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IExtenderProvider
  class IExtenderProvider;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ReflectPropertyDescriptor
  class ReflectPropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ReflectPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectPropertyDescriptor*, "System.ComponentModel", "ReflectPropertyDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReflectPropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
    public:
    public:
    // private System.Collections.Specialized.BitVector32 state
    // Size: 0x4
    // Offset: 0x7C
    ::System::Collections::Specialized::BitVector32 state;
    // Field size check
    static_assert(sizeof(::System::Collections::Specialized::BitVector32) == 0x4);
    // private System.Type componentClass
    // Size: 0x8
    // Offset: 0x80
    ::System::Type* componentClass;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x88
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Object defaultValue
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* defaultValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object ambientValue
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppObject* ambientValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Reflection.PropertyInfo propInfo
    // Size: 0x8
    // Offset: 0xA0
    ::System::Reflection::PropertyInfo* propInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyInfo*) == 0x8);
    // private System.Reflection.MethodInfo getMethod
    // Size: 0x8
    // Offset: 0xA8
    ::System::Reflection::MethodInfo* getMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo setMethod
    // Size: 0x8
    // Offset: 0xB0
    ::System::Reflection::MethodInfo* setMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo shouldSerializeMethod
    // Size: 0x8
    // Offset: 0xB8
    ::System::Reflection::MethodInfo* shouldSerializeMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo resetMethod
    // Size: 0x8
    // Offset: 0xC0
    ::System::Reflection::MethodInfo* resetMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Type receiverType
    // Size: 0x8
    // Offset: 0xC8
    ::System::Type* receiverType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get static field: static private readonly System.Type[] argsNone
    static ::ArrayW<::System::Type*> _get_argsNone();
    // Set static field: static private readonly System.Type[] argsNone
    static void _set_argsNone(::ArrayW<::System::Type*> value);
    // Get static field: static private readonly System.Object noValue
    static ::Il2CppObject* _get_noValue();
    // Set static field: static private readonly System.Object noValue
    static void _set_noValue(::Il2CppObject* value);
    // Get static field: static private System.Diagnostics.TraceSwitch PropDescCreateSwitch
    static ::System::Diagnostics::TraceSwitch* _get_PropDescCreateSwitch();
    // Set static field: static private System.Diagnostics.TraceSwitch PropDescCreateSwitch
    static void _set_PropDescCreateSwitch(::System::Diagnostics::TraceSwitch* value);
    // Get static field: static private System.Diagnostics.TraceSwitch PropDescUsageSwitch
    static ::System::Diagnostics::TraceSwitch* _get_PropDescUsageSwitch();
    // Set static field: static private System.Diagnostics.TraceSwitch PropDescUsageSwitch
    static void _set_PropDescUsageSwitch(::System::Diagnostics::TraceSwitch* value);
    // Get static field: static private readonly System.Int32 BitDefaultValueQueried
    static int _get_BitDefaultValueQueried();
    // Set static field: static private readonly System.Int32 BitDefaultValueQueried
    static void _set_BitDefaultValueQueried(int value);
    // Get static field: static private readonly System.Int32 BitGetQueried
    static int _get_BitGetQueried();
    // Set static field: static private readonly System.Int32 BitGetQueried
    static void _set_BitGetQueried(int value);
    // Get static field: static private readonly System.Int32 BitSetQueried
    static int _get_BitSetQueried();
    // Set static field: static private readonly System.Int32 BitSetQueried
    static void _set_BitSetQueried(int value);
    // Get static field: static private readonly System.Int32 BitShouldSerializeQueried
    static int _get_BitShouldSerializeQueried();
    // Set static field: static private readonly System.Int32 BitShouldSerializeQueried
    static void _set_BitShouldSerializeQueried(int value);
    // Get static field: static private readonly System.Int32 BitResetQueried
    static int _get_BitResetQueried();
    // Set static field: static private readonly System.Int32 BitResetQueried
    static void _set_BitResetQueried(int value);
    // Get static field: static private readonly System.Int32 BitChangedQueried
    static int _get_BitChangedQueried();
    // Set static field: static private readonly System.Int32 BitChangedQueried
    static void _set_BitChangedQueried(int value);
    // Get static field: static private readonly System.Int32 BitIPropChangedQueried
    static int _get_BitIPropChangedQueried();
    // Set static field: static private readonly System.Int32 BitIPropChangedQueried
    static void _set_BitIPropChangedQueried(int value);
    // Get static field: static private readonly System.Int32 BitReadOnlyChecked
    static int _get_BitReadOnlyChecked();
    // Set static field: static private readonly System.Int32 BitReadOnlyChecked
    static void _set_BitReadOnlyChecked(int value);
    // Get static field: static private readonly System.Int32 BitAmbientValueQueried
    static int _get_BitAmbientValueQueried();
    // Set static field: static private readonly System.Int32 BitAmbientValueQueried
    static void _set_BitAmbientValueQueried(int value);
    // Get static field: static private readonly System.Int32 BitSetOnDemand
    static int _get_BitSetOnDemand();
    // Set static field: static private readonly System.Int32 BitSetOnDemand
    static void _set_BitSetOnDemand(int value);
    // Get instance field reference: private System.Collections.Specialized.BitVector32 state
    [[deprecated("Use field access instead!")]] ::System::Collections::Specialized::BitVector32& dyn_state();
    // Get instance field reference: private System.Type componentClass
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_componentClass();
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // Get instance field reference: private System.Object defaultValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_defaultValue();
    // Get instance field reference: private System.Object ambientValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_ambientValue();
    // Get instance field reference: private System.Reflection.PropertyInfo propInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyInfo*& dyn_propInfo();
    // Get instance field reference: private System.Reflection.MethodInfo getMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_getMethod();
    // Get instance field reference: private System.Reflection.MethodInfo setMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_setMethod();
    // Get instance field reference: private System.Reflection.MethodInfo shouldSerializeMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_shouldSerializeMethod();
    // Get instance field reference: private System.Reflection.MethodInfo resetMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_resetMethod();
    // Get instance field reference: private System.Type receiverType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_receiverType();
    // public System.Void .ctor(System.Type componentClass, System.String name, System.Type type, System.Attribute[] attributes)
    // Offset: 0x1BA989C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectPropertyDescriptor*, creationType>(componentClass, name, type, attributes)));
    }
    // public System.Void .ctor(System.Type componentClass, System.String name, System.Type type, System.Reflection.PropertyInfo propInfo, System.Reflection.MethodInfo getMethod, System.Reflection.MethodInfo setMethod, System.Attribute[] attrs)
    // Offset: 0x1BA9BAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Reflection::PropertyInfo* propInfo, ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*> attrs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectPropertyDescriptor*, creationType>(componentClass, name, type, propInfo, getMethod, setMethod, attrs)));
    }
    // public System.Void .ctor(System.Type componentClass, System.String name, System.Type type, System.Type receiverType, System.Reflection.MethodInfo getMethod, System.Reflection.MethodInfo setMethod, System.Attribute[] attrs)
    // Offset: 0x1BA9CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Type* receiverType, ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*> attrs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectPropertyDescriptor*, creationType>(componentClass, name, type, receiverType, getMethod, setMethod, attrs)));
    }
    // public System.Void .ctor(System.Type componentClass, System.ComponentModel.PropertyDescriptor oldReflectPropertyDescriptor, System.Attribute[] attributes)
    // Offset: 0x1BA9DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::System::ComponentModel::PropertyDescriptor* oldReflectPropertyDescriptor, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectPropertyDescriptor*, creationType>(componentClass, oldReflectPropertyDescriptor, attributes)));
    }
    // private System.Boolean get_IsExtender()
    // Offset: 0x1BAA21C
    bool get_IsExtender();
    // private System.Reflection.MethodInfo get_SetMethodValue()
    // Offset: 0x1BAA430
    ::System::Reflection::MethodInfo* get_SetMethodValue();
    // System.Type ExtenderGetReceiverType()
    // Offset: 0x1BAA9DC
    ::System::Type* ExtenderGetReceiverType();
    // System.Type ExtenderGetType(System.ComponentModel.IExtenderProvider provider)
    // Offset: 0x1BA0740
    ::System::Type* ExtenderGetType(::System::ComponentModel::IExtenderProvider* provider);
    // static private System.Void .cctor()
    // Offset: 0x1BAB6DC
    static void _cctor();
    // public override System.Type get_ComponentType()
    // Offset: 0x1BAA214
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_ComponentType()
    ::System::Type* get_ComponentType();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x1BAA28C
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Boolean PropertyDescriptor::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Type get_PropertyType()
    // Offset: 0x1BAA9D4
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_PropertyType()
    ::System::Type* get_PropertyType();
    // protected override System.Void FillAttributes(System.Collections.IList attributes)
    // Offset: 0x1BAA9E4
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Void PropertyDescriptor::FillAttributes(System.Collections.IList attributes)
    void FillAttributes(::System::Collections::IList* attributes);
  }; // System.ComponentModel.ReflectPropertyDescriptor
  #pragma pack(pop)
  static check_size<sizeof(ReflectPropertyDescriptor), 200 + sizeof(::System::Type*)> __System_ComponentModel_ReflectPropertyDescriptorSizeCheck;
  static_assert(sizeof(ReflectPropertyDescriptor) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::get_IsExtender
// Il2CppName: get_IsExtender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReflectPropertyDescriptor::*)()>(&System::ComponentModel::ReflectPropertyDescriptor::get_IsExtender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "get_IsExtender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::get_SetMethodValue
// Il2CppName: get_SetMethodValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::ComponentModel::ReflectPropertyDescriptor::*)()>(&System::ComponentModel::ReflectPropertyDescriptor::get_SetMethodValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "get_SetMethodValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetReceiverType
// Il2CppName: ExtenderGetReceiverType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectPropertyDescriptor::*)()>(&System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetReceiverType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "ExtenderGetReceiverType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetType
// Il2CppName: ExtenderGetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectPropertyDescriptor::*)(::System::ComponentModel::IExtenderProvider*)>(&System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetType)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IExtenderProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "ExtenderGetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ReflectPropertyDescriptor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectPropertyDescriptor::*)()>(&System::ComponentModel::ReflectPropertyDescriptor::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReflectPropertyDescriptor::*)()>(&System::ComponentModel::ReflectPropertyDescriptor::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectPropertyDescriptor::*)()>(&System::ComponentModel::ReflectPropertyDescriptor::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectPropertyDescriptor::FillAttributes
// Il2CppName: FillAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Collections::IList*)>(&System::ComponentModel::ReflectPropertyDescriptor::FillAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectPropertyDescriptor*), "FillAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
