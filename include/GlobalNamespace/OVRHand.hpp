// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSkeleton/IOVRSkeletonDataProvider
#include "GlobalNamespace/OVRSkeleton_IOVRSkeletonDataProvider.hpp"
// Including type: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
#include "GlobalNamespace/OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider.hpp"
// Including type: OVRMesh/IOVRMeshDataProvider
#include "GlobalNamespace/OVRMesh_IOVRMeshDataProvider.hpp"
// Including type: OVRMeshRenderer/IOVRMeshRendererDataProvider
#include "GlobalNamespace/OVRMeshRenderer_IOVRMeshRendererDataProvider.hpp"
// Including type: OVRPlugin/HandState
#include "GlobalNamespace/OVRPlugin_HandState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TrackingConfidence because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRHand
  class OVRHand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand*, "", "OVRHand");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: OVRHand
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: AB6A1C
  class OVRHand : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider, public ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider, public ::GlobalNamespace::OVRMesh::IOVRMeshDataProvider, public ::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::OVRHand::Hand
    struct Hand;
    // Nested type: ::GlobalNamespace::OVRHand::HandFinger
    struct HandFinger;
    // Nested type: ::GlobalNamespace::OVRHand::TrackingConfidence
    struct TrackingConfidence;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRHand/Hand
    // [TokenAttribute] Offset: FFFFFFFF
    struct Hand/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Hand
      constexpr Hand(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRHand/Hand None
      static constexpr const int None = -1;
      // Get static field: static public OVRHand/Hand None
      static ::GlobalNamespace::OVRHand::Hand _get_None();
      // Set static field: static public OVRHand/Hand None
      static void _set_None(::GlobalNamespace::OVRHand::Hand value);
      // static field const value: static public OVRHand/Hand HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRHand/Hand HandLeft
      static ::GlobalNamespace::OVRHand::Hand _get_HandLeft();
      // Set static field: static public OVRHand/Hand HandLeft
      static void _set_HandLeft(::GlobalNamespace::OVRHand::Hand value);
      // static field const value: static public OVRHand/Hand HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRHand/Hand HandRight
      static ::GlobalNamespace::OVRHand::Hand _get_HandRight();
      // Set static field: static public OVRHand/Hand HandRight
      static void _set_HandRight(::GlobalNamespace::OVRHand::Hand value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRHand/Hand
    #pragma pack(pop)
    static check_size<sizeof(OVRHand::Hand), 0 + sizeof(int)> __GlobalNamespace_OVRHand_HandSizeCheck;
    static_assert(sizeof(OVRHand::Hand) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRHand/TrackingConfidence
    // [TokenAttribute] Offset: FFFFFFFF
    struct TrackingConfidence/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TrackingConfidence
      constexpr TrackingConfidence(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRHand/TrackingConfidence Low
      static constexpr const int Low = 0;
      // Get static field: static public OVRHand/TrackingConfidence Low
      static ::GlobalNamespace::OVRHand::TrackingConfidence _get_Low();
      // Set static field: static public OVRHand/TrackingConfidence Low
      static void _set_Low(::GlobalNamespace::OVRHand::TrackingConfidence value);
      // static field const value: static public OVRHand/TrackingConfidence High
      static constexpr const int High = 1065353216;
      // Get static field: static public OVRHand/TrackingConfidence High
      static ::GlobalNamespace::OVRHand::TrackingConfidence _get_High();
      // Set static field: static public OVRHand/TrackingConfidence High
      static void _set_High(::GlobalNamespace::OVRHand::TrackingConfidence value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRHand/TrackingConfidence
    #pragma pack(pop)
    static check_size<sizeof(OVRHand::TrackingConfidence), 0 + sizeof(int)> __GlobalNamespace_OVRHand_TrackingConfidenceSizeCheck;
    static_assert(sizeof(OVRHand::TrackingConfidence) == 0x4);
    public:
    // private OVRHand/Hand HandType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRHand::Hand HandType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRHand::Hand) == 0x4);
    // Padding between fields: HandType and: pointerPoseRoot
    char __padding0[0x4] = {};
    // private UnityEngine.Transform _pointerPoseRoot
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* pointerPoseRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject _pointerPoseGO
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* pointerPoseGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private OVRPlugin/HandState _handState
    // Size: 0x78
    // Offset: 0x30
    ::GlobalNamespace::OVRPlugin::HandState handState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::HandState) == 0x78);
    // [CompilerGeneratedAttribute] Offset: 0xAB9B6C
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0xA8
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB9B7C
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0xA9
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB9B8C
    // private System.Boolean <IsTracked>k__BackingField
    // Size: 0x1
    // Offset: 0xAA
    bool IsTracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB9B9C
    // private System.Boolean <IsSystemGestureInProgress>k__BackingField
    // Size: 0x1
    // Offset: 0xAB
    bool IsSystemGestureInProgress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB9BAC
    // private System.Boolean <IsPointerPoseValid>k__BackingField
    // Size: 0x1
    // Offset: 0xAC
    bool IsPointerPoseValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPointerPoseValid and: PointerPose
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAB9BBC
    // private UnityEngine.Transform <PointerPose>k__BackingField
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Transform* PointerPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9BCC
    // private System.Single <HandScale>k__BackingField
    // Size: 0x4
    // Offset: 0xB8
    float HandScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAB9BDC
    // private OVRHand/TrackingConfidence <HandConfidence>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    ::GlobalNamespace::OVRHand::TrackingConfidence HandConfidence;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRHand::TrackingConfidence) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAB9BEC
    // private System.Boolean <IsDominantHand>k__BackingField
    // Size: 0x1
    // Offset: 0xC0
    bool IsDominantHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    operator ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider
    operator ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRMesh::IOVRMeshDataProvider
    operator ::GlobalNamespace::OVRMesh::IOVRMeshDataProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRMesh::IOVRMeshDataProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider
    operator ::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OVRHand/Hand HandType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHand::Hand& dyn_HandType();
    // Get instance field reference: private UnityEngine.Transform _pointerPoseRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__pointerPoseRoot();
    // Get instance field reference: private UnityEngine.GameObject _pointerPoseGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__pointerPoseGO();
    // Get instance field reference: private OVRPlugin/HandState _handState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::HandState& dyn__handState();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Boolean <IsTracked>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsTracked$k__BackingField();
    // Get instance field reference: private System.Boolean <IsSystemGestureInProgress>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsSystemGestureInProgress$k__BackingField();
    // Get instance field reference: private System.Boolean <IsPointerPoseValid>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsPointerPoseValid$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <PointerPose>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$PointerPose$k__BackingField();
    // Get instance field reference: private System.Single <HandScale>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$HandScale$k__BackingField();
    // Get instance field reference: private OVRHand/TrackingConfidence <HandConfidence>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHand::TrackingConfidence& dyn_$HandConfidence$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDominantHand>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDominantHand$k__BackingField();
    // public System.Boolean get_IsDataValid()
    // Offset: 0xEA2894
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xEA289C
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xEA28A8
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xEA28B0
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_IsTracked()
    // Offset: 0xEA28BC
    bool get_IsTracked();
    // private System.Void set_IsTracked(System.Boolean value)
    // Offset: 0xEA28C4
    void set_IsTracked(bool value);
    // public System.Boolean get_IsSystemGestureInProgress()
    // Offset: 0xEA28D0
    bool get_IsSystemGestureInProgress();
    // private System.Void set_IsSystemGestureInProgress(System.Boolean value)
    // Offset: 0xEA28D8
    void set_IsSystemGestureInProgress(bool value);
    // public System.Boolean get_IsPointerPoseValid()
    // Offset: 0xEA28E4
    bool get_IsPointerPoseValid();
    // private System.Void set_IsPointerPoseValid(System.Boolean value)
    // Offset: 0xEA28EC
    void set_IsPointerPoseValid(bool value);
    // public UnityEngine.Transform get_PointerPose()
    // Offset: 0xEA28F8
    ::UnityEngine::Transform* get_PointerPose();
    // private System.Void set_PointerPose(UnityEngine.Transform value)
    // Offset: 0xEA2900
    void set_PointerPose(::UnityEngine::Transform* value);
    // public System.Single get_HandScale()
    // Offset: 0xEA2908
    float get_HandScale();
    // private System.Void set_HandScale(System.Single value)
    // Offset: 0xEA2910
    void set_HandScale(float value);
    // public OVRHand/TrackingConfidence get_HandConfidence()
    // Offset: 0xEA2918
    ::GlobalNamespace::OVRHand::TrackingConfidence get_HandConfidence();
    // private System.Void set_HandConfidence(OVRHand/TrackingConfidence value)
    // Offset: 0xEA2920
    void set_HandConfidence(::GlobalNamespace::OVRHand::TrackingConfidence value);
    // public System.Boolean get_IsDominantHand()
    // Offset: 0xEA2928
    bool get_IsDominantHand();
    // private System.Void set_IsDominantHand(System.Boolean value)
    // Offset: 0xEA2930
    void set_IsDominantHand(bool value);
    // private System.Void Awake()
    // Offset: 0xEA293C
    void Awake();
    // private System.Void Update()
    // Offset: 0xEA2C64
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0xEA2C6C
    void FixedUpdate();
    // private System.Void GetHandState(OVRPlugin/Step step)
    // Offset: 0xEA2A28
    void GetHandState(::GlobalNamespace::OVRPlugin::Step step);
    // public System.Boolean GetFingerIsPinching(OVRHand/HandFinger finger)
    // Offset: 0xEA2CF0
    bool GetFingerIsPinching(::GlobalNamespace::OVRHand::HandFinger finger);
    // public System.Single GetFingerPinchStrength(OVRHand/HandFinger finger)
    // Offset: 0xEA2D1C
    float GetFingerPinchStrength(::GlobalNamespace::OVRHand::HandFinger finger);
    // public OVRHand/TrackingConfidence GetFingerConfidence(OVRHand/HandFinger finger)
    // Offset: 0xEA2D78
    ::GlobalNamespace::OVRHand::TrackingConfidence GetFingerConfidence(::GlobalNamespace::OVRHand::HandFinger finger);
    // private OVRSkeleton/SkeletonType OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType()
    // Offset: 0xEA2DD8
    ::GlobalNamespace::OVRSkeleton::SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();
    // private OVRSkeleton/SkeletonPoseData OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData()
    // Offset: 0xEA2DF0
    ::GlobalNamespace::OVRSkeleton::SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();
    // private OVRSkeletonRenderer/SkeletonRendererData OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData()
    // Offset: 0xEA2EB8
    ::GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();
    // private OVRMesh/MeshType OVRMesh.IOVRMeshDataProvider.GetMeshType()
    // Offset: 0xEA2F40
    ::GlobalNamespace::OVRMesh::MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType();
    // private OVRMeshRenderer/MeshRendererData OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData()
    // Offset: 0xEA2F6C
    ::GlobalNamespace::OVRMeshRenderer::MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData();
    // public System.Void .ctor()
    // Offset: 0xEA2FF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHand*, creationType>()));
    }
  }; // OVRHand
  #pragma pack(pop)
  static check_size<sizeof(OVRHand), 192 + sizeof(bool)> __GlobalNamespace_OVRHandSizeCheck;
  static_assert(sizeof(OVRHand) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand::TrackingConfidence, "", "OVRHand/TrackingConfidence");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand::Hand, "", "OVRHand/Hand");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(bool)>(&GlobalNamespace::OVRHand::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(bool)>(&GlobalNamespace::OVRHand::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_IsTracked
// Il2CppName: get_IsTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_IsTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_IsTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_IsTracked
// Il2CppName: set_IsTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(bool)>(&GlobalNamespace::OVRHand::set_IsTracked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_IsTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_IsSystemGestureInProgress
// Il2CppName: get_IsSystemGestureInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_IsSystemGestureInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_IsSystemGestureInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_IsSystemGestureInProgress
// Il2CppName: set_IsSystemGestureInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(bool)>(&GlobalNamespace::OVRHand::set_IsSystemGestureInProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_IsSystemGestureInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_IsPointerPoseValid
// Il2CppName: get_IsPointerPoseValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_IsPointerPoseValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_IsPointerPoseValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_IsPointerPoseValid
// Il2CppName: set_IsPointerPoseValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(bool)>(&GlobalNamespace::OVRHand::set_IsPointerPoseValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_IsPointerPoseValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_PointerPose
// Il2CppName: get_PointerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_PointerPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_PointerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_PointerPose
// Il2CppName: set_PointerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRHand::set_PointerPose)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_PointerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_HandScale
// Il2CppName: get_HandScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_HandScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_HandScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_HandScale
// Il2CppName: set_HandScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(float)>(&GlobalNamespace::OVRHand::set_HandScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_HandScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_HandConfidence
// Il2CppName: get_HandConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHand::TrackingConfidence (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_HandConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_HandConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_HandConfidence
// Il2CppName: set_HandConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand::TrackingConfidence)>(&GlobalNamespace::OVRHand::set_HandConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRHand/TrackingConfidence")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_HandConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::get_IsDominantHand
// Il2CppName: get_IsDominantHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::get_IsDominantHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "get_IsDominantHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::set_IsDominantHand
// Il2CppName: set_IsDominantHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(bool)>(&GlobalNamespace::OVRHand::set_IsDominantHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "set_IsDominantHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::GetHandState
// Il2CppName: GetHandState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRPlugin::Step)>(&GlobalNamespace::OVRHand::GetHandState)> {
  static const MethodInfo* get() {
    static auto* step = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Step")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "GetHandState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{step});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::GetFingerIsPinching
// Il2CppName: GetFingerIsPinching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand::HandFinger)>(&GlobalNamespace::OVRHand::GetFingerIsPinching)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("", "OVRHand/HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "GetFingerIsPinching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::GetFingerPinchStrength
// Il2CppName: GetFingerPinchStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand::HandFinger)>(&GlobalNamespace::OVRHand::GetFingerPinchStrength)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("", "OVRHand/HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "GetFingerPinchStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::GetFingerConfidence
// Il2CppName: GetFingerConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHand::TrackingConfidence (GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand::HandFinger)>(&GlobalNamespace::OVRHand::GetFingerConfidence)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("", "OVRHand/HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "GetFingerConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType
// Il2CppName: OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonType (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
// Il2CppName: OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonPoseData (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData
// Il2CppName: OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType
// Il2CppName: OVRMesh.IOVRMeshDataProvider.GetMeshType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMesh::MeshType (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "OVRMesh.IOVRMeshDataProvider.GetMeshType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData
// Il2CppName: OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshRenderer::MeshRendererData (GlobalNamespace::OVRHand::*)()>(&GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHand*), "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!