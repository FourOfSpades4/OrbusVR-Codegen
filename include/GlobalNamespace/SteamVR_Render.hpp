// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_ExternalCamera
  class SteamVR_ExternalCamera;
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForEndOfFrame
  class WaitForEndOfFrame;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Render
  class SteamVR_Render;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Render);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Render*, "", "SteamVR_Render");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Render
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Render : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SteamVR_Render::$RenderLoop$d__29
    class $RenderLoop$d__29;
    public:
    // public System.Boolean pauseGameWhenDashboardIsVisible
    // Size: 0x1
    // Offset: 0x18
    bool pauseGameWhenDashboardIsVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean lockPhysicsUpdateRateToRenderFrequency
    // Size: 0x1
    // Offset: 0x19
    bool lockPhysicsUpdateRateToRenderFrequency;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lockPhysicsUpdateRateToRenderFrequency and: externalCamera
    char __padding1[0x6] = {};
    // public SteamVR_ExternalCamera externalCamera
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SteamVR_ExternalCamera* externalCamera;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_ExternalCamera*) == 0x8);
    // public System.String externalCameraConfigPath
    // Size: 0x8
    // Offset: 0x28
    ::StringW externalCameraConfigPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Valve.VR.ETrackingUniverseOrigin trackingSpace
    // Size: 0x4
    // Offset: 0x30
    ::Valve::VR::ETrackingUniverseOrigin trackingSpace;
    // Field size check
    static_assert(sizeof(::Valve::VR::ETrackingUniverseOrigin) == 0x4);
    // Padding between fields: trackingSpace and: cameras
    char __padding4[0x4] = {};
    // private SteamVR_Camera[] cameras
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::SteamVR_Camera*> cameras;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SteamVR_Camera*>) == 0x8);
    // public Valve.VR.TrackedDevicePose_t[] poses
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Valve::VR::TrackedDevicePose_t> poses;
    // Field size check
    static_assert(sizeof(::ArrayW<::Valve::VR::TrackedDevicePose_t>) == 0x8);
    // public Valve.VR.TrackedDevicePose_t[] gamePoses
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::Valve::VR::TrackedDevicePose_t> gamePoses;
    // Field size check
    static_assert(sizeof(::ArrayW<::Valve::VR::TrackedDevicePose_t>) == 0x8);
    // private UnityEngine.WaitForEndOfFrame waitForEndOfFrame
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::WaitForEndOfFrame* waitForEndOfFrame;
    // Field size check
    static_assert(sizeof(::UnityEngine::WaitForEndOfFrame*) == 0x8);
    // private System.Single sceneResolutionScale
    // Size: 0x4
    // Offset: 0x58
    float sceneResolutionScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single timeScale
    // Size: 0x4
    // Offset: 0x5C
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [CompilerGeneratedAttribute] Offset: 0xADCB10
    // Get static field: static private Valve.VR.EVREye <eye>k__BackingField
    static ::Valve::VR::EVREye _get_$eye$k__BackingField();
    // Set static field: static private Valve.VR.EVREye <eye>k__BackingField
    static void _set_$eye$k__BackingField(::Valve::VR::EVREye value);
    // Get static field: static private SteamVR_Render _instance
    static ::GlobalNamespace::SteamVR_Render* _get__instance();
    // Set static field: static private SteamVR_Render _instance
    static void _set__instance(::GlobalNamespace::SteamVR_Render* value);
    // Get static field: static private System.Boolean isQuitting
    static bool _get_isQuitting();
    // Set static field: static private System.Boolean isQuitting
    static void _set_isQuitting(bool value);
    // Get static field: static private System.Boolean _pauseRendering
    static bool _get__pauseRendering();
    // Set static field: static private System.Boolean _pauseRendering
    static void _set__pauseRendering(bool value);
    // Get instance field reference: public System.Boolean pauseGameWhenDashboardIsVisible
    [[deprecated("Use field access instead!")]] bool& dyn_pauseGameWhenDashboardIsVisible();
    // Get instance field reference: public System.Boolean lockPhysicsUpdateRateToRenderFrequency
    [[deprecated("Use field access instead!")]] bool& dyn_lockPhysicsUpdateRateToRenderFrequency();
    // Get instance field reference: public SteamVR_ExternalCamera externalCamera
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_ExternalCamera*& dyn_externalCamera();
    // Get instance field reference: public System.String externalCameraConfigPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_externalCameraConfigPath();
    // Get instance field reference: public Valve.VR.ETrackingUniverseOrigin trackingSpace
    [[deprecated("Use field access instead!")]] ::Valve::VR::ETrackingUniverseOrigin& dyn_trackingSpace();
    // Get instance field reference: private SteamVR_Camera[] cameras
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SteamVR_Camera*>& dyn_cameras();
    // Get instance field reference: public Valve.VR.TrackedDevicePose_t[] poses
    [[deprecated("Use field access instead!")]] ::ArrayW<::Valve::VR::TrackedDevicePose_t>& dyn_poses();
    // Get instance field reference: public Valve.VR.TrackedDevicePose_t[] gamePoses
    [[deprecated("Use field access instead!")]] ::ArrayW<::Valve::VR::TrackedDevicePose_t>& dyn_gamePoses();
    // Get instance field reference: private UnityEngine.WaitForEndOfFrame waitForEndOfFrame
    [[deprecated("Use field access instead!")]] ::UnityEngine::WaitForEndOfFrame*& dyn_waitForEndOfFrame();
    // Get instance field reference: private System.Single sceneResolutionScale
    [[deprecated("Use field access instead!")]] float& dyn_sceneResolutionScale();
    // Get instance field reference: private System.Single timeScale
    [[deprecated("Use field access instead!")]] float& dyn_timeScale();
    // static public Valve.VR.EVREye get_eye()
    // Offset: 0xE1296C
    static ::Valve::VR::EVREye get_eye();
    // static private System.Void set_eye(Valve.VR.EVREye value)
    // Offset: 0xE129BC
    static void set_eye(::Valve::VR::EVREye value);
    // static public SteamVR_Render get_instance()
    // Offset: 0xE02470
    static ::GlobalNamespace::SteamVR_Render* get_instance();
    // private System.Void OnDestroy()
    // Offset: 0xE12A10
    void OnDestroy();
    // private System.Void OnApplicationQuit()
    // Offset: 0xE12A60
    void OnApplicationQuit();
    // static public System.Void Add(SteamVR_Camera vrcam)
    // Offset: 0xE00B08
    static void Add(::GlobalNamespace::SteamVR_Camera* vrcam);
    // static public System.Void Remove(SteamVR_Camera vrcam)
    // Offset: 0xDFFB58
    static void Remove(::GlobalNamespace::SteamVR_Camera* vrcam);
    // static public SteamVR_Camera Top()
    // Offset: 0xE0C3D0
    static ::GlobalNamespace::SteamVR_Camera* Top();
    // private System.Void AddInternal(SteamVR_Camera vrcam)
    // Offset: 0xE12AD4
    void AddInternal(::GlobalNamespace::SteamVR_Camera* vrcam);
    // private System.Void RemoveInternal(SteamVR_Camera vrcam)
    // Offset: 0xE12DC8
    void RemoveInternal(::GlobalNamespace::SteamVR_Camera* vrcam);
    // private SteamVR_Camera TopInternal()
    // Offset: 0xE12FD4
    ::GlobalNamespace::SteamVR_Camera* TopInternal();
    // static public System.Boolean get_pauseRendering()
    // Offset: 0xE13054
    static bool get_pauseRendering();
    // static public System.Void set_pauseRendering(System.Boolean value)
    // Offset: 0xE0D3EC
    static void set_pauseRendering(bool value);
    // private System.Collections.IEnumerator RenderLoop()
    // Offset: 0xE130A4
    ::System::Collections::IEnumerator* RenderLoop();
    // private System.Void RenderExternalCamera()
    // Offset: 0xE13144
    void RenderExternalCamera();
    // private System.Void OnInputFocus(System.Boolean hasFocus)
    // Offset: 0xE132CC
    void OnInputFocus(bool hasFocus);
    // private System.Void OnQuit(Valve.VR.VREvent_t vrEvent)
    // Offset: 0xE1330C
    void OnQuit(::Valve::VR::VREvent_t vrEvent);
    // private System.String GetScreenshotFilename(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames screenshotPropertyFilename)
    // Offset: 0xE13314
    ::StringW GetScreenshotFilename(uint screenshotHandle, ::Valve::VR::EVRScreenshotPropertyFilenames screenshotPropertyFilename);
    // private System.Void OnRequestScreenshot(Valve.VR.VREvent_t vrEvent)
    // Offset: 0xE1347C
    void OnRequestScreenshot(::Valve::VR::VREvent_t vrEvent);
    // private System.Void OnEnable()
    // Offset: 0xE13744
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xE139E8
    void OnDisable();
    // private System.Void Awake()
    // Offset: 0xE13BB4
    void Awake();
    // public System.Void UpdatePoses()
    // Offset: 0xE13D60
    void UpdatePoses();
    // private System.Void OnBeforeRender()
    // Offset: 0xE13E64
    void OnBeforeRender();
    // private System.Void Update()
    // Offset: 0xE13E68
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE142A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Render* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Render::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Render*, creationType>()));
    }
  }; // SteamVR_Render
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Render), 92 + sizeof(float)> __GlobalNamespace_SteamVR_RenderSizeCheck;
  static_assert(sizeof(SteamVR_Render) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::get_eye
// Il2CppName: get_eye
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVREye (*)()>(&GlobalNamespace::SteamVR_Render::get_eye)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "get_eye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::set_eye
// Il2CppName: set_eye
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Valve::VR::EVREye)>(&GlobalNamespace::SteamVR_Render::set_eye)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "set_eye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_Render* (*)()>(&GlobalNamespace::SteamVR_Render::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SteamVR_Camera*)>(&GlobalNamespace::SteamVR_Render::Add)> {
  static const MethodInfo* get() {
    static auto* vrcam = &::il2cpp_utils::GetClassFromName("", "SteamVR_Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrcam});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SteamVR_Camera*)>(&GlobalNamespace::SteamVR_Render::Remove)> {
  static const MethodInfo* get() {
    static auto* vrcam = &::il2cpp_utils::GetClassFromName("", "SteamVR_Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrcam});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::Top
// Il2CppName: Top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_Camera* (*)()>(&GlobalNamespace::SteamVR_Render::Top)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::AddInternal
// Il2CppName: AddInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)(::GlobalNamespace::SteamVR_Camera*)>(&GlobalNamespace::SteamVR_Render::AddInternal)> {
  static const MethodInfo* get() {
    static auto* vrcam = &::il2cpp_utils::GetClassFromName("", "SteamVR_Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "AddInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrcam});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::RemoveInternal
// Il2CppName: RemoveInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)(::GlobalNamespace::SteamVR_Camera*)>(&GlobalNamespace::SteamVR_Render::RemoveInternal)> {
  static const MethodInfo* get() {
    static auto* vrcam = &::il2cpp_utils::GetClassFromName("", "SteamVR_Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "RemoveInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrcam});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::TopInternal
// Il2CppName: TopInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_Camera* (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::TopInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "TopInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::get_pauseRendering
// Il2CppName: get_pauseRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::SteamVR_Render::get_pauseRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "get_pauseRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::set_pauseRendering
// Il2CppName: set_pauseRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&GlobalNamespace::SteamVR_Render::set_pauseRendering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "set_pauseRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::RenderLoop
// Il2CppName: RenderLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::RenderLoop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "RenderLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::RenderExternalCamera
// Il2CppName: RenderExternalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::RenderExternalCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "RenderExternalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnInputFocus
// Il2CppName: OnInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)(bool)>(&GlobalNamespace::SteamVR_Render::OnInputFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnQuit
// Il2CppName: OnQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)(::Valve::VR::VREvent_t)>(&GlobalNamespace::SteamVR_Render::OnQuit)> {
  static const MethodInfo* get() {
    static auto* vrEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::GetScreenshotFilename
// Il2CppName: GetScreenshotFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SteamVR_Render::*)(uint, ::Valve::VR::EVRScreenshotPropertyFilenames)>(&GlobalNamespace::SteamVR_Render::GetScreenshotFilename)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* screenshotPropertyFilename = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotPropertyFilenames")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "GetScreenshotFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, screenshotPropertyFilename});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnRequestScreenshot
// Il2CppName: OnRequestScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)(::Valve::VR::VREvent_t)>(&GlobalNamespace::SteamVR_Render::OnRequestScreenshot)> {
  static const MethodInfo* get() {
    static auto* vrEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnRequestScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::UpdatePoses
// Il2CppName: UpdatePoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::UpdatePoses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "UpdatePoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::OnBeforeRender
// Il2CppName: OnBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::OnBeforeRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "OnBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Render::*)()>(&GlobalNamespace::SteamVR_Render::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Render*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Render::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!