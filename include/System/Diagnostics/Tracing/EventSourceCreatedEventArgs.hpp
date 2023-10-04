// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSourceCreatedEventArgs
  class EventSourceCreatedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSourceCreatedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceCreatedEventArgs*, "System.Diagnostics.Tracing", "EventSourceCreatedEventArgs");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceCreatedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class EventSourceCreatedEventArgs : public ::System::EventArgs {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA60418
    // private System.Diagnostics.Tracing.EventSource <EventSource>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Diagnostics::Tracing::EventSource* EventSource;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventSource*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Diagnostics::Tracing::EventSource*
    constexpr operator ::System::Diagnostics::Tracing::EventSource*() const noexcept {
      return EventSource;
    }
    // Get instance field reference: private System.Diagnostics.Tracing.EventSource <EventSource>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventSource*& dyn_$EventSource$k__BackingField();
    // System.Void set_EventSource(System.Diagnostics.Tracing.EventSource value)
    // Offset: 0x11B81A8
    void set_EventSource(::System::Diagnostics::Tracing::EventSource* value);
    // public System.Void .ctor()
    // Offset: 0x11B81B0
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSourceCreatedEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSourceCreatedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSourceCreatedEventArgs*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.EventSourceCreatedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(EventSourceCreatedEventArgs), 16 + sizeof(::System::Diagnostics::Tracing::EventSource*)> __System_Diagnostics_Tracing_EventSourceCreatedEventArgsSizeCheck;
  static_assert(sizeof(EventSourceCreatedEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceCreatedEventArgs::set_EventSource
// Il2CppName: set_EventSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSourceCreatedEventArgs::*)(::System::Diagnostics::Tracing::EventSource*)>(&System::Diagnostics::Tracing::EventSourceCreatedEventArgs::set_EventSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceCreatedEventArgs*), "set_EventSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceCreatedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
