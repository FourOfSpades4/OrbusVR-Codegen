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
  // Forward declaring type: SwordHit
  class SwordHit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::SwordHit);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::SwordHit*, "MagicalActual", "SwordHit");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.SwordHit
  // [TokenAttribute] Offset: FFFFFFFF
  class SwordHit : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject OKLCKNLCELJ
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* OKLCKNLCELJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Vector3 CBOFNDPPFEG
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 CBOFNDPPFEG;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 EBLPFMEKBFM
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 EBLPFMEKBFM;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.GameObject OKLCKNLCELJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_OKLCKNLCELJ();
    // Get instance field reference: public UnityEngine.Vector3 CBOFNDPPFEG
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_CBOFNDPPFEG();
    // Get instance field reference: public UnityEngine.Vector3 EBLPFMEKBFM
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_EBLPFMEKBFM();
    // public System.Void .ctor(UnityEngine.GameObject HGGNPPOGGFC, UnityEngine.Vector3 IFBAPAKGAAA, UnityEngine.Vector3 DFENKCABNKH)
    // Offset: 0x168CCBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SwordHit* New_ctor(::UnityEngine::GameObject* HGGNPPOGGFC, ::UnityEngine::Vector3 IFBAPAKGAAA, ::UnityEngine::Vector3 DFENKCABNKH) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::SwordHit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SwordHit*, creationType>(HGGNPPOGGFC, IFBAPAKGAAA, DFENKCABNKH)));
    }
  }; // MagicalActual.SwordHit
  #pragma pack(pop)
  static check_size<sizeof(SwordHit), 36 + sizeof(::UnityEngine::Vector3)> __MagicalActual_SwordHitSizeCheck;
  static_assert(sizeof(SwordHit) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::SwordHit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
