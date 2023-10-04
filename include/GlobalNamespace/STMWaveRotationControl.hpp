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
  // Forward declaring type: STMWaveRotationControl
  class STMWaveRotationControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMWaveRotationControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMWaveRotationControl*, "", "STMWaveRotationControl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: STMWaveRotationControl
  // [TokenAttribute] Offset: FFFFFFFF
  class STMWaveRotationControl : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AnimationCurve curveZ
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AnimationCurve* curveZ;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0xAD8F2C
    // [TooltipAttribute] Offset: 0xAD8F2C
    // public System.Single phase
    // Size: 0x4
    // Offset: 0x18
    float phase;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAD8F80
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x1C
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAD8FB8
    // public System.Single strength
    // Size: 0x4
    // Offset: 0x20
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAD8FF0
    // public System.Single density
    // Size: 0x4
    // Offset: 0x24
    float density;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAD9028
    // public UnityEngine.Vector2 pivot
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 pivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AnimationCurve curveZ
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_curveZ();
    // Get instance field reference: public System.Single phase
    [[deprecated("Use field access instead!")]] float& dyn_phase();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: public System.Single strength
    [[deprecated("Use field access instead!")]] float& dyn_strength();
    // Get instance field reference: public System.Single density
    [[deprecated("Use field access instead!")]] float& dyn_density();
    // Get instance field reference: public UnityEngine.Vector2 pivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pivot();
    // public System.Void .ctor()
    // Offset: 0xE33150
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMWaveRotationControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMWaveRotationControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMWaveRotationControl*, creationType>()));
    }
  }; // STMWaveRotationControl
  #pragma pack(pop)
  static check_size<sizeof(STMWaveRotationControl), 40 + sizeof(::UnityEngine::Vector2)> __GlobalNamespace_STMWaveRotationControlSizeCheck;
  static_assert(sizeof(STMWaveRotationControl) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMWaveRotationControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!