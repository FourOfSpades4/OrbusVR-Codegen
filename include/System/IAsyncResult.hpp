// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IAsyncResult*, "System", "IAsyncResult");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.IAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A57724
  class IAsyncResult {
    public:
    // public System.Boolean get_IsCompleted()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsCompleted();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Object get_AsyncState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_AsyncState();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CompletedSynchronously();
  }; // System.IAsyncResult
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IAsyncResult::*)()>(&System::IAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::IAsyncResult::*)()>(&System::IAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IAsyncResult::*)()>(&System::IAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IAsyncResult::*)()>(&System::IAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
