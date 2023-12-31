// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RunLoop
  class RunLoop;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RunLoop);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunLoop*, "", "RunLoop");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RunLoop
  // [TokenAttribute] Offset: FFFFFFFF
  class RunLoop : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16021B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunLoop* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RunLoop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunLoop*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Boolean didWork)
    // Offset: 0x16016F0
    void Invoke(ByRef<bool> didWork);
    // public System.IAsyncResult BeginInvoke(ref System.Boolean didWork, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16021C8
    ::System::IAsyncResult* BeginInvoke(ByRef<bool> didWork, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Boolean didWork, System.IAsyncResult result)
    // Offset: 0x160225C
    void EndInvoke(ByRef<bool> didWork, ::System::IAsyncResult* result);
  }; // RunLoop
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RunLoop::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RunLoop::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RunLoop::*)(ByRef<bool>)>(&GlobalNamespace::RunLoop::Invoke)> {
  static const MethodInfo* get() {
    static auto* didWork = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RunLoop*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{didWork});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RunLoop::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::RunLoop::*)(ByRef<bool>, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::RunLoop::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* didWork = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RunLoop*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{didWork, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RunLoop::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RunLoop::*)(ByRef<bool>, ::System::IAsyncResult*)>(&GlobalNamespace::RunLoop::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* didWork = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RunLoop*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{didWork, result});
  }
};
