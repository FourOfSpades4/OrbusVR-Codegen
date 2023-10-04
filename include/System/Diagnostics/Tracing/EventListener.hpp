// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
  // Forward declaring type: WeakReference
  class WeakReference;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSourceCreatedEventArgs
  class EventSourceCreatedEventArgs;
  // Forward declaring type: EventWrittenEventArgs
  class EventWrittenEventArgs;
  // Forward declaring type: ActivityFilter
  class ActivityFilter;
  // Forward declaring type: EventSource
  class EventSource;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventListener
  class EventListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventListener*, "System.Diagnostics.Tracing", "EventListener");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventListener
  // [TokenAttribute] Offset: FFFFFFFF
  class EventListener : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA603D8
    // private System.EventHandler`1<System.Diagnostics.Tracing.EventSourceCreatedEventArgs> _EventSourceCreated
    // Size: 0x8
    // Offset: 0x10
    ::System::EventHandler_1<::System::Diagnostics::Tracing::EventSourceCreatedEventArgs*>* EventSourceCreated;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::System::Diagnostics::Tracing::EventSourceCreatedEventArgs*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA603E8
    // private System.EventHandler`1<System.Diagnostics.Tracing.EventWrittenEventArgs> EventWritten
    // Size: 0x8
    // Offset: 0x18
    ::System::EventHandler_1<::System::Diagnostics::Tracing::EventWrittenEventArgs*>* EventWritten;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::System::Diagnostics::Tracing::EventWrittenEventArgs*>*) == 0x8);
    // System.Diagnostics.Tracing.EventListener m_Next
    // Size: 0x8
    // Offset: 0x20
    ::System::Diagnostics::Tracing::EventListener* m_Next;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventListener*) == 0x8);
    // System.Diagnostics.Tracing.ActivityFilter m_activityFilter
    // Size: 0x8
    // Offset: 0x28
    ::System::Diagnostics::Tracing::ActivityFilter* m_activityFilter;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::ActivityFilter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private readonly System.Object s_EventSourceCreatedLock
    static ::Il2CppObject* _get_s_EventSourceCreatedLock();
    // Set static field: static private readonly System.Object s_EventSourceCreatedLock
    static void _set_s_EventSourceCreatedLock(::Il2CppObject* value);
    // Get static field: static System.Diagnostics.Tracing.EventListener s_Listeners
    static ::System::Diagnostics::Tracing::EventListener* _get_s_Listeners();
    // Set static field: static System.Diagnostics.Tracing.EventListener s_Listeners
    static void _set_s_Listeners(::System::Diagnostics::Tracing::EventListener* value);
    // Get static field: static System.Collections.Generic.List`1<System.WeakReference> s_EventSources
    static ::System::Collections::Generic::List_1<::System::WeakReference*>* _get_s_EventSources();
    // Set static field: static System.Collections.Generic.List`1<System.WeakReference> s_EventSources
    static void _set_s_EventSources(::System::Collections::Generic::List_1<::System::WeakReference*>* value);
    // Get static field: static private System.Boolean s_CreatingListener
    static bool _get_s_CreatingListener();
    // Set static field: static private System.Boolean s_CreatingListener
    static void _set_s_CreatingListener(bool value);
    // Get static field: static private System.Boolean s_EventSourceShutdownRegistered
    static bool _get_s_EventSourceShutdownRegistered();
    // Set static field: static private System.Boolean s_EventSourceShutdownRegistered
    static void _set_s_EventSourceShutdownRegistered(bool value);
    // Get instance field reference: private System.EventHandler`1<System.Diagnostics.Tracing.EventSourceCreatedEventArgs> _EventSourceCreated
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::System::Diagnostics::Tracing::EventSourceCreatedEventArgs*>*& dyn__EventSourceCreated();
    // Get instance field reference: private System.EventHandler`1<System.Diagnostics.Tracing.EventWrittenEventArgs> EventWritten
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::System::Diagnostics::Tracing::EventWrittenEventArgs*>*& dyn_EventWritten();
    // Get instance field reference: System.Diagnostics.Tracing.EventListener m_Next
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventListener*& dyn_m_Next();
    // Get instance field reference: System.Diagnostics.Tracing.ActivityFilter m_activityFilter
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::ActivityFilter*& dyn_m_activityFilter();
    // public System.Void Dispose()
    // Offset: 0x15ECC4C
    void Dispose();
    // protected internal System.Void OnEventSourceCreated(System.Diagnostics.Tracing.EventSource eventSource)
    // Offset: 0x15ED154
    void OnEventSourceCreated(::System::Diagnostics::Tracing::EventSource* eventSource);
    // protected internal System.Void OnEventWritten(System.Diagnostics.Tracing.EventWrittenEventArgs eventData)
    // Offset: 0x15ED208
    void OnEventWritten(::System::Diagnostics::Tracing::EventWrittenEventArgs* eventData);
    // static System.Void AddEventSource(System.Diagnostics.Tracing.EventSource newEventSource)
    // Offset: 0x15ED280
    static void AddEventSource(::System::Diagnostics::Tracing::EventSource* newEventSource);
    // static private System.Void DisposeOnShutdown(System.Object sender, System.EventArgs e)
    // Offset: 0x15ED8AC
    static void DisposeOnShutdown(::Il2CppObject* sender, ::System::EventArgs* e);
    // static private System.Void RemoveReferencesToListenerInEventSources(System.Diagnostics.Tracing.EventListener listenerToRemove)
    // Offset: 0x15ECF24
    static void RemoveReferencesToListenerInEventSources(::System::Diagnostics::Tracing::EventListener* listenerToRemove);
    // static System.Object get_EventListenersLock()
    // Offset: 0x15ECE40
    static ::Il2CppObject* get_EventListenersLock();
    // static private System.Void .cctor()
    // Offset: 0x15EDB44
    static void _cctor();
  }; // System.Diagnostics.Tracing.EventListener
  #pragma pack(pop)
  static check_size<sizeof(EventListener), 40 + sizeof(::System::Diagnostics::Tracing::ActivityFilter*)> __System_Diagnostics_Tracing_EventListenerSizeCheck;
  static_assert(sizeof(EventListener) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventListener::*)()>(&System::Diagnostics::Tracing::EventListener::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::OnEventSourceCreated
// Il2CppName: OnEventSourceCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventListener::*)(::System::Diagnostics::Tracing::EventSource*)>(&System::Diagnostics::Tracing::EventListener::OnEventSourceCreated)> {
  static const MethodInfo* get() {
    static auto* eventSource = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "OnEventSourceCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventSource});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::OnEventWritten
// Il2CppName: OnEventWritten
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventListener::*)(::System::Diagnostics::Tracing::EventWrittenEventArgs*)>(&System::Diagnostics::Tracing::EventListener::OnEventWritten)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventWrittenEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "OnEventWritten", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::AddEventSource
// Il2CppName: AddEventSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::Tracing::EventSource*)>(&System::Diagnostics::Tracing::EventListener::AddEventSource)> {
  static const MethodInfo* get() {
    static auto* newEventSource = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "AddEventSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newEventSource});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::DisposeOnShutdown
// Il2CppName: DisposeOnShutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::System::EventArgs*)>(&System::Diagnostics::Tracing::EventListener::DisposeOnShutdown)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "DisposeOnShutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::RemoveReferencesToListenerInEventSources
// Il2CppName: RemoveReferencesToListenerInEventSources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::Tracing::EventListener*)>(&System::Diagnostics::Tracing::EventListener::RemoveReferencesToListenerInEventSources)> {
  static const MethodInfo* get() {
    static auto* listenerToRemove = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "RemoveReferencesToListenerInEventSources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listenerToRemove});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::get_EventListenersLock
// Il2CppName: get_EventListenersLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Diagnostics::Tracing::EventListener::get_EventListenersLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), "get_EventListenersLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventListener::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Tracing::EventListener::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventListener*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};