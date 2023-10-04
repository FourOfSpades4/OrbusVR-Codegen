// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerSnapshot
  class AudioMixerSnapshot;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixer
  class AudioMixer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Audio.AudioMixer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [ExcludeFromObjectFactoryAttribute] Offset: FFFFFFFF
  class AudioMixer : public ::UnityEngine::Object {
    public:
    // public System.Void TransitionToSnapshots(UnityEngine.Audio.AudioMixerSnapshot[] snapshots, System.Single[] weights, System.Single timeToReach)
    // Offset: 0x28477EC
    void TransitionToSnapshots(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*> snapshots, ::ArrayW<float> weights, float timeToReach);
    // public System.Boolean SetFloat(System.String name, System.Single value)
    // Offset: 0x2847878
    bool SetFloat(::StringW name, float value);
  }; // UnityEngine.Audio.AudioMixer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::TransitionToSnapshots
// Il2CppName: TransitionToSnapshots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioMixer::*)(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>, ::ArrayW<float>, float)>(&UnityEngine::Audio::AudioMixer::TransitionToSnapshots)> {
  static const MethodInfo* get() {
    static auto* snapshots = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerSnapshot"), 1)->byval_arg;
    static auto* weights = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* timeToReach = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "TransitionToSnapshots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snapshots, weights, timeToReach});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioMixer::*)(::StringW, float)>(&UnityEngine::Audio::AudioMixer::SetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};