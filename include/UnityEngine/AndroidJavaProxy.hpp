// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AndroidJavaProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaProxy*, "UnityEngine", "AndroidJavaProxy");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaProxy : public ::Il2CppObject {
    public:
    public:
    // public readonly UnityEngine.AndroidJavaClass javaInterface
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AndroidJavaClass* javaInterface;
    // Field size check
    static_assert(sizeof(::UnityEngine::AndroidJavaClass*) == 0x8);
    // UnityEngine.AndroidJavaObject proxyObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AndroidJavaObject* proxyObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::AndroidJavaObject*) == 0x8);
    public:
    // Get static field: static private readonly UnityEngine.GlobalJavaObjectRef s_JavaLangSystemClass
    static ::UnityEngine::GlobalJavaObjectRef* _get_s_JavaLangSystemClass();
    // Set static field: static private readonly UnityEngine.GlobalJavaObjectRef s_JavaLangSystemClass
    static void _set_s_JavaLangSystemClass(::UnityEngine::GlobalJavaObjectRef* value);
    // Get static field: static private readonly System.IntPtr s_HashCodeMethodID
    static ::System::IntPtr _get_s_HashCodeMethodID();
    // Set static field: static private readonly System.IntPtr s_HashCodeMethodID
    static void _set_s_HashCodeMethodID(::System::IntPtr value);
    // Get instance field reference: public readonly UnityEngine.AndroidJavaClass javaInterface
    [[deprecated("Use field access instead!")]] ::UnityEngine::AndroidJavaClass*& dyn_javaInterface();
    // Get instance field reference: UnityEngine.AndroidJavaObject proxyObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::AndroidJavaObject*& dyn_proxyObject();
    // public System.Void .ctor(System.String javaInterface)
    // Offset: 0x2036BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaProxy* New_ctor(::StringW javaInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaProxy*, creationType>(javaInterface)));
    }
    // public System.Void .ctor(UnityEngine.AndroidJavaClass javaInterface)
    // Offset: 0x2036C4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaProxy* New_ctor(::UnityEngine::AndroidJavaClass* javaInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaProxy*, creationType>(javaInterface)));
    }
    // public UnityEngine.AndroidJavaObject Invoke(System.String methodName, System.Object[] args)
    // Offset: 0x2036C78
    ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::Il2CppObject*> args);
    // public UnityEngine.AndroidJavaObject Invoke(System.String methodName, UnityEngine.AndroidJavaObject[] javaArgs)
    // Offset: 0x2037358
    ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::UnityEngine::AndroidJavaObject*> javaArgs);
    // public System.Boolean equals(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x2037554
    bool equals(::UnityEngine::AndroidJavaObject* obj);
    // public System.Int32 hashCode()
    // Offset: 0x203765C
    int hashCode();
    // public System.String toString()
    // Offset: 0x2037740
    ::StringW toString();
    // UnityEngine.AndroidJavaObject GetProxy()
    // Offset: 0x20375D8
    ::UnityEngine::AndroidJavaObject* GetProxy();
    // static private System.Void .cctor()
    // Offset: 0x20377A0
    static void _cctor();
  }; // UnityEngine.AndroidJavaProxy
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaProxy), 24 + sizeof(::UnityEngine::AndroidJavaObject*)> __UnityEngine_AndroidJavaProxySizeCheck;
  static_assert(sizeof(AndroidJavaProxy) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)(::StringW, ::ArrayW<::UnityEngine::AndroidJavaObject*>)>(&UnityEngine::AndroidJavaProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* javaArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, javaArgs});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::equals
// Il2CppName: equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AndroidJavaProxy::*)(::UnityEngine::AndroidJavaObject*)>(&UnityEngine::AndroidJavaProxy::equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::hashCode
// Il2CppName: hashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::hashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "hashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::toString
// Il2CppName: toString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::toString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "toString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::GetProxy
// Il2CppName: GetProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::GetProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "GetProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AndroidJavaProxy::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};