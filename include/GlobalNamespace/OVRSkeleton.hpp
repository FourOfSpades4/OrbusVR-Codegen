// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/Skeleton2
#include "GlobalNamespace/OVRPlugin_Skeleton2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBone
  class OVRBone;
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
  // Skipping declaration: SkeletonType because it is already included!
}
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
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeleton
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: AB6B0C
  class OVRSkeleton : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    class IOVRSkeletonDataProvider;
    // Nested type: ::GlobalNamespace::OVRSkeleton::SkeletonPoseData
    struct SkeletonPoseData;
    // Nested type: ::GlobalNamespace::OVRSkeleton::SkeletonType
    struct SkeletonType;
    // Nested type: ::GlobalNamespace::OVRSkeleton::BoneId
    struct BoneId;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRSkeleton/SkeletonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct SkeletonType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SkeletonType
      constexpr SkeletonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSkeleton/SkeletonType None
      static constexpr const int None = -1;
      // Get static field: static public OVRSkeleton/SkeletonType None
      static ::GlobalNamespace::OVRSkeleton::SkeletonType _get_None();
      // Set static field: static public OVRSkeleton/SkeletonType None
      static void _set_None(::GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRSkeleton/SkeletonType HandLeft
      static ::GlobalNamespace::OVRSkeleton::SkeletonType _get_HandLeft();
      // Set static field: static public OVRSkeleton/SkeletonType HandLeft
      static void _set_HandLeft(::GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRSkeleton/SkeletonType HandRight
      static ::GlobalNamespace::OVRSkeleton::SkeletonType _get_HandRight();
      // Set static field: static public OVRSkeleton/SkeletonType HandRight
      static void _set_HandRight(::GlobalNamespace::OVRSkeleton::SkeletonType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRSkeleton/SkeletonType
    #pragma pack(pop)
    static check_size<sizeof(OVRSkeleton::SkeletonType), 0 + sizeof(int)> __GlobalNamespace_OVRSkeleton_SkeletonTypeSizeCheck;
    static_assert(sizeof(OVRSkeleton::SkeletonType) == 0x4);
    public:
    // protected OVRSkeleton/SkeletonType _skeletonType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRSkeleton::SkeletonType skeletonType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton::SkeletonType) == 0x4);
    // Padding between fields: skeletonType and: dataProvider
    char __padding0[0x4] = {};
    // private OVRSkeleton/IOVRSkeletonDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*) == 0x8);
    // private System.Boolean _updateRootPose
    // Size: 0x1
    // Offset: 0x28
    bool updateRootPose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _updateRootScale
    // Size: 0x1
    // Offset: 0x29
    bool updateRootScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enablePhysicsCapsules
    // Size: 0x1
    // Offset: 0x2A
    bool enablePhysicsCapsules;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enablePhysicsCapsules and: bonesGO
    char __padding4[0x5] = {};
    // private UnityEngine.GameObject _bonesGO
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* bonesGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _bindPosesGO
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* bindPosesGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _capsulesGO
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* capsulesGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.Collections.Generic.List`1<OVRBone> _bones
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* bones;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRBone> _bindPoses
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* bindPoses;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRBoneCapsule> _capsules
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* capsules;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*) == 0x8);
    // protected OVRPlugin/Skeleton2 _skeleton
    // Size: 0x20
    // Offset: 0x60
    ::GlobalNamespace::OVRPlugin::Skeleton2 skeleton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Skeleton2) == 0x20);
    // private readonly UnityEngine.Quaternion wristFixupRotation
    // Size: 0x10
    // Offset: 0x80
    ::UnityEngine::Quaternion wristFixupRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xAB9E9C
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x90
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB9EAC
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x91
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB9EBC
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x92
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDataHighConfidence and: Bones
    char __padding15[0x5] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAB9ECC
    // private System.Collections.Generic.IList`1<OVRBone> <Bones>k__BackingField
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* Bones;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9EDC
    // private System.Collections.Generic.IList`1<OVRBone> <BindPoses>k__BackingField
    // Size: 0x8
    // Offset: 0xA0
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* BindPoses;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9EEC
    // private System.Collections.Generic.IList`1<OVRBoneCapsule> <Capsules>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* Capsules;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9EFC
    // private System.Int32 <SkeletonChangedCount>k__BackingField
    // Size: 0x4
    // Offset: 0xB0
    int SkeletonChangedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected OVRSkeleton/SkeletonType _skeletonType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSkeleton::SkeletonType& dyn__skeletonType();
    // Get instance field reference: private OVRSkeleton/IOVRSkeletonDataProvider _dataProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*& dyn__dataProvider();
    // Get instance field reference: private System.Boolean _updateRootPose
    [[deprecated("Use field access instead!")]] bool& dyn__updateRootPose();
    // Get instance field reference: private System.Boolean _updateRootScale
    [[deprecated("Use field access instead!")]] bool& dyn__updateRootScale();
    // Get instance field reference: private System.Boolean _enablePhysicsCapsules
    [[deprecated("Use field access instead!")]] bool& dyn__enablePhysicsCapsules();
    // Get instance field reference: private UnityEngine.GameObject _bonesGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__bonesGO();
    // Get instance field reference: private UnityEngine.GameObject _bindPosesGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__bindPosesGO();
    // Get instance field reference: private UnityEngine.GameObject _capsulesGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__capsulesGO();
    // Get instance field reference: protected System.Collections.Generic.List`1<OVRBone> _bones
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& dyn__bones();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRBone> _bindPoses
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& dyn__bindPoses();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRBoneCapsule> _capsules
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& dyn__capsules();
    // Get instance field reference: protected OVRPlugin/Skeleton2 _skeleton
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Skeleton2& dyn__skeleton();
    // Get instance field reference: private readonly UnityEngine.Quaternion wristFixupRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_wristFixupRotation();
    // Get instance field reference: private System.Boolean <IsInitialized>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsInitialized$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.IList`1<OVRBone> <Bones>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& dyn_$Bones$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.IList`1<OVRBone> <BindPoses>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& dyn_$BindPoses$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.IList`1<OVRBoneCapsule> <Capsules>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& dyn_$Capsules$k__BackingField();
    // Get instance field reference: private System.Int32 <SkeletonChangedCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$SkeletonChangedCount$k__BackingField();
    // public System.Boolean get_IsInitialized()
    // Offset: 0x14DC1B0
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x14DC1B8
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x14DC1C4
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x14DC1CC
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x14DC1D8
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x14DC1E0
    void set_IsDataHighConfidence(bool value);
    // public System.Collections.Generic.IList`1<OVRBone> get_Bones()
    // Offset: 0x14DC1EC
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_Bones();
    // protected System.Void set_Bones(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0x14DC1F4
    void set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBone> get_BindPoses()
    // Offset: 0x14DC1FC
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_BindPoses();
    // private System.Void set_BindPoses(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0x14DC204
    void set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBoneCapsule> get_Capsules()
    // Offset: 0x14DC20C
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* get_Capsules();
    // private System.Void set_Capsules(System.Collections.Generic.IList`1<OVRBoneCapsule> value)
    // Offset: 0x14DC214
    void set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value);
    // public OVRSkeleton/SkeletonType GetSkeletonType()
    // Offset: 0x14DC21C
    ::GlobalNamespace::OVRSkeleton::SkeletonType GetSkeletonType();
    // public System.Int32 get_SkeletonChangedCount()
    // Offset: 0x14DC224
    int get_SkeletonChangedCount();
    // private System.Void set_SkeletonChangedCount(System.Int32 value)
    // Offset: 0x14DC22C
    void set_SkeletonChangedCount(int value);
    // private System.Void Awake()
    // Offset: 0x14DC234
    void Awake();
    // private System.Void Start()
    // Offset: 0x14DC370
    void Start();
    // private System.Boolean ShouldInitialize()
    // Offset: 0x14DC38C
    bool ShouldInitialize();
    // private System.Void Initialize()
    // Offset: 0x14DC3AC
    void Initialize();
    // protected System.Void InitializeBones()
    // Offset: 0x14DD974
    void InitializeBones();
    // private System.Void InitializeBindPose()
    // Offset: 0x14DC458
    void InitializeBindPose();
    // private System.Void InitializeCapsules()
    // Offset: 0x14DCBE0
    void InitializeCapsules();
    // private System.Void Update()
    // Offset: 0x14DE104
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x14DE6D0
    void FixedUpdate();
    // public OVRSkeleton/BoneId GetCurrentStartBoneId()
    // Offset: 0x14DEB24
    ::GlobalNamespace::OVRSkeleton::BoneId GetCurrentStartBoneId();
    // public OVRSkeleton/BoneId GetCurrentEndBoneId()
    // Offset: 0x14DEB34
    ::GlobalNamespace::OVRSkeleton::BoneId GetCurrentEndBoneId();
    // private OVRSkeleton/BoneId GetCurrentMaxSkinnableBoneId()
    // Offset: 0x14DEB48
    ::GlobalNamespace::OVRSkeleton::BoneId GetCurrentMaxSkinnableBoneId();
    // public System.Int32 GetCurrentNumBones()
    // Offset: 0x14DEB5C
    int GetCurrentNumBones();
    // public System.Int32 GetCurrentNumSkinnableBones()
    // Offset: 0x14DEB70
    int GetCurrentNumSkinnableBones();
    // public System.Void .ctor()
    // Offset: 0x14DEB84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeleton*, creationType>()));
    }
  }; // OVRSkeleton
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeleton), 176 + sizeof(int)> __GlobalNamespace_OVRSkeletonSizeCheck;
  static_assert(sizeof(OVRSkeleton) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton::SkeletonType, "", "OVRSkeleton/SkeletonType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_IsInitialized
// Il2CppName: set_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(bool)>(&GlobalNamespace::OVRSkeleton::set_IsInitialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(bool)>(&GlobalNamespace::OVRSkeleton::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(bool)>(&GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_Bones
// Il2CppName: get_Bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_Bones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_Bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_Bones
// Il2CppName: set_Bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(&GlobalNamespace::OVRSkeleton::set_Bones)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRBone")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_Bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_BindPoses
// Il2CppName: get_BindPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_BindPoses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_BindPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_BindPoses
// Il2CppName: set_BindPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(&GlobalNamespace::OVRSkeleton::set_BindPoses)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRBone")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_BindPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_Capsules
// Il2CppName: get_Capsules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_Capsules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_Capsules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_Capsules
// Il2CppName: set_Capsules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*)>(&GlobalNamespace::OVRSkeleton::set_Capsules)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRBoneCapsule")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_Capsules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetSkeletonType
// Il2CppName: GetSkeletonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonType (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetSkeletonType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetSkeletonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount
// Il2CppName: get_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount
// Il2CppName: set_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(int)>(&GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::ShouldInitialize
// Il2CppName: ShouldInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::ShouldInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "ShouldInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::InitializeBones
// Il2CppName: InitializeBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::InitializeBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "InitializeBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::InitializeBindPose
// Il2CppName: InitializeBindPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::InitializeBindPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "InitializeBindPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::InitializeCapsules
// Il2CppName: InitializeCapsules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::InitializeCapsules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "InitializeCapsules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId
// Il2CppName: GetCurrentStartBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentStartBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId
// Il2CppName: GetCurrentEndBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentEndBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId
// Il2CppName: GetCurrentMaxSkinnableBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentMaxSkinnableBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentNumBones
// Il2CppName: GetCurrentNumBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentNumBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentNumBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones
// Il2CppName: GetCurrentNumSkinnableBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentNumSkinnableBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
