// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlickerLight
  class FlickerLight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlickerLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlickerLight*, "", "FlickerLight");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: FlickerLight
  // [TokenAttribute] Offset: FFFFFFFF
  class FlickerLight : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single MinLightIntensity
    // Size: 0x4
    // Offset: 0x18
    float MinLightIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxLightIntensity
    // Size: 0x4
    // Offset: 0x1C
    float MaxLightIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AccelerateTime
    // Size: 0x4
    // Offset: 0x20
    float AccelerateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetIntensity
    // Size: 0x4
    // Offset: 0x24
    float targetIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastIntensity
    // Size: 0x4
    // Offset: 0x28
    float lastIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timePassed
    // Size: 0x4
    // Offset: 0x2C
    float timePassed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Light _lt
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Light* lt;
    // Field size check
    static_assert(sizeof(::UnityEngine::Light*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Double Tolerance
    static constexpr const double Tolerance = 0.0001;
    // Get static field: static private System.Double Tolerance
    static double _get_Tolerance();
    // Set static field: static private System.Double Tolerance
    static void _set_Tolerance(double value);
    // Get instance field reference: public System.Single MinLightIntensity
    [[deprecated("Use field access instead!")]] float& dyn_MinLightIntensity();
    // Get instance field reference: public System.Single MaxLightIntensity
    [[deprecated("Use field access instead!")]] float& dyn_MaxLightIntensity();
    // Get instance field reference: public System.Single AccelerateTime
    [[deprecated("Use field access instead!")]] float& dyn_AccelerateTime();
    // Get instance field reference: private System.Single _targetIntensity
    [[deprecated("Use field access instead!")]] float& dyn__targetIntensity();
    // Get instance field reference: private System.Single _lastIntensity
    [[deprecated("Use field access instead!")]] float& dyn__lastIntensity();
    // Get instance field reference: private System.Single _timePassed
    [[deprecated("Use field access instead!")]] float& dyn__timePassed();
    // Get instance field reference: private UnityEngine.Light _lt
    [[deprecated("Use field access instead!")]] ::UnityEngine::Light*& dyn__lt();
    // private System.Void Start()
    // Offset: 0x1509F3C
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x1509FB4
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x150A0EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlickerLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlickerLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlickerLight*, creationType>()));
    }
  }; // FlickerLight
  #pragma pack(pop)
  static check_size<sizeof(FlickerLight), 48 + sizeof(::UnityEngine::Light*)> __GlobalNamespace_FlickerLightSizeCheck;
  static_assert(sizeof(FlickerLight) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlickerLight::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickerLight::*)()>(&GlobalNamespace::FlickerLight::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickerLight*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickerLight::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickerLight::*)()>(&GlobalNamespace::FlickerLight::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickerLight*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickerLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!