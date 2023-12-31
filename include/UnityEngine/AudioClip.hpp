// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioClip
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClip : public ::UnityEngine::Object {
    public:
    // Nested type: ::UnityEngine::AudioClip::PCMReaderCallback
    class PCMReaderCallback;
    // Nested type: ::UnityEngine::AudioClip::PCMSetPositionCallback
    class PCMSetPositionCallback;
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA8623C
    // [DebuggerBrowsableAttribute] Offset: 0xA8623C
    // private UnityEngine.AudioClip/PCMReaderCallback m_PCMReaderCallback
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip::PCMReaderCallback*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xA86278
    // [CompilerGeneratedAttribute] Offset: 0xA86278
    // private UnityEngine.AudioClip/PCMSetPositionCallback m_PCMSetPositionCallback
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip::PCMSetPositionCallback*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioClip/PCMReaderCallback m_PCMReaderCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip::PCMReaderCallback*& dyn_m_PCMReaderCallback();
    // Get instance field reference: private UnityEngine.AudioClip/PCMSetPositionCallback m_PCMSetPositionCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip::PCMSetPositionCallback*& dyn_m_PCMSetPositionCallback();
    // private System.Void .ctor()
    // Offset: 0x28482D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AudioClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClip*, creationType>()));
    }
    // public System.Single get_length()
    // Offset: 0x2847228
    float get_length();
    // public System.Int32 get_samples()
    // Offset: 0x2848340
    int get_samples();
    // public System.Int32 get_channels()
    // Offset: 0x28483AC
    int get_channels();
    // public System.Int32 get_frequency()
    // Offset: 0x2848418
    int get_frequency();
    // public System.Boolean get_ambisonic()
    // Offset: 0x2848484
    bool get_ambisonic();
    // public System.Boolean GetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x28484F0
    bool GetData(::ArrayW<float> data, int offsetSamples);
    // public System.Boolean SetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x2848574
    bool SetData(::ArrayW<float> data, int offsetSamples);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x28485F8
    static ::UnityEngine::AudioClip* Create(::StringW name, int lengthSamples, int channels, int frequency, bool stream);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream, UnityEngine.AudioClip/PCMReaderCallback pcmreadercallback, UnityEngine.AudioClip/PCMSetPositionCallback pcmsetpositioncallback)
    // Offset: 0x2848608
    static ::UnityEngine::AudioClip* Create(::StringW name, int lengthSamples, int channels, int frequency, bool stream, ::UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback);
    // private System.Void add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x28487F4
    void add_m_PCMReaderCallback(::UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x2848A70
    void remove_m_PCMReaderCallback(::UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x28488E0
    void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x2848B5C
    void remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void InvokePCMReaderCallback_Internal(System.Single[] data)
    // Offset: 0x2848C48
    void InvokePCMReaderCallback_Internal(::ArrayW<float> data);
    // private System.Void InvokePCMSetPositionCallback_Internal(System.Int32 position)
    // Offset: 0x284938C
    void InvokePCMSetPositionCallback_Internal(int position);
    // static private UnityEngine.AudioClip Construct_Internal()
    // Offset: 0x284879C
    static ::UnityEngine::AudioClip* Construct_Internal();
    // private System.Void Init_Internal(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x28489CC
    void Init_Internal(::StringW name, int lengthSamples, int channels, int frequency, bool stream);
  }; // UnityEngine.AudioClip
  #pragma pack(pop)
  static check_size<sizeof(AudioClip), 32 + sizeof(::UnityEngine::AudioClip::PCMSetPositionCallback*)> __UnityEngine_AudioClipSizeCheck;
  static_assert(sizeof(AudioClip) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_samples
// Il2CppName: get_samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_samples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_channels
// Il2CppName: get_channels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_channels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_channels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_frequency
// Il2CppName: get_frequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_frequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_frequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_ambisonic
// Il2CppName: get_ambisonic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_ambisonic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_ambisonic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)(::ArrayW<float>, int)>(&UnityEngine::AudioClip::GetData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offsetSamples});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)(::ArrayW<float>, int)>(&UnityEngine::AudioClip::SetData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offsetSamples});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::StringW, int, int, int, bool)>(&UnityEngine::AudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::StringW, int, int, int, bool, ::UnityEngine::AudioClip::PCMReaderCallback*, ::UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pcmreadercallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    static auto* pcmsetpositioncallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::add_m_PCMReaderCallback
// Il2CppName: add_m_PCMReaderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMReaderCallback*)>(&UnityEngine::AudioClip::add_m_PCMReaderCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "add_m_PCMReaderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::remove_m_PCMReaderCallback
// Il2CppName: remove_m_PCMReaderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMReaderCallback*)>(&UnityEngine::AudioClip::remove_m_PCMReaderCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "remove_m_PCMReaderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::add_m_PCMSetPositionCallback
// Il2CppName: add_m_PCMSetPositionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::add_m_PCMSetPositionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "add_m_PCMSetPositionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::remove_m_PCMSetPositionCallback
// Il2CppName: remove_m_PCMSetPositionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::remove_m_PCMSetPositionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "remove_m_PCMSetPositionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::InvokePCMReaderCallback_Internal
// Il2CppName: InvokePCMReaderCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::ArrayW<float>)>(&UnityEngine::AudioClip::InvokePCMReaderCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "InvokePCMReaderCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal
// Il2CppName: InvokePCMSetPositionCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(int)>(&UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "InvokePCMSetPositionCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Construct_Internal
// Il2CppName: Construct_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)()>(&UnityEngine::AudioClip::Construct_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Construct_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Init_Internal
// Il2CppName: Init_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::StringW, int, int, int, bool)>(&UnityEngine::AudioClip::Init_Internal)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Init_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream});
  }
};
