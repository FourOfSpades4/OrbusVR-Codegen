// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DynamicGridObstacle
  class DynamicGridObstacle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DynamicGridObstacle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicGridObstacle*, "", "DynamicGridObstacle");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: DynamicGridObstacle
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: ACD3AC
  // [RequireComponent] Offset: ACD3AC
  class DynamicGridObstacle : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Collider col
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Collider* col;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private UnityEngine.Transform tr
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* tr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single updateError
    // Size: 0x4
    // Offset: 0x28
    float updateError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single checkTime
    // Size: 0x4
    // Offset: 0x2C
    float checkTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Bounds prevBounds
    // Size: 0x18
    // Offset: 0x30
    ::UnityEngine::Bounds prevBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    // private UnityEngine.Quaternion prevRotation
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Quaternion prevRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Boolean prevEnabled
    // Size: 0x1
    // Offset: 0x58
    bool prevEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: prevEnabled and: lastCheckTime
    char __padding6[0x3] = {};
    // private System.Single lastCheckTime
    // Size: 0x4
    // Offset: 0x5C
    float lastCheckTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Collider col
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_col();
    // Get instance field reference: private UnityEngine.Transform tr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_tr();
    // Get instance field reference: public System.Single updateError
    [[deprecated("Use field access instead!")]] float& dyn_updateError();
    // Get instance field reference: public System.Single checkTime
    [[deprecated("Use field access instead!")]] float& dyn_checkTime();
    // Get instance field reference: private UnityEngine.Bounds prevBounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_prevBounds();
    // Get instance field reference: private UnityEngine.Quaternion prevRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_prevRotation();
    // Get instance field reference: private System.Boolean prevEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_prevEnabled();
    // Get instance field reference: private System.Single lastCheckTime
    [[deprecated("Use field access instead!")]] float& dyn_lastCheckTime();
    // private System.Void Start()
    // Offset: 0xF44464
    void Start();
    // private System.Void Update()
    // Offset: 0xF445C8
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0xF44D18
    void OnDestroy();
    // public System.Void DoUpdateGraphs()
    // Offset: 0xF449C0
    void DoUpdateGraphs();
    // static private System.Single BoundsVolume(UnityEngine.Bounds b)
    // Offset: 0xF44E3C
    static float BoundsVolume(::UnityEngine::Bounds b);
    // public System.Void .ctor()
    // Offset: 0xF44EE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicGridObstacle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DynamicGridObstacle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicGridObstacle*, creationType>()));
    }
  }; // DynamicGridObstacle
  #pragma pack(pop)
  static check_size<sizeof(DynamicGridObstacle), 92 + sizeof(float)> __GlobalNamespace_DynamicGridObstacleSizeCheck;
  static_assert(sizeof(DynamicGridObstacle) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DynamicGridObstacle::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicGridObstacle::*)()>(&GlobalNamespace::DynamicGridObstacle::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicGridObstacle*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicGridObstacle::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicGridObstacle::*)()>(&GlobalNamespace::DynamicGridObstacle::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicGridObstacle*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicGridObstacle::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicGridObstacle::*)()>(&GlobalNamespace::DynamicGridObstacle::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicGridObstacle*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicGridObstacle::DoUpdateGraphs
// Il2CppName: DoUpdateGraphs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicGridObstacle::*)()>(&GlobalNamespace::DynamicGridObstacle::DoUpdateGraphs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicGridObstacle*), "DoUpdateGraphs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicGridObstacle::BoundsVolume
// Il2CppName: BoundsVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Bounds)>(&GlobalNamespace::DynamicGridObstacle::BoundsVolume)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicGridObstacle*), "BoundsVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicGridObstacle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
