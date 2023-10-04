// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeTypeHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A58320
  struct RuntimeTypeHandle/*, public ::System::ValueType, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr value;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RuntimeTypeHandle
    constexpr RuntimeTypeHandle(::System::IntPtr value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return value;
    }
    // Get instance field reference: private System.IntPtr value
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_value();
    // System.Void .ctor(System.IntPtr val)
    // Offset: 0xBA52F4
    // ABORTED: conflicts with another method.  RuntimeTypeHandle(::System::IntPtr val);
    // System.Void .ctor(System.RuntimeType type)
    // Offset: 0xBA52FC
    RuntimeTypeHandle(::System::RuntimeType* type);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xBA5330
    RuntimeTypeHandle(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.IntPtr get_Value()
    // Offset: 0xBA5338
    ::System::IntPtr get_Value();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xBA5340
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static System.Reflection.TypeAttributes GetAttributes(System.RuntimeType type)
    // Offset: 0x1819188
    static ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type);
    // static private System.Int32 GetMetadataToken(System.RuntimeType type)
    // Offset: 0x181F5E4
    static int GetMetadataToken(::System::RuntimeType* type);
    // static System.Int32 GetToken(System.RuntimeType type)
    // Offset: 0x181C690
    static int GetToken(::System::RuntimeType* type);
    // static private System.Type GetGenericTypeDefinition_impl(System.RuntimeType type)
    // Offset: 0x181F5E8
    static ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type);
    // static System.Type GetGenericTypeDefinition(System.RuntimeType type)
    // Offset: 0x181A9E8
    static ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type);
    // static System.Boolean HasElementType(System.RuntimeType type)
    // Offset: 0x1819404
    static bool HasElementType(::System::RuntimeType* type);
    // static System.Boolean HasInstantiation(System.RuntimeType type)
    // Offset: 0x181A9F0
    static bool HasInstantiation(::System::RuntimeType* type);
    // static System.Boolean IsArray(System.RuntimeType type)
    // Offset: 0x181959C
    static bool IsArray(::System::RuntimeType* type);
    // static System.Boolean IsByRef(System.RuntimeType type)
    // Offset: 0x181922C
    static bool IsByRef(::System::RuntimeType* type);
    // static System.Boolean IsComObject(System.RuntimeType type)
    // Offset: 0x181F5EC
    static bool IsComObject(::System::RuntimeType* type);
    // static System.Boolean IsInstanceOfType(System.RuntimeType type, System.Object o)
    // Offset: 0x1818E24
    static bool IsInstanceOfType(::System::RuntimeType* type, ::Il2CppObject* o);
    // static System.Boolean IsPointer(System.RuntimeType type)
    // Offset: 0x181923C
    static bool IsPointer(::System::RuntimeType* type);
    // static System.Boolean IsPrimitive(System.RuntimeType type)
    // Offset: 0x1819234
    static bool IsPrimitive(::System::RuntimeType* type);
    // static System.Boolean HasReferences(System.RuntimeType type)
    // Offset: 0x181F5F0
    static bool HasReferences(::System::RuntimeType* type);
    // static System.Boolean IsComObject(System.RuntimeType type, System.Boolean isGenericCOM)
    // Offset: 0x1819244
    static bool IsComObject(::System::RuntimeType* type, bool isGenericCOM);
    // static System.Boolean IsContextful(System.RuntimeType type)
    // Offset: 0x1819190
    static bool IsContextful(::System::RuntimeType* type);
    // static System.Boolean IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
    // Offset: 0x181916C
    static bool IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2);
    // static System.Boolean IsSzArray(System.RuntimeType type)
    // Offset: 0x1819544
    static bool IsSzArray(::System::RuntimeType* type);
    // static System.Boolean IsInterface(System.RuntimeType type)
    // Offset: 0x181F5F4
    static bool IsInterface(::System::RuntimeType* type);
    // static System.Int32 GetArrayRank(System.RuntimeType type)
    // Offset: 0x1819654
    static int GetArrayRank(::System::RuntimeType* type);
    // static System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type)
    // Offset: 0x1818DC0
    static ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type);
    // static System.RuntimeType GetElementType(System.RuntimeType type)
    // Offset: 0x181965C
    static ::System::RuntimeType* GetElementType(::System::RuntimeType* type);
    // static System.Reflection.RuntimeModule GetModule(System.RuntimeType type)
    // Offset: 0x1818DB4
    static ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type);
    // static System.Boolean IsGenericVariable(System.RuntimeType type)
    // Offset: 0x1819178
    static bool IsGenericVariable(::System::RuntimeType* type);
    // static System.RuntimeType GetBaseType(System.RuntimeType type)
    // Offset: 0x181917C
    static ::System::RuntimeType* GetBaseType(::System::RuntimeType* type);
    // static System.Boolean CanCastTo(System.RuntimeType type, System.RuntimeType target)
    // Offset: 0x18190B0
    static bool CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target);
    // static private System.Boolean type_is_assignable_from(System.Type a, System.Type b)
    // Offset: 0x181F628
    static bool type_is_assignable_from(::System::Type* a, ::System::Type* b);
    // static System.Boolean IsGenericTypeDefinition(System.RuntimeType type)
    // Offset: 0x181A874
    static bool IsGenericTypeDefinition(::System::RuntimeType* type);
    // static System.IntPtr GetGenericParameterInfo(System.RuntimeType type)
    // Offset: 0x181E8F8
    static ::System::IntPtr GetGenericParameterInfo(::System::RuntimeType* type);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xBA5348
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xBA5350
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeTypeHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeTypeHandle), 0 + sizeof(::System::IntPtr)> __System_RuntimeTypeHandleSizeCheck;
  static_assert(sizeof(RuntimeTypeHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::RuntimeTypeHandle::RuntimeTypeHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeTypeHandle::RuntimeTypeHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeTypeHandle::RuntimeTypeHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeTypeHandle::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::RuntimeTypeHandle::*)()>(&System::RuntimeTypeHandle::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeTypeHandle::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::RuntimeTypeHandle::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeAttributes (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetMetadataToken
// Il2CppName: GetMetadataToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetMetadataToken)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetMetadataToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetToken
// Il2CppName: GetToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetToken)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetGenericTypeDefinition_impl
// Il2CppName: GetGenericTypeDefinition_impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetGenericTypeDefinition_impl)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetGenericTypeDefinition_impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetGenericTypeDefinition
// Il2CppName: GetGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetGenericTypeDefinition)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::HasElementType
// Il2CppName: HasElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::HasElementType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "HasElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::HasInstantiation
// Il2CppName: HasInstantiation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::HasInstantiation)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "HasInstantiation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsArray
// Il2CppName: IsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsArray)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsByRef
// Il2CppName: IsByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsByRef)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsComObject
// Il2CppName: IsComObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsComObject)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsComObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsInstanceOfType
// Il2CppName: IsInstanceOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ::Il2CppObject*)>(&System::RuntimeTypeHandle::IsInstanceOfType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsInstanceOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, o});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsPointer
// Il2CppName: IsPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsPointer)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsPrimitive
// Il2CppName: IsPrimitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsPrimitive)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsPrimitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::HasReferences
// Il2CppName: HasReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::HasReferences)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "HasReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsComObject
// Il2CppName: IsComObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, bool)>(&System::RuntimeTypeHandle::IsComObject)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* isGenericCOM = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsComObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, isGenericCOM});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsContextful
// Il2CppName: IsContextful
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsContextful)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsContextful", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* rtType1 = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* rtType2 = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rtType1, rtType2});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsSzArray
// Il2CppName: IsSzArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsSzArray)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsSzArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsInterface
// Il2CppName: IsInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsInterface)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetArrayRank
// Il2CppName: GetArrayRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetArrayRank)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetArrayRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetAssembly
// Il2CppName: GetAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeAssembly* (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetAssembly)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetElementType
// Il2CppName: GetElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetElementType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetModule
// Il2CppName: GetModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule* (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetModule)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsGenericVariable
// Il2CppName: IsGenericVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsGenericVariable)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsGenericVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetBaseType
// Il2CppName: GetBaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetBaseType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetBaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::CanCastTo
// Il2CppName: CanCastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&System::RuntimeTypeHandle::CanCastTo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "CanCastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::type_is_assignable_from
// Il2CppName: type_is_assignable_from
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&System::RuntimeTypeHandle::type_is_assignable_from)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "type_is_assignable_from", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::IsGenericTypeDefinition
// Il2CppName: IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::IsGenericTypeDefinition)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetGenericParameterInfo
// Il2CppName: GetGenericParameterInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::RuntimeType*)>(&System::RuntimeTypeHandle::GetGenericParameterInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetGenericParameterInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeTypeHandle::*)(::Il2CppObject*)>(&System::RuntimeTypeHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::RuntimeTypeHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::RuntimeTypeHandle::*)()>(&System::RuntimeTypeHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeTypeHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};