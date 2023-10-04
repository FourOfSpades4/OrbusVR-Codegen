// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: PlaySound
  class PlaySound;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::PlaySound);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::PlaySound*, "Valve.VR.InteractionSystem", "PlaySound");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.PlaySound
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD0AD0
  class PlaySound : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xADDFC8
    // public UnityEngine.AudioClip[] waveFile
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::AudioClip*> waveFile;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // [TooltipAttribute] Offset: 0xADE000
    // public System.Boolean stopOnPlay
    // Size: 0x1
    // Offset: 0x20
    bool stopOnPlay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xADE038
    // public System.Boolean disableOnEnd
    // Size: 0x1
    // Offset: 0x21
    bool disableOnEnd;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xADE070
    // public System.Boolean looping
    // Size: 0x1
    // Offset: 0x22
    bool looping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xADE0A8
    // public System.Boolean stopOnEnd
    // Size: 0x1
    // Offset: 0x23
    bool stopOnEnd;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xADE0E0
    // public System.Boolean playOnAwakeWithDelay
    // Size: 0x1
    // Offset: 0x24
    bool playOnAwakeWithDelay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [HeaderAttribute] Offset: 0xADE118
    // public System.Boolean useRandomVolume
    // Size: 0x1
    // Offset: 0x25
    bool useRandomVolume;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRandomVolume and: volMin
    char __padding6[0x2] = {};
    // [TooltipAttribute] Offset: 0xADE150
    // [RangeAttribute] Offset: 0xADE150
    // public System.Single volMin
    // Size: 0x4
    // Offset: 0x28
    float volMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADE1A4
    // [RangeAttribute] Offset: 0xADE1A4
    // public System.Single volMax
    // Size: 0x4
    // Offset: 0x2C
    float volMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xADE1F8
    // [TooltipAttribute] Offset: 0xADE1F8
    // public System.Boolean useRandomPitch
    // Size: 0x1
    // Offset: 0x30
    bool useRandomPitch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRandomPitch and: pitchMin
    char __padding9[0x3] = {};
    // [TooltipAttribute] Offset: 0xADE258
    // [RangeAttribute] Offset: 0xADE258
    // public System.Single pitchMin
    // Size: 0x4
    // Offset: 0x34
    float pitchMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xADE2AC
    // [TooltipAttribute] Offset: 0xADE2AC
    // public System.Single pitchMax
    // Size: 0x4
    // Offset: 0x38
    float pitchMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADE300
    // [HeaderAttribute] Offset: 0xADE300
    // public System.Boolean useRetriggerTime
    // Size: 0x1
    // Offset: 0x3C
    bool useRetriggerTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRetriggerTime and: timeInitial
    char __padding12[0x3] = {};
    // [RangeAttribute] Offset: 0xADE360
    // [TooltipAttribute] Offset: 0xADE360
    // public System.Single timeInitial
    // Size: 0x4
    // Offset: 0x40
    float timeInitial;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADE3B8
    // [RangeAttribute] Offset: 0xADE3B8
    // public System.Single timeMin
    // Size: 0x4
    // Offset: 0x44
    float timeMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADE410
    // [RangeAttribute] Offset: 0xADE410
    // public System.Single timeMax
    // Size: 0x4
    // Offset: 0x48
    float timeMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xADE468
    // [TooltipAttribute] Offset: 0xADE468
    // public System.Boolean useRandomSilence
    // Size: 0x1
    // Offset: 0x4C
    bool useRandomSilence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRandomSilence and: percentToNotPlay
    char __padding16[0x3] = {};
    // [TooltipAttribute] Offset: 0xADE4C8
    // [RangeAttribute] Offset: 0xADE4C8
    // public System.Single percentToNotPlay
    // Size: 0x4
    // Offset: 0x50
    float percentToNotPlay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xADE51C
    // [TooltipAttribute] Offset: 0xADE51C
    // public System.Single delayOffsetTime
    // Size: 0x4
    // Offset: 0x54
    float delayOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip clip
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::AudioClip* clip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AudioClip[] waveFile
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_waveFile();
    // Get instance field reference: public System.Boolean stopOnPlay
    [[deprecated("Use field access instead!")]] bool& dyn_stopOnPlay();
    // Get instance field reference: public System.Boolean disableOnEnd
    [[deprecated("Use field access instead!")]] bool& dyn_disableOnEnd();
    // Get instance field reference: public System.Boolean looping
    [[deprecated("Use field access instead!")]] bool& dyn_looping();
    // Get instance field reference: public System.Boolean stopOnEnd
    [[deprecated("Use field access instead!")]] bool& dyn_stopOnEnd();
    // Get instance field reference: public System.Boolean playOnAwakeWithDelay
    [[deprecated("Use field access instead!")]] bool& dyn_playOnAwakeWithDelay();
    // Get instance field reference: public System.Boolean useRandomVolume
    [[deprecated("Use field access instead!")]] bool& dyn_useRandomVolume();
    // Get instance field reference: public System.Single volMin
    [[deprecated("Use field access instead!")]] float& dyn_volMin();
    // Get instance field reference: public System.Single volMax
    [[deprecated("Use field access instead!")]] float& dyn_volMax();
    // Get instance field reference: public System.Boolean useRandomPitch
    [[deprecated("Use field access instead!")]] bool& dyn_useRandomPitch();
    // Get instance field reference: public System.Single pitchMin
    [[deprecated("Use field access instead!")]] float& dyn_pitchMin();
    // Get instance field reference: public System.Single pitchMax
    [[deprecated("Use field access instead!")]] float& dyn_pitchMax();
    // Get instance field reference: public System.Boolean useRetriggerTime
    [[deprecated("Use field access instead!")]] bool& dyn_useRetriggerTime();
    // Get instance field reference: public System.Single timeInitial
    [[deprecated("Use field access instead!")]] float& dyn_timeInitial();
    // Get instance field reference: public System.Single timeMin
    [[deprecated("Use field access instead!")]] float& dyn_timeMin();
    // Get instance field reference: public System.Single timeMax
    [[deprecated("Use field access instead!")]] float& dyn_timeMax();
    // Get instance field reference: public System.Boolean useRandomSilence
    [[deprecated("Use field access instead!")]] bool& dyn_useRandomSilence();
    // Get instance field reference: public System.Single percentToNotPlay
    [[deprecated("Use field access instead!")]] float& dyn_percentToNotPlay();
    // Get instance field reference: public System.Single delayOffsetTime
    [[deprecated("Use field access instead!")]] float& dyn_delayOffsetTime();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private UnityEngine.AudioClip clip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_clip();
    // private System.Void Awake()
    // Offset: 0xDBCD48
    void Awake();
    // public System.Void Play()
    // Offset: 0xDBCEA0
    void Play();
    // public System.Void PlayWithDelay(System.Single delayTime)
    // Offset: 0xDBCEB0
    void PlayWithDelay(float delayTime);
    // public UnityEngine.AudioClip PlayOneShotSound()
    // Offset: 0xDBD024
    ::UnityEngine::AudioClip* PlayOneShotSound();
    // public UnityEngine.AudioClip PlayLooping()
    // Offset: 0xDBCF28
    ::UnityEngine::AudioClip* PlayLooping();
    // public System.Void Disable()
    // Offset: 0xDBD2B4
    void Disable();
    // public System.Void Stop()
    // Offset: 0xDBD2EC
    void Stop();
    // private System.Void SetAudioSource()
    // Offset: 0xDBD120
    void SetAudioSource();
    // public System.Void .ctor()
    // Offset: 0xDBD31C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaySound* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::PlaySound::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaySound*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.PlaySound
  #pragma pack(pop)
  static check_size<sizeof(PlaySound), 96 + sizeof(::UnityEngine::AudioClip*)> __Valve_VR_InteractionSystem_PlaySoundSizeCheck;
  static_assert(sizeof(PlaySound) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::PlayWithDelay
// Il2CppName: PlayWithDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::PlaySound::*)(float)>(&Valve::VR::InteractionSystem::PlaySound::PlayWithDelay)> {
  static const MethodInfo* get() {
    static auto* delayTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "PlayWithDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delayTime});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::PlayOneShotSound
// Il2CppName: PlayOneShotSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::PlayOneShotSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "PlayOneShotSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::PlayLooping
// Il2CppName: PlayLooping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::PlayLooping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "PlayLooping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::SetAudioSource
// Il2CppName: SetAudioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::PlaySound::*)()>(&Valve::VR::InteractionSystem::PlaySound::SetAudioSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::PlaySound*), "SetAudioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::PlaySound::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
