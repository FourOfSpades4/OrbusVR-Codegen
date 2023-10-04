// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RotationLimitPolygonal
#include "RootMotion/FinalIK/RotationLimitPolygonal.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*, "RootMotion.FinalIK", "RotationLimitPolygonal/LimitPoint");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitPolygonal/LimitPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class RotationLimitPolygonal::LimitPoint : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 point
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single tangentWeight
    // Size: 0x4
    // Offset: 0x1C
    float tangentWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Vector3 point
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_point();
    // Get instance field reference: public System.Single tangentWeight
    [[deprecated("Use field access instead!")]] float& dyn_tangentWeight();
    // public System.Void .ctor()
    // Offset: 0x1181148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitPolygonal::LimitPoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitPolygonal::LimitPoint*, creationType>()));
    }
  }; // RootMotion.FinalIK.RotationLimitPolygonal/LimitPoint
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitPolygonal::LimitPoint), 28 + sizeof(float)> __RootMotion_FinalIK_RotationLimitPolygonal_LimitPointSizeCheck;
  static_assert(sizeof(RotationLimitPolygonal::LimitPoint) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
