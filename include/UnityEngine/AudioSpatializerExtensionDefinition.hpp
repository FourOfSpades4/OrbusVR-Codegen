// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioExtensionDefinition
  class AudioExtensionDefinition;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSpatializerExtensionDefinition
  class AudioSpatializerExtensionDefinition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioSpatializerExtensionDefinition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSpatializerExtensionDefinition*, "UnityEngine", "AudioSpatializerExtensionDefinition");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioSpatializerExtensionDefinition
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioSpatializerExtensionDefinition : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.PropertyName spatializerName
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::PropertyName spatializerName;
    // Field size check
    static_assert(sizeof(::UnityEngine::PropertyName) == 0x4);
    // Padding between fields: spatializerName and: definition
    char __padding0[0x4] = {};
    // public UnityEngine.AudioExtensionDefinition definition
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioExtensionDefinition* definition;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioExtensionDefinition*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.PropertyName spatializerName
    [[deprecated("Use field access instead!")]] ::UnityEngine::PropertyName& dyn_spatializerName();
    // Get instance field reference: public UnityEngine.AudioExtensionDefinition definition
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioExtensionDefinition*& dyn_definition();
  }; // UnityEngine.AudioSpatializerExtensionDefinition
  #pragma pack(pop)
  static check_size<sizeof(AudioSpatializerExtensionDefinition), 24 + sizeof(::UnityEngine::AudioExtensionDefinition*)> __UnityEngine_AudioSpatializerExtensionDefinitionSizeCheck;
  static_assert(sizeof(AudioSpatializerExtensionDefinition) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"