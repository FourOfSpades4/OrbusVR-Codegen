// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionState
  struct AnalyticsSessionState;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionInfo
  class AnalyticsSessionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionInfo*, "UnityEngine.Analytics", "AnalyticsSessionInfo");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: AA75A0
  // [NativeHeaderAttribute] Offset: AA75A0
  // [RequiredByNativeCodeAttribute] Offset: AA75A0
  class AnalyticsSessionInfo : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged
    class SessionStateChanged;
    // [CompilerGeneratedAttribute] Offset: 0xAA76E0
    // [DebuggerBrowsableAttribute] Offset: 0xAA76E0
    // Get static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged sessionStateChanged
    static ::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* _get_sessionStateChanged();
    // Set static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged sessionStateChanged
    static void _set_sessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* value);
    // static System.Void CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState sessionState, System.Int64 sessionId, System.Int64 sessionElapsedTime, System.Boolean sessionChanged)
    // Offset: 0x28A553C
    static void CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);
    // static public System.Int64 get_sessionId()
    // Offset: 0x28A5AA4
    static int64_t get_sessionId();
    // static public System.String get_userId()
    // Offset: 0x28A5AFC
    static ::StringW get_userId();
  }; // UnityEngine.Analytics.AnalyticsSessionInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged
// Il2CppName: CallSessionStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged)> {
  static const MethodInfo* get() {
    static auto* sessionState = &::il2cpp_utils::GetClassFromName("UnityEngine.Analytics", "AnalyticsSessionState")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionElapsedTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "CallSessionStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionState, sessionId, sessionElapsedTime, sessionChanged});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionId
// Il2CppName: get_sessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "get_sessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::Analytics::AnalyticsSessionInfo::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
