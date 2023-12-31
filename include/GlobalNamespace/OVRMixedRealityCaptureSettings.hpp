// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: OVRManager/CompositionMethod
#include "GlobalNamespace/OVRManager_CompositionMethod.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: OVRManager/CameraDevice
#include "GlobalNamespace/OVRManager_CameraDevice.hpp"
// Including type: OVRManager/DepthQuality
#include "GlobalNamespace/OVRManager_DepthQuality.hpp"
// Including type: OVRManager/VirtualGreenScreenType
#include "GlobalNamespace/OVRManager_VirtualGreenScreenType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRManager
  class OVRManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMixedRealityCaptureSettings
  class OVRMixedRealityCaptureSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureSettings*, "", "OVRMixedRealityCaptureSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: OVRMixedRealityCaptureSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMixedRealityCaptureSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Boolean enableMixedReality
    // Size: 0x1
    // Offset: 0x18
    bool enableMixedReality;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableMixedReality and: extraHiddenLayers
    char __padding0[0x3] = {};
    // public UnityEngine.LayerMask extraHiddenLayers
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::LayerMask extraHiddenLayers;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public OVRManager/CompositionMethod compositionMethod
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRManager_CompositionMethod compositionMethod;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager_CompositionMethod) == 0x4);
    // public UnityEngine.Color externalCompositionBackdropColorRift
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color externalCompositionBackdropColorRift;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color externalCompositionBackdropColorQuest
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color externalCompositionBackdropColorQuest;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public OVRManager/CameraDevice capturingCameraDevice
    // Size: 0x4
    // Offset: 0x44
    ::GlobalNamespace::OVRManager_CameraDevice capturingCameraDevice;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager_CameraDevice) == 0x4);
    // public System.Boolean flipCameraFrameHorizontally
    // Size: 0x1
    // Offset: 0x48
    bool flipCameraFrameHorizontally;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean flipCameraFrameVertically
    // Size: 0x1
    // Offset: 0x49
    bool flipCameraFrameVertically;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flipCameraFrameVertically and: handPoseStateLatency
    char __padding7[0x2] = {};
    // public System.Single handPoseStateLatency
    // Size: 0x4
    // Offset: 0x4C
    float handPoseStateLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sandwichCompositionRenderLatency
    // Size: 0x4
    // Offset: 0x50
    float sandwichCompositionRenderLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 sandwichCompositionBufferedFrames
    // Size: 0x4
    // Offset: 0x54
    int sandwichCompositionBufferedFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color chromaKeyColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color chromaKeyColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single chromaKeySimilarity
    // Size: 0x4
    // Offset: 0x68
    float chromaKeySimilarity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single chromaKeySmoothRange
    // Size: 0x4
    // Offset: 0x6C
    float chromaKeySmoothRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single chromaKeySpillRange
    // Size: 0x4
    // Offset: 0x70
    float chromaKeySpillRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useDynamicLighting
    // Size: 0x1
    // Offset: 0x74
    bool useDynamicLighting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useDynamicLighting and: depthQuality
    char __padding15[0x3] = {};
    // public OVRManager/DepthQuality depthQuality
    // Size: 0x4
    // Offset: 0x78
    ::GlobalNamespace::OVRManager_DepthQuality depthQuality;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager_DepthQuality) == 0x4);
    // public System.Single dynamicLightingSmoothFactor
    // Size: 0x4
    // Offset: 0x7C
    float dynamicLightingSmoothFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single dynamicLightingDepthVariationClampingValue
    // Size: 0x4
    // Offset: 0x80
    float dynamicLightingDepthVariationClampingValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRManager/VirtualGreenScreenType virtualGreenScreenType
    // Size: 0x4
    // Offset: 0x84
    ::GlobalNamespace::OVRManager_VirtualGreenScreenType virtualGreenScreenType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager_VirtualGreenScreenType) == 0x4);
    // public System.Single virtualGreenScreenTopY
    // Size: 0x4
    // Offset: 0x88
    float virtualGreenScreenTopY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single virtualGreenScreenBottomY
    // Size: 0x4
    // Offset: 0x8C
    float virtualGreenScreenBottomY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean virtualGreenScreenApplyDepthCulling
    // Size: 0x1
    // Offset: 0x90
    bool virtualGreenScreenApplyDepthCulling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: virtualGreenScreenApplyDepthCulling and: virtualGreenScreenDepthTolerance
    char __padding22[0x3] = {};
    // public System.Single virtualGreenScreenDepthTolerance
    // Size: 0x4
    // Offset: 0x94
    float virtualGreenScreenDepthTolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean enableMixedReality
    [[deprecated("Use field access instead!")]] bool& dyn_enableMixedReality();
    // Get instance field reference: public UnityEngine.LayerMask extraHiddenLayers
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_extraHiddenLayers();
    // Get instance field reference: public OVRManager/CompositionMethod compositionMethod
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager_CompositionMethod& dyn_compositionMethod();
    // Get instance field reference: public UnityEngine.Color externalCompositionBackdropColorRift
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_externalCompositionBackdropColorRift();
    // Get instance field reference: public UnityEngine.Color externalCompositionBackdropColorQuest
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_externalCompositionBackdropColorQuest();
    // Get instance field reference: public OVRManager/CameraDevice capturingCameraDevice
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager_CameraDevice& dyn_capturingCameraDevice();
    // Get instance field reference: public System.Boolean flipCameraFrameHorizontally
    [[deprecated("Use field access instead!")]] bool& dyn_flipCameraFrameHorizontally();
    // Get instance field reference: public System.Boolean flipCameraFrameVertically
    [[deprecated("Use field access instead!")]] bool& dyn_flipCameraFrameVertically();
    // Get instance field reference: public System.Single handPoseStateLatency
    [[deprecated("Use field access instead!")]] float& dyn_handPoseStateLatency();
    // Get instance field reference: public System.Single sandwichCompositionRenderLatency
    [[deprecated("Use field access instead!")]] float& dyn_sandwichCompositionRenderLatency();
    // Get instance field reference: public System.Int32 sandwichCompositionBufferedFrames
    [[deprecated("Use field access instead!")]] int& dyn_sandwichCompositionBufferedFrames();
    // Get instance field reference: public UnityEngine.Color chromaKeyColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_chromaKeyColor();
    // Get instance field reference: public System.Single chromaKeySimilarity
    [[deprecated("Use field access instead!")]] float& dyn_chromaKeySimilarity();
    // Get instance field reference: public System.Single chromaKeySmoothRange
    [[deprecated("Use field access instead!")]] float& dyn_chromaKeySmoothRange();
    // Get instance field reference: public System.Single chromaKeySpillRange
    [[deprecated("Use field access instead!")]] float& dyn_chromaKeySpillRange();
    // Get instance field reference: public System.Boolean useDynamicLighting
    [[deprecated("Use field access instead!")]] bool& dyn_useDynamicLighting();
    // Get instance field reference: public OVRManager/DepthQuality depthQuality
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager_DepthQuality& dyn_depthQuality();
    // Get instance field reference: public System.Single dynamicLightingSmoothFactor
    [[deprecated("Use field access instead!")]] float& dyn_dynamicLightingSmoothFactor();
    // Get instance field reference: public System.Single dynamicLightingDepthVariationClampingValue
    [[deprecated("Use field access instead!")]] float& dyn_dynamicLightingDepthVariationClampingValue();
    // Get instance field reference: public OVRManager/VirtualGreenScreenType virtualGreenScreenType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager_VirtualGreenScreenType& dyn_virtualGreenScreenType();
    // Get instance field reference: public System.Single virtualGreenScreenTopY
    [[deprecated("Use field access instead!")]] float& dyn_virtualGreenScreenTopY();
    // Get instance field reference: public System.Single virtualGreenScreenBottomY
    [[deprecated("Use field access instead!")]] float& dyn_virtualGreenScreenBottomY();
    // Get instance field reference: public System.Boolean virtualGreenScreenApplyDepthCulling
    [[deprecated("Use field access instead!")]] bool& dyn_virtualGreenScreenApplyDepthCulling();
    // Get instance field reference: public System.Single virtualGreenScreenDepthTolerance
    [[deprecated("Use field access instead!")]] float& dyn_virtualGreenScreenDepthTolerance();
    // public System.Void ReadFrom(OVRManager manager)
    // Offset: 0x1254F48
    void ReadFrom(::GlobalNamespace::OVRManager* manager);
    // public System.Void ApplyTo(OVRManager manager)
    // Offset: 0x1255220
    void ApplyTo(::GlobalNamespace::OVRManager* manager);
    // public System.Void .ctor()
    // Offset: 0x125766C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMixedRealityCaptureSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRMixedRealityCaptureSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMixedRealityCaptureSettings*, creationType>()));
    }
  }; // OVRMixedRealityCaptureSettings
  #pragma pack(pop)
  static check_size<sizeof(OVRMixedRealityCaptureSettings), 148 + sizeof(float)> __GlobalNamespace_OVRMixedRealityCaptureSettingsSizeCheck;
  static_assert(sizeof(OVRMixedRealityCaptureSettings) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureSettings::ReadFrom
// Il2CppName: ReadFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager*)>(&GlobalNamespace::OVRMixedRealityCaptureSettings::ReadFrom)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "OVRManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedRealityCaptureSettings*), "ReadFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureSettings::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager*)>(&GlobalNamespace::OVRMixedRealityCaptureSettings::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "OVRManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedRealityCaptureSettings*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
