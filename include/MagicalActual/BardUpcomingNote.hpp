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
  // Forward declaring type: BardUpcomingNote
  class BardUpcomingNote;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BardUpcomingNote);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BardUpcomingNote*, "MagicalActual", "BardUpcomingNote");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BardUpcomingNote
  // [TokenAttribute] Offset: FFFFFFFF
  class BardUpcomingNote : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 JJIOOOAKJCH
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 JJIOOOAKJCH;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Int32 ENJLGOOCDBP
    // Size: 0x4
    // Offset: 0x1C
    int ENJLGOOCDBP;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single BFBJFOEGEBG
    // Size: 0x4
    // Offset: 0x20
    float BFBJFOEGEBG;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: BFBJFOEGEBG and: HHBCPJOFBJP
    char __padding2[0x4] = {};
    // public UnityEngine.GameObject HHBCPJOFBJP
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* HHBCPJOFBJP;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Int32 LOLMICKDKOI
    // Size: 0x4
    // Offset: 0x30
    int LOLMICKDKOI;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean FLFNFFBKJFF
    // Size: 0x1
    // Offset: 0x34
    bool FLFNFFBKJFF;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Vector3 JJIOOOAKJCH
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_JJIOOOAKJCH();
    // Get instance field reference: public System.Int32 ENJLGOOCDBP
    [[deprecated("Use field access instead!")]] int& dyn_ENJLGOOCDBP();
    // Get instance field reference: public System.Single BFBJFOEGEBG
    [[deprecated("Use field access instead!")]] float& dyn_BFBJFOEGEBG();
    // Get instance field reference: public UnityEngine.GameObject HHBCPJOFBJP
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_HHBCPJOFBJP();
    // Get instance field reference: public System.Int32 LOLMICKDKOI
    [[deprecated("Use field access instead!")]] int& dyn_LOLMICKDKOI();
    // Get instance field reference: public System.Boolean FLFNFFBKJFF
    [[deprecated("Use field access instead!")]] bool& dyn_FLFNFFBKJFF();
    // public System.Void .ctor()
    // Offset: 0x1CA9AB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BardUpcomingNote* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BardUpcomingNote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BardUpcomingNote*, creationType>()));
    }
  }; // MagicalActual.BardUpcomingNote
  #pragma pack(pop)
  static check_size<sizeof(BardUpcomingNote), 52 + sizeof(bool)> __MagicalActual_BardUpcomingNoteSizeCheck;
  static_assert(sizeof(BardUpcomingNote) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BardUpcomingNote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!