// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Xefier.Threading.Tasks.TaskBase
#include "Xefier/Threading/Tasks/TaskBase.hpp"
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
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: Xefier::Threading::Tasks
namespace Xefier::Threading::Tasks {
  // Forward declaring type: ITask
  class ITask;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0*, "Xefier.Threading.Tasks", "TaskBase/<>c__DisplayClass26_0");
// Type namespace: Xefier.Threading.Tasks
namespace Xefier::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Xefier.Threading.Tasks.TaskBase/<>c__DisplayClass26_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AB277C
  class TaskBase::$$c__DisplayClass26_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<Xefier.Threading.Tasks.ITask> action
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::Xefier::Threading::Tasks::ITask*>* action;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Xefier::Threading::Tasks::ITask*>*) == 0x8);
    // public Xefier.Threading.Tasks.TaskBase <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Xefier::Threading::Tasks::TaskBase* $$4__this;
    // Field size check
    static_assert(sizeof(::Xefier::Threading::Tasks::TaskBase*) == 0x8);
    public:
    // Get instance field reference: public System.Action`1<Xefier.Threading.Tasks.ITask> action
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Xefier::Threading::Tasks::ITask*>*& dyn_action();
    // Get instance field reference: public Xefier.Threading.Tasks.TaskBase <>4__this
    [[deprecated("Use field access instead!")]] ::Xefier::Threading::Tasks::TaskBase*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x28A4438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskBase::$$c__DisplayClass26_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskBase::$$c__DisplayClass26_0*, creationType>()));
    }
    // System.Void <ContinueWith>b__0(System.Object s, System.EventArgs e)
    // Offset: 0x28A4440
    void $ContinueWith$b__0(::Il2CppObject* s, ::System::EventArgs* e);
  }; // Xefier.Threading.Tasks.TaskBase/<>c__DisplayClass26_0
  #pragma pack(pop)
  static check_size<sizeof(TaskBase::$$c__DisplayClass26_0), 24 + sizeof(::Xefier::Threading::Tasks::TaskBase*)> __Xefier_Threading_Tasks_TaskBase_$$c__DisplayClass26_0SizeCheck;
  static_assert(sizeof(TaskBase::$$c__DisplayClass26_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0::$ContinueWith$b__0
// Il2CppName: <ContinueWith>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0::*)(::Il2CppObject*, ::System::EventArgs*)>(&Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0::$ContinueWith$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::TaskBase::$$c__DisplayClass26_0*), "<ContinueWith>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, e});
  }
};
