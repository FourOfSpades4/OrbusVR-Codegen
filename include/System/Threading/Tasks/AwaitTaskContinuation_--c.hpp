// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.AwaitTaskContinuation
#include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::AwaitTaskContinuation::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AwaitTaskContinuation::$$c*, "System.Threading.Tasks", "AwaitTaskContinuation/<>c");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.AwaitTaskContinuation/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5A594
  class AwaitTaskContinuation::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.AwaitTaskContinuation/<>c <>9
    static ::System::Threading::Tasks::AwaitTaskContinuation::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.AwaitTaskContinuation/<>c <>9
    static void _set_$$9(::System::Threading::Tasks::AwaitTaskContinuation::$$c* value);
    // Get static field: static public System.Threading.WaitCallback <>9__17_0
    static ::System::Threading::WaitCallback* _get_$$9__17_0();
    // Set static field: static public System.Threading.WaitCallback <>9__17_0
    static void _set_$$9__17_0(::System::Threading::WaitCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x1CEE924
    static void _cctor();
    // System.Void <ThrowAsyncIfNecessary>b__17_0(System.Object s)
    // Offset: 0x1CEE990
    void $ThrowAsyncIfNecessary$b__17_0(::Il2CppObject* s);
    // public System.Void .ctor()
    // Offset: 0x1CEE988
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitTaskContinuation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::AwaitTaskContinuation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitTaskContinuation::$$c*, creationType>()));
    }
  }; // System.Threading.Tasks.AwaitTaskContinuation/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::AwaitTaskContinuation::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::$$c::$ThrowAsyncIfNecessary$b__17_0
// Il2CppName: <ThrowAsyncIfNecessary>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::AwaitTaskContinuation::$$c::$ThrowAsyncIfNecessary$b__17_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation::$$c*), "<ThrowAsyncIfNecessary>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
