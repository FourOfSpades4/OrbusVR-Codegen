// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: STOP_MODE
#include "GlobalNamespace/STOP_MODE.hpp"
// Including type: FMOD.Studio.EventInstance
#include "FMOD/Studio/EventInstance.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: ParamRef
  class ParamRef;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FMODEventPlayableBehavior
  class FMODEventPlayableBehavior;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FMODEventPlayableBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FMODEventPlayableBehavior*, "", "FMODEventPlayableBehavior");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FMODEventPlayableBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  class FMODEventPlayableBehavior : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    public:
    // public System.String eventName
    // Size: 0x8
    // Offset: 0x10
    ::StringW eventName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public STOP_MODE stopType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::STOP_MODE stopType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::STOP_MODE) == 0x4);
    // Padding between fields: stopType and: parameters
    char __padding1[0x4] = {};
    // public FMODUnity.ParamRef[] parameters
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::FMODUnity::ParamRef*> parameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::FMODUnity::ParamRef*>) == 0x8);
    // public UnityEngine.GameObject TrackTargetObject
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* TrackTargetObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Timeline.TimelineClip OwningClip
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Timeline::TimelineClip* OwningClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::TimelineClip*) == 0x8);
    // private System.Boolean isPlayheadInside
    // Size: 0x1
    // Offset: 0x38
    bool isPlayheadInside;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPlayheadInside and: eventInstance
    char __padding5[0x7] = {};
    // private FMOD.Studio.EventInstance eventInstance
    // Size: 0x8
    // Offset: 0x40
    ::FMOD::Studio::EventInstance eventInstance;
    // Field size check
    static_assert(sizeof(::FMOD::Studio::EventInstance) == 0x8);
    public:
    // Get instance field reference: public System.String eventName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_eventName();
    // Get instance field reference: public STOP_MODE stopType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::STOP_MODE& dyn_stopType();
    // Get instance field reference: public FMODUnity.ParamRef[] parameters
    [[deprecated("Use field access instead!")]] ::ArrayW<::FMODUnity::ParamRef*>& dyn_parameters();
    // Get instance field reference: public UnityEngine.GameObject TrackTargetObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_TrackTargetObject();
    // Get instance field reference: public UnityEngine.Timeline.TimelineClip OwningClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::Timeline::TimelineClip*& dyn_OwningClip();
    // Get instance field reference: private System.Boolean isPlayheadInside
    [[deprecated("Use field access instead!")]] bool& dyn_isPlayheadInside();
    // Get instance field reference: private FMOD.Studio.EventInstance eventInstance
    [[deprecated("Use field access instead!")]] ::FMOD::Studio::EventInstance& dyn_eventInstance();
    // protected System.Void PlayEvent()
    // Offset: 0x15D3B68
    void PlayEvent();
    // public System.Void OnEnter()
    // Offset: 0x15D4218
    void OnEnter();
    // public System.Void OnExit()
    // Offset: 0x15D424C
    void OnExit();
    // public System.Void UpdateBehaviour(System.Single time)
    // Offset: 0x15D385C
    void UpdateBehaviour(float time);
    // public System.Void .ctor()
    // Offset: 0x15D3B08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FMODEventPlayableBehavior* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FMODEventPlayableBehavior::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FMODEventPlayableBehavior*, creationType>()));
    }
    // public override System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x15D42B4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(::UnityEngine::Playables::Playable playable);
  }; // FMODEventPlayableBehavior
  #pragma pack(pop)
  static check_size<sizeof(FMODEventPlayableBehavior), 64 + sizeof(::FMOD::Studio::EventInstance)> __GlobalNamespace_FMODEventPlayableBehaviorSizeCheck;
  static_assert(sizeof(FMODEventPlayableBehavior) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FMODEventPlayableBehavior::PlayEvent
// Il2CppName: PlayEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FMODEventPlayableBehavior::*)()>(&GlobalNamespace::FMODEventPlayableBehavior::PlayEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FMODEventPlayableBehavior*), "PlayEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FMODEventPlayableBehavior::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FMODEventPlayableBehavior::*)()>(&GlobalNamespace::FMODEventPlayableBehavior::OnEnter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FMODEventPlayableBehavior*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FMODEventPlayableBehavior::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FMODEventPlayableBehavior::*)()>(&GlobalNamespace::FMODEventPlayableBehavior::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FMODEventPlayableBehavior*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FMODEventPlayableBehavior::UpdateBehaviour
// Il2CppName: UpdateBehaviour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FMODEventPlayableBehavior::*)(float)>(&GlobalNamespace::FMODEventPlayableBehavior::UpdateBehaviour)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FMODEventPlayableBehavior*), "UpdateBehaviour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FMODEventPlayableBehavior::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FMODEventPlayableBehavior::OnGraphStop
// Il2CppName: OnGraphStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FMODEventPlayableBehavior::*)(::UnityEngine::Playables::Playable)>(&GlobalNamespace::FMODEventPlayableBehavior::OnGraphStop)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FMODEventPlayableBehavior*), "OnGraphStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
