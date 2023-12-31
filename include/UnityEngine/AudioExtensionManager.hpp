// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSpatializerExtensionDefinition
  class AudioSpatializerExtensionDefinition;
  // Forward declaring type: AudioAmbisonicExtensionDefinition
  class AudioAmbisonicExtensionDefinition;
  // Forward declaring type: AudioSourceExtension
  class AudioSourceExtension;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioListenerExtension
  class AudioListenerExtension;
  // Forward declaring type: AudioListener
  class AudioListener;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioExtensionManager
  class AudioExtensionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioExtensionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioExtensionManager*, "UnityEngine", "AudioExtensionManager");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioExtensionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioExtensionManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> m_ListenerSpatializerExtensionDefinitions
    static ::System::Collections::Generic::List_1<::UnityEngine::AudioSpatializerExtensionDefinition*>* _get_m_ListenerSpatializerExtensionDefinitions();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> m_ListenerSpatializerExtensionDefinitions
    static void _set_m_ListenerSpatializerExtensionDefinitions(::System::Collections::Generic::List_1<::UnityEngine::AudioSpatializerExtensionDefinition*>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> m_SourceSpatializerExtensionDefinitions
    static ::System::Collections::Generic::List_1<::UnityEngine::AudioSpatializerExtensionDefinition*>* _get_m_SourceSpatializerExtensionDefinitions();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> m_SourceSpatializerExtensionDefinitions
    static void _set_m_SourceSpatializerExtensionDefinitions(::System::Collections::Generic::List_1<::UnityEngine::AudioSpatializerExtensionDefinition*>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> m_SourceAmbisonicDecoderExtensionDefinitions
    static ::System::Collections::Generic::List_1<::UnityEngine::AudioAmbisonicExtensionDefinition*>* _get_m_SourceAmbisonicDecoderExtensionDefinitions();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> m_SourceAmbisonicDecoderExtensionDefinitions
    static void _set_m_SourceAmbisonicDecoderExtensionDefinitions(::System::Collections::Generic::List_1<::UnityEngine::AudioAmbisonicExtensionDefinition*>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> m_SourceExtensionsToUpdate
    static ::System::Collections::Generic::List_1<::UnityEngine::AudioSourceExtension*>* _get_m_SourceExtensionsToUpdate();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> m_SourceExtensionsToUpdate
    static void _set_m_SourceExtensionsToUpdate(::System::Collections::Generic::List_1<::UnityEngine::AudioSourceExtension*>* value);
    // Get static field: static private System.Int32 m_NextStopIndex
    static int _get_m_NextStopIndex();
    // Set static field: static private System.Int32 m_NextStopIndex
    static void _set_m_NextStopIndex(int value);
    // Get static field: static private System.Boolean m_BuiltinDefinitionsRegistered
    static bool _get_m_BuiltinDefinitionsRegistered();
    // Set static field: static private System.Boolean m_BuiltinDefinitionsRegistered
    static void _set_m_BuiltinDefinitionsRegistered(bool value);
    // Get static field: static private UnityEngine.PropertyName m_SpatializerName
    static ::UnityEngine::PropertyName _get_m_SpatializerName();
    // Set static field: static private UnityEngine.PropertyName m_SpatializerName
    static void _set_m_SpatializerName(::UnityEngine::PropertyName value);
    // Get static field: static private UnityEngine.PropertyName m_SpatializerExtensionName
    static ::UnityEngine::PropertyName _get_m_SpatializerExtensionName();
    // Set static field: static private UnityEngine.PropertyName m_SpatializerExtensionName
    static void _set_m_SpatializerExtensionName(::UnityEngine::PropertyName value);
    // Get static field: static private UnityEngine.PropertyName m_ListenerSpatializerExtensionName
    static ::UnityEngine::PropertyName _get_m_ListenerSpatializerExtensionName();
    // Set static field: static private UnityEngine.PropertyName m_ListenerSpatializerExtensionName
    static void _set_m_ListenerSpatializerExtensionName(::UnityEngine::PropertyName value);
    // static UnityEngine.AudioSourceExtension AddSpatializerExtension(UnityEngine.AudioSource source)
    // Offset: 0x2849B1C
    static ::UnityEngine::AudioSourceExtension* AddSpatializerExtension(::UnityEngine::AudioSource* source);
    // static UnityEngine.AudioSourceExtension AddAmbisonicDecoderExtension(UnityEngine.AudioSource source)
    // Offset: 0x284A230
    static ::UnityEngine::AudioSourceExtension* AddAmbisonicDecoderExtension(::UnityEngine::AudioSource* source);
    // static System.Void WriteExtensionProperties(UnityEngine.AudioSourceExtension extension, System.String extensionName)
    // Offset: 0x284A024
    static void WriteExtensionProperties(::UnityEngine::AudioSourceExtension* extension, ::StringW extensionName);
    // static UnityEngine.AudioListenerExtension AddSpatializerExtension(UnityEngine.AudioListener listener)
    // Offset: 0x284A740
    static ::UnityEngine::AudioListenerExtension* AddSpatializerExtension(::UnityEngine::AudioListener* listener);
    // static System.Void WriteExtensionProperties(UnityEngine.AudioListenerExtension extension, System.String extensionName)
    // Offset: 0x284AB40
    static void WriteExtensionProperties(::UnityEngine::AudioListenerExtension* extension, ::StringW extensionName);
    // static System.Void AddExtensionToManager(UnityEngine.AudioSourceExtension extension)
    // Offset: 0x284AEA8
    static void AddExtensionToManager(::UnityEngine::AudioSourceExtension* extension);
    // static System.Void RemoveExtensionFromManager(UnityEngine.AudioSourceExtension extension)
    // Offset: 0x284AFA8
    static void RemoveExtensionFromManager(::UnityEngine::AudioSourceExtension* extension);
    // static System.Void Update()
    // Offset: 0x284B190
    static void Update();
    // static System.Void GetReadyToPlay(UnityEngine.AudioSourceExtension extension)
    // Offset: 0x284B718
    static void GetReadyToPlay(::UnityEngine::AudioSourceExtension* extension);
    // static private System.Void RegisterBuiltinDefinitions()
    // Offset: 0x2849E2C
    static void RegisterBuiltinDefinitions();
    // static UnityEngine.Object GetAudioListener()
    // Offset: 0x284B654
    static ::UnityEngine::Object* GetAudioListener();
    // static private System.Void .cctor()
    // Offset: 0x284B7D8
    static void _cctor();
  }; // UnityEngine.AudioExtensionManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::AddSpatializerExtension
// Il2CppName: AddSpatializerExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSourceExtension* (*)(::UnityEngine::AudioSource*)>(&UnityEngine::AudioExtensionManager::AddSpatializerExtension)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "AddSpatializerExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::AddAmbisonicDecoderExtension
// Il2CppName: AddAmbisonicDecoderExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSourceExtension* (*)(::UnityEngine::AudioSource*)>(&UnityEngine::AudioExtensionManager::AddAmbisonicDecoderExtension)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "AddAmbisonicDecoderExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::WriteExtensionProperties
// Il2CppName: WriteExtensionProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSourceExtension*, ::StringW)>(&UnityEngine::AudioExtensionManager::WriteExtensionProperties)> {
  static const MethodInfo* get() {
    static auto* extension = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSourceExtension")->byval_arg;
    static auto* extensionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "WriteExtensionProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension, extensionName});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::AddSpatializerExtension
// Il2CppName: AddSpatializerExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioListenerExtension* (*)(::UnityEngine::AudioListener*)>(&UnityEngine::AudioExtensionManager::AddSpatializerExtension)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "AddSpatializerExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::WriteExtensionProperties
// Il2CppName: WriteExtensionProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioListenerExtension*, ::StringW)>(&UnityEngine::AudioExtensionManager::WriteExtensionProperties)> {
  static const MethodInfo* get() {
    static auto* extension = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioListenerExtension")->byval_arg;
    static auto* extensionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "WriteExtensionProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension, extensionName});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::AddExtensionToManager
// Il2CppName: AddExtensionToManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSourceExtension*)>(&UnityEngine::AudioExtensionManager::AddExtensionToManager)> {
  static const MethodInfo* get() {
    static auto* extension = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSourceExtension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "AddExtensionToManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::RemoveExtensionFromManager
// Il2CppName: RemoveExtensionFromManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSourceExtension*)>(&UnityEngine::AudioExtensionManager::RemoveExtensionFromManager)> {
  static const MethodInfo* get() {
    static auto* extension = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSourceExtension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "RemoveExtensionFromManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AudioExtensionManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::GetReadyToPlay
// Il2CppName: GetReadyToPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSourceExtension*)>(&UnityEngine::AudioExtensionManager::GetReadyToPlay)> {
  static const MethodInfo* get() {
    static auto* extension = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSourceExtension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "GetReadyToPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::RegisterBuiltinDefinitions
// Il2CppName: RegisterBuiltinDefinitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AudioExtensionManager::RegisterBuiltinDefinitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "RegisterBuiltinDefinitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::GetAudioListener
// Il2CppName: GetAudioListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)()>(&UnityEngine::AudioExtensionManager::GetAudioListener)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), "GetAudioListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioExtensionManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AudioExtensionManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioExtensionManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
