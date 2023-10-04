// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedLimbOrientations
  class BipedLimbOrientations;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::BipedLimbOrientations);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BipedLimbOrientations*, "RootMotion", "BipedLimbOrientations");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BipedLimbOrientations
  // [TokenAttribute] Offset: FFFFFFFF
  class BipedLimbOrientations : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::BipedLimbOrientations::LimbOrientation
    class LimbOrientation;
    public:
    // public RootMotion.BipedLimbOrientations/LimbOrientation leftArm
    // Size: 0x8
    // Offset: 0x10
    ::RootMotion::BipedLimbOrientations::LimbOrientation* leftArm;
    // Field size check
    static_assert(sizeof(::RootMotion::BipedLimbOrientations::LimbOrientation*) == 0x8);
    // public RootMotion.BipedLimbOrientations/LimbOrientation rightArm
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::BipedLimbOrientations::LimbOrientation* rightArm;
    // Field size check
    static_assert(sizeof(::RootMotion::BipedLimbOrientations::LimbOrientation*) == 0x8);
    // public RootMotion.BipedLimbOrientations/LimbOrientation leftLeg
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::BipedLimbOrientations::LimbOrientation* leftLeg;
    // Field size check
    static_assert(sizeof(::RootMotion::BipedLimbOrientations::LimbOrientation*) == 0x8);
    // public RootMotion.BipedLimbOrientations/LimbOrientation rightLeg
    // Size: 0x8
    // Offset: 0x28
    ::RootMotion::BipedLimbOrientations::LimbOrientation* rightLeg;
    // Field size check
    static_assert(sizeof(::RootMotion::BipedLimbOrientations::LimbOrientation*) == 0x8);
    public:
    // Get instance field reference: public RootMotion.BipedLimbOrientations/LimbOrientation leftArm
    [[deprecated("Use field access instead!")]] ::RootMotion::BipedLimbOrientations::LimbOrientation*& dyn_leftArm();
    // Get instance field reference: public RootMotion.BipedLimbOrientations/LimbOrientation rightArm
    [[deprecated("Use field access instead!")]] ::RootMotion::BipedLimbOrientations::LimbOrientation*& dyn_rightArm();
    // Get instance field reference: public RootMotion.BipedLimbOrientations/LimbOrientation leftLeg
    [[deprecated("Use field access instead!")]] ::RootMotion::BipedLimbOrientations::LimbOrientation*& dyn_leftLeg();
    // Get instance field reference: public RootMotion.BipedLimbOrientations/LimbOrientation rightLeg
    [[deprecated("Use field access instead!")]] ::RootMotion::BipedLimbOrientations::LimbOrientation*& dyn_rightLeg();
    // public System.Void .ctor(RootMotion.BipedLimbOrientations/LimbOrientation leftArm, RootMotion.BipedLimbOrientations/LimbOrientation rightArm, RootMotion.BipedLimbOrientations/LimbOrientation leftLeg, RootMotion.BipedLimbOrientations/LimbOrientation rightLeg)
    // Offset: 0x1E9C910
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedLimbOrientations* New_ctor(::RootMotion::BipedLimbOrientations::LimbOrientation* leftArm, ::RootMotion::BipedLimbOrientations::LimbOrientation* rightArm, ::RootMotion::BipedLimbOrientations::LimbOrientation* leftLeg, ::RootMotion::BipedLimbOrientations::LimbOrientation* rightLeg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::BipedLimbOrientations::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedLimbOrientations*, creationType>(leftArm, rightArm, leftLeg, rightLeg)));
    }
    // static public RootMotion.BipedLimbOrientations get_UMA()
    // Offset: 0x1E9C95C
    static ::RootMotion::BipedLimbOrientations* get_UMA();
    // static public RootMotion.BipedLimbOrientations get_MaxBiped()
    // Offset: 0x1E9CC4C
    static ::RootMotion::BipedLimbOrientations* get_MaxBiped();
  }; // RootMotion.BipedLimbOrientations
  #pragma pack(pop)
  static check_size<sizeof(BipedLimbOrientations), 40 + sizeof(::RootMotion::BipedLimbOrientations::LimbOrientation*)> __RootMotion_BipedLimbOrientationsSizeCheck;
  static_assert(sizeof(BipedLimbOrientations) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BipedLimbOrientations::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::BipedLimbOrientations::get_UMA
// Il2CppName: get_UMA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::BipedLimbOrientations* (*)()>(&RootMotion::BipedLimbOrientations::get_UMA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedLimbOrientations*), "get_UMA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedLimbOrientations::get_MaxBiped
// Il2CppName: get_MaxBiped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::BipedLimbOrientations* (*)()>(&RootMotion::BipedLimbOrientations::get_MaxBiped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedLimbOrientations*), "get_MaxBiped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
