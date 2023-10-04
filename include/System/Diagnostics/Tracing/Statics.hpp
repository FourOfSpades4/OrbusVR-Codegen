// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataType
#include "System/Diagnostics/Tracing/TraceLoggingDataType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: TraceLoggingTypeInfo`1<DataType>
  template<typename DataType>
  class TraceLoggingTypeInfo_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: Statics
  class Statics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::Statics);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::Statics*, "System.Diagnostics.Tracing", "Statics");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.Statics
  // [TokenAttribute] Offset: FFFFFFFF
  class Statics : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType IntPtrType
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_IntPtrType();
    // Set static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType IntPtrType
    static void _set_IntPtrType(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // Get static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType UIntPtrType
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_UIntPtrType();
    // Set static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType UIntPtrType
    static void _set_UIntPtrType(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // Get static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType HexIntPtrType
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_HexIntPtrType();
    // Set static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType HexIntPtrType
    static void _set_HexIntPtrType(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static public System.Byte[] MetadataForString(System.String name, System.Int32 prefixSize, System.Int32 suffixSize, System.Int32 additionalSize)
    // Offset: 0x11C0424
    static ::ArrayW<uint8_t> MetadataForString(::StringW name, int prefixSize, int suffixSize, int additionalSize);
    // static public System.Void EncodeTags(System.Int32 tags, ref System.Int32 pos, System.Byte[] metadata)
    // Offset: 0x11B9060
    static void EncodeTags(int tags, ByRef<int> pos, ::ArrayW<uint8_t> metadata);
    // static public System.Byte Combine(System.Int32 settingValue, System.Byte defaultValue)
    // Offset: 0x11C0F80
    static uint8_t Combine(int settingValue, uint8_t defaultValue);
    // static public System.Int32 Combine(System.Int32 settingValue1, System.Int32 settingValue2)
    // Offset: 0x11C0F8C
    static int Combine(int settingValue1, int settingValue2);
    // static public System.Void CheckName(System.String name)
    // Offset: 0x11B8CB4
    static void CheckName(::StringW name);
    // static public System.Boolean ShouldOverrideFieldName(System.String fieldName)
    // Offset: 0x11C0F98
    static bool ShouldOverrideFieldName(::StringW fieldName);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType MakeDataType(System.Diagnostics.Tracing.TraceLoggingDataType baseType, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x11B917C
    static ::System::Diagnostics::Tracing::TraceLoggingDataType MakeDataType(::System::Diagnostics::Tracing::TraceLoggingDataType baseType, ::System::Diagnostics::Tracing::EventFieldFormat format);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format8(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0x11C08B4
    static ::System::Diagnostics::Tracing::TraceLoggingDataType Format8(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format16(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0x11B9740
    static ::System::Diagnostics::Tracing::TraceLoggingDataType Format16(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format32(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0x11B9AE4
    static ::System::Diagnostics::Tracing::TraceLoggingDataType Format32(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format64(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0x11B9EA0
    static ::System::Diagnostics::Tracing::TraceLoggingDataType Format64(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType FormatPtr(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0x11BA23C
    static ::System::Diagnostics::Tracing::TraceLoggingDataType FormatPtr(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Object CreateInstance(System.Type type, params System.Object[] parameters)
    // Offset: 0x11C1000
    static ::Il2CppObject* CreateInstance(::System::Type* type, ::ArrayW<::Il2CppObject*> parameters);
    // static public System.Boolean IsValueType(System.Type type)
    // Offset: 0x11C1008
    static bool IsValueType(::System::Type* type);
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0x11C1034
    static bool IsEnum(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> GetProperties(System.Type type)
    // Offset: 0x11C1068
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* type);
    // static public System.Reflection.MethodInfo GetGetMethod(System.Reflection.PropertyInfo propInfo)
    // Offset: 0x11C1094
    static ::System::Reflection::MethodInfo* GetGetMethod(::System::Reflection::PropertyInfo* propInfo);
    // static public System.Reflection.MethodInfo GetDeclaredStaticMethod(System.Type declaringType, System.String name)
    // Offset: 0x11C10C0
    static ::System::Reflection::MethodInfo* GetDeclaredStaticMethod(::System::Type* declaringType, ::StringW name);
    // static public System.Boolean HasCustomAttribute(System.Reflection.PropertyInfo propInfo, System.Type attributeType)
    // Offset: 0x11C10F8
    static bool HasCustomAttribute(::System::Reflection::PropertyInfo* propInfo, ::System::Type* attributeType);
    // static public AttributeType GetCustomAttribute(System.Reflection.PropertyInfo propInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class AttributeType>
    static AttributeType GetCustomAttribute(::System::Reflection::PropertyInfo* propInfo) {
      static_assert(std::is_convertible_v<AttributeType, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::Statics::GetCustomAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "Statics", "GetCustomAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AttributeType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propInfo)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AttributeType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<AttributeType, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, propInfo);
    }
    // static public AttributeType GetCustomAttribute(System.Type type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class AttributeType>
    static AttributeType GetCustomAttribute(::System::Type* type) {
      static_assert(std::is_convertible_v<AttributeType, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::Statics::GetCustomAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "Statics", "GetCustomAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AttributeType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AttributeType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<AttributeType, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, type);
    }
    // static public System.Type[] GetGenericArguments(System.Type type)
    // Offset: 0x11C1150
    static ::ArrayW<::System::Type*> GetGenericArguments(::System::Type* type);
    // static public System.Type FindEnumerableElementType(System.Type type)
    // Offset: 0x11C1184
    static ::System::Type* FindEnumerableElementType(::System::Type* type);
    // static public System.Boolean IsGenericMatch(System.Type type, System.Object openType)
    // Offset: 0x11C1424
    static bool IsGenericMatch(::System::Type* type, ::Il2CppObject* openType);
    // static public System.Delegate CreateDelegate(System.Type delegateType, System.Reflection.MethodInfo methodInfo)
    // Offset: 0x11C156C
    static ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Reflection::MethodInfo* methodInfo);
    // static public System.Diagnostics.Tracing.TraceLoggingTypeInfo GetTypeInfoInstance(System.Type dataType, System.Collections.Generic.List`1<System.Type> recursionCheck)
    // Offset: 0x11C1574
    static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo* GetTypeInfoInstance(::System::Type* dataType, ::System::Collections::Generic::List_1<::System::Type*>* recursionCheck);
    // static public System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> CreateDefaultTypeInfo(System.Collections.Generic.List`1<System.Type> recursionCheck)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class DataType>
    static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* CreateDefaultTypeInfo(::System::Collections::Generic::List_1<::System::Type*>* recursionCheck) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::Statics::CreateDefaultTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "Statics", "CreateDefaultTypeInfo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(recursionCheck)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, recursionCheck);
    }
    // static private System.Void .cctor()
    // Offset: 0x11C18E0
    static void _cctor();
  }; // System.Diagnostics.Tracing.Statics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::MetadataForString
// Il2CppName: MetadataForString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, int, int, int)>(&System::Diagnostics::Tracing::Statics::MetadataForString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* prefixSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* suffixSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* additionalSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "MetadataForString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, prefixSize, suffixSize, additionalSize});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::EncodeTags
// Il2CppName: EncodeTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<int>, ::ArrayW<uint8_t>)>(&System::Diagnostics::Tracing::Statics::EncodeTags)> {
  static const MethodInfo* get() {
    static auto* tags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* metadata = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "EncodeTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tags, pos, metadata});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int, uint8_t)>(&System::Diagnostics::Tracing::Statics::Combine)> {
  static const MethodInfo* get() {
    static auto* settingValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settingValue, defaultValue});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Diagnostics::Tracing::Statics::Combine)> {
  static const MethodInfo* get() {
    static auto* settingValue1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* settingValue2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settingValue1, settingValue2});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::CheckName
// Il2CppName: CheckName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Diagnostics::Tracing::Statics::CheckName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "CheckName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::ShouldOverrideFieldName
// Il2CppName: ShouldOverrideFieldName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Diagnostics::Tracing::Statics::ShouldOverrideFieldName)> {
  static const MethodInfo* get() {
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "ShouldOverrideFieldName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::MakeDataType
// Il2CppName: MakeDataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingDataType (*)(::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldFormat)>(&System::Diagnostics::Tracing::Statics::MakeDataType)> {
  static const MethodInfo* get() {
    static auto* baseType = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataType")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "MakeDataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseType, format});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::Format8
// Il2CppName: Format8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingDataType (*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType)>(&System::Diagnostics::Tracing::Statics::Format8)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    static auto* native = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "Format8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, native});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::Format16
// Il2CppName: Format16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingDataType (*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType)>(&System::Diagnostics::Tracing::Statics::Format16)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    static auto* native = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "Format16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, native});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::Format32
// Il2CppName: Format32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingDataType (*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType)>(&System::Diagnostics::Tracing::Statics::Format32)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    static auto* native = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "Format32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, native});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::Format64
// Il2CppName: Format64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingDataType (*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType)>(&System::Diagnostics::Tracing::Statics::Format64)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    static auto* native = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "Format64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, native});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::FormatPtr
// Il2CppName: FormatPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingDataType (*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType)>(&System::Diagnostics::Tracing::Statics::FormatPtr)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    static auto* native = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "FormatPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, native});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::ArrayW<::Il2CppObject*>)>(&System::Diagnostics::Tracing::Statics::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, parameters});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::IsValueType
// Il2CppName: IsValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::Diagnostics::Tracing::Statics::IsValueType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "IsValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::IsEnum
// Il2CppName: IsEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::Diagnostics::Tracing::Statics::IsEnum)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "IsEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*)>(&System::Diagnostics::Tracing::Statics::GetProperties)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Reflection::PropertyInfo*)>(&System::Diagnostics::Tracing::Statics::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* propInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propInfo});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetDeclaredStaticMethod
// Il2CppName: GetDeclaredStaticMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW)>(&System::Diagnostics::Tracing::Statics::GetDeclaredStaticMethod)> {
  static const MethodInfo* get() {
    static auto* declaringType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "GetDeclaredStaticMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{declaringType, name});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::HasCustomAttribute
// Il2CppName: HasCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::PropertyInfo*, ::System::Type*)>(&System::Diagnostics::Tracing::Statics::HasCustomAttribute)> {
  static const MethodInfo* get() {
    static auto* propInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "HasCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propInfo, attributeType});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetCustomAttribute
// Il2CppName: GetCustomAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetCustomAttribute
// Il2CppName: GetCustomAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetGenericArguments
// Il2CppName: GetGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&System::Diagnostics::Tracing::Statics::GetGenericArguments)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "GetGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::FindEnumerableElementType
// Il2CppName: FindEnumerableElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&System::Diagnostics::Tracing::Statics::FindEnumerableElementType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "FindEnumerableElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::IsGenericMatch
// Il2CppName: IsGenericMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::Il2CppObject*)>(&System::Diagnostics::Tracing::Statics::IsGenericMatch)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* openType = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "IsGenericMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, openType});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Reflection::MethodInfo*)>(&System::Diagnostics::Tracing::Statics::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* delegateType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* methodInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateType, methodInfo});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::GetTypeInfoInstance
// Il2CppName: GetTypeInfoInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::TraceLoggingTypeInfo* (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&System::Diagnostics::Tracing::Statics::GetTypeInfoInstance)> {
  static const MethodInfo* get() {
    static auto* dataType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* recursionCheck = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), "GetTypeInfoInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataType, recursionCheck});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::CreateDefaultTypeInfo
// Il2CppName: CreateDefaultTypeInfo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::Statics::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Tracing::Statics::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::Statics*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
