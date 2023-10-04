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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: CodeStage.AntiCheat.Detectors
namespace CodeStage::AntiCheat::Detectors {
  // Forward declaring type: ActDetectorBase
  class ActDetectorBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::CodeStage::AntiCheat::Detectors::ActDetectorBase);
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::Detectors::ActDetectorBase*, "CodeStage.AntiCheat.Detectors", "ActDetectorBase");
// Type namespace: CodeStage.AntiCheat.Detectors
namespace CodeStage::AntiCheat::Detectors {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: CodeStage.AntiCheat.Detectors.ActDetectorBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AC221C
  class ActDetectorBase : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAC6908
    // public System.Boolean autoStart
    // Size: 0x1
    // Offset: 0x18
    bool autoStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xAC6940
    // public System.Boolean keepAlive
    // Size: 0x1
    // Offset: 0x19
    bool keepAlive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xAC6978
    // public System.Boolean autoDispose
    // Size: 0x1
    // Offset: 0x1A
    bool autoDispose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoDispose and: detectionEvent
    char __padding2[0x5] = {};
    // protected UnityEngine.Events.UnityEvent detectionEvent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Events::UnityEvent* detectionEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // protected UnityEngine.Events.UnityAction detectionAction
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Events::UnityAction* detectionAction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction*) == 0x8);
    // protected System.Boolean detectionEventHasListener
    // Size: 0x1
    // Offset: 0x30
    bool detectionEventHasListener;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean isRunning
    // Size: 0x1
    // Offset: 0x31
    bool isRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean started
    // Size: 0x1
    // Offset: 0x32
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static protected System.String CONTAINER_NAME
    static constexpr const char* CONTAINER_NAME = "Anti-Cheat Toolkit Detectors";
    // Get static field: static protected System.String CONTAINER_NAME
    static ::StringW _get_CONTAINER_NAME();
    // Set static field: static protected System.String CONTAINER_NAME
    static void _set_CONTAINER_NAME(::StringW value);
    // static field const value: static protected System.String MENU_PATH
    static constexpr const char* MENU_PATH = "Code Stage/Anti-Cheat Toolkit/";
    // Get static field: static protected System.String MENU_PATH
    static ::StringW _get_MENU_PATH();
    // Set static field: static protected System.String MENU_PATH
    static void _set_MENU_PATH(::StringW value);
    // static field const value: static protected System.String GAME_OBJECT_MENU_PATH
    static constexpr const char* GAME_OBJECT_MENU_PATH = "GameObject/Create Other/Code Stage/Anti-Cheat Toolkit/";
    // Get static field: static protected System.String GAME_OBJECT_MENU_PATH
    static ::StringW _get_GAME_OBJECT_MENU_PATH();
    // Set static field: static protected System.String GAME_OBJECT_MENU_PATH
    static void _set_GAME_OBJECT_MENU_PATH(::StringW value);
    // Get static field: static protected UnityEngine.GameObject detectorsContainer
    static ::UnityEngine::GameObject* _get_detectorsContainer();
    // Set static field: static protected UnityEngine.GameObject detectorsContainer
    static void _set_detectorsContainer(::UnityEngine::GameObject* value);
    // Get instance field reference: public System.Boolean autoStart
    [[deprecated("Use field access instead!")]] bool& dyn_autoStart();
    // Get instance field reference: public System.Boolean keepAlive
    [[deprecated("Use field access instead!")]] bool& dyn_keepAlive();
    // Get instance field reference: public System.Boolean autoDispose
    [[deprecated("Use field access instead!")]] bool& dyn_autoDispose();
    // Get instance field reference: protected UnityEngine.Events.UnityEvent detectionEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_detectionEvent();
    // Get instance field reference: protected UnityEngine.Events.UnityAction detectionAction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction*& dyn_detectionAction();
    // Get instance field reference: protected System.Boolean detectionEventHasListener
    [[deprecated("Use field access instead!")]] bool& dyn_detectionEventHasListener();
    // Get instance field reference: protected System.Boolean isRunning
    [[deprecated("Use field access instead!")]] bool& dyn_isRunning();
    // Get instance field reference: protected System.Boolean started
    [[deprecated("Use field access instead!")]] bool& dyn_started();
    // private System.Void Start()
    // Offset: 0x1E5B68C
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x1E5B79C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1E5B7FC
    void OnDisable();
    // private System.Void OnApplicationQuit()
    // Offset: 0x1E5B814
    void OnApplicationQuit();
    // protected System.Void OnDestroy()
    // Offset: 0x1E5B820
    void OnDestroy();
    // protected System.Boolean Init(CodeStage.AntiCheat.Detectors.ActDetectorBase instance, System.String detectorName)
    // Offset: 0x1E5B95C
    bool Init(::CodeStage::AntiCheat::Detectors::ActDetectorBase* instance, ::StringW detectorName);
    // protected System.Void DisposeInternal()
    // Offset: 0x1E5BB00
    void DisposeInternal();
    // protected System.Boolean DetectorHasAdditionalCallbacks()
    // Offset: 0x1E5BB68
    bool DetectorHasAdditionalCallbacks();
    // System.Void OnCheatingDetected()
    // Offset: 0x1E5BB70
    void OnCheatingDetected();
    // protected System.Void StartDetectionAutomatically()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StartDetectionAutomatically();
    // protected System.Void StopDetectionInternal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StopDetectionInternal();
    // protected System.Void PauseDetector()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PauseDetector();
    // protected System.Void ResumeDetector()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResumeDetector();
    // protected System.Void .ctor()
    // Offset: 0x1E5BBDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActDetectorBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::CodeStage::AntiCheat::Detectors::ActDetectorBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActDetectorBase*, creationType>()));
    }
  }; // CodeStage.AntiCheat.Detectors.ActDetectorBase
  #pragma pack(pop)
  static check_size<sizeof(ActDetectorBase), 50 + sizeof(bool)> __CodeStage_AntiCheat_Detectors_ActDetectorBaseSizeCheck;
  static_assert(sizeof(ActDetectorBase) == 0x33);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)(::CodeStage::AntiCheat::Detectors::ActDetectorBase*, ::StringW)>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::Init)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.Detectors", "ActDetectorBase")->byval_arg;
    static auto* detectorName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, detectorName});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::DisposeInternal
// Il2CppName: DisposeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::DisposeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "DisposeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::DetectorHasAdditionalCallbacks
// Il2CppName: DetectorHasAdditionalCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::DetectorHasAdditionalCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "DetectorHasAdditionalCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::OnCheatingDetected
// Il2CppName: OnCheatingDetected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::OnCheatingDetected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "OnCheatingDetected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::StartDetectionAutomatically
// Il2CppName: StartDetectionAutomatically
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::StartDetectionAutomatically)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "StartDetectionAutomatically", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::StopDetectionInternal
// Il2CppName: StopDetectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::StopDetectionInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "StopDetectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::PauseDetector
// Il2CppName: PauseDetector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::PauseDetector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "PauseDetector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::ResumeDetector
// Il2CppName: ResumeDetector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::Detectors::ActDetectorBase::*)()>(&CodeStage::AntiCheat::Detectors::ActDetectorBase::ResumeDetector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::Detectors::ActDetectorBase*), "ResumeDetector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::Detectors::ActDetectorBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
