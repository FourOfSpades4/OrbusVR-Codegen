// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Gambler
  class Gambler;
  // Forward declaring type: Grabber
  class Grabber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PhysicsInteractable
  class PhysicsInteractable;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: GamblerDrawnCard
  class GamblerDrawnCard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::GamblerDrawnCard);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::GamblerDrawnCard*, "MagicalActual", "GamblerDrawnCard");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.GamblerDrawnCard
  // [TokenAttribute] Offset: FFFFFFFF
  class GamblerDrawnCard : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public MagicalActual.Gambler myGambler
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::Gambler* myGambler;
    // Field size check
    static_assert(sizeof(::MagicalActual::Gambler*) == 0x8);
    // public System.Byte cardType
    // Size: 0x1
    // Offset: 0x20
    uint8_t cardType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Boolean hasBeenHit
    // Size: 0x1
    // Offset: 0x21
    bool hasBeenHit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasBeenHit and: BCMGPEHLBKJ
    char __padding2[0x6] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAE3480
    // private UnityEngine.SpriteRenderer <BCMGPEHLBKJ>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::SpriteRenderer* BCMGPEHLBKJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE3490
    // private PhysicsInteractable <NPOPILONGLE>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PhysicsInteractable* NPOPILONGLE;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PhysicsInteractable*) == 0x8);
    // private UnityEngine.Collider[] JGOGJDHABHN
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Collider*> JGOGJDHABHN;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Boolean IGDOJCIJOLB
    // Size: 0x1
    // Offset: 0x40
    bool IGDOJCIJOLB;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean DCOAFHOIHKO
    // Size: 0x1
    // Offset: 0x41
    bool DCOAFHOIHKO;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean EBNPENMPIPB
    // Size: 0x1
    // Offset: 0x42
    bool EBNPENMPIPB;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean MCOLPGEJCLO
    // Size: 0x1
    // Offset: 0x43
    bool MCOLPGEJCLO;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: MCOLPGEJCLO and: EIPMBKLODIJ
    char __padding9[0x4] = {};
    // private UnityEngine.Rigidbody EIPMBKLODIJ
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rigidbody* EIPMBKLODIJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public MagicalActual.Gambler myGambler
    [[deprecated("Use field access instead!")]] ::MagicalActual::Gambler*& dyn_myGambler();
    // Get instance field reference: public System.Byte cardType
    [[deprecated("Use field access instead!")]] uint8_t& dyn_cardType();
    // Get instance field reference: public System.Boolean hasBeenHit
    [[deprecated("Use field access instead!")]] bool& dyn_hasBeenHit();
    // Get instance field reference: private UnityEngine.SpriteRenderer <BCMGPEHLBKJ>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::SpriteRenderer*& dyn_$BCMGPEHLBKJ$k__BackingField();
    // Get instance field reference: private PhysicsInteractable <NPOPILONGLE>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PhysicsInteractable*& dyn_$NPOPILONGLE$k__BackingField();
    // Get instance field reference: private UnityEngine.Collider[] JGOGJDHABHN
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_JGOGJDHABHN();
    // Get instance field reference: private System.Boolean IGDOJCIJOLB
    [[deprecated("Use field access instead!")]] bool& dyn_IGDOJCIJOLB();
    // Get instance field reference: private System.Boolean DCOAFHOIHKO
    [[deprecated("Use field access instead!")]] bool& dyn_DCOAFHOIHKO();
    // Get instance field reference: private System.Boolean EBNPENMPIPB
    [[deprecated("Use field access instead!")]] bool& dyn_EBNPENMPIPB();
    // Get instance field reference: private System.Boolean MCOLPGEJCLO
    [[deprecated("Use field access instead!")]] bool& dyn_MCOLPGEJCLO();
    // Get instance field reference: private UnityEngine.Rigidbody EIPMBKLODIJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_EIPMBKLODIJ();
    // private System.Void BPNGLNLILDG(UnityEngine.SpriteRenderer MMMEIONJJFJ)
    // Offset: 0x158AD2C
    void BPNGLNLILDG(::UnityEngine::SpriteRenderer* MMMEIONJJFJ);
    // public PhysicsInteractable DCNIHMLOFOD()
    // Offset: 0x158AD34
    ::GlobalNamespace::PhysicsInteractable* DCNIHMLOFOD();
    // public PhysicsInteractable HKJEBFIGNMO()
    // Offset: 0x158AD3C
    ::GlobalNamespace::PhysicsInteractable* HKJEBFIGNMO();
    // private System.Void HCMCNFPHPDP(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x158AD44
    void HCMCNFPHPDP(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public UnityEngine.SpriteRenderer ELPNLMFMEFG()
    // Offset: 0x158AE84
    ::UnityEngine::SpriteRenderer* ELPNLMFMEFG();
    // private System.Void FIJGCHFAFHN()
    // Offset: 0x158AE8C
    void FIJGCHFAFHN();
    // private System.Void CBKLFOOAGPF(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x158B2F0
    void CBKLFOOAGPF(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // private System.Void FJMGMOMABFO(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x158B2F8
    void FJMGMOMABFO(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void DDNCJCGCGEB()
    // Offset: 0x158B438
    void DDNCJCGCGEB();
    // private System.Void AHMLIMDJCJO()
    // Offset: 0x158B730
    void AHMLIMDJCJO();
    // private System.Void PhysicsInteractableTrigger()
    // Offset: 0x158BBAC
    void PhysicsInteractableTrigger();
    // private System.Void LMDJBIEOHJK()
    // Offset: 0x158BE98
    void LMDJBIEOHJK();
    // private System.Void JIBJLPIJABD(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x158C0A0
    void JIBJLPIJABD(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // private System.Void DJIGIJKOPDC()
    // Offset: 0x158C0A8
    void DJIGIJKOPDC();
    // private System.Void DJJPJCNGKMI(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x158C148
    void DJJPJCNGKMI(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // public PhysicsInteractable ICFFMNFDCKA()
    // Offset: 0x158C150
    ::GlobalNamespace::PhysicsInteractable* ICFFMNFDCKA();
    // public UnityEngine.SpriteRenderer EOJKALICIDL()
    // Offset: 0x158C158
    ::UnityEngine::SpriteRenderer* EOJKALICIDL();
    // private System.Void GNAJKKCCCNO()
    // Offset: 0x158C160
    void GNAJKKCCCNO();
    // private System.Void DBBNGFCJECA()
    // Offset: 0x158C454
    void DBBNGFCJECA();
    // private System.Void FixedUpdate()
    // Offset: 0x158C660
    void FixedUpdate();
    // public UnityEngine.SpriteRenderer DIIMGFCILGA()
    // Offset: 0x158CAA8
    ::UnityEngine::SpriteRenderer* DIIMGFCILGA();
    // private System.Void BKGHKPPKGCA()
    // Offset: 0x158CAB0
    void BKGHKPPKGCA();
    // private System.Void DCCAKEPBBAK(UnityEngine.SpriteRenderer MMMEIONJJFJ)
    // Offset: 0x158CDA4
    void DCCAKEPBBAK(::UnityEngine::SpriteRenderer* MMMEIONJJFJ);
    // private System.Void ILINPNPKBMO(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x158CDAC
    void ILINPNPKBMO(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // private System.Void NJOHICFEMDH(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x158CDB4
    void NJOHICFEMDH(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // public PhysicsInteractable get_myPhysicsInteractable()
    // Offset: 0x158CDBC
    ::GlobalNamespace::PhysicsInteractable* get_myPhysicsInteractable();
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x158CDC4
    void GHLPBOJJHNG();
    // private System.Void PhysicsInteractableUngrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x158CDC8
    void PhysicsInteractableUngrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void .ctor()
    // Offset: 0x158CF08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GamblerDrawnCard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::GamblerDrawnCard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GamblerDrawnCard*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x158CF10
    void Start();
    // private System.Void BLIPCIAAIHI()
    // Offset: 0x158CF14
    void BLIPCIAAIHI();
    // private System.Void Awake()
    // Offset: 0x158D39C
    void Awake();
    // private System.Void ICJNKJCPIDH()
    // Offset: 0x158D43C
    void ICJNKJCPIDH();
    // private System.Void PhysicsInteractableGrip()
    // Offset: 0x158D648
    void PhysicsInteractableGrip();
    // public UnityEngine.SpriteRenderer get_mySprite()
    // Offset: 0x158D684
    ::UnityEngine::SpriteRenderer* get_mySprite();
    // private System.Void HDBPNCCJKNO(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x158D68C
    void HDBPNCCJKNO(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x158D694
    void ABIHCGOKNCL();
    // private System.Void DIALFIIBBJI(UnityEngine.SpriteRenderer MMMEIONJJFJ)
    // Offset: 0x158D698
    void DIALFIIBBJI(::UnityEngine::SpriteRenderer* MMMEIONJJFJ);
  }; // MagicalActual.GamblerDrawnCard
  #pragma pack(pop)
  static check_size<sizeof(GamblerDrawnCard), 72 + sizeof(::UnityEngine::Rigidbody*)> __MagicalActual_GamblerDrawnCardSizeCheck;
  static_assert(sizeof(GamblerDrawnCard) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::BPNGLNLILDG
// Il2CppName: BPNGLNLILDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::UnityEngine::SpriteRenderer*)>(&MagicalActual::GamblerDrawnCard::BPNGLNLILDG)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("UnityEngine", "SpriteRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "BPNGLNLILDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DCNIHMLOFOD
// Il2CppName: DCNIHMLOFOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::DCNIHMLOFOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DCNIHMLOFOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::HKJEBFIGNMO
// Il2CppName: HKJEBFIGNMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::HKJEBFIGNMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "HKJEBFIGNMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::HCMCNFPHPDP
// Il2CppName: HCMCNFPHPDP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::MagicalActual::Grabber*)>(&MagicalActual::GamblerDrawnCard::HCMCNFPHPDP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "HCMCNFPHPDP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::ELPNLMFMEFG
// Il2CppName: ELPNLMFMEFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpriteRenderer* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::ELPNLMFMEFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "ELPNLMFMEFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::FIJGCHFAFHN
// Il2CppName: FIJGCHFAFHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::FIJGCHFAFHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "FIJGCHFAFHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::CBKLFOOAGPF
// Il2CppName: CBKLFOOAGPF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::GamblerDrawnCard::CBKLFOOAGPF)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "CBKLFOOAGPF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::FJMGMOMABFO
// Il2CppName: FJMGMOMABFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::MagicalActual::Grabber*)>(&MagicalActual::GamblerDrawnCard::FJMGMOMABFO)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "FJMGMOMABFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DDNCJCGCGEB
// Il2CppName: DDNCJCGCGEB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::DDNCJCGCGEB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DDNCJCGCGEB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::AHMLIMDJCJO
// Il2CppName: AHMLIMDJCJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::AHMLIMDJCJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "AHMLIMDJCJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::PhysicsInteractableTrigger
// Il2CppName: PhysicsInteractableTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::PhysicsInteractableTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "PhysicsInteractableTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::LMDJBIEOHJK
// Il2CppName: LMDJBIEOHJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::LMDJBIEOHJK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "LMDJBIEOHJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::JIBJLPIJABD
// Il2CppName: JIBJLPIJABD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::GamblerDrawnCard::JIBJLPIJABD)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "JIBJLPIJABD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DJIGIJKOPDC
// Il2CppName: DJIGIJKOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::DJIGIJKOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DJIGIJKOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DJJPJCNGKMI
// Il2CppName: DJJPJCNGKMI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::GamblerDrawnCard::DJJPJCNGKMI)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DJJPJCNGKMI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::ICFFMNFDCKA
// Il2CppName: ICFFMNFDCKA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::ICFFMNFDCKA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "ICFFMNFDCKA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::EOJKALICIDL
// Il2CppName: EOJKALICIDL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpriteRenderer* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::EOJKALICIDL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "EOJKALICIDL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::GNAJKKCCCNO
// Il2CppName: GNAJKKCCCNO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::GNAJKKCCCNO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "GNAJKKCCCNO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DBBNGFCJECA
// Il2CppName: DBBNGFCJECA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::DBBNGFCJECA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DBBNGFCJECA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DIIMGFCILGA
// Il2CppName: DIIMGFCILGA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpriteRenderer* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::DIIMGFCILGA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DIIMGFCILGA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::BKGHKPPKGCA
// Il2CppName: BKGHKPPKGCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::BKGHKPPKGCA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "BKGHKPPKGCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DCCAKEPBBAK
// Il2CppName: DCCAKEPBBAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::UnityEngine::SpriteRenderer*)>(&MagicalActual::GamblerDrawnCard::DCCAKEPBBAK)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("UnityEngine", "SpriteRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DCCAKEPBBAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::ILINPNPKBMO
// Il2CppName: ILINPNPKBMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::GamblerDrawnCard::ILINPNPKBMO)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "ILINPNPKBMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::NJOHICFEMDH
// Il2CppName: NJOHICFEMDH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::GamblerDrawnCard::NJOHICFEMDH)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "NJOHICFEMDH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::get_myPhysicsInteractable
// Il2CppName: get_myPhysicsInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::get_myPhysicsInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "get_myPhysicsInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::PhysicsInteractableUngrip
// Il2CppName: PhysicsInteractableUngrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::MagicalActual::Grabber*)>(&MagicalActual::GamblerDrawnCard::PhysicsInteractableUngrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "PhysicsInteractableUngrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::BLIPCIAAIHI
// Il2CppName: BLIPCIAAIHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::BLIPCIAAIHI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "BLIPCIAAIHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::ICJNKJCPIDH
// Il2CppName: ICJNKJCPIDH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::ICJNKJCPIDH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "ICJNKJCPIDH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::PhysicsInteractableGrip
// Il2CppName: PhysicsInteractableGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::PhysicsInteractableGrip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "PhysicsInteractableGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::get_mySprite
// Il2CppName: get_mySprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpriteRenderer* (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::get_mySprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "get_mySprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::HDBPNCCJKNO
// Il2CppName: HDBPNCCJKNO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::GamblerDrawnCard::HDBPNCCJKNO)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "HDBPNCCJKNO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)()>(&MagicalActual::GamblerDrawnCard::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerDrawnCard::DIALFIIBBJI
// Il2CppName: DIALFIIBBJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerDrawnCard::*)(::UnityEngine::SpriteRenderer*)>(&MagicalActual::GamblerDrawnCard::DIALFIIBBJI)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("UnityEngine", "SpriteRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerDrawnCard*), "DIALFIIBBJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
