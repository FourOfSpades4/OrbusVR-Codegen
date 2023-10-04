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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: OnLogEvent
  class OnLogEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::OnLogEvent);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::OnLogEvent*, "InfiniText", "OnLogEvent");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.OnLogEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class OnLogEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x105568C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnLogEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::OnLogEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnLogEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String text)
    // Offset: 0x105569C
    void Invoke(::StringW text);
    // public System.IAsyncResult BeginInvoke(System.String text, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1055DD0
    ::System::IAsyncResult* BeginInvoke(::StringW text, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1055DF4
    void EndInvoke(::System::IAsyncResult* result);
  }; // InfiniText.OnLogEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::OnLogEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: InfiniText::OnLogEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::OnLogEvent::*)(::StringW)>(&InfiniText::OnLogEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::OnLogEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: InfiniText::OnLogEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (InfiniText::OnLogEvent::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&InfiniText::OnLogEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::OnLogEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, callback, object});
  }
};
// Writing MetadataGetter for method: InfiniText::OnLogEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::OnLogEvent::*)(::System::IAsyncResult*)>(&InfiniText::OnLogEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::OnLogEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};