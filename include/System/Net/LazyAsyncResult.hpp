// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: LazyAsyncResult
  class LazyAsyncResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::LazyAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::LazyAsyncResult*, "System.Net", "LazyAsyncResult");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.LazyAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LazyAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
    public:
    // Nested type: ::System::Net::LazyAsyncResult::ThreadContext
    class ThreadContext;
    public:
    // private System.Object m_AsyncObject
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* m_AsyncObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object m_AsyncState
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_AsyncState;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.AsyncCallback m_AsyncCallback
    // Size: 0x8
    // Offset: 0x20
    ::System::AsyncCallback* m_AsyncCallback;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    // private System.Object m_Result
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_Result;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 m_IntCompleted
    // Size: 0x4
    // Offset: 0x30
    int m_IntCompleted;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_UserEvent
    // Size: 0x1
    // Offset: 0x34
    bool m_UserEvent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UserEvent and: m_Event
    char __padding5[0x3] = {};
    // private System.Object m_Event
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* m_Event;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Get static field: static private System.Net.LazyAsyncResult/ThreadContext t_ThreadContext
    static ::System::Net::LazyAsyncResult::ThreadContext* _get_t_ThreadContext();
    // Set static field: static private System.Net.LazyAsyncResult/ThreadContext t_ThreadContext
    static void _set_t_ThreadContext(::System::Net::LazyAsyncResult::ThreadContext* value);
    // Get instance field reference: private System.Object m_AsyncObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_AsyncObject();
    // Get instance field reference: private System.Object m_AsyncState
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_AsyncState();
    // Get instance field reference: private System.AsyncCallback m_AsyncCallback
    [[deprecated("Use field access instead!")]] ::System::AsyncCallback*& dyn_m_AsyncCallback();
    // Get instance field reference: private System.Object m_Result
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_Result();
    // Get instance field reference: private System.Int32 m_IntCompleted
    [[deprecated("Use field access instead!")]] int& dyn_m_IntCompleted();
    // Get instance field reference: private System.Boolean m_UserEvent
    [[deprecated("Use field access instead!")]] bool& dyn_m_UserEvent();
    // Get instance field reference: private System.Object m_Event
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_Event();
    // static private System.Net.LazyAsyncResult/ThreadContext get_CurrentThreadContext()
    // Offset: 0x1621CCC
    static ::System::Net::LazyAsyncResult::ThreadContext* get_CurrentThreadContext();
    // System.Void .ctor(System.Object myObject, System.Object myState, System.AsyncCallback myCallBack)
    // Offset: 0x1621D5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyAsyncResult* New_ctor(::Il2CppObject* myObject, ::Il2CppObject* myState, ::System::AsyncCallback* myCallBack) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::LazyAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyAsyncResult*, creationType>(myObject, myState, myCallBack)));
    }
    // System.Object get_AsyncObject()
    // Offset: 0x1621DFC
    ::Il2CppObject* get_AsyncObject();
    // public System.Object get_AsyncState()
    // Offset: 0x1621E04
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1621E0C
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // private System.Boolean LazilyCreateEvent(out System.Threading.ManualResetEvent waitHandle)
    // Offset: 0x1621F00
    bool LazilyCreateEvent(ByRef<::System::Threading::ManualResetEvent*> waitHandle);
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1622178
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x16221AC
    bool get_IsCompleted();
    // System.Boolean get_InternalPeekCompleted()
    // Offset: 0x1622168
    bool get_InternalPeekCompleted();
    // protected System.Void ProtectedInvokeCallback(System.Object result, System.IntPtr userToken)
    // Offset: 0x16221E0
    void ProtectedInvokeCallback(::Il2CppObject* result, ::System::IntPtr userToken);
    // System.Void InvokeCallback(System.Object result)
    // Offset: 0x16223F8
    void InvokeCallback(::Il2CppObject* result);
    // protected System.Void Complete(System.IntPtr userToken)
    // Offset: 0x1622450
    void Complete(::System::IntPtr userToken);
    // private System.Void WorkerThreadComplete(System.Object state)
    // Offset: 0x16225F8
    void WorkerThreadComplete(::Il2CppObject* state);
    // protected System.Void Cleanup()
    // Offset: 0x1622698
    void Cleanup();
    // System.Object InternalWaitForCompletion()
    // Offset: 0x162269C
    ::Il2CppObject* InternalWaitForCompletion();
    // private System.Object WaitForCompletion(System.Boolean snap)
    // Offset: 0x16226A4
    ::Il2CppObject* WaitForCompletion(bool snap);
  }; // System.Net.LazyAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(LazyAsyncResult), 56 + sizeof(::Il2CppObject*)> __System_Net_LazyAsyncResultSizeCheck;
  static_assert(sizeof(LazyAsyncResult) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_CurrentThreadContext
// Il2CppName: get_CurrentThreadContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::LazyAsyncResult::ThreadContext* (*)()>(&System::Net::LazyAsyncResult::get_CurrentThreadContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_CurrentThreadContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_AsyncObject
// Il2CppName: get_AsyncObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::get_AsyncObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_AsyncObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::LazilyCreateEvent
// Il2CppName: LazilyCreateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::LazyAsyncResult::*)(ByRef<::System::Threading::ManualResetEvent*>)>(&System::Net::LazyAsyncResult::LazilyCreateEvent)> {
  static const MethodInfo* get() {
    static auto* waitHandle = &::il2cpp_utils::GetClassFromName("System.Threading", "ManualResetEvent")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "LazilyCreateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitHandle});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::get_InternalPeekCompleted
// Il2CppName: get_InternalPeekCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::get_InternalPeekCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "get_InternalPeekCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::ProtectedInvokeCallback
// Il2CppName: ProtectedInvokeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::LazyAsyncResult::*)(::Il2CppObject*, ::System::IntPtr)>(&System::Net::LazyAsyncResult::ProtectedInvokeCallback)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* userToken = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "ProtectedInvokeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, userToken});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::InvokeCallback
// Il2CppName: InvokeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::LazyAsyncResult::*)(::Il2CppObject*)>(&System::Net::LazyAsyncResult::InvokeCallback)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "InvokeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::LazyAsyncResult::*)(::System::IntPtr)>(&System::Net::LazyAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* userToken = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userToken});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::WorkerThreadComplete
// Il2CppName: WorkerThreadComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::LazyAsyncResult::*)(::Il2CppObject*)>(&System::Net::LazyAsyncResult::WorkerThreadComplete)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "WorkerThreadComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::InternalWaitForCompletion
// Il2CppName: InternalWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::LazyAsyncResult::*)()>(&System::Net::LazyAsyncResult::InternalWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "InternalWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::WaitForCompletion
// Il2CppName: WaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::LazyAsyncResult::*)(bool)>(&System::Net::LazyAsyncResult::WaitForCompletion)> {
  static const MethodInfo* get() {
    static auto* snap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::LazyAsyncResult*), "WaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snap});
  }
};
