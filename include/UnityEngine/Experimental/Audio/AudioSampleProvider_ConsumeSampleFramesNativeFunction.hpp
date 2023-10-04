// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Audio.AudioSampleProvider
#include "UnityEngine/Experimental/Audio/AudioSampleProvider.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction*, "UnityEngine.Experimental.Audio", "AudioSampleProvider/ConsumeSampleFramesNativeFunction");
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: A85F18
  class AudioSampleProvider::ConsumeSampleFramesNativeFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x284E794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioSampleProvider::ConsumeSampleFramesNativeFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioSampleProvider::ConsumeSampleFramesNativeFunction*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 providerId, System.IntPtr interleavedSampleFrames, System.UInt32 sampleFrameCount)
    // Offset: 0x284E7A4
    uint Invoke(uint providerId, ::System::IntPtr interleavedSampleFrames, uint sampleFrameCount);
    // public System.IAsyncResult BeginInvoke(System.UInt32 providerId, System.IntPtr interleavedSampleFrames, System.UInt32 sampleFrameCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x284EC5C
    ::System::IAsyncResult* BeginInvoke(uint providerId, ::System::IntPtr interleavedSampleFrames, uint sampleFrameCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x284ED20
    uint EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::*)(uint, ::System::IntPtr, uint)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* providerId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* interleavedSampleFrames = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* sampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerId, interleavedSampleFrames, sampleFrameCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::*)(uint, ::System::IntPtr, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* providerId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* interleavedSampleFrames = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* sampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerId, interleavedSampleFrames, sampleFrameCount, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::*)(::System::IAsyncResult*)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider::ConsumeSampleFramesNativeFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
