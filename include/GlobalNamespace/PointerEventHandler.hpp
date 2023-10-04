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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PointerEventArgs
  struct PointerEventArgs;
}
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
  // Forward declaring type: PointerEventHandler
  class PointerEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PointerEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PointerEventHandler*, "", "PointerEventHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PointerEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEB50CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PointerEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, PointerEventArgs e)
    // Offset: 0xEB50DC
    void Invoke(::Il2CppObject* sender, ::GlobalNamespace::PointerEventArgs e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, PointerEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEB5B3C
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::GlobalNamespace::PointerEventArgs e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xEB5BD8
    void EndInvoke(::System::IAsyncResult* result);
  }; // PointerEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PointerEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PointerEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PointerEventHandler::*)(::Il2CppObject*, ::GlobalNamespace::PointerEventArgs)>(&GlobalNamespace::PointerEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("", "PointerEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PointerEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PointerEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::PointerEventHandler::*)(::Il2CppObject*, ::GlobalNamespace::PointerEventArgs, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PointerEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("", "PointerEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PointerEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PointerEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PointerEventHandler::*)(::System::IAsyncResult*)>(&GlobalNamespace::PointerEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PointerEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};