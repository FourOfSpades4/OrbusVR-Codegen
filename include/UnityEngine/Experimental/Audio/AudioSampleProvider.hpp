// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Audio
namespace UnityEngine::Experimental::Audio {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Forward declaring type: AudioSampleProvider
  class AudioSampleProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Audio::AudioSampleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::AudioSampleProvider*, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: A85EA8
  // [StaticAccessorAttribute] Offset: A85EA8
  class AudioSampleProvider : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction
    class ConsumeSampleFramesNativeFunction;
    // Nested type: ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler
    class SampleFramesHandler;
    public:
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction m_ConsumeSampleFramesNativeFunction
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction* m_ConsumeSampleFramesNativeFunction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xA8604C
    // [CompilerGeneratedAttribute] Offset: 0xA8604C
    // private System.UInt32 <id>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    uint id;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xA86088
    // [CompilerGeneratedAttribute] Offset: 0xA86088
    // private System.UInt16 <trackIndex>k__BackingField
    // Size: 0x2
    // Offset: 0x1C
    uint16_t trackIndex;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: trackIndex and: owner
    char __padding2[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xA860C4
    // [DebuggerBrowsableAttribute] Offset: 0xA860C4
    // private UnityEngine.Object <owner>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* owner;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xA86100
    // [CompilerGeneratedAttribute] Offset: 0xA86100
    // private System.UInt16 <channelCount>k__BackingField
    // Size: 0x2
    // Offset: 0x28
    uint16_t channelCount;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: channelCount and: sampleRate
    char __padding4[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xA8613C
    // [DebuggerBrowsableAttribute] Offset: 0xA8613C
    // private System.UInt32 <sampleRate>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    uint sampleRate;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xA86178
    // [CompilerGeneratedAttribute] Offset: 0xA86178
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesAvailable
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesAvailable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA861B4
    // [DebuggerBrowsableAttribute] Offset: 0xA861B4
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesOverflow
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesOverflow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction m_ConsumeSampleFramesNativeFunction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction*& dyn_m_ConsumeSampleFramesNativeFunction();
    // Get instance field reference: private System.UInt32 <id>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$id$k__BackingField();
    // Get instance field reference: private System.UInt16 <trackIndex>k__BackingField
    [[deprecated("Use field access instead!")]] uint16_t& dyn_$trackIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.Object <owner>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn_$owner$k__BackingField();
    // Get instance field reference: private System.UInt16 <channelCount>k__BackingField
    [[deprecated("Use field access instead!")]] uint16_t& dyn_$channelCount$k__BackingField();
    // Get instance field reference: private System.UInt32 <sampleRate>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$sampleRate$k__BackingField();
    // Get instance field reference: private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesAvailable
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*& dyn_sampleFramesAvailable();
    // Get instance field reference: private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesOverflow
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*& dyn_sampleFramesOverflow();
    // public System.Void Dispose()
    // Offset: 0x284DED4
    void Dispose();
    // public System.UInt32 get_id()
    // Offset: 0x284DF50
    uint get_id();
    // private System.Void set_id(System.UInt32 value)
    // Offset: 0x284DFCC
    void set_id(uint value);
    // private System.Void InvokeSampleFramesAvailable(System.Int32 sampleFrameCount)
    // Offset: 0x284DFD4
    void InvokeSampleFramesAvailable(int sampleFrameCount);
    // private System.Void InvokeSampleFramesOverflow(System.Int32 droppedSampleFrameCount)
    // Offset: 0x284E774
    void InvokeSampleFramesOverflow(int droppedSampleFrameCount);
    // static private System.Void InternalSetScriptingPtr(System.UInt32 providerId, UnityEngine.Experimental.Audio.AudioSampleProvider provider)
    // Offset: 0x284DF58
    static void InternalSetScriptingPtr(uint providerId, ::UnityEngine::Experimental::Audio::AudioSampleProvider* provider);
    // protected override System.Void Finalize()
    // Offset: 0x284DE60
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider
  #pragma pack(pop)
  static check_size<sizeof(AudioSampleProvider), 56 + sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*)> __UnityEngine_Experimental_Audio_AudioSampleProviderSizeCheck;
  static_assert(sizeof(AudioSampleProvider) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)()>(&UnityEngine::Experimental::Audio::AudioSampleProvider::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Experimental::Audio::AudioSampleProvider::*)()>(&UnityEngine::Experimental::Audio::AudioSampleProvider::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)(uint)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable
// Il2CppName: InvokeSampleFramesAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable)> {
  static const MethodInfo* get() {
    static auto* sampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "InvokeSampleFramesAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleFrameCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow
// Il2CppName: InvokeSampleFramesOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow)> {
  static const MethodInfo* get() {
    static auto* droppedSampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "InvokeSampleFramesOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{droppedSampleFrameCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::InternalSetScriptingPtr
// Il2CppName: InternalSetScriptingPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::UnityEngine::Experimental::Audio::AudioSampleProvider*)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::InternalSetScriptingPtr)> {
  static const MethodInfo* get() {
    static auto* providerId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Audio", "AudioSampleProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "InternalSetScriptingPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerId, provider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)()>(&UnityEngine::Experimental::Audio::AudioSampleProvider::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
