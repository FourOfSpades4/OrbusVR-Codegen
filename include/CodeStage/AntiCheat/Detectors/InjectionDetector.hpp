// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CodeStage.AntiCheat.Detectors.ActDetectorBase
#include "CodeStage/AntiCheat/Detectors/ActDetectorBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: CodeStage::AntiCheat::Detectors
namespace CodeStage::AntiCheat::Detectors {
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: AssemblyLoadEventArgs
  class AssemblyLoadEventArgs;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: CodeStage.AntiCheat.Detectors
namespace CodeStage::AntiCheat::Detectors {
  // Forward declaring type: InjectionDetector
  class InjectionDetector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::CodeStage::AntiCheat::Detectors::InjectionDetector);
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::Detectors::InjectionDetector*, "CodeStage.AntiCheat.Detectors", "InjectionDetector");
// Type namespace: CodeStage.AntiCheat.Detectors
namespace CodeStage::AntiCheat::Detectors {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: CodeStage.AntiCheat.Detectors.InjectionDetector
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AC2254
  class InjectionDetector : public ::CodeStage::AntiCheat::Detectors::ActDetectorBase {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // Nested type: ::CodeStage::AntiCheat::Detectors::InjectionDetector::AllowedAssembly
    class AllowedAssembly;
    public:
    // protected UnityEngine.Events.UnityAction`1<System.String> detectionActionWithArgument
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityAction_1<::StringW>* detectionActionWithArgument;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_1<::StringW>*) == 0x8);
    // private System.Boolean signaturesAreNotGenuine
    // Size: 0x1
    // Offset: 0x40
    bool signaturesAreNotGenuine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: signaturesAreNotGenuine and: allowedAssemblies
    char __padding1[0x7] = {};
    // private CodeStage.AntiCheat.Detectors.InjectionDetector/AllowedAssembly[] allowedAssemblies
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::CodeStage::AntiCheat::Detectors::InjectionDetector::AllowedAssembly*> allowedAssemblies;
    // Field size check
    static_assert(sizeof(::ArrayW<::CodeStage::AntiCheat::Detectors::InjectionDetector::AllowedAssembly*>) == 0x8);
    // private System.String[] hexTable
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::StringW> hexTable;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // static field const value: static System.String COMPONENT_NAME
    static constexpr const char* COMPONENT_NAME = "Injection Detector";
    // Get static field: static System.String COMPONENT_NAME
    static ::StringW _get_COMPONENT_NAME();
    // Set static field: static System.String COMPONENT_NAME
    static void _set_COMPONENT_NAME(::StringW value);
    // static field const value: static System.String FINAL_LOG_PREFIX
    static constexpr const char* FINAL_LOG_PREFIX = "[ACTk] Injection Detector: ";
    // Get static field: static System.String FINAL_LOG_PREFIX
    static ::StringW _get_FINAL_LOG_PREFIX();
    // Set static field: static System.String FINAL_LOG_PREFIX
    static void _set_FINAL_LOG_PREFIX(::StringW value);
    // Get static field: static private System.Int32 instancesInScene
    static int _get_instancesInScene();
    // Set static field: static private System.Int32 instancesInScene
    static void _set_instancesInScene(int value);
    // [CompilerGeneratedAttribute] Offset: 0xAC69D0
    // Get static field: static private CodeStage.AntiCheat.Detectors.InjectionDetector <Instance>k__BackingField
    static ::CodeStage::AntiCheat::Detectors::InjectionDetector* _get_$Instance$k__BackingField();
    // Set static field: static private CodeStage.AntiCheat.Detectors.InjectionDetector <Instance>k__BackingField
    static void _set_$Instance$k__BackingField(::CodeStage::AntiCheat::Detectors::InjectionDetector* value);
    // Get instance field reference: protected UnityEngine.Events.UnityAction`1<System.String> detectionActionWithArgument
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_1<::StringW>*& dyn_detectionActionWithArgument();
    // Get instance field reference: private System.Boolean signaturesAreNotGenuine
    [[deprecated("Use field access instead!")]] bool& dyn_signaturesAreNotGenuine();
    // Get instance field reference: private CodeStage.AntiCheat.Detectors.InjectionDetector/AllowedAssembly[] allowedAssemblies
    [[deprecated("Use field access instead!")]] ::ArrayW<::CodeStage::AntiCheat::Detectors::InjectionDetector::AllowedAssembly*>& dyn_allowedAssemblies();
    // Get instance field reference: private System.String[] hexTable
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_hexTable();
    // static public System.Void StartDetection()
    // Offset: 0x1E5BBF4
    static void StartDetection();
    // static public System.Void StartDetection(UnityEngine.Events.UnityAction callback)
    // Offset: 0x1E5BF9C
    static void StartDetection(::UnityEngine::Events::UnityAction* callback);
    // static public System.Void StartDetection(UnityEngine.Events.UnityAction`1<System.String> callback)
    // Offset: 0x1E5C18C
    static void StartDetection(::UnityEngine::Events::UnityAction_1<::StringW>* callback);
    // static public System.Void StopDetection()
    // Offset: 0x1E5C1C4
    static void StopDetection();
    // static public System.Void Dispose()
    // Offset: 0x1E5C2C8
    static void Dispose();
    // static public CodeStage.AntiCheat.Detectors.InjectionDetector get_Instance()
    // Offset: 0x1E5BD28
    static ::CodeStage::AntiCheat::Detectors::InjectionDetector* get_Instance();
    // static private System.Void set_Instance(CodeStage.AntiCheat.Detectors.InjectionDetector value)
    // Offset: 0x1E5C3CC
    static void set_Instance(::CodeStage::AntiCheat::Detectors::InjectionDetector* value);
    // static private CodeStage.AntiCheat.Detectors.InjectionDetector get_GetOrCreateInstance()
    // Offset: 0x1E5BFD4
    static ::CodeStage::AntiCheat::Detectors::InjectionDetector* get_GetOrCreateInstance();
    // private System.Void Awake()
    // Offset: 0x1E5C438
    void Awake();
    // private System.Void OnLevelWasLoadedNew(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1E5C5DC
    void OnLevelWasLoadedNew(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);
    // private System.Void OnLevelLoadedCallback()
    // Offset: 0x1E5C5E0
    void OnLevelLoadedCallback();
    // private System.Void StartDetectionInternal(UnityEngine.Events.UnityAction callback, UnityEngine.Events.UnityAction`1<System.String> callbackWithArgument)
    // Offset: 0x1E5BD78
    void StartDetectionInternal(::UnityEngine::Events::UnityAction* callback, ::UnityEngine::Events::UnityAction_1<::StringW>* callbackWithArgument);
    // private System.Void OnCheatingDetected(System.String cause)
    // Offset: 0x1E5CC88
    void OnCheatingDetected(::StringW cause);
    // private System.Void OnNewAssemblyLoaded(System.Object sender, System.AssemblyLoadEventArgs args)
    // Offset: 0x1E5D12C
    void OnNewAssemblyLoaded(::Il2CppObject* sender, ::System::AssemblyLoadEventArgs* args);
    // private System.Boolean FindInjectionInCurrentAssemblies(out System.String cause)
    // Offset: 0x1E5CCF4
    bool FindInjectionInCurrentAssemblies(ByRef<::StringW> cause);
    // private System.Boolean AssemblyAllowed(System.Reflection.Assembly ass)
    // Offset: 0x1E5D1BC
    bool AssemblyAllowed(::System::Reflection::Assembly* ass);
    // private System.Void LoadAndParseAllowedAssemblies()
    // Offset: 0x1E5C6D4
    void LoadAndParseAllowedAssemblies();
    // private System.Int32 GetAssemblyHash(System.Reflection.Assembly ass)
    // Offset: 0x1E5D310
    int GetAssemblyHash(::System::Reflection::Assembly* ass);
    // private System.String PublicKeyTokenToString(System.Byte[] bytes)
    // Offset: 0x1E5D644
    ::StringW PublicKeyTokenToString(::ArrayW<uint8_t> bytes);
    // private System.Void .ctor()
    // Offset: 0x1E5C420
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectionDetector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::CodeStage::AntiCheat::Detectors::InjectionDetector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectionDetector*, creationType>()));
    }
    // protected override System.Void OnDestroy()
    // Offset: 0x1E5C578
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::OnDestroy()
    void OnDestroy();
    // protected override System.Void StartDetectionAutomatically()
    // Offset: 0x1E5CE14
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::StartDetectionAutomatically()
    void StartDetectionAutomatically();
    // protected override System.Void PauseDetector()
    // Offset: 0x1E5CE20
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::PauseDetector()
    void PauseDetector();
    // protected override System.Void ResumeDetector()
    // Offset: 0x1E5CEC0
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::ResumeDetector()
    void ResumeDetector();
    // protected override System.Void StopDetectionInternal()
    // Offset: 0x1E5CF8C
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::StopDetectionInternal()
    void StopDetectionInternal();
    // protected override System.Void DisposeInternal()
    // Offset: 0x1E5D040
    // Implemented from: CodeStage.AntiCheat.Detectors.ActDetectorBase
    // Base method: System.Void ActDetectorBase::DisposeInternal()
    void DisposeInternal();
  }; // CodeStage.AntiCheat.Detectors.InjectionDetector
  #pragma pack(pop)
  static check_size<sizeof(InjectionDetector), 80 + sizeof(::ArrayW<::StringW>)> __CodeStage_AntiCheat_Detectors_InjectionDetectorSizeCheck;
  static_assert(sizeof(InjectionDetector) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetection
// Il2CppName: StartDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StartDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetection
// Il2CppName: StartDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetection)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StartDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetection
// Il2CppName: StartDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction_1<::StringW>*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetection)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StartDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StopDetection
// Il2CppName: StopDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StopDetection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StopDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::Detectors::InjectionDetector* (*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::CodeStage::AntiCheat::Detectors::InjectionDetector*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.Detectors", "InjectionDetector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::get_GetOrCreateInstance
// Il2CppName: get_GetOrCreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::Detectors::InjectionDetector* (*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::get_GetOrCreateInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "get_GetOrCreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::OnLevelWasLoadedNew
// Il2CppName: OnLevelWasLoadedNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::OnLevelWasLoadedNew)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "OnLevelWasLoadedNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::OnLevelLoadedCallback
// Il2CppName: OnLevelLoadedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::OnLevelLoadedCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "OnLevelLoadedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetectionInternal
// Il2CppName: StartDetectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::UnityEngine::Events::UnityAction*, ::UnityEngine::Events::UnityAction_1<::StringW>*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetectionInternal)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    static auto* callbackWithArgument = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StartDetectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, callbackWithArgument});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::OnCheatingDetected
// Il2CppName: OnCheatingDetected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::StringW)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::OnCheatingDetected)> {
  static const MethodInfo* get() {
    static auto* cause = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "OnCheatingDetected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cause});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::OnNewAssemblyLoaded
// Il2CppName: OnNewAssemblyLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::Il2CppObject*, ::System::AssemblyLoadEventArgs*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::OnNewAssemblyLoaded)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "AssemblyLoadEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "OnNewAssemblyLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::FindInjectionInCurrentAssemblies
// Il2CppName: FindInjectionInCurrentAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(ByRef<::StringW>)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::FindInjectionInCurrentAssemblies)> {
  static const MethodInfo* get() {
    static auto* cause = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "FindInjectionInCurrentAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cause});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::AssemblyAllowed
// Il2CppName: AssemblyAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::System::Reflection::Assembly*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::AssemblyAllowed)> {
  static const MethodInfo* get() {
    static auto* ass = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "AssemblyAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ass});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::LoadAndParseAllowedAssemblies
// Il2CppName: LoadAndParseAllowedAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::LoadAndParseAllowedAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "LoadAndParseAllowedAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::GetAssemblyHash
// Il2CppName: GetAssemblyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::System::Reflection::Assembly*)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::GetAssemblyHash)> {
  static const MethodInfo* get() {
    static auto* ass = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "GetAssemblyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ass});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::PublicKeyTokenToString
// Il2CppName: PublicKeyTokenToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::Detectors::InjectionDetector::*)(::ArrayW<uint8_t>)>(&CodeStage::AntiCheat::Detectors::InjectionDetector::PublicKeyTokenToString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "PublicKeyTokenToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetectionAutomatically
// Il2CppName: StartDetectionAutomatically
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StartDetectionAutomatically)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StartDetectionAutomatically", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::PauseDetector
// Il2CppName: PauseDetector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::PauseDetector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "PauseDetector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::ResumeDetector
// Il2CppName: ResumeDetector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::ResumeDetector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "ResumeDetector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::StopDetectionInternal
// Il2CppName: StopDetectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::StopDetectionInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "StopDetectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::InjectionDetector::DisposeInternal
// Il2CppName: DisposeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::InjectionDetector::*)()>(&CodeStage::AntiCheat::Detectors::InjectionDetector::DisposeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::InjectionDetector*), "DisposeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
