// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
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
  // Forward declaring type: STMDrawAnimData
  class STMDrawAnimData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMDrawAnimData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMDrawAnimData*, "", "STMDrawAnimData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: STMDrawAnimData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: ACD704
  class STMDrawAnimData : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAD8C2C
    // public System.Single animTime
    // Size: 0x4
    // Offset: 0x18
    float animTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: animTime and: animCurve
    char __padding0[0x4] = {};
    // public UnityEngine.AnimationCurve animCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* animCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 startScale
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 startScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 startOffset
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 startOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xAD8C64
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x40
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fadeTime and: fadeCurve
    char __padding4[0x4] = {};
    // public UnityEngine.AnimationCurve fadeCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* fadeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xAD8C9C
    // public UnityEngine.Color32 startColor
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::Color32 startColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single animTime
    [[deprecated("Use field access instead!")]] float& dyn_animTime();
    // Get instance field reference: public UnityEngine.AnimationCurve animCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_animCurve();
    // Get instance field reference: public UnityEngine.Vector3 startScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startScale();
    // Get instance field reference: public UnityEngine.Vector3 startOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startOffset();
    // Get instance field reference: public System.Single fadeTime
    [[deprecated("Use field access instead!")]] float& dyn_fadeTime();
    // Get instance field reference: public UnityEngine.AnimationCurve fadeCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_fadeCurve();
    // Get instance field reference: public UnityEngine.Color32 startColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_startColor();
    // public System.Void .ctor()
    // Offset: 0xE2C348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMDrawAnimData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMDrawAnimData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMDrawAnimData*, creationType>()));
    }
  }; // STMDrawAnimData
  #pragma pack(pop)
  static check_size<sizeof(STMDrawAnimData), 80 + sizeof(::UnityEngine::Color32)> __GlobalNamespace_STMDrawAnimDataSizeCheck;
  static_assert(sizeof(STMDrawAnimData) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMDrawAnimData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
