// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: Pose
  class Pose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::Pose);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::Pose*, "OculusSampleFramework", "Pose");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.Pose
  // [TokenAttribute] Offset: FFFFFFFF
  class Pose : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 Position
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion Rotation
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Quaternion Rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Vector3 Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Position();
    // Get instance field reference: public UnityEngine.Quaternion Rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_Rotation();
    // public System.Void .ctor()
    // Offset: 0xD7AF54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pose* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::Pose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pose*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xD7B000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pose* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::Pose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pose*, creationType>(position, rotation)));
    }
  }; // OculusSampleFramework.Pose
  #pragma pack(pop)
  static check_size<sizeof(Pose), 28 + sizeof(::UnityEngine::Quaternion)> __OculusSampleFramework_PoseSizeCheck;
  static_assert(sizeof(Pose) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::Pose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::Pose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!