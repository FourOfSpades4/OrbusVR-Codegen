// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pegasus.PegasusPath
#include "Pegasus/PegasusPath.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pegasus::PegasusPath::PegasusPoint);
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::PegasusPath::PegasusPoint*, "Pegasus", "PegasusPath/PegasusPoint");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.PegasusPath/PegasusPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class PegasusPath::PegasusPoint : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 m_location
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 m_location;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_rotationEuler
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 m_rotationEuler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_dofDistance
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 m_dofDistance;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Vector3 m_location
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_location();
    // Get instance field reference: public UnityEngine.Vector3 m_rotationEuler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_rotationEuler();
    // Get instance field reference: public UnityEngine.Vector3 m_dofDistance
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_dofDistance();
    // public System.Void .ctor(UnityEngine.Vector3 location, UnityEngine.Vector3 rotationEuler)
    // Offset: 0xE4B858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PegasusPath::PegasusPoint* New_ctor(::UnityEngine::Vector3 location, ::UnityEngine::Vector3 rotationEuler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::PegasusPath::PegasusPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PegasusPath::PegasusPoint*, creationType>(location, rotationEuler)));
    }
  }; // Pegasus.PegasusPath/PegasusPoint
  #pragma pack(pop)
  static check_size<sizeof(PegasusPath::PegasusPoint), 40 + sizeof(::UnityEngine::Vector3)> __Pegasus_PegasusPath_PegasusPointSizeCheck;
  static_assert(sizeof(PegasusPath::PegasusPoint) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pegasus::PegasusPath::PegasusPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
