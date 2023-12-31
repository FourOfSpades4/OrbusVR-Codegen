// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_LoadLevel
#include "GlobalNamespace/SteamVR_LoadLevel.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46*, "", "SteamVR_LoadLevel/<LoadLevel>d__46");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_LoadLevel/<LoadLevel>d__46
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACE958
  class SteamVR_LoadLevel::$LoadLevel$d__46 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public SteamVR_LoadLevel <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SteamVR_LoadLevel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_LoadLevel*) == 0x8);
    // private UnityEngine.GameObject <currentOculusOverlay>5__2
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* $currentOculusOverlay$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene> <unloadScenes>5__3
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* $unloadScenes$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*) == 0x8);
    // private System.Int32 <sceneIdx>5__4
    // Size: 0x4
    // Offset: 0x38
    int $sceneIdx$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public SteamVR_LoadLevel <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_LoadLevel*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.GameObject <currentOculusOverlay>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_$currentOculusOverlay$5__2();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene> <unloadScenes>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*& dyn_$unloadScenes$5__3();
    // Get instance field reference: private System.Int32 <sceneIdx>5__4
    [[deprecated("Use field access instead!")]] int& dyn_$sceneIdx$5__4();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xE0BF48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_LoadLevel::$LoadLevel$d__46* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_LoadLevel::$LoadLevel$d__46*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE0C4B0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE0C4B4
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE0D484
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE0D48C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE0D4F4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SteamVR_LoadLevel/<LoadLevel>d__46
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_LoadLevel::$LoadLevel$d__46), 56 + sizeof(int)> __GlobalNamespace_SteamVR_LoadLevel_$LoadLevel$d__46SizeCheck;
  static_assert(sizeof(SteamVR_LoadLevel::$LoadLevel$d__46) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__46*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
