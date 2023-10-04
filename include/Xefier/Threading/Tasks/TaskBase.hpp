// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Xefier.Threading.Tasks.ITask
#include "Xefier/Threading/Tasks/ITask.hpp"
// Including type: Xefier.Threading.Tasks.TaskStatus
#include "Xefier/Threading/Tasks/TaskStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Xefier::Threading::Tasks
namespace Xefier::Threading::Tasks {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Xefier::Threading
namespace Xefier::Threading {
  // Forward declaring type: AutoLock`1<T>
  template<typename T>
  class AutoLock_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
// Type namespace: Xefier.Threading.Tasks
namespace Xefier::Threading::Tasks {
  // Forward declaring type: TaskBase
  class TaskBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Xefier::Threading::Tasks::TaskBase);
DEFINE_IL2CPP_ARG_TYPE(::Xefier::Threading::Tasks::TaskBase*, "Xefier.Threading.Tasks", "TaskBase");
// Type namespace: Xefier.Threading.Tasks
namespace Xefier::Threading::Tasks {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Xefier.Threading.Tasks.TaskBase
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskBase : public ::Il2CppObject/*, public ::Xefier::Threading::Tasks::ITask*/ {
    public:
    // Nested type: ::Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xAB278C
    // [CompilerGeneratedAttribute] Offset: 0xAB278C
    // private System.EventHandler Finished
    // Size: 0x8
    // Offset: 0x10
    ::System::EventHandler* Finished;
    // Field size check
    static_assert(sizeof(::System::EventHandler*) == 0x8);
    // private System.Action action
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* action;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private Xefier.Threading.AutoLock`1<Xefier.Threading.Tasks.TaskStatus> status
    // Size: 0x8
    // Offset: 0x20
    ::Xefier::Threading::AutoLock_1<::Xefier::Threading::Tasks::TaskStatus>* status;
    // Field size check
    static_assert(sizeof(::Xefier::Threading::AutoLock_1<::Xefier::Threading::Tasks::TaskStatus>*) == 0x8);
    // private Xefier.Threading.AutoLock`1<System.Exception> exception
    // Size: 0x8
    // Offset: 0x28
    ::Xefier::Threading::AutoLock_1<::System::Exception*>* exception;
    // Field size check
    static_assert(sizeof(::Xefier::Threading::AutoLock_1<::System::Exception*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Xefier::Threading::Tasks::ITask
    operator ::Xefier::Threading::Tasks::ITask() noexcept {
      return *reinterpret_cast<::Xefier::Threading::Tasks::ITask*>(this);
    }
    // Get instance field reference: private System.EventHandler Finished
    [[deprecated("Use field access instead!")]] ::System::EventHandler*& dyn_Finished();
    // Get instance field reference: private System.Action action
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_action();
    // Get instance field reference: private Xefier.Threading.AutoLock`1<Xefier.Threading.Tasks.TaskStatus> status
    [[deprecated("Use field access instead!")]] ::Xefier::Threading::AutoLock_1<::Xefier::Threading::Tasks::TaskStatus>*& dyn_status();
    // Get instance field reference: private Xefier.Threading.AutoLock`1<System.Exception> exception
    [[deprecated("Use field access instead!")]] ::Xefier::Threading::AutoLock_1<::System::Exception*>*& dyn_exception();
    // protected System.Void add_Finished(System.EventHandler value)
    // Offset: 0x28A3BA0
    void add_Finished(::System::EventHandler* value);
    // protected System.Void remove_Finished(System.EventHandler value)
    // Offset: 0x28A3C8C
    void remove_Finished(::System::EventHandler* value);
    // protected System.Action get_TaskAction()
    // Offset: 0x28A3D78
    ::System::Action* get_TaskAction();
    // public System.Exception get_Exception()
    // Offset: 0x28A3D80
    ::System::Exception* get_Exception();
    // protected System.Void set_Exception(System.Exception value)
    // Offset: 0x28A3DE0
    void set_Exception(::System::Exception* value);
    // public System.Boolean get_IsCanceled()
    // Offset: 0x28A3E50
    bool get_IsCanceled();
    // public System.Boolean get_IsFaulted()
    // Offset: 0x28A3E74
    bool get_IsFaulted();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x28A3E98
    bool get_IsCompleted();
    // public Xefier.Threading.Tasks.TaskStatus get_Status()
    // Offset: 0x28A3EFC
    ::Xefier::Threading::Tasks::TaskStatus get_Status();
    // protected System.Void set_Status(Xefier.Threading.Tasks.TaskStatus value)
    // Offset: 0x28A3F5C
    void set_Status(::Xefier::Threading::Tasks::TaskStatus value);
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // protected System.Void .ctor()
    // Offset: 0x28A3FCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::Tasks::TaskBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskBase*, creationType>()));
    }
    // protected System.Void Init(System.Action action)
    // Offset: 0x28A406C
    void Init(::System::Action* action);
    // public System.Void Start()
    // Offset: 0x28A4114
    void Start();
    // public Xefier.Threading.Tasks.ITask ContinueWith(System.Action`1<Xefier.Threading.Tasks.ITask> action)
    // Offset: 0x28A4334
    ::Xefier::Threading::Tasks::ITask* ContinueWith(::System::Action_1<::Xefier::Threading::Tasks::ITask*>* action);
    // public System.Void Wait()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Wait();
    // protected System.Void OnFinished()
    // Offset: 0x28A429C
    void OnFinished();
  }; // Xefier.Threading.Tasks.TaskBase
  #pragma pack(pop)
  static check_size<sizeof(TaskBase), 40 + sizeof(::Xefier::Threading::AutoLock_1<::System::Exception*>*)> __Xefier_Threading_Tasks_TaskBaseSizeCheck;
  static_assert(sizeof(TaskBase) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::add_Finished
// Il2CppName: add_Finished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)(::System::EventHandler*)>(&Xefier::Threading::Tasks::TaskBase::add_Finished)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "add_Finished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::remove_Finished
// Il2CppName: remove_Finished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)(::System::EventHandler*)>(&Xefier::Threading::Tasks::TaskBase::remove_Finished)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "remove_Finished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_TaskAction
// Il2CppName: get_TaskAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_TaskAction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_TaskAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::set_Exception
// Il2CppName: set_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)(::System::Exception*)>(&Xefier::Threading::Tasks::TaskBase::set_Exception)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "set_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_IsCanceled
// Il2CppName: get_IsCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_IsCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_IsCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_IsFaulted
// Il2CppName: get_IsFaulted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_IsFaulted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_IsFaulted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Xefier::Threading::Tasks::TaskStatus (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::set_Status
// Il2CppName: set_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)(::Xefier::Threading::Tasks::TaskStatus)>(&Xefier::Threading::Tasks::TaskBase::set_Status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Xefier.Threading.Tasks", "TaskStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "set_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)(::System::Action*)>(&Xefier::Threading::Tasks::TaskBase::Init)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::ContinueWith
// Il2CppName: ContinueWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Xefier::Threading::Tasks::ITask* (Xefier::Threading::Tasks::TaskBase::*)(::System::Action_1<::Xefier::Threading::Tasks::ITask*>*)>(&Xefier::Threading::Tasks::TaskBase::ContinueWith)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Xefier.Threading.Tasks", "ITask")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "ContinueWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::Wait)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::OnFinished
// Il2CppName: OnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::*)()>(&Xefier::Threading::Tasks::TaskBase::OnFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase*), "OnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
