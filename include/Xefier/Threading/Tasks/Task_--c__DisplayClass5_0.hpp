// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Xefier.Threading.Tasks.Task
#include "Xefier/Threading/Tasks/Task.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Xefier::Threading::Tasks
namespace Xefier::Threading::Tasks {
  // Forward declaring type: ITask
  class ITask;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0*, "Xefier.Threading.Tasks", "Task/<>c__DisplayClass5_0");
// Type namespace: Xefier.Threading.Tasks
namespace Xefier::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Xefier.Threading.Tasks.Task/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC05CC
  class Task::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.IEnumerable`1<Xefier.Threading.Tasks.ITask> tasks
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IEnumerable_1<::Xefier::Threading::Tasks::ITask*>* tasks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::Xefier::Threading::Tasks::ITask*>*) == 0x8);
    // public Xefier.Threading.Tasks.ITask[] tasksCopy
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Xefier::Threading::Tasks::ITask*> tasksCopy;
    // Field size check
    static_assert(sizeof(::ArrayW<::Xefier::Threading::Tasks::ITask*>) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<Xefier.Threading.Tasks.ITask> tasks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::Xefier::Threading::Tasks::ITask*>*& dyn_tasks();
    // Get instance field reference: public Xefier.Threading.Tasks.ITask[] tasksCopy
    [[deprecated("Use field access instead!")]] ::ArrayW<::Xefier::Threading::Tasks::ITask*>& dyn_tasksCopy();
    // public System.Void .ctor()
    // Offset: 0x28A2AD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::$$c__DisplayClass5_0*, creationType>()));
    }
    // Xefier.Threading.Tasks.ITask <WhenAny>b__0()
    // Offset: 0x28A34CC
    ::Xefier::Threading::Tasks::ITask* $WhenAny$b__0();
  }; // Xefier.Threading.Tasks.Task/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(Task::$$c__DisplayClass5_0), 24 + sizeof(::ArrayW<::Xefier::Threading::Tasks::ITask*>)> __Xefier_Threading_Tasks_Task_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(Task::$$c__DisplayClass5_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0::$WhenAny$b__0
// Il2CppName: <WhenAny>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Xefier::Threading::Tasks::ITask* (Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0::*)()>(&Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0::$WhenAny$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Xefier::Threading::Tasks::Task::$$c__DisplayClass5_0*), "<WhenAny>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
