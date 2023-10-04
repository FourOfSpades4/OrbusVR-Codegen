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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GazeEventHandler
  class GazeEventHandler;
  // Forward declaring type: GazeEventArgs
  struct GazeEventArgs;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_GazeTracker
  class SteamVR_GazeTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_GazeTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_GazeTracker*, "", "SteamVR_GazeTracker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_GazeTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_GazeTracker : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean isInGaze
    // Size: 0x1
    // Offset: 0x18
    bool isInGaze;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInGaze and: GazeOn
    char __padding0[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xADC76C
    // private GazeEventHandler GazeOn
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GazeEventHandler* GazeOn;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GazeEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADC77C
    // private GazeEventHandler GazeOff
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GazeEventHandler* GazeOff;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GazeEventHandler*) == 0x8);
    // public System.Single gazeInCutoff
    // Size: 0x4
    // Offset: 0x30
    float gazeInCutoff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single gazeOutCutoff
    // Size: 0x4
    // Offset: 0x34
    float gazeOutCutoff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform hmdTrackedObject
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* hmdTrackedObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean isInGaze
    [[deprecated("Use field access instead!")]] bool& dyn_isInGaze();
    // Get instance field reference: private GazeEventHandler GazeOn
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GazeEventHandler*& dyn_GazeOn();
    // Get instance field reference: private GazeEventHandler GazeOff
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GazeEventHandler*& dyn_GazeOff();
    // Get instance field reference: public System.Single gazeInCutoff
    [[deprecated("Use field access instead!")]] float& dyn_gazeInCutoff();
    // Get instance field reference: public System.Single gazeOutCutoff
    [[deprecated("Use field access instead!")]] float& dyn_gazeOutCutoff();
    // Get instance field reference: private UnityEngine.Transform hmdTrackedObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_hmdTrackedObject();
    // public System.Void add_GazeOn(GazeEventHandler value)
    // Offset: 0xE09070
    void add_GazeOn(::GlobalNamespace::GazeEventHandler* value);
    // public System.Void remove_GazeOn(GazeEventHandler value)
    // Offset: 0xE0915C
    void remove_GazeOn(::GlobalNamespace::GazeEventHandler* value);
    // public System.Void add_GazeOff(GazeEventHandler value)
    // Offset: 0xE09248
    void add_GazeOff(::GlobalNamespace::GazeEventHandler* value);
    // public System.Void remove_GazeOff(GazeEventHandler value)
    // Offset: 0xE09334
    void remove_GazeOff(::GlobalNamespace::GazeEventHandler* value);
    // private System.Void Start()
    // Offset: 0xE09420
    void Start();
    // public System.Void OnGazeOn(GazeEventArgs e)
    // Offset: 0xE09424
    void OnGazeOn(::GlobalNamespace::GazeEventArgs e);
    // public System.Void OnGazeOff(GazeEventArgs e)
    // Offset: 0xE09440
    void OnGazeOff(::GlobalNamespace::GazeEventArgs e);
    // private System.Void Update()
    // Offset: 0xE0945C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE0982C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_GazeTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_GazeTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_GazeTracker*, creationType>()));
    }
  }; // SteamVR_GazeTracker
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_GazeTracker), 56 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_SteamVR_GazeTrackerSizeCheck;
  static_assert(sizeof(SteamVR_GazeTracker) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::add_GazeOn
// Il2CppName: add_GazeOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)(::GlobalNamespace::GazeEventHandler*)>(&GlobalNamespace::SteamVR_GazeTracker::add_GazeOn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GazeEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "add_GazeOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::remove_GazeOn
// Il2CppName: remove_GazeOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)(::GlobalNamespace::GazeEventHandler*)>(&GlobalNamespace::SteamVR_GazeTracker::remove_GazeOn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GazeEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "remove_GazeOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::add_GazeOff
// Il2CppName: add_GazeOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)(::GlobalNamespace::GazeEventHandler*)>(&GlobalNamespace::SteamVR_GazeTracker::add_GazeOff)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GazeEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "add_GazeOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::remove_GazeOff
// Il2CppName: remove_GazeOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)(::GlobalNamespace::GazeEventHandler*)>(&GlobalNamespace::SteamVR_GazeTracker::remove_GazeOff)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GazeEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "remove_GazeOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)()>(&GlobalNamespace::SteamVR_GazeTracker::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::OnGazeOn
// Il2CppName: OnGazeOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)(::GlobalNamespace::GazeEventArgs)>(&GlobalNamespace::SteamVR_GazeTracker::OnGazeOn)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("", "GazeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "OnGazeOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::OnGazeOff
// Il2CppName: OnGazeOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)(::GlobalNamespace::GazeEventArgs)>(&GlobalNamespace::SteamVR_GazeTracker::OnGazeOff)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("", "GazeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "OnGazeOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_GazeTracker::*)()>(&GlobalNamespace::SteamVR_GazeTracker::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_GazeTracker*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_GazeTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
