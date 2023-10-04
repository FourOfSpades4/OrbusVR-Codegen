// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: TaskFactory`1<TResult>
  template<typename TResult>
  class TaskFactory_1;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Task_1, "System.Threading.Tasks", "Task`1");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Task`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: A5A3E4
  // [DebuggerDisplayAttribute] Offset: A5A3E4
  template<typename TResult>
  class Task_1 : public ::System::Threading::Tasks::Task {
    public:
    // Nested type: ::System::Threading::Tasks::Task_1::$$c<TResult>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Threading.Tasks.Task`1/<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: A5A46C
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = Task_1<TResult>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly System.Threading.Tasks.Task`1/<>c<TResult> <>9
      static typename ::System::Threading::Tasks::Task_1<TResult>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::System::Threading::Tasks::Task_1<TResult>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Threading.Tasks.Task`1/<>c<TResult> <>9
      static void _set_$$9(typename ::System::Threading::Tasks::Task_1<TResult>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get(), "<>9", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // System.Threading.Tasks.Task`1<TResult> <.cctor>b__64_0(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> completed)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::Threading::Tasks::Task_1<TResult>* $_cctor$b__64_0(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* completed) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::$$c::<.cctor>b__64_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__64_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(completed)})));
        return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal__method, completed);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Task_1<TResult>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Task_1<TResult>::$$c*, creationType>()));
      }
    }; // System.Threading.Tasks.Task`1/<>c
    // Could not write size check! Type: System.Threading.Tasks.Task`1/<>c is generic, or has no fields that are valid for size checks!
    public:
    // TResult m_result
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResult m_result;
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly System.Threading.Tasks.TaskFactory`1<TResult> s_Factory
    static ::System::Threading::Tasks::TaskFactory_1<TResult>* _get_s_Factory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::_get_s_Factory");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Threading::Tasks::TaskFactory_1<TResult>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "s_Factory"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Threading.Tasks.TaskFactory`1<TResult> s_Factory
    static void _set_s_Factory(::System::Threading::Tasks::TaskFactory_1<TResult>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::_set_s_Factory");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "s_Factory", value));
    }
    // Autogenerated static field getter
    // Get static field: static readonly System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> TaskWhenAnyCast
    static ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* _get_TaskWhenAnyCast() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::_get_TaskWhenAnyCast");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "TaskWhenAnyCast")));
    }
    // Autogenerated static field setter
    // Set static field: static readonly System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> TaskWhenAnyCast
    static void _set_TaskWhenAnyCast(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::_set_TaskWhenAnyCast");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "TaskWhenAnyCast", value));
    }
    // Autogenerated instance field getter
    // Get instance field: TResult m_result
    [[deprecated("Use field access instead!")]] TResult& dyn_m_result() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::dyn_m_result");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_result"))->offset;
      return *reinterpret_cast<TResult*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.Object state, System.Threading.Tasks.TaskCreationOptions options)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(::Il2CppObject* state, ::System::Threading::Tasks::TaskCreationOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(state, options)));
    }
    // System.Void .ctor(TResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(result)));
    }
    // System.Void .ctor(System.Boolean canceled, TResult result, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.CancellationToken ct)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(canceled, result, creationOptions, ct)));
    }
    // public System.Void .ctor(System.Func`2<System.Object,TResult> function, System.Object state, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(::System::Func_2<::Il2CppObject*, TResult>* function, ::Il2CppObject* state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(function, state, cancellationToken, creationOptions)));
    }
    // System.Void .ctor(System.Func`1<TResult> valueSelector, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler, ByRef<::System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler, byref(stackMark))));
    }
    // System.Void .ctor(System.Func`1<TResult> valueSelector, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler)));
    }
    // static System.Threading.Tasks.Task`1<TResult> StartNew(System.Threading.Tasks.Task parent, System.Func`1<TResult> function, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler, ByRef<::System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::StartNew");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "StartNew", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(parent), ::il2cpp_utils::ExtractType(function), ::il2cpp_utils::ExtractType(cancellationToken), ::il2cpp_utils::ExtractType(creationOptions), ::il2cpp_utils::ExtractType(internalOptions), ::il2cpp_utils::ExtractType(scheduler), ::il2cpp_utils::ExtractType(stackMark)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, parent, function, cancellationToken, creationOptions, internalOptions, scheduler, byref(stackMark));
    }
    // System.Boolean TrySetResult(TResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TrySetResult(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::TrySetResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetResult", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, result);
    }
    // System.Void DangerousSetResult(TResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DangerousSetResult(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::DangerousSetResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DangerousSetResult", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
    }
    // public TResult get_Result()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult get_Result() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::get_Result");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Result", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method);
    }
    // TResult get_ResultOnSuccess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult get_ResultOnSuccess() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::get_ResultOnSuccess");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ResultOnSuccess", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method);
    }
    // TResult GetResultCore(System.Boolean waitCompletionNotification)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult GetResultCore(bool waitCompletionNotification) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::GetResultCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetResultCore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(waitCompletionNotification)})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method, waitCompletionNotification);
    }
    // System.Boolean TrySetException(System.Object exceptionObject)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TrySetException(::Il2CppObject* exceptionObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::TrySetException");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetException", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(exceptionObject)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, exceptionObject);
    }
    // System.Boolean TrySetCanceled(System.Threading.CancellationToken tokenToRecord)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TrySetCanceled(::System::Threading::CancellationToken tokenToRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::TrySetCanceled");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetCanceled", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(tokenToRecord)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, tokenToRecord);
    }
    // System.Boolean TrySetCanceled(System.Threading.CancellationToken tokenToRecord, System.Object cancellationException)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TrySetCanceled(::System::Threading::CancellationToken tokenToRecord, ::Il2CppObject* cancellationException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::TrySetCanceled");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetCanceled", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(tokenToRecord), ::il2cpp_utils::ExtractType(cancellationException)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, tokenToRecord, cancellationException);
    }
    // static public System.Threading.Tasks.TaskFactory`1<TResult> get_Factory()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::Threading::Tasks::TaskFactory_1<TResult>* get_Factory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::get_Factory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "get_Factory", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::TaskFactory_1<TResult>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Runtime.CompilerServices.TaskAwaiter`1<TResult> GetAwaiter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::GetAwaiter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAwaiter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>, false>(this, ___internal__method);
    }
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> ConfigureAwait(System.Boolean continueOnCapturedContext)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::ConfigureAwait");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ConfigureAwait", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(continueOnCapturedContext)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>, false>(this, ___internal__method, continueOnCapturedContext);
    }
    // System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>()));
    }
    // System.Void .ctor(System.Delegate valueSelector, System.Object state, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.ctor(System.Delegate valueSelector, System.Object state, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task_1<TResult>* New_ctor(::System::Delegate* valueSelector, ::Il2CppObject* state, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task_1<TResult>*, creationType>(valueSelector, state, parent, cancellationToken, creationOptions, internalOptions, scheduler)));
    }
    // override System.Void InnerInvoke()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::InnerInvoke()
    void InnerInvoke() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::InnerInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Threading::Tasks::Task*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // System.Threading.Tasks.Task`1
  // Could not write size check! Type: System.Threading.Tasks.Task`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"