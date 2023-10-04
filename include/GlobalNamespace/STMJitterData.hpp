// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
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
  // Forward declaring type: STMJitterData
  class STMJitterData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMJitterData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMJitterData*, "", "STMJitterData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: STMJitterData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: ACD854
  class STMJitterData : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Single amount
    // Size: 0x4
    // Offset: 0x18
    float amount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean perlin
    // Size: 0x1
    // Offset: 0x1C
    bool perlin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: perlin and: perlinTimeMulti
    char __padding1[0x3] = {};
    // public System.Single perlinTimeMulti
    // Size: 0x4
    // Offset: 0x20
    float perlinTimeMulti;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: perlinTimeMulti and: distance
    char __padding2[0x4] = {};
    // public UnityEngine.AnimationCurve distance
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* distance;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve distanceOverTime
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* distanceOverTime;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0xAD8D9C
    // public System.Single distanceOverTimeMulti
    // Size: 0x4
    // Offset: 0x38
    float distanceOverTimeMulti;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single amount
    [[deprecated("Use field access instead!")]] float& dyn_amount();
    // Get instance field reference: public System.Boolean perlin
    [[deprecated("Use field access instead!")]] bool& dyn_perlin();
    // Get instance field reference: public System.Single perlinTimeMulti
    [[deprecated("Use field access instead!")]] float& dyn_perlinTimeMulti();
    // Get instance field reference: public UnityEngine.AnimationCurve distance
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_distance();
    // Get instance field reference: public UnityEngine.AnimationCurve distanceOverTime
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_distanceOverTime();
    // Get instance field reference: public System.Single distanceOverTimeMulti
    [[deprecated("Use field access instead!")]] float& dyn_distanceOverTimeMulti();
    // public System.Void .ctor()
    // Offset: 0xE2E6BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMJitterData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMJitterData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMJitterData*, creationType>()));
    }
  }; // STMJitterData
  #pragma pack(pop)
  static check_size<sizeof(STMJitterData), 56 + sizeof(float)> __GlobalNamespace_STMJitterDataSizeCheck;
  static_assert(sizeof(STMJitterData) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMJitterData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!