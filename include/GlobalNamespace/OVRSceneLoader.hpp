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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: SceneInfo because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneLoader
  class OVRSceneLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSceneLoader : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRSceneLoader::SceneInfo
    struct SceneInfo;
    // Nested type: ::GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24
    class $DelayCanvasPosUpdate$d__24;
    // Nested type: ::GlobalNamespace::OVRSceneLoader::$onCheckSceneCoroutine$d__25
    class $onCheckSceneCoroutine$d__25;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRSceneLoader/SceneInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct SceneInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Collections.Generic.List`1<System.String> scenes
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::List_1<::StringW>* scenes;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
      // public System.Int64 version
      // Size: 0x8
      // Offset: 0x8
      int64_t version;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      public:
      // Creating value type constructor for type: SceneInfo
      constexpr SceneInfo(::System::Collections::Generic::List_1<::StringW>* scenes_ = {}, int64_t version_ = {}) noexcept : scenes{scenes_}, version{version_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Collections.Generic.List`1<System.String> scenes
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_scenes();
      // Get instance field reference: public System.Int64 version
      [[deprecated("Use field access instead!")]] int64_t& dyn_version();
      // public System.Void .ctor(System.Collections.Generic.List`1<System.String> sceneList, System.Int64 currentSceneEpochVersion)
      // Offset: 0xBA0274
      // ABORTED: conflicts with another method.  SceneInfo(::System::Collections::Generic::List_1<::StringW>* sceneList, int64_t currentSceneEpochVersion);
    }; // OVRSceneLoader/SceneInfo
    #pragma pack(pop)
    static check_size<sizeof(OVRSceneLoader::SceneInfo), 8 + sizeof(int64_t)> __GlobalNamespace_OVRSceneLoader_SceneInfoSizeCheck;
    static_assert(sizeof(OVRSceneLoader::SceneInfo) == 0x10);
    public:
    // public System.Single sceneCheckIntervalSeconds
    // Size: 0x4
    // Offset: 0x18
    float sceneCheckIntervalSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single logCloseTime
    // Size: 0x4
    // Offset: 0x1C
    float logCloseTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Canvas mainCanvas
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Canvas* mainCanvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // public UnityEngine.UI.Text logTextBox
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* logTextBox;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.AsyncOperation loadSceneOperation
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AsyncOperation* loadSceneOperation;
    // Field size check
    static_assert(sizeof(::UnityEngine::AsyncOperation*) == 0x8);
    // private System.String formattedLogText
    // Size: 0x8
    // Offset: 0x38
    ::StringW formattedLogText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single closeLogTimer
    // Size: 0x4
    // Offset: 0x40
    float closeLogTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean closeLogDialogue
    // Size: 0x1
    // Offset: 0x44
    bool closeLogDialogue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean canvasPosUpdated
    // Size: 0x1
    // Offset: 0x45
    bool canvasPosUpdated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: canvasPosUpdated and: scenePath
    char __padding8[0x2] = {};
    // private System.String scenePath
    // Size: 0x8
    // Offset: 0x48
    ::StringW scenePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String sceneLoadDataPath
    // Size: 0x8
    // Offset: 0x50
    ::StringW sceneLoadDataPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AssetBundle> loadedAssetBundles
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>* loadedAssetBundles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*) == 0x8);
    // private OVRSceneLoader/SceneInfo currentSceneInfo
    // Size: 0x10
    // Offset: 0x60
    ::GlobalNamespace::OVRSceneLoader::SceneInfo currentSceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneLoader::SceneInfo) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.String externalStoragePath
    static constexpr const char* externalStoragePath = "/sdcard/Android/data";
    // Get static field: static public System.String externalStoragePath
    static ::StringW _get_externalStoragePath();
    // Set static field: static public System.String externalStoragePath
    static void _set_externalStoragePath(::StringW value);
    // static field const value: static public System.String sceneLoadDataName
    static constexpr const char* sceneLoadDataName = "SceneLoadData.txt";
    // Get static field: static public System.String sceneLoadDataName
    static ::StringW _get_sceneLoadDataName();
    // Set static field: static public System.String sceneLoadDataName
    static void _set_sceneLoadDataName(::StringW value);
    // static field const value: static public System.String resourceBundleName
    static constexpr const char* resourceBundleName = "asset_resources";
    // Get static field: static public System.String resourceBundleName
    static ::StringW _get_resourceBundleName();
    // Set static field: static public System.String resourceBundleName
    static void _set_resourceBundleName(::StringW value);
    // Get instance field reference: public System.Single sceneCheckIntervalSeconds
    [[deprecated("Use field access instead!")]] float& dyn_sceneCheckIntervalSeconds();
    // Get instance field reference: public System.Single logCloseTime
    [[deprecated("Use field access instead!")]] float& dyn_logCloseTime();
    // Get instance field reference: public UnityEngine.Canvas mainCanvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn_mainCanvas();
    // Get instance field reference: public UnityEngine.UI.Text logTextBox
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_logTextBox();
    // Get instance field reference: private UnityEngine.AsyncOperation loadSceneOperation
    [[deprecated("Use field access instead!")]] ::UnityEngine::AsyncOperation*& dyn_loadSceneOperation();
    // Get instance field reference: private System.String formattedLogText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_formattedLogText();
    // Get instance field reference: private System.Single closeLogTimer
    [[deprecated("Use field access instead!")]] float& dyn_closeLogTimer();
    // Get instance field reference: private System.Boolean closeLogDialogue
    [[deprecated("Use field access instead!")]] bool& dyn_closeLogDialogue();
    // Get instance field reference: private System.Boolean canvasPosUpdated
    [[deprecated("Use field access instead!")]] bool& dyn_canvasPosUpdated();
    // Get instance field reference: private System.String scenePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_scenePath();
    // Get instance field reference: private System.String sceneLoadDataPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sceneLoadDataPath();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.AssetBundle> loadedAssetBundles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*& dyn_loadedAssetBundles();
    // Get instance field reference: private OVRSceneLoader/SceneInfo currentSceneInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneLoader::SceneInfo& dyn_currentSceneInfo();
    // private System.Void Awake()
    // Offset: 0x14CF7DC
    void Awake();
    // private System.Void Start()
    // Offset: 0x14CF858
    void Start();
    // private System.Void LoadScene(OVRSceneLoader/SceneInfo sceneInfo)
    // Offset: 0x14CFC34
    void LoadScene(::GlobalNamespace::OVRSceneLoader::SceneInfo sceneInfo);
    // private System.Void LoadSceneOperation_completed(UnityEngine.AsyncOperation obj)
    // Offset: 0x14D05B8
    void LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj);
    // public System.Void Update()
    // Offset: 0x14D0738
    void Update();
    // private System.Void UpdateCanvasPosition()
    // Offset: 0x14D09D8
    void UpdateCanvasPosition();
    // private OVRSceneLoader/SceneInfo GetSceneInfo()
    // Offset: 0x14CF9F8
    ::GlobalNamespace::OVRSceneLoader::SceneInfo GetSceneInfo();
    // private System.Collections.IEnumerator DelayCanvasPosUpdate()
    // Offset: 0x14CF984
    ::System::Collections::IEnumerator* DelayCanvasPosUpdate();
    // private System.Collections.IEnumerator onCheckSceneCoroutine()
    // Offset: 0x14D06C4
    ::System::Collections::IEnumerator* onCheckSceneCoroutine();
    // private System.Void DestroyAllGameObjects()
    // Offset: 0x14D0D44
    void DestroyAllGameObjects();
    // public System.Void .ctor()
    // Offset: 0x14D0E50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneLoader*, creationType>()));
    }
  }; // OVRSceneLoader
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneLoader), 96 + sizeof(::GlobalNamespace::OVRSceneLoader::SceneInfo)> __GlobalNamespace_OVRSceneLoaderSizeCheck;
  static_assert(sizeof(OVRSceneLoader) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader::SceneInfo, "", "OVRSceneLoader/SceneInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)(::GlobalNamespace::OVRSceneLoader::SceneInfo)>(&GlobalNamespace::OVRSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneInfo = &::il2cpp_utils::GetClassFromName("", "OVRSceneLoader/SceneInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed
// Il2CppName: LoadSceneOperation_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)(::UnityEngine::AsyncOperation*)>(&GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "LoadSceneOperation_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition
// Il2CppName: UpdateCanvasPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "UpdateCanvasPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::GetSceneInfo
// Il2CppName: GetSceneInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSceneLoader::SceneInfo (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::GetSceneInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "GetSceneInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate
// Il2CppName: DelayCanvasPosUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "DelayCanvasPosUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine
// Il2CppName: onCheckSceneCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "onCheckSceneCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects
// Il2CppName: DestroyAllGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "DestroyAllGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
