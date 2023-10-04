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
  // Forward declaring type: specificationCallback
  class specificationCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::specificationCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::specificationCallback*, "", "specificationCallback");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: specificationCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class specificationCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2836494
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static specificationCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::specificationCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<specificationCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr specification)
    // Offset: 0x28364A4
    void Invoke(::System::IntPtr specification);
    // public System.IAsyncResult BeginInvoke(System.IntPtr specification, System.AsyncCallback callback, System.Object object)
    // Offset: 0x28368E4
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr specification, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2836970
    void EndInvoke(::System::IAsyncResult* result);
  }; // specificationCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::specificationCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::specificationCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::specificationCallback::*)(::System::IntPtr)>(&GlobalNamespace::specificationCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* specification = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::specificationCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{specification});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::specificationCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::specificationCallback::*)(::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::specificationCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* specification = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::specificationCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{specification, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::specificationCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::specificationCallback::*)(::System::IAsyncResult*)>(&GlobalNamespace::specificationCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::specificationCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
