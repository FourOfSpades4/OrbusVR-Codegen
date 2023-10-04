// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ManualResetEventSlim
  class ManualResetEventSlim;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskExceptionHolder
  class TaskExceptionHolder;
  // Forward declaring type: Shared`1<T>
  template<typename T>
  class Shared_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::Task::ContingentProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task::ContingentProperties*, "System.Threading.Tasks", "Task/ContingentProperties");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.Task/ContingentProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class Task::ContingentProperties : public ::Il2CppObject {
    public:
    public:
    // System.Threading.ExecutionContext m_capturedContext
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::ExecutionContext* m_capturedContext;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    // System.Threading.ManualResetEventSlim m_completionEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ManualResetEventSlim* m_completionEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEventSlim*) == 0x8);
    // System.Threading.Tasks.TaskExceptionHolder m_exceptionsHolder
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::TaskExceptionHolder* m_exceptionsHolder;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskExceptionHolder*) == 0x8);
    // System.Threading.CancellationToken m_cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken m_cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> m_cancellationRegistration
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::Tasks::Shared_1<::System::Threading::CancellationTokenRegistration>* m_cancellationRegistration;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Shared_1<::System::Threading::CancellationTokenRegistration>*) == 0x8);
    // System.Int32 m_internalCancellationRequested
    // Size: 0x4
    // Offset: 0x38
    int m_internalCancellationRequested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_completionCountdown
    // Size: 0x4
    // Offset: 0x3C
    int m_completionCountdown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Collections.Generic.List`1<System.Threading.Tasks.Task> m_exceptionalChildren
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* m_exceptionalChildren;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*) == 0x8);
    public:
    // Get instance field reference: System.Threading.ExecutionContext m_capturedContext
    [[deprecated("Use field access instead!")]] ::System::Threading::ExecutionContext*& dyn_m_capturedContext();
    // Get instance field reference: System.Threading.ManualResetEventSlim m_completionEvent
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEventSlim*& dyn_m_completionEvent();
    // Get instance field reference: System.Threading.Tasks.TaskExceptionHolder m_exceptionsHolder
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskExceptionHolder*& dyn_m_exceptionsHolder();
    // Get instance field reference: System.Threading.CancellationToken m_cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_m_cancellationToken();
    // Get instance field reference: System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> m_cancellationRegistration
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Shared_1<::System::Threading::CancellationTokenRegistration>*& dyn_m_cancellationRegistration();
    // Get instance field reference: System.Int32 m_internalCancellationRequested
    [[deprecated("Use field access instead!")]] int& dyn_m_internalCancellationRequested();
    // Get instance field reference: System.Int32 m_completionCountdown
    [[deprecated("Use field access instead!")]] int& dyn_m_completionCountdown();
    // Get instance field reference: System.Collections.Generic.List`1<System.Threading.Tasks.Task> m_exceptionalChildren
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& dyn_m_exceptionalChildren();
    // System.Void SetCompleted()
    // Offset: 0x1CF2B24
    void SetCompleted();
    // System.Void DeregisterCancellationCallback()
    // Offset: 0x1CF2B5C
    void DeregisterCancellationCallback();
    // public System.Void .ctor()
    // Offset: 0x1CF0140
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::ContingentProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task::ContingentProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::ContingentProperties*, creationType>()));
    }
  }; // System.Threading.Tasks.Task/ContingentProperties
  #pragma pack(pop)
  static check_size<sizeof(Task::ContingentProperties), 64 + sizeof(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*)> __System_Threading_Tasks_Task_ContingentPropertiesSizeCheck;
  static_assert(sizeof(Task::ContingentProperties) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::Task::ContingentProperties::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::ContingentProperties::*)()>(&System::Threading::Tasks::Task::ContingentProperties::SetCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::ContingentProperties*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::ContingentProperties::DeregisterCancellationCallback
// Il2CppName: DeregisterCancellationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::ContingentProperties::*)()>(&System::Threading::Tasks::Task::ContingentProperties::DeregisterCancellationCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::ContingentProperties*), "DeregisterCancellationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::ContingentProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
