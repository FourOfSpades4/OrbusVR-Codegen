// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IClipInitializer
  class IClipInitializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::IClipInitializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IClipInitializer*, "UnityEngine.Timeline", "IClipInitializer");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IClipInitializer
  // [TokenAttribute] Offset: FFFFFFFF
  class IClipInitializer {
    public:
    // public System.Void OnCreate(UnityEngine.Timeline.TimelineClip owningClip, UnityEngine.Timeline.TrackAsset owningTrack, UnityEngine.IExposedPropertyTable resolver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnCreate(::UnityEngine::Timeline::TimelineClip* owningClip, ::UnityEngine::Timeline::TrackAsset* owningTrack, ::UnityEngine::IExposedPropertyTable* resolver);
  }; // UnityEngine.Timeline.IClipInitializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IClipInitializer::OnCreate
// Il2CppName: OnCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IClipInitializer::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::IExposedPropertyTable*)>(&UnityEngine::Timeline::IClipInitializer::OnCreate)> {
  static const MethodInfo* get() {
    static auto* owningClip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    static auto* owningTrack = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* resolver = &::il2cpp_utils::GetClassFromName("UnityEngine", "IExposedPropertyTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IClipInitializer*), "OnCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owningClip, owningTrack, resolver});
  }
};
