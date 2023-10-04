// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.InternalTaskOptions
#include "System/Threading/Tasks/InternalTaskOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::Task::$$c__DisplayClass178_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task::$$c__DisplayClass178_0*, "System.Threading.Tasks", "Task/<>c__DisplayClass178_0");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.Task/<>c__DisplayClass178_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5A524
  class Task::$$c__DisplayClass178_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Threading.Tasks.Task root
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task* root;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // public System.Boolean replicasAreQuitting
    // Size: 0x1
    // Offset: 0x18
    bool replicasAreQuitting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: replicasAreQuitting and: taskReplicaDelegate
    char __padding1[0x7] = {};
    // public System.Action`1<System.Object> taskReplicaDelegate
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::Il2CppObject*>* taskReplicaDelegate;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Il2CppObject*>*) == 0x8);
    // public System.Threading.Tasks.TaskCreationOptions creationOptionsForReplicas
    // Size: 0x4
    // Offset: 0x28
    ::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCreationOptions) == 0x4);
    // public System.Threading.Tasks.InternalTaskOptions internalOptionsForReplicas
    // Size: 0x4
    // Offset: 0x2C
    ::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::InternalTaskOptions) == 0x4);
    public:
    // Get instance field reference: public System.Threading.Tasks.Task root
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_root();
    // Get instance field reference: public System.Boolean replicasAreQuitting
    [[deprecated("Use field access instead!")]] bool& dyn_replicasAreQuitting();
    // Get instance field reference: public System.Action`1<System.Object> taskReplicaDelegate
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Il2CppObject*>*& dyn_taskReplicaDelegate();
    // Get instance field reference: public System.Threading.Tasks.TaskCreationOptions creationOptionsForReplicas
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCreationOptions& dyn_creationOptionsForReplicas();
    // Get instance field reference: public System.Threading.Tasks.InternalTaskOptions internalOptionsForReplicas
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::InternalTaskOptions& dyn_internalOptionsForReplicas();
    // System.Void <ExecuteSelfReplicating>b__0(System.Object <p0>)
    // Offset: 0x1CF6478
    void $ExecuteSelfReplicating$b__0(::Il2CppObject* $p0$);
    // public System.Void .ctor()
    // Offset: 0x1CF389C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::$$c__DisplayClass178_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task::$$c__DisplayClass178_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::$$c__DisplayClass178_0*, creationType>()));
    }
  }; // System.Threading.Tasks.Task/<>c__DisplayClass178_0
  #pragma pack(pop)
  static check_size<sizeof(Task::$$c__DisplayClass178_0), 44 + sizeof(::System::Threading::Tasks::InternalTaskOptions)> __System_Threading_Tasks_Task_$$c__DisplayClass178_0SizeCheck;
  static_assert(sizeof(Task::$$c__DisplayClass178_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c__DisplayClass178_0::$ExecuteSelfReplicating$b__0
// Il2CppName: <ExecuteSelfReplicating>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::$$c__DisplayClass178_0::*)(::Il2CppObject*)>(&System::Threading::Tasks::Task::$$c__DisplayClass178_0::$ExecuteSelfReplicating$b__0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c__DisplayClass178_0*), "<ExecuteSelfReplicating>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c__DisplayClass178_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!