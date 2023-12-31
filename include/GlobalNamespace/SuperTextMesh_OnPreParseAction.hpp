// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SuperTextMesh
#include "GlobalNamespace/SuperTextMesh.hpp"
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
  // Forward declaring type: STMTextContainer
  class STMTextContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SuperTextMesh::OnPreParseAction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SuperTextMesh::OnPreParseAction*, "", "SuperTextMesh/OnPreParseAction");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: SuperTextMesh/OnPreParseAction
  // [TokenAttribute] Offset: FFFFFFFF
  class SuperTextMesh::OnPreParseAction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1038E54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SuperTextMesh::OnPreParseAction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SuperTextMesh::OnPreParseAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SuperTextMesh::OnPreParseAction*, creationType>(object, method)));
    }
    // public System.Void Invoke(STMTextContainer container)
    // Offset: 0x1038E64
    void Invoke(::GlobalNamespace::STMTextContainer* container);
    // public System.IAsyncResult BeginInvoke(STMTextContainer container, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1039598
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::STMTextContainer* container, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x10395BC
    void EndInvoke(::System::IAsyncResult* result);
  }; // SuperTextMesh/OnPreParseAction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SuperTextMesh::OnPreParseAction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SuperTextMesh::OnPreParseAction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SuperTextMesh::OnPreParseAction::*)(::GlobalNamespace::STMTextContainer*)>(&GlobalNamespace::SuperTextMesh::OnPreParseAction::Invoke)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("", "STMTextContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SuperTextMesh::OnPreParseAction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SuperTextMesh::OnPreParseAction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::SuperTextMesh::OnPreParseAction::*)(::GlobalNamespace::STMTextContainer*, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::SuperTextMesh::OnPreParseAction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("", "STMTextContainer")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SuperTextMesh::OnPreParseAction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SuperTextMesh::OnPreParseAction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SuperTextMesh::OnPreParseAction::*)(::System::IAsyncResult*)>(&GlobalNamespace::SuperTextMesh::OnPreParseAction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SuperTextMesh::OnPreParseAction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
