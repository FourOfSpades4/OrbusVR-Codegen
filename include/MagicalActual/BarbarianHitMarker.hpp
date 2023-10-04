// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: BarbarianHitMarker
  class BarbarianHitMarker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BarbarianHitMarker);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BarbarianHitMarker*, "MagicalActual", "BarbarianHitMarker");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BarbarianHitMarker
  // [TokenAttribute] Offset: FFFFFFFF
  class BarbarianHitMarker : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject GEMOAEGMNJG
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* GEMOAEGMNJG;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single KMGCGEIEHDM
    // Size: 0x4
    // Offset: 0x18
    float KMGCGEIEHDM;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 CMHBEGEOMJF
    // Size: 0x4
    // Offset: 0x1C
    int CMHBEGEOMJF;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean BHOJJFNGDOI
    // Size: 0x1
    // Offset: 0x20
    bool BHOJJFNGDOI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean GMAGCCBJECH
    // Size: 0x1
    // Offset: 0x21
    bool GMAGCCBJECH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean OIIILCHAFML
    // Size: 0x1
    // Offset: 0x22
    bool OIIILCHAFML;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: OIIILCHAFML and: HOKKHECIAAM
    char __padding5[0x1] = {};
    // public UnityEngine.Vector3 HOKKHECIAAM
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 HOKKHECIAAM;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 JFHPIOIAIMP
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 JFHPIOIAIMP;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.GameObject GEMOAEGMNJG
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_GEMOAEGMNJG();
    // Get instance field reference: public System.Single KMGCGEIEHDM
    [[deprecated("Use field access instead!")]] float& dyn_KMGCGEIEHDM();
    // Get instance field reference: public System.Int32 CMHBEGEOMJF
    [[deprecated("Use field access instead!")]] int& dyn_CMHBEGEOMJF();
    // Get instance field reference: public System.Boolean BHOJJFNGDOI
    [[deprecated("Use field access instead!")]] bool& dyn_BHOJJFNGDOI();
    // Get instance field reference: public System.Boolean GMAGCCBJECH
    [[deprecated("Use field access instead!")]] bool& dyn_GMAGCCBJECH();
    // Get instance field reference: public System.Boolean OIIILCHAFML
    [[deprecated("Use field access instead!")]] bool& dyn_OIIILCHAFML();
    // Get instance field reference: public UnityEngine.Vector3 HOKKHECIAAM
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_HOKKHECIAAM();
    // Get instance field reference: public UnityEngine.Vector3 JFHPIOIAIMP
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_JFHPIOIAIMP();
    // public System.Void .ctor()
    // Offset: 0x10DBA44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BarbarianHitMarker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BarbarianHitMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BarbarianHitMarker*, creationType>()));
    }
  }; // MagicalActual.BarbarianHitMarker
  #pragma pack(pop)
  static check_size<sizeof(BarbarianHitMarker), 48 + sizeof(::UnityEngine::Vector3)> __MagicalActual_BarbarianHitMarkerSizeCheck;
  static_assert(sizeof(BarbarianHitMarker) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BarbarianHitMarker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
