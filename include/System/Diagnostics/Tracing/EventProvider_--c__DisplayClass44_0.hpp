// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.EventProvider
#include "System/Diagnostics/Tracing/EventProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0*, "System.Diagnostics.Tracing", "EventProvider/<>c__DisplayClass44_0");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventProvider/<>c__DisplayClass44_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5E534
  class EventProvider::$$c__DisplayClass44_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> liveSessionList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider::SessionInfo>* liveSessionList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider::SessionInfo>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider::SessionInfo>*
    constexpr operator ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider::SessionInfo>*() const noexcept {
      return liveSessionList;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> liveSessionList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider::SessionInfo>*& dyn_liveSessionList();
    // System.Void <GetSessions>b__0(System.Int32 etwSessionId, System.Int64 matchAllKeywords)
    // Offset: 0x15F1C9C
    void $GetSessions$b__0(int etwSessionId, int64_t matchAllKeywords);
    // public System.Void .ctor()
    // Offset: 0x15EFB6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventProvider::$$c__DisplayClass44_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventProvider::$$c__DisplayClass44_0*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.EventProvider/<>c__DisplayClass44_0
  #pragma pack(pop)
  static check_size<sizeof(EventProvider::$$c__DisplayClass44_0), 16 + sizeof(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider::SessionInfo>*)> __System_Diagnostics_Tracing_EventProvider_$$c__DisplayClass44_0SizeCheck;
  static_assert(sizeof(EventProvider::$$c__DisplayClass44_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0::$GetSessions$b__0
// Il2CppName: <GetSessions>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0::*)(int, int64_t)>(&System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0::$GetSessions$b__0)> {
  static const MethodInfo* get() {
    static auto* etwSessionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* matchAllKeywords = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0*), "<GetSessions>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{etwSessionId, matchAllKeywords});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
