// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.INotifyCompletion
#include "System/Runtime/CompilerServices/INotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ICriticalNotifyCompletion
  class ICriticalNotifyCompletion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::ICriticalNotifyCompletion);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ICriticalNotifyCompletion*, "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
  // [TokenAttribute] Offset: FFFFFFFF
  class ICriticalNotifyCompletion/*, public ::System::Runtime::CompilerServices::INotifyCompletion*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::INotifyCompletion
    operator ::System::Runtime::CompilerServices::INotifyCompletion() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(this);
    }
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnsafeOnCompleted(::System::Action* continuation);
  }; // System.Runtime.CompilerServices.ICriticalNotifyCompletion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted
// Il2CppName: UnsafeOnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::ICriticalNotifyCompletion::*)(::System::Action*)>(&System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::ICriticalNotifyCompletion*), "UnsafeOnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};