// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.InteractionSystem.Hand/AttachmentFlags
#include "Valve/VR/InteractionSystem/Hand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: VelocityEstimator
  class VelocityEstimator;
  // Skipping declaration: Hand because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Throwable
  class Throwable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::Throwable);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::Throwable*, "Valve.VR.InteractionSystem", "Throwable");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.Throwable
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD0B34
  // [RequireComponent] Offset: AD0B34
  // [RequireComponent] Offset: AD0B34
  class Throwable : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Valve::VR::InteractionSystem::Throwable::$LateDetach$d__24
    class $LateDetach$d__24;
    public:
    // [TooltipAttribute] Offset: 0xADE57C
    // public Valve.VR.InteractionSystem.Hand/AttachmentFlags attachmentFlags
    // Size: 0x4
    // Offset: 0x18
    ::Valve::VR::InteractionSystem::Hand::AttachmentFlags attachmentFlags;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Hand::AttachmentFlags) == 0x4);
    // Padding between fields: attachmentFlags and: attachmentPoint
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xADE5C8
    // public System.String attachmentPoint
    // Size: 0x8
    // Offset: 0x20
    ::StringW attachmentPoint;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0xADE600
    // public System.Single catchSpeedThreshold
    // Size: 0x4
    // Offset: 0x28
    float catchSpeedThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADE638
    // public System.Boolean restoreOriginalParent
    // Size: 0x1
    // Offset: 0x2C
    bool restoreOriginalParent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean attachEaseIn
    // Size: 0x1
    // Offset: 0x2D
    bool attachEaseIn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: attachEaseIn and: snapAttachEaseInCurve
    char __padding4[0x2] = {};
    // public UnityEngine.AnimationCurve snapAttachEaseInCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* snapAttachEaseInCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single snapAttachEaseInTime
    // Size: 0x4
    // Offset: 0x38
    float snapAttachEaseInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: snapAttachEaseInTime and: attachEaseInAttachmentNames
    char __padding6[0x4] = {};
    // public System.String[] attachEaseInAttachmentNames
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::StringW> attachEaseInAttachmentNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private Valve.VR.InteractionSystem.VelocityEstimator velocityEstimator
    // Size: 0x8
    // Offset: 0x48
    ::Valve::VR::InteractionSystem::VelocityEstimator* velocityEstimator;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::VelocityEstimator*) == 0x8);
    // private System.Boolean attached
    // Size: 0x1
    // Offset: 0x50
    bool attached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: attached and: attachTime
    char __padding9[0x3] = {};
    // private System.Single attachTime
    // Size: 0x4
    // Offset: 0x54
    float attachTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 attachPosition
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 attachPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion attachRotation
    // Size: 0x10
    // Offset: 0x64
    ::UnityEngine::Quaternion attachRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // Padding between fields: attachRotation and: attachEaseInTransform
    char __padding12[0x4] = {};
    // private UnityEngine.Transform attachEaseInTransform
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Transform* attachEaseInTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Events.UnityEvent onPickUp
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Events::UnityEvent* onPickUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent onDetachFromHand
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Events::UnityEvent* onDetachFromHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public System.Boolean snapAttachEaseInCompleted
    // Size: 0x1
    // Offset: 0x90
    bool snapAttachEaseInCompleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Valve.VR.InteractionSystem.Hand/AttachmentFlags attachmentFlags
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Hand::AttachmentFlags& dyn_attachmentFlags();
    // Get instance field reference: public System.String attachmentPoint
    [[deprecated("Use field access instead!")]] ::StringW& dyn_attachmentPoint();
    // Get instance field reference: public System.Single catchSpeedThreshold
    [[deprecated("Use field access instead!")]] float& dyn_catchSpeedThreshold();
    // Get instance field reference: public System.Boolean restoreOriginalParent
    [[deprecated("Use field access instead!")]] bool& dyn_restoreOriginalParent();
    // Get instance field reference: public System.Boolean attachEaseIn
    [[deprecated("Use field access instead!")]] bool& dyn_attachEaseIn();
    // Get instance field reference: public UnityEngine.AnimationCurve snapAttachEaseInCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_snapAttachEaseInCurve();
    // Get instance field reference: public System.Single snapAttachEaseInTime
    [[deprecated("Use field access instead!")]] float& dyn_snapAttachEaseInTime();
    // Get instance field reference: public System.String[] attachEaseInAttachmentNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_attachEaseInAttachmentNames();
    // Get instance field reference: private Valve.VR.InteractionSystem.VelocityEstimator velocityEstimator
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::VelocityEstimator*& dyn_velocityEstimator();
    // Get instance field reference: private System.Boolean attached
    [[deprecated("Use field access instead!")]] bool& dyn_attached();
    // Get instance field reference: private System.Single attachTime
    [[deprecated("Use field access instead!")]] float& dyn_attachTime();
    // Get instance field reference: private UnityEngine.Vector3 attachPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_attachPosition();
    // Get instance field reference: private UnityEngine.Quaternion attachRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_attachRotation();
    // Get instance field reference: private UnityEngine.Transform attachEaseInTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_attachEaseInTransform();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onPickUp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onPickUp();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onDetachFromHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onDetachFromHand();
    // Get instance field reference: public System.Boolean snapAttachEaseInCompleted
    [[deprecated("Use field access instead!")]] bool& dyn_snapAttachEaseInCompleted();
    // private System.Void Awake()
    // Offset: 0xDC9388
    void Awake();
    // private System.Void OnHandHoverBegin(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDC9424
    void OnHandHoverBegin(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnHandHoverEnd(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDC952C
    void OnHandHoverEnd(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void HandHoverUpdate(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDC95B8
    void HandHoverUpdate(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnAttachedToHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDC96B8
    void OnAttachedToHand(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnDetachedFromHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDC99F8
    void OnDetachedFromHand(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void HandAttachedUpdate(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDCA42C
    void HandAttachedUpdate(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Collections.IEnumerator LateDetach(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDCA720
    ::System::Collections::IEnumerator* LateDetach(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnHandFocusAcquired(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDCA7E4
    void OnHandFocusAcquired(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnHandFocusLost(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0xDCA838
    void OnHandFocusLost(::Valve::VR::InteractionSystem::Hand* hand);
    // public System.Void .ctor()
    // Offset: 0xDCA8A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Throwable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::Throwable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Throwable*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.Throwable
  #pragma pack(pop)
  static check_size<sizeof(Throwable), 144 + sizeof(bool)> __Valve_VR_InteractionSystem_ThrowableSizeCheck;
  static_assert(sizeof(Throwable) == 0x91);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)()>(&Valve::VR::InteractionSystem::Throwable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::OnHandHoverBegin
// Il2CppName: OnHandHoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::OnHandHoverBegin)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "OnHandHoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::OnHandHoverEnd
// Il2CppName: OnHandHoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::OnHandHoverEnd)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "OnHandHoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::HandHoverUpdate
// Il2CppName: HandHoverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::HandHoverUpdate)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "HandHoverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::OnAttachedToHand
// Il2CppName: OnAttachedToHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::OnAttachedToHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "OnAttachedToHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::OnDetachedFromHand
// Il2CppName: OnDetachedFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::OnDetachedFromHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "OnDetachedFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::HandAttachedUpdate
// Il2CppName: HandAttachedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::HandAttachedUpdate)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "HandAttachedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::LateDetach
// Il2CppName: LateDetach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::LateDetach)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "LateDetach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::OnHandFocusAcquired
// Il2CppName: OnHandFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::OnHandFocusAcquired)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "OnHandFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::OnHandFocusLost
// Il2CppName: OnHandFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Throwable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Throwable::OnHandFocusLost)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Throwable*), "OnHandFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Throwable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
