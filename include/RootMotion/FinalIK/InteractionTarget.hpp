// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: RootMotion.FinalIK.InteractionObject/WeightCurve
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTarget);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTarget*, "RootMotion.FinalIK", "InteractionTarget");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTarget
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: AC1A88
  // [AddComponentMenu] Offset: AC1A88
  class InteractionTarget : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::FinalIK::InteractionTarget::Multiplier
    class Multiplier;
    public:
    // [TooltipAttribute] Offset: 0xAC4EA4
    // public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    // Size: 0x4
    // Offset: 0x18
    ::RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // Padding between fields: effectorType and: multipliers
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xAC4EDC
    // public RootMotion.FinalIK.InteractionTarget/Multiplier[] multipliers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::RootMotion::FinalIK::InteractionTarget::Multiplier*> multipliers;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::InteractionTarget::Multiplier*>) == 0x8);
    // [TooltipAttribute] Offset: 0xAC4F14
    // public System.Single interactionSpeedMlp
    // Size: 0x4
    // Offset: 0x28
    float interactionSpeedMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: interactionSpeedMlp and: pivot
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0xAC4F4C
    // public UnityEngine.Transform pivot
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* pivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC4F84
    // public UnityEngine.Vector3 twistAxis
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 twistAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xAC4FBC
    // public System.Single twistWeight
    // Size: 0x4
    // Offset: 0x44
    float twistWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAC4FF4
    // public System.Single swingWeight
    // Size: 0x4
    // Offset: 0x48
    float swingWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAC502C
    // public System.Boolean rotateOnce
    // Size: 0x1
    // Offset: 0x4C
    bool rotateOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rotateOnce and: defaultLocalRotation
    char __padding7[0x3] = {};
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform lastPivot
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Transform* lastPivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedEffector& dyn_effectorType();
    // Get instance field reference: public RootMotion.FinalIK.InteractionTarget/Multiplier[] multipliers
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::InteractionTarget::Multiplier*>& dyn_multipliers();
    // Get instance field reference: public System.Single interactionSpeedMlp
    [[deprecated("Use field access instead!")]] float& dyn_interactionSpeedMlp();
    // Get instance field reference: public UnityEngine.Transform pivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pivot();
    // Get instance field reference: public UnityEngine.Vector3 twistAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_twistAxis();
    // Get instance field reference: public System.Single twistWeight
    [[deprecated("Use field access instead!")]] float& dyn_twistWeight();
    // Get instance field reference: public System.Single swingWeight
    [[deprecated("Use field access instead!")]] float& dyn_swingWeight();
    // Get instance field reference: public System.Boolean rotateOnce
    [[deprecated("Use field access instead!")]] bool& dyn_rotateOnce();
    // Get instance field reference: private UnityEngine.Quaternion defaultLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultLocalRotation();
    // Get instance field reference: private UnityEngine.Transform lastPivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_lastPivot();
    // private System.Void OpenTutorial1()
    // Offset: 0x11778AC
    void OpenTutorial1();
    // private System.Void OpenTutorial2()
    // Offset: 0x11778F8
    void OpenTutorial2();
    // private System.Void OpenTutorial3()
    // Offset: 0x1177944
    void OpenTutorial3();
    // private System.Void OpenTutorial4()
    // Offset: 0x1177990
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x11779DC
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1177A28
    void ASThread();
    // public System.Single GetValue(RootMotion.FinalIK.InteractionObject/WeightCurve/Type curveType)
    // Offset: 0x117097C
    float GetValue(::RootMotion::FinalIK::InteractionObject::WeightCurve::Type curveType);
    // public System.Void ResetRotation()
    // Offset: 0x1177A74
    void ResetRotation();
    // public System.Void RotateTo(UnityEngine.Vector3 position)
    // Offset: 0x1177B40
    void RotateTo(::UnityEngine::Vector3 position);
    // private System.Void OpenUserManual()
    // Offset: 0x11782DC
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1178328
    void OpenScriptReference();
    // public System.Void .ctor()
    // Offset: 0x1178374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTarget*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTarget
  #pragma pack(pop)
  static check_size<sizeof(InteractionTarget), 96 + sizeof(::UnityEngine::Transform*)> __RootMotion_FinalIK_InteractionTargetSizeCheck;
  static_assert(sizeof(InteractionTarget) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::OpenTutorial1
// Il2CppName: OpenTutorial1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::OpenTutorial1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "OpenTutorial1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::OpenTutorial2
// Il2CppName: OpenTutorial2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::OpenTutorial2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "OpenTutorial2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::OpenTutorial3
// Il2CppName: OpenTutorial3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::OpenTutorial3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "OpenTutorial3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::OpenTutorial4
// Il2CppName: OpenTutorial4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::OpenTutorial4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "OpenTutorial4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::InteractionTarget::*)(::RootMotion::FinalIK::InteractionObject::WeightCurve::Type)>(&RootMotion::FinalIK::InteractionTarget::GetValue)> {
  static const MethodInfo* get() {
    static auto* curveType = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject/WeightCurve/Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curveType});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::ResetRotation
// Il2CppName: ResetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::ResetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "ResetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::RotateTo
// Il2CppName: RotateTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::InteractionTarget::RotateTo)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "RotateTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTarget::*)()>(&RootMotion::FinalIK::InteractionTarget::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTarget*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
