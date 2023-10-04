// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnhandledExceptionEventHandler
  class UnhandledExceptionEventHandler;
  // Forward declaring type: UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: UnhandledExceptionHandler
  class UnhandledExceptionHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UnhandledExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnhandledExceptionHandler*, "UnityEngine", "UnhandledExceptionHandler");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnhandledExceptionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A70FF4
  class UnhandledExceptionHandler : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA73998
    // Get static field: static private System.UnhandledExceptionEventHandler <>f__am$cache0
    static ::System::UnhandledExceptionEventHandler* _get_$$f__am$cache0();
    // Set static field: static private System.UnhandledExceptionEventHandler <>f__am$cache0
    static void _set_$$f__am$cache0(::System::UnhandledExceptionEventHandler* value);
    // static private System.Void RegisterUECatcher()
    // Offset: 0x2837008
    static void RegisterUECatcher();
    // static private System.Void <RegisterUECatcher>m__0(System.Object sender, System.UnhandledExceptionEventArgs e)
    // Offset: 0x28370D4
    static void $RegisterUECatcher$m__0(::Il2CppObject* sender, ::System::UnhandledExceptionEventArgs* e);
  }; // UnityEngine.UnhandledExceptionHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnhandledExceptionHandler::RegisterUECatcher
// Il2CppName: RegisterUECatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UnhandledExceptionHandler::RegisterUECatcher)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnhandledExceptionHandler*), "RegisterUECatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnhandledExceptionHandler::$RegisterUECatcher$m__0
// Il2CppName: <RegisterUECatcher>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::System::UnhandledExceptionEventArgs*)>(&UnityEngine::UnhandledExceptionHandler::$RegisterUECatcher$m__0)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "UnhandledExceptionEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnhandledExceptionHandler*), "<RegisterUECatcher>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};