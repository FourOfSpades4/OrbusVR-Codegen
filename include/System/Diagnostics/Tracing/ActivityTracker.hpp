// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventActivityOptions
  struct EventActivityOptions;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: AsyncLocal`1<T>
  template<typename T>
  class AsyncLocal_1;
  // Forward declaring type: AsyncLocalValueChangedArgs`1<T>
  template<typename T>
  struct AsyncLocalValueChangedArgs_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ActivityTracker
  class ActivityTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::ActivityTracker);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::ActivityTracker*, "System.Diagnostics.Tracing", "ActivityTracker");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ActivityTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class ActivityTracker : public ::Il2CppObject {
    public:
    // Nested type: ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo
    class ActivityInfo;
    public:
    // private System.Threading.AsyncLocal`1<System.Diagnostics.Tracing.ActivityTracker/ActivityInfo> m_current
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::AsyncLocal_1<::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*>* m_current;
    // Field size check
    static_assert(sizeof(::System::Threading::AsyncLocal_1<::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*>*) == 0x8);
    // private System.Boolean m_checkedForEnable
    // Size: 0x1
    // Offset: 0x18
    bool m_checkedForEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Diagnostics.Tracing.ActivityTracker s_activityTrackerInstance
    static ::System::Diagnostics::Tracing::ActivityTracker* _get_s_activityTrackerInstance();
    // Set static field: static private System.Diagnostics.Tracing.ActivityTracker s_activityTrackerInstance
    static void _set_s_activityTrackerInstance(::System::Diagnostics::Tracing::ActivityTracker* value);
    // Get static field: static private System.Int64 m_nextId
    static int64_t _get_m_nextId();
    // Set static field: static private System.Int64 m_nextId
    static void _set_m_nextId(int64_t value);
    // Get instance field reference: private System.Threading.AsyncLocal`1<System.Diagnostics.Tracing.ActivityTracker/ActivityInfo> m_current
    [[deprecated("Use field access instead!")]] ::System::Threading::AsyncLocal_1<::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*>*& dyn_m_current();
    // Get instance field reference: private System.Boolean m_checkedForEnable
    [[deprecated("Use field access instead!")]] bool& dyn_m_checkedForEnable();
    // public System.Void OnStart(System.String providerName, System.String activityName, System.Int32 task, ref System.Guid activityId, ref System.Guid relatedActivityId, System.Diagnostics.Tracing.EventActivityOptions options)
    // Offset: 0x15E8F88
    void OnStart(::StringW providerName, ::StringW activityName, int task, ByRef<::System::Guid> activityId, ByRef<::System::Guid> relatedActivityId, ::System::Diagnostics::Tracing::EventActivityOptions options);
    // public System.Void OnStop(System.String providerName, System.String activityName, System.Int32 task, ref System.Guid activityId)
    // Offset: 0x15E96E4
    void OnStop(::StringW providerName, ::StringW activityName, int task, ByRef<::System::Guid> activityId);
    // public System.Void Enable()
    // Offset: 0x15E93D0
    void Enable();
    // static public System.Diagnostics.Tracing.ActivityTracker get_Instance()
    // Offset: 0x15E9B10
    static ::System::Diagnostics::Tracing::ActivityTracker* get_Instance();
    // private System.Diagnostics.Tracing.ActivityTracker/ActivityInfo FindActiveActivity(System.String name, System.Diagnostics.Tracing.ActivityTracker/ActivityInfo startLocation)
    // Offset: 0x15E9698
    ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* FindActiveActivity(::StringW name, ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* startLocation);
    // private System.String NormalizeActivityName(System.String providerName, System.String activityName, System.Int32 task)
    // Offset: 0x15E9480
    ::StringW NormalizeActivityName(::StringW providerName, ::StringW activityName, int task);
    // private System.Void ActivityChanging(System.Threading.AsyncLocalValueChangedArgs`1<System.Diagnostics.Tracing.ActivityTracker/ActivityInfo> args)
    // Offset: 0x15E9B78
    void ActivityChanging(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*> args);
    // static private System.Void .cctor()
    // Offset: 0x15E9ECC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x15E9EC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivityTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ActivityTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivityTracker*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.ActivityTracker
  #pragma pack(pop)
  static check_size<sizeof(ActivityTracker), 24 + sizeof(bool)> __System_Diagnostics_Tracing_ActivityTrackerSizeCheck;
  static_assert(sizeof(ActivityTracker) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::OnStart
// Il2CppName: OnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityTracker::*)(::StringW, ::StringW, int, ByRef<::System::Guid>, ByRef<::System::Guid>, ::System::Diagnostics::Tracing::EventActivityOptions)>(&System::Diagnostics::Tracing::ActivityTracker::OnStart)> {
  static const MethodInfo* get() {
    static auto* providerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* activityName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* task = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* activityId = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* relatedActivityId = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventActivityOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "OnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerName, activityName, task, activityId, relatedActivityId, options});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::OnStop
// Il2CppName: OnStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityTracker::*)(::StringW, ::StringW, int, ByRef<::System::Guid>)>(&System::Diagnostics::Tracing::ActivityTracker::OnStop)> {
  static const MethodInfo* get() {
    static auto* providerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* activityName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* task = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* activityId = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "OnStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerName, activityName, task, activityId});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityTracker::*)()>(&System::Diagnostics::Tracing::ActivityTracker::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::ActivityTracker* (*)()>(&System::Diagnostics::Tracing::ActivityTracker::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::FindActiveActivity
// Il2CppName: FindActiveActivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* (System::Diagnostics::Tracing::ActivityTracker::*)(::StringW, ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*)>(&System::Diagnostics::Tracing::ActivityTracker::FindActiveActivity)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startLocation = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "ActivityTracker/ActivityInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "FindActiveActivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, startLocation});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::NormalizeActivityName
// Il2CppName: NormalizeActivityName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ActivityTracker::*)(::StringW, ::StringW, int)>(&System::Diagnostics::Tracing::ActivityTracker::NormalizeActivityName)> {
  static const MethodInfo* get() {
    static auto* providerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* activityName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* task = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "NormalizeActivityName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerName, activityName, task});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityChanging
// Il2CppName: ActivityChanging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityTracker::*)(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*>)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityChanging)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading", "AsyncLocalValueChangedArgs`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "ActivityTracker/ActivityInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), "ActivityChanging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Tracing::ActivityTracker::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
