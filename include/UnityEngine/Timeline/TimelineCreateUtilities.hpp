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
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineCreateUtilities
  class TimelineCreateUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineCreateUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineCreateUtilities*, "UnityEngine.Timeline", "TimelineCreateUtilities");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineCreateUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineCreateUtilities : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Timeline::TimelineCreateUtilities::$GenerateUniqueActorName$c__AnonStorey0
    class $GenerateUniqueActorName$c__AnonStorey0;
    // Nested type: ::UnityEngine::Timeline::TimelineCreateUtilities::$GenerateUniqueActorName$c__AnonStorey1
    class $GenerateUniqueActorName$c__AnonStorey1;
    // static public System.String GenerateUniqueActorName(System.Collections.Generic.List`1<UnityEngine.ScriptableObject> tracks, System.String name)
    // Offset: 0x1D9C518
    static ::StringW GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* tracks, ::StringW name);
    // static public System.Void SaveAssetIntoObject(UnityEngine.Object childAsset, UnityEngine.Object masterAsset)
    // Offset: 0x1D9CB3C
    static void SaveAssetIntoObject(::UnityEngine::Object* childAsset, ::UnityEngine::Object* masterAsset);
    // static System.Boolean ValidateParentTrack(UnityEngine.Timeline.TrackAsset parent, System.Type childType)
    // Offset: 0x1D9C2A4
    static bool ValidateParentTrack(::UnityEngine::Timeline::TrackAsset* parent, ::System::Type* childType);
  }; // UnityEngine.Timeline.TimelineCreateUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::GenerateUniqueActorName
// Il2CppName: GenerateUniqueActorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*, ::StringW)>(&UnityEngine::Timeline::TimelineCreateUtilities::GenerateUniqueActorName)> {
  static const MethodInfo* get() {
    static auto* tracks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")})->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "GenerateUniqueActorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tracks, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::SaveAssetIntoObject
// Il2CppName: SaveAssetIntoObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&UnityEngine::Timeline::TimelineCreateUtilities::SaveAssetIntoObject)> {
  static const MethodInfo* get() {
    static auto* childAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* masterAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "SaveAssetIntoObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{childAsset, masterAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::ValidateParentTrack
// Il2CppName: ValidateParentTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TrackAsset*, ::System::Type*)>(&UnityEngine::Timeline::TimelineCreateUtilities::ValidateParentTrack)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* childType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "ValidateParentTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, childType});
  }
};
