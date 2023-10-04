// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionObject
  class InteractionObject;
  // Forward declaring type: Poser
  class Poser;
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
  // Forward declaring type: InteractionSystem
  class InteractionSystem;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionEffector
  class InteractionEffector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionEffector*, "RootMotion.FinalIK", "InteractionEffector");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionEffector : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAC4A18
    // private RootMotion.FinalIK.FullBodyBipedEffector <effectorType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAC4A28
    // private System.Boolean <isPaused>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPaused and: interactionObject
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAC4A38
    // private RootMotion.FinalIK.InteractionObject <interactionObject>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::InteractionObject* interactionObject;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionObject*) == 0x8);
    // private RootMotion.FinalIK.Poser poser
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::FinalIK::Poser* poser;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::Poser*) == 0x8);
    // private RootMotion.FinalIK.IKEffector effector
    // Size: 0x8
    // Offset: 0x28
    ::RootMotion::FinalIK::IKEffector* effector;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKEffector*) == 0x8);
    // private System.Single timer
    // Size: 0x4
    // Offset: 0x30
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single length
    // Size: 0x4
    // Offset: 0x34
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single weight
    // Size: 0x4
    // Offset: 0x38
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeInSpeed
    // Size: 0x4
    // Offset: 0x3C
    float fadeInSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPositionWeight
    // Size: 0x4
    // Offset: 0x40
    float defaultPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultRotationWeight
    // Size: 0x4
    // Offset: 0x44
    float defaultRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPull
    // Size: 0x4
    // Offset: 0x48
    float defaultPull;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultReach
    // Size: 0x4
    // Offset: 0x4C
    float defaultReach;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPush
    // Size: 0x4
    // Offset: 0x50
    float defaultPush;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPushParent
    // Size: 0x4
    // Offset: 0x54
    float defaultPushParent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single resetTimer
    // Size: 0x4
    // Offset: 0x58
    float resetTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean positionWeightUsed
    // Size: 0x1
    // Offset: 0x5C
    bool positionWeightUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean rotationWeightUsed
    // Size: 0x1
    // Offset: 0x5D
    bool rotationWeightUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pullUsed
    // Size: 0x1
    // Offset: 0x5E
    bool pullUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean reachUsed
    // Size: 0x1
    // Offset: 0x5F
    bool reachUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pushUsed
    // Size: 0x1
    // Offset: 0x60
    bool pushUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pushParentUsed
    // Size: 0x1
    // Offset: 0x61
    bool pushParentUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pickedUp
    // Size: 0x1
    // Offset: 0x62
    bool pickedUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean defaults
    // Size: 0x1
    // Offset: 0x63
    bool defaults;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pickUpOnPostFBBIK
    // Size: 0x1
    // Offset: 0x64
    bool pickUpOnPostFBBIK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: pickUpOnPostFBBIK and: pickUpPosition
    char __padding24[0x3] = {};
    // private UnityEngine.Vector3 pickUpPosition
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 pickUpPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 pausePositionRelative
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 pausePositionRelative;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion pickUpRotation
    // Size: 0x10
    // Offset: 0x80
    ::UnityEngine::Quaternion pickUpRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion pauseRotationRelative
    // Size: 0x10
    // Offset: 0x90
    ::UnityEngine::Quaternion pauseRotationRelative;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private RootMotion.FinalIK.InteractionTarget interactionTarget
    // Size: 0x8
    // Offset: 0xA0
    ::RootMotion::FinalIK::InteractionTarget* interactionTarget;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionTarget*) == 0x8);
    // private UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.List`1<System.Boolean> triggered
    // Size: 0x8
    // Offset: 0xB0
    ::System::Collections::Generic::List_1<bool>* triggered;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<bool>*) == 0x8);
    // private RootMotion.FinalIK.InteractionSystem interactionSystem
    // Size: 0x8
    // Offset: 0xB8
    ::RootMotion::FinalIK::InteractionSystem* interactionSystem;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionSystem*) == 0x8);
    // private System.Boolean started
    // Size: 0x1
    // Offset: 0xC0
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private RootMotion.FinalIK.FullBodyBipedEffector <effectorType>k__BackingField
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedEffector& dyn_$effectorType$k__BackingField();
    // Get instance field reference: private System.Boolean <isPaused>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isPaused$k__BackingField();
    // Get instance field reference: private RootMotion.FinalIK.InteractionObject <interactionObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionObject*& dyn_$interactionObject$k__BackingField();
    // Get instance field reference: private RootMotion.FinalIK.Poser poser
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::Poser*& dyn_poser();
    // Get instance field reference: private RootMotion.FinalIK.IKEffector effector
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKEffector*& dyn_effector();
    // Get instance field reference: private System.Single timer
    [[deprecated("Use field access instead!")]] float& dyn_timer();
    // Get instance field reference: private System.Single length
    [[deprecated("Use field access instead!")]] float& dyn_length();
    // Get instance field reference: private System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: private System.Single fadeInSpeed
    [[deprecated("Use field access instead!")]] float& dyn_fadeInSpeed();
    // Get instance field reference: private System.Single defaultPositionWeight
    [[deprecated("Use field access instead!")]] float& dyn_defaultPositionWeight();
    // Get instance field reference: private System.Single defaultRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_defaultRotationWeight();
    // Get instance field reference: private System.Single defaultPull
    [[deprecated("Use field access instead!")]] float& dyn_defaultPull();
    // Get instance field reference: private System.Single defaultReach
    [[deprecated("Use field access instead!")]] float& dyn_defaultReach();
    // Get instance field reference: private System.Single defaultPush
    [[deprecated("Use field access instead!")]] float& dyn_defaultPush();
    // Get instance field reference: private System.Single defaultPushParent
    [[deprecated("Use field access instead!")]] float& dyn_defaultPushParent();
    // Get instance field reference: private System.Single resetTimer
    [[deprecated("Use field access instead!")]] float& dyn_resetTimer();
    // Get instance field reference: private System.Boolean positionWeightUsed
    [[deprecated("Use field access instead!")]] bool& dyn_positionWeightUsed();
    // Get instance field reference: private System.Boolean rotationWeightUsed
    [[deprecated("Use field access instead!")]] bool& dyn_rotationWeightUsed();
    // Get instance field reference: private System.Boolean pullUsed
    [[deprecated("Use field access instead!")]] bool& dyn_pullUsed();
    // Get instance field reference: private System.Boolean reachUsed
    [[deprecated("Use field access instead!")]] bool& dyn_reachUsed();
    // Get instance field reference: private System.Boolean pushUsed
    [[deprecated("Use field access instead!")]] bool& dyn_pushUsed();
    // Get instance field reference: private System.Boolean pushParentUsed
    [[deprecated("Use field access instead!")]] bool& dyn_pushParentUsed();
    // Get instance field reference: private System.Boolean pickedUp
    [[deprecated("Use field access instead!")]] bool& dyn_pickedUp();
    // Get instance field reference: private System.Boolean defaults
    [[deprecated("Use field access instead!")]] bool& dyn_defaults();
    // Get instance field reference: private System.Boolean pickUpOnPostFBBIK
    [[deprecated("Use field access instead!")]] bool& dyn_pickUpOnPostFBBIK();
    // Get instance field reference: private UnityEngine.Vector3 pickUpPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_pickUpPosition();
    // Get instance field reference: private UnityEngine.Vector3 pausePositionRelative
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_pausePositionRelative();
    // Get instance field reference: private UnityEngine.Quaternion pickUpRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_pickUpRotation();
    // Get instance field reference: private UnityEngine.Quaternion pauseRotationRelative
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_pauseRotationRelative();
    // Get instance field reference: private RootMotion.FinalIK.InteractionTarget interactionTarget
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionTarget*& dyn_interactionTarget();
    // Get instance field reference: private UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Boolean> triggered
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<bool>*& dyn_triggered();
    // Get instance field reference: private RootMotion.FinalIK.InteractionSystem interactionSystem
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionSystem*& dyn_interactionSystem();
    // Get instance field reference: private System.Boolean started
    [[deprecated("Use field access instead!")]] bool& dyn_started();
    // public RootMotion.FinalIK.FullBodyBipedEffector get_effectorType()
    // Offset: 0x20AD130
    ::RootMotion::FinalIK::FullBodyBipedEffector get_effectorType();
    // private System.Void set_effectorType(RootMotion.FinalIK.FullBodyBipedEffector value)
    // Offset: 0x20AD138
    void set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value);
    // public System.Boolean get_isPaused()
    // Offset: 0x20AD140
    bool get_isPaused();
    // private System.Void set_isPaused(System.Boolean value)
    // Offset: 0x20AD148
    void set_isPaused(bool value);
    // public RootMotion.FinalIK.InteractionObject get_interactionObject()
    // Offset: 0x20AD154
    ::RootMotion::FinalIK::InteractionObject* get_interactionObject();
    // private System.Void set_interactionObject(RootMotion.FinalIK.InteractionObject value)
    // Offset: 0x20AD15C
    void set_interactionObject(::RootMotion::FinalIK::InteractionObject* value);
    // public System.Boolean get_inInteraction()
    // Offset: 0x20AD164
    bool get_inInteraction();
    // public System.Void .ctor(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x20AD1D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionEffector* New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionEffector*, creationType>(effectorType)));
    }
    // public System.Void Initiate(RootMotion.FinalIK.InteractionSystem interactionSystem)
    // Offset: 0x20AD258
    void Initiate(::RootMotion::FinalIK::InteractionSystem* interactionSystem);
    // private System.Void StoreDefaults()
    // Offset: 0x20AD334
    void StoreDefaults();
    // public System.Boolean ResetToDefaults(System.Single speed)
    // Offset: 0x20AD598
    bool ResetToDefaults(float speed);
    // public System.Boolean Pause()
    // Offset: 0x20ADB40
    bool Pause();
    // public System.Boolean Resume()
    // Offset: 0x20ADD00
    bool Resume();
    // public System.Boolean Start(RootMotion.FinalIK.InteractionObject interactionObject, System.String tag, System.Single fadeInTime, System.Boolean interrupt)
    // Offset: 0x20ADD90
    bool Start(::RootMotion::FinalIK::InteractionObject* interactionObject, ::StringW tag, float fadeInTime, bool interrupt);
    // public System.Void Update(UnityEngine.Transform root, System.Single speed)
    // Offset: 0x20AE2F4
    void Update(::UnityEngine::Transform* root, float speed);
    // public System.Single get_progress()
    // Offset: 0x20AF544
    float get_progress();
    // private System.Void TriggerUntriggeredEvents(System.Boolean checkTime, out System.Boolean pickUp, out System.Boolean pause)
    // Offset: 0x20AEC04
    void TriggerUntriggeredEvents(bool checkTime, ByRef<bool> pickUp, ByRef<bool> pause);
    // private System.Void PickUp(UnityEngine.Transform root)
    // Offset: 0x20AF0D0
    void PickUp(::UnityEngine::Transform* root);
    // public System.Boolean Stop()
    // Offset: 0x20AF39C
    bool Stop();
    // public System.Void OnPostFBBIK()
    // Offset: 0x20AF580
    void OnPostFBBIK();
  }; // RootMotion.FinalIK.InteractionEffector
  #pragma pack(pop)
  static check_size<sizeof(InteractionEffector), 192 + sizeof(bool)> __RootMotion_FinalIK_InteractionEffectorSizeCheck;
  static_assert(sizeof(InteractionEffector) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::get_effectorType
// Il2CppName: get_effectorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::FullBodyBipedEffector (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::get_effectorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "get_effectorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::set_effectorType
// Il2CppName: set_effectorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&RootMotion::FinalIK::InteractionEffector::set_effectorType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedEffector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "set_effectorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::get_isPaused
// Il2CppName: get_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::get_isPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "get_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::set_isPaused
// Il2CppName: set_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(bool)>(&RootMotion::FinalIK::InteractionEffector::set_isPaused)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "set_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::get_interactionObject
// Il2CppName: get_interactionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionObject* (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::get_interactionObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "get_interactionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::set_interactionObject
// Il2CppName: set_interactionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(::RootMotion::FinalIK::InteractionObject*)>(&RootMotion::FinalIK::InteractionEffector::set_interactionObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "set_interactionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::get_inInteraction
// Il2CppName: get_inInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::get_inInteraction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "get_inInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(::RootMotion::FinalIK::InteractionSystem*)>(&RootMotion::FinalIK::InteractionEffector::Initiate)> {
  static const MethodInfo* get() {
    static auto* interactionSystem = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactionSystem});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::StoreDefaults
// Il2CppName: StoreDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::StoreDefaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "StoreDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::ResetToDefaults
// Il2CppName: ResetToDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)(float)>(&RootMotion::FinalIK::InteractionEffector::ResetToDefaults)> {
  static const MethodInfo* get() {
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "ResetToDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speed});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)(::RootMotion::FinalIK::InteractionObject*, ::StringW, float, bool)>(&RootMotion::FinalIK::InteractionEffector::Start)> {
  static const MethodInfo* get() {
    static auto* interactionObject = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fadeInTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* interrupt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactionObject, tag, fadeInTime, interrupt});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(::UnityEngine::Transform*, float)>(&RootMotion::FinalIK::InteractionEffector::Update)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, speed});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::TriggerUntriggeredEvents
// Il2CppName: TriggerUntriggeredEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(bool, ByRef<bool>, ByRef<bool>)>(&RootMotion::FinalIK::InteractionEffector::TriggerUntriggeredEvents)> {
  static const MethodInfo* get() {
    static auto* checkTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pickUp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "TriggerUntriggeredEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checkTime, pickUp, pause});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::PickUp
// Il2CppName: PickUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::InteractionEffector::PickUp)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "PickUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionEffector::OnPostFBBIK
// Il2CppName: OnPostFBBIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionEffector::*)()>(&RootMotion::FinalIK::InteractionEffector::OnPostFBBIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionEffector*), "OnPostFBBIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};