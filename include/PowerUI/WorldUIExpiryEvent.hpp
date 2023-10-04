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
  // Forward declaring type: WorldUI
  class WorldUI;
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
  // Forward declaring type: WorldUIExpiryEvent
  class WorldUIExpiryEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::WorldUIExpiryEvent);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::WorldUIExpiryEvent*, "PowerUI", "WorldUIExpiryEvent");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.WorldUIExpiryEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WorldUIExpiryEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE1D114
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorldUIExpiryEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::WorldUIExpiryEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorldUIExpiryEvent*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(PowerUI.WorldUI ui)
    // Offset: 0xE1C998
    bool Invoke(::PowerUI::WorldUI* ui);
    // public System.IAsyncResult BeginInvoke(PowerUI.WorldUI ui, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE1D124
    ::System::IAsyncResult* BeginInvoke(::PowerUI::WorldUI* ui, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xE1D148
    bool EndInvoke(::System::IAsyncResult* result);
  }; // PowerUI.WorldUIExpiryEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::WorldUIExpiryEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::WorldUIExpiryEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::WorldUIExpiryEvent::*)(::PowerUI::WorldUI*)>(&PowerUI::WorldUIExpiryEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* ui = &::il2cpp_utils::GetClassFromName("PowerUI", "WorldUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUIExpiryEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ui});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUIExpiryEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (PowerUI::WorldUIExpiryEvent::*)(::PowerUI::WorldUI*, ::System::AsyncCallback*, ::Il2CppObject*)>(&PowerUI::WorldUIExpiryEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ui = &::il2cpp_utils::GetClassFromName("PowerUI", "WorldUI")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUIExpiryEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ui, callback, object});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUIExpiryEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::WorldUIExpiryEvent::*)(::System::IAsyncResult*)>(&PowerUI::WorldUIExpiryEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUIExpiryEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};