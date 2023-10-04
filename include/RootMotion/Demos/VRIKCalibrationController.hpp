// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.Demos
namespace RootMotion::Demos {
  // Forward declaring type: VRIKCalibrationController
  class VRIKCalibrationController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::Demos::VRIKCalibrationController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Demos::VRIKCalibrationController*, "RootMotion.Demos", "VRIKCalibrationController");
// Type namespace: RootMotion.Demos
namespace RootMotion::Demos {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Demos.VRIKCalibrationController
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIKCalibrationController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAC5DD4
    // public RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::VRIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5E0C
    // public RootMotion.FinalIK.VRIKCalibrator/Settings settings
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::FinalIK::VRIKCalibrator::Settings* settings;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::VRIKCalibrator::Settings*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5E44
    // public UnityEngine.Transform headTracker
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* headTracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5E7C
    // public UnityEngine.Transform bodyTracker
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* bodyTracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5EB4
    // public UnityEngine.Transform leftHandTracker
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* leftHandTracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5EEC
    // public UnityEngine.Transform rightHandTracker
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* rightHandTracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5F24
    // public UnityEngine.Transform leftFootTracker
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* leftFootTracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC5F5C
    // public UnityEngine.Transform rightFootTracker
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* rightFootTracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.VRIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::VRIK*& dyn_ik();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/Settings settings
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::VRIKCalibrator::Settings*& dyn_settings();
    // Get instance field reference: public UnityEngine.Transform headTracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_headTracker();
    // Get instance field reference: public UnityEngine.Transform bodyTracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bodyTracker();
    // Get instance field reference: public UnityEngine.Transform leftHandTracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftHandTracker();
    // Get instance field reference: public UnityEngine.Transform rightHandTracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightHandTracker();
    // Get instance field reference: public UnityEngine.Transform leftFootTracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftFootTracker();
    // Get instance field reference: public UnityEngine.Transform rightFootTracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightFootTracker();
    // private System.Void LateUpdate()
    // Offset: 0x1EA50CC
    void LateUpdate();
    // private System.Void Calibrate()
    // Offset: 0x1EA5108
    void Calibrate();
    // public System.Void .ctor()
    // Offset: 0x1EA513C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKCalibrationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::Demos::VRIKCalibrationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKCalibrationController*, creationType>()));
    }
  }; // RootMotion.Demos.VRIKCalibrationController
  #pragma pack(pop)
  static check_size<sizeof(VRIKCalibrationController), 80 + sizeof(::UnityEngine::Transform*)> __RootMotion_Demos_VRIKCalibrationControllerSizeCheck;
  static_assert(sizeof(VRIKCalibrationController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Demos::VRIKCalibrationController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::VRIKCalibrationController::*)()>(&RootMotion::Demos::VRIKCalibrationController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::VRIKCalibrationController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::VRIKCalibrationController::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::VRIKCalibrationController::*)()>(&RootMotion::Demos::VRIKCalibrationController::Calibrate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::VRIKCalibrationController*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::VRIKCalibrationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
