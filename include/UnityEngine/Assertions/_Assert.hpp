// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Forward declaring type: Assert
  class _Assert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Assertions::_Assert);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::_Assert*, "UnityEngine.Assertions", "Assert");
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Assertions.Assert
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class _Assert : public ::Il2CppObject {
    public:
    // Get static field: static public System.Boolean raiseExceptions
    static bool _get_raiseExceptions();
    // Set static field: static public System.Boolean raiseExceptions
    static void _set_raiseExceptions(bool value);
    // static private System.Void Fail(System.String message, System.String userMessage)
    // Offset: 0x203B3D8
    static void Fail(::StringW message, ::StringW userMessage);
    // static public System.Void AreEqual(T expected, T actual, System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AreEqual(T expected, T actual, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Assertions::_Assert::AreEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Assertions", "Assert", "AreEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(expected), ::il2cpp_utils::ExtractType(actual), ::il2cpp_utils::ExtractType(message)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, expected, actual, message);
    }
    // static public System.Void AreEqual(T expected, T actual, System.String message, System.Collections.Generic.IEqualityComparer`1<T> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AreEqual(T expected, T actual, ::StringW message, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Assertions::_Assert::AreEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Assertions", "Assert", "AreEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(expected), ::il2cpp_utils::ExtractType(actual), ::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(comparer)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, expected, actual, message, comparer);
    }
    // static public System.Void AreEqual(UnityEngine.Object expected, UnityEngine.Object actual, System.String message)
    // Offset: 0x203B694
    static void AreEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::StringW message);
    // static public System.Void AreEqual(System.Int32 expected, System.Int32 actual)
    // Offset: 0x203B9A8
    static void AreEqual(int expected, int actual);
    // static private System.Void .cctor()
    // Offset: 0x203BA44
    static void _cctor();
  }; // UnityEngine.Assertions.Assert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Assertions::_Assert::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&UnityEngine::Assertions::_Assert::Fail)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::_Assert*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, userMessage});
  }
};
// Writing MetadataGetter for method: UnityEngine::Assertions::_Assert::AreEqual
// Il2CppName: AreEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Assertions::_Assert::AreEqual
// Il2CppName: AreEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Assertions::_Assert::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::StringW)>(&UnityEngine::Assertions::_Assert::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::_Assert*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Assertions::_Assert::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::Assertions::_Assert::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::_Assert*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: UnityEngine::Assertions::_Assert::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Assertions::_Assert::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::_Assert*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
