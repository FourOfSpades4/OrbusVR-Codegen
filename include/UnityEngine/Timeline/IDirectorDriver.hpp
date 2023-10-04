// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IDirectorDriver
  class IDirectorDriver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::IDirectorDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IDirectorDriver*, "UnityEngine.Timeline", "IDirectorDriver");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IDirectorDriver
  // [TokenAttribute] Offset: FFFFFFFF
  class IDirectorDriver {
    public:
    // public System.Collections.Generic.IList`1<UnityEngine.Playables.PlayableDirector> GetDrivenDirectors(UnityEngine.IExposedPropertyTable resolver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>* GetDrivenDirectors(::UnityEngine::IExposedPropertyTable* resolver);
  }; // UnityEngine.Timeline.IDirectorDriver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IDirectorDriver::GetDrivenDirectors
// Il2CppName: GetDrivenDirectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>* (UnityEngine::Timeline::IDirectorDriver::*)(::UnityEngine::IExposedPropertyTable*)>(&UnityEngine::Timeline::IDirectorDriver::GetDrivenDirectors)> {
  static const MethodInfo* get() {
    static auto* resolver = &::il2cpp_utils::GetClassFromName("UnityEngine", "IExposedPropertyTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IDirectorDriver*), "GetDrivenDirectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resolver});
  }
};
