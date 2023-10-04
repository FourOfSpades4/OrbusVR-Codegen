// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AndroidJavaObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaObject*, "UnityEngine", "AndroidJavaObject");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaObject
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaObject : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // UnityEngine.GlobalJavaObjectRef m_jobject
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GlobalJavaObjectRef* m_jobject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GlobalJavaObjectRef*) == 0x8);
    // UnityEngine.GlobalJavaObjectRef m_jclass
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GlobalJavaObjectRef* m_jclass;
    // Field size check
    static_assert(sizeof(::UnityEngine::GlobalJavaObjectRef*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.Boolean enableDebugPrints
    static bool _get_enableDebugPrints();
    // Set static field: static private System.Boolean enableDebugPrints
    static void _set_enableDebugPrints(bool value);
    // Get static field: static private UnityEngine.AndroidJavaClass s_JavaLangClass
    static ::UnityEngine::AndroidJavaClass* _get_s_JavaLangClass();
    // Set static field: static private UnityEngine.AndroidJavaClass s_JavaLangClass
    static void _set_s_JavaLangClass(::UnityEngine::AndroidJavaClass* value);
    // Get instance field reference: UnityEngine.GlobalJavaObjectRef m_jobject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GlobalJavaObjectRef*& dyn_m_jobject();
    // Get instance field reference: UnityEngine.GlobalJavaObjectRef m_jclass
    [[deprecated("Use field access instead!")]] ::UnityEngine::GlobalJavaObjectRef*& dyn_m_jclass();
    // public System.Void .ctor(System.String className, params System.Object[] args)
    // Offset: 0x2035C28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::StringW className, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // System.Void .ctor(System.IntPtr jobject)
    // Offset: 0x2035F68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::System::IntPtr jobject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(jobject)));
    }
    // System.Void .ctor()
    // Offset: 0x2035744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x2036074
    void Dispose();
    // public System.Void Call(System.String methodName, params System.Object[] args)
    // Offset: 0x20360F4
    void Call(::StringW methodName, ::ArrayW<::Il2CppObject*> args);
    // public System.Void CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0x203621C
    void CallStatic(::StringW methodName, ::ArrayW<::Il2CppObject*> args);
    // public FieldType Get(System.String fieldName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    FieldType Get(::StringW fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // public System.Void Set(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    void Set(::StringW fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(val)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // public FieldType GetStatic(System.String fieldName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    FieldType GetStatic(::StringW fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::GetStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetStatic", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // public System.Void SetStatic(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    void SetStatic(::StringW fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::SetStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetStatic", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(val)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // public System.IntPtr GetRawObject()
    // Offset: 0x2035BEC
    ::System::IntPtr GetRawObject();
    // public System.IntPtr GetRawClass()
    // Offset: 0x2036350
    ::System::IntPtr GetRawClass();
    // public ReturnType Call(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    ReturnType Call(::StringW methodName, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::Call");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Call", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // public ReturnType CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    ReturnType CallStatic(::StringW methodName, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::CallStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CallStatic", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // protected System.Void DebugPrint(System.String msg)
    // Offset: 0x2035A18
    void DebugPrint(::StringW msg);
    // protected System.Void DebugPrint(System.String call, System.String methodName, System.String signature, System.Object[] args)
    // Offset: 0x2036448
    void DebugPrint(::StringW call, ::StringW methodName, ::StringW signature, ::ArrayW<::Il2CppObject*> args);
    // private System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    // Offset: 0x2035C68
    void _AndroidJavaObject(::StringW className, ::ArrayW<::Il2CppObject*> args);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x20368FC
    void Dispose(bool disposing);
    // protected System.Void _Dispose()
    // Offset: 0x2036078
    void _Dispose();
    // protected System.Void _Call(System.String methodName, params System.Object[] args)
    // Offset: 0x20360F8
    void _Call(::StringW methodName, ::ArrayW<::Il2CppObject*> args);
    // protected ReturnType _Call(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    ReturnType _Call(::StringW methodName, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::_Call");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "_Call", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // protected FieldType _Get(System.String fieldName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    FieldType _Get(::StringW fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::_Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "_Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // protected System.Void _Set(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    void _Set(::StringW fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::_Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "_Set", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(val)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // protected System.Void _CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0x2036220
    void _CallStatic(::StringW methodName, ::ArrayW<::Il2CppObject*> args);
    // protected ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    ReturnType _CallStatic(::StringW methodName, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::_CallStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "_CallStatic", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // protected FieldType _GetStatic(System.String fieldName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    FieldType _GetStatic(::StringW fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::_GetStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "_GetStatic", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // protected System.Void _SetStatic(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class FieldType>
    void _SetStatic(::StringW fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaObject::_SetStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "_SetStatic", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(val)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // static UnityEngine.AndroidJavaObject AndroidJavaObjectDeleteLocalRef(System.IntPtr jobject)
    // Offset: 0x2036940
    static ::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(::System::IntPtr jobject);
    // static UnityEngine.AndroidJavaClass AndroidJavaClassDeleteLocalRef(System.IntPtr jclass)
    // Offset: 0x20369EC
    static ::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(::System::IntPtr jclass);
    // protected System.IntPtr _GetRawObject()
    // Offset: 0x2036344
    ::System::IntPtr _GetRawObject();
    // protected System.IntPtr _GetRawClass()
    // Offset: 0x203635C
    ::System::IntPtr _GetRawClass();
    // static protected UnityEngine.AndroidJavaObject FindClass(System.String name)
    // Offset: 0x2035AB8
    static ::UnityEngine::AndroidJavaObject* FindClass(::StringW name);
    // static protected UnityEngine.AndroidJavaClass get_JavaLangClass()
    // Offset: 0x2036A98
    static ::UnityEngine::AndroidJavaClass* get_JavaLangClass();
    // static private System.Void .cctor()
    // Offset: 0x2036B84
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0x203687C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AndroidJavaObject
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaObject), 24 + sizeof(::UnityEngine::GlobalJavaObjectRef*)> __UnityEngine_AndroidJavaObjectSizeCheck;
  static_assert(sizeof(AndroidJavaObject) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Call
// Il2CppName: Call
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaObject::Call)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "Call", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::CallStatic
// Il2CppName: CallStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaObject::CallStatic)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "CallStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Set
// Il2CppName: Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::GetStatic
// Il2CppName: GetStatic
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::SetStatic
// Il2CppName: SetStatic
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::GetRawObject
// Il2CppName: GetRawObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::GetRawObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "GetRawObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::GetRawClass
// Il2CppName: GetRawClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::GetRawClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "GetRawClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Call
// Il2CppName: Call
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::CallStatic
// Il2CppName: CallStatic
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::DebugPrint
// Il2CppName: DebugPrint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW)>(&UnityEngine::AndroidJavaObject::DebugPrint)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "DebugPrint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::DebugPrint
// Il2CppName: DebugPrint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaObject::DebugPrint)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "DebugPrint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call, methodName, signature, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_AndroidJavaObject
// Il2CppName: _AndroidJavaObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaObject::_AndroidJavaObject)> {
  static const MethodInfo* get() {
    static auto* className = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "_AndroidJavaObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{className, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(bool)>(&UnityEngine::AndroidJavaObject::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_Dispose
// Il2CppName: _Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "_Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_Call
// Il2CppName: _Call
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaObject::_Call)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "_Call", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_Call
// Il2CppName: _Call
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_Get
// Il2CppName: _Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_Set
// Il2CppName: _Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_CallStatic
// Il2CppName: _CallStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaObject::_CallStatic)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "_CallStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_CallStatic
// Il2CppName: _CallStatic
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_GetStatic
// Il2CppName: _GetStatic
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_SetStatic
// Il2CppName: _SetStatic
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::AndroidJavaObjectDeleteLocalRef
// Il2CppName: AndroidJavaObjectDeleteLocalRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)(::System::IntPtr)>(&UnityEngine::AndroidJavaObject::AndroidJavaObjectDeleteLocalRef)> {
  static const MethodInfo* get() {
    static auto* jobject = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "AndroidJavaObjectDeleteLocalRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jobject});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::AndroidJavaClassDeleteLocalRef
// Il2CppName: AndroidJavaClassDeleteLocalRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaClass* (*)(::System::IntPtr)>(&UnityEngine::AndroidJavaObject::AndroidJavaClassDeleteLocalRef)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "AndroidJavaClassDeleteLocalRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_GetRawObject
// Il2CppName: _GetRawObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::_GetRawObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "_GetRawObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_GetRawClass
// Il2CppName: _GetRawClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::_GetRawClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "_GetRawClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::FindClass
// Il2CppName: FindClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)(::StringW)>(&UnityEngine::AndroidJavaObject::FindClass)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "FindClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::get_JavaLangClass
// Il2CppName: get_JavaLangClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaClass* (*)()>(&UnityEngine::AndroidJavaObject::get_JavaLangClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "get_JavaLangClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AndroidJavaObject::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaObject::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaObject::*)()>(&UnityEngine::AndroidJavaObject::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaObject*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};