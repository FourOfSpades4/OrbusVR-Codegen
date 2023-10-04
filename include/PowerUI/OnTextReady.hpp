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
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: TextPackage
  class TextPackage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: OnTextReady
  class OnTextReady;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::OnTextReady);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::OnTextReady*, "PowerUI", "OnTextReady");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.OnTextReady
  // [TokenAttribute] Offset: FFFFFFFF
  class OnTextReady : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1767848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnTextReady* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::OnTextReady::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnTextReady*, creationType>(object, method)));
    }
    // public System.Void Invoke(PowerUI.TextPackage package)
    // Offset: 0x1767858
    void Invoke(::PowerUI::TextPackage* package);
    // public System.IAsyncResult BeginInvoke(PowerUI.TextPackage package, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1767F8C
    ::System::IAsyncResult* BeginInvoke(::PowerUI::TextPackage* package, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1767FB0
    void EndInvoke(::System::IAsyncResult* result);
  }; // PowerUI.OnTextReady
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::OnTextReady::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::OnTextReady::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::OnTextReady::*)(::PowerUI::TextPackage*)>(&PowerUI::OnTextReady::Invoke)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "TextPackage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OnTextReady*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package});
  }
};
// Writing MetadataGetter for method: PowerUI::OnTextReady::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (PowerUI::OnTextReady::*)(::PowerUI::TextPackage*, ::System::AsyncCallback*, ::Il2CppObject*)>(&PowerUI::OnTextReady::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "TextPackage")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OnTextReady*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, callback, object});
  }
};
// Writing MetadataGetter for method: PowerUI::OnTextReady::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::OnTextReady::*)(::System::IAsyncResult*)>(&PowerUI::OnTextReady::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::OnTextReady*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
