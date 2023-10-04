// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMWaveScaleControl
  class STMWaveScaleControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMWaveScaleControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMWaveScaleControl*, "", "STMWaveScaleControl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: STMWaveScaleControl
  // [TokenAttribute] Offset: FFFFFFFF
  class STMWaveScaleControl : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AnimationCurve curveX
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AnimationCurve* curveX;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve curveY
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AnimationCurve* curveY;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xAD9060
    // [RangeAttribute] Offset: 0xAD9060
    // public System.Single phase
    // Size: 0x4
    // Offset: 0x20
    float phase;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAD90B4
    // public UnityEngine.Vector2 speed
    // Size: 0x8
    // Offset: 0x24
    ::UnityEngine::Vector2 speed;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0xAD90EC
    // public UnityEngine.Vector2 strength
    // Size: 0x8
    // Offset: 0x2C
    ::UnityEngine::Vector2 strength;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0xAD9124
    // public UnityEngine.Vector2 density
    // Size: 0x8
    // Offset: 0x34
    ::UnityEngine::Vector2 density;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0xAD915C
    // public UnityEngine.Vector2 pivot
    // Size: 0x8
    // Offset: 0x3C
    ::UnityEngine::Vector2 pivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AnimationCurve curveX
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_curveX();
    // Get instance field reference: public UnityEngine.AnimationCurve curveY
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_curveY();
    // Get instance field reference: public System.Single phase
    [[deprecated("Use field access instead!")]] float& dyn_phase();
    // Get instance field reference: public UnityEngine.Vector2 speed
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_speed();
    // Get instance field reference: public UnityEngine.Vector2 strength
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_strength();
    // Get instance field reference: public UnityEngine.Vector2 density
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_density();
    // Get instance field reference: public UnityEngine.Vector2 pivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pivot();
    // public System.Void .ctor()
    // Offset: 0xE332D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMWaveScaleControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMWaveScaleControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMWaveScaleControl*, creationType>()));
    }
  }; // STMWaveScaleControl
  #pragma pack(pop)
  static check_size<sizeof(STMWaveScaleControl), 60 + sizeof(::UnityEngine::Vector2)> __GlobalNamespace_STMWaveScaleControlSizeCheck;
  static_assert(sizeof(STMWaveScaleControl) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMWaveScaleControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!