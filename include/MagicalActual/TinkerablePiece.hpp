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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PhysicsInteractable
  class PhysicsInteractable;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Grabber
  class Grabber;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: TinkerablePiece
  class TinkerablePiece;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::TinkerablePiece);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::TinkerablePiece*, "MagicalActual", "TinkerablePiece");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.TinkerablePiece
  // [TokenAttribute] Offset: FFFFFFFF
  class TinkerablePiece : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean isPreview
    // Size: 0x1
    // Offset: 0x18
    bool isPreview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isGrabbed
    // Size: 0x1
    // Offset: 0x19
    bool isGrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isLockedIntoPlace
    // Size: 0x1
    // Offset: 0x1A
    bool isLockedIntoPlace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLockedIntoPlace and: myPhysicsInteractable
    char __padding2[0x5] = {};
    // public PhysicsInteractable myPhysicsInteractable
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PhysicsInteractable* myPhysicsInteractable;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PhysicsInteractable*) == 0x8);
    // private System.Boolean FENJPIMDFKE
    // Size: 0x1
    // Offset: 0x28
    bool FENJPIMDFKE;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FENJPIMDFKE and: EBDJHJJMOLG
    char __padding4[0x3] = {};
    // private System.Single EBDJHJJMOLG
    // Size: 0x4
    // Offset: 0x2C
    float EBDJHJJMOLG;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single IIAKNACIAKL
    // Size: 0x4
    // Offset: 0x30
    float IIAKNACIAKL;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single CCGAFLKLCBE
    // Size: 0x4
    // Offset: 0x34
    float CCGAFLKLCBE;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean isPreview
    [[deprecated("Use field access instead!")]] bool& dyn_isPreview();
    // Get instance field reference: public System.Boolean isGrabbed
    [[deprecated("Use field access instead!")]] bool& dyn_isGrabbed();
    // Get instance field reference: public System.Boolean isLockedIntoPlace
    [[deprecated("Use field access instead!")]] bool& dyn_isLockedIntoPlace();
    // Get instance field reference: public PhysicsInteractable myPhysicsInteractable
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PhysicsInteractable*& dyn_myPhysicsInteractable();
    // Get instance field reference: private System.Boolean FENJPIMDFKE
    [[deprecated("Use field access instead!")]] bool& dyn_FENJPIMDFKE();
    // Get instance field reference: private System.Single EBDJHJJMOLG
    [[deprecated("Use field access instead!")]] float& dyn_EBDJHJJMOLG();
    // Get instance field reference: private System.Single IIAKNACIAKL
    [[deprecated("Use field access instead!")]] float& dyn_IIAKNACIAKL();
    // Get instance field reference: private System.Single CCGAFLKLCBE
    [[deprecated("Use field access instead!")]] float& dyn_CCGAFLKLCBE();
    // private System.Void AFEJNDDPBNK(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AE8D8
    void AFEJNDDPBNK(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void BOMGKOAFMOP(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AE8E4
    void BOMGKOAFMOP(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x13AE8F0
    void BDEDGNGMHMN();
    // private System.Void ICEGDGKAIIB()
    // Offset: 0x13AE99C
    void ICEGDGKAIIB();
    // private System.Void PhysicsInteractableGrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AEBE8
    void PhysicsInteractableGrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void GMGFCMJCALC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AEBF4
    void GMGFCMJCALC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void IPIFMKAGODD()
    // Offset: 0x13AEBFC
    void IPIFMKAGODD();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x13AECA8
    void GECHLDPLPCC();
    // public System.Void .ctor()
    // Offset: 0x13AED54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TinkerablePiece* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::TinkerablePiece::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TinkerablePiece*, creationType>()));
    }
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x13AED70
    void FGIFGGNGKPK();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x13AEE1C
    void KPOAAAHLGLA();
    // private System.Void AHMLIMDJCJO()
    // Offset: 0x13AEEC8
    void AHMLIMDJCJO();
    // private System.Void NIGDKALGFHM(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF118
    void NIGDKALGFHM(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void HHDFFFCBAMM(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF120
    void HHDFFFCBAMM(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void Start()
    // Offset: 0x13AF12C
    void Start();
    // private System.Void NGEMOFOBKFP(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF1D0
    void NGEMOFOBKFP(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void PBEMGGBBDCK()
    // Offset: 0x13AF1D8
    void PBEMGGBBDCK();
    // private System.Void DMNAKMCKANG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF284
    void DMNAKMCKANG(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void PhysicsInteractableUngrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF290
    void PhysicsInteractableUngrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void JPHNAIDIBKL()
    // Offset: 0x13AF298
    void JPHNAIDIBKL();
    // private System.Void OCFOKKHGALJ(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF4E4
    void OCFOKKHGALJ(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void GPFBGGFPINB()
    // Offset: 0x13AF4EC
    void GPFBGGFPINB();
    // private System.Void HABDJCEKMNH()
    // Offset: 0x13AF598
    void HABDJCEKMNH();
    // private System.Void PEBCHDDABFA(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF7E4
    void PEBCHDDABFA(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void PKNDPNAPJKG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AF7EC
    void PKNDPNAPJKG(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x13AF7F8
    void EIIKFEMCNKM();
    // private System.Void ICFANEFPFBJ()
    // Offset: 0x13AF8A0
    void ICFANEFPFBJ();
    // private System.Void ALEGNMLPLKG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AFAF0
    void ALEGNMLPLKG(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void DNJOEDHOPFC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AFAF8
    void DNJOEDHOPFC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void FixedUpdate()
    // Offset: 0x13AFB00
    void FixedUpdate();
    // private System.Void EDHDFLHMDFG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x13AFD50
    void EDHDFLHMDFG(::MagicalActual::Grabber* FOIEAOKBGLM);
  }; // MagicalActual.TinkerablePiece
  #pragma pack(pop)
  static check_size<sizeof(TinkerablePiece), 52 + sizeof(float)> __MagicalActual_TinkerablePieceSizeCheck;
  static_assert(sizeof(TinkerablePiece) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::AFEJNDDPBNK
// Il2CppName: AFEJNDDPBNK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::AFEJNDDPBNK)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "AFEJNDDPBNK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::BOMGKOAFMOP
// Il2CppName: BOMGKOAFMOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::BOMGKOAFMOP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "BOMGKOAFMOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::ICEGDGKAIIB
// Il2CppName: ICEGDGKAIIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::ICEGDGKAIIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "ICEGDGKAIIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::PhysicsInteractableGrip
// Il2CppName: PhysicsInteractableGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::PhysicsInteractableGrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "PhysicsInteractableGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::GMGFCMJCALC
// Il2CppName: GMGFCMJCALC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::GMGFCMJCALC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "GMGFCMJCALC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::AHMLIMDJCJO
// Il2CppName: AHMLIMDJCJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::AHMLIMDJCJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "AHMLIMDJCJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::NIGDKALGFHM
// Il2CppName: NIGDKALGFHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::NIGDKALGFHM)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "NIGDKALGFHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::HHDFFFCBAMM
// Il2CppName: HHDFFFCBAMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::HHDFFFCBAMM)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "HHDFFFCBAMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::NGEMOFOBKFP
// Il2CppName: NGEMOFOBKFP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::NGEMOFOBKFP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "NGEMOFOBKFP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::DMNAKMCKANG
// Il2CppName: DMNAKMCKANG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::DMNAKMCKANG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "DMNAKMCKANG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::PhysicsInteractableUngrip
// Il2CppName: PhysicsInteractableUngrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::PhysicsInteractableUngrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "PhysicsInteractableUngrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::JPHNAIDIBKL
// Il2CppName: JPHNAIDIBKL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::JPHNAIDIBKL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "JPHNAIDIBKL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::OCFOKKHGALJ
// Il2CppName: OCFOKKHGALJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::OCFOKKHGALJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "OCFOKKHGALJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::HABDJCEKMNH
// Il2CppName: HABDJCEKMNH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::HABDJCEKMNH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "HABDJCEKMNH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::PEBCHDDABFA
// Il2CppName: PEBCHDDABFA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::PEBCHDDABFA)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "PEBCHDDABFA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::PKNDPNAPJKG
// Il2CppName: PKNDPNAPJKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::PKNDPNAPJKG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "PKNDPNAPJKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::ICFANEFPFBJ
// Il2CppName: ICFANEFPFBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::ICFANEFPFBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "ICFANEFPFBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::ALEGNMLPLKG
// Il2CppName: ALEGNMLPLKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::ALEGNMLPLKG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "ALEGNMLPLKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::DNJOEDHOPFC
// Il2CppName: DNJOEDHOPFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::DNJOEDHOPFC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "DNJOEDHOPFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)()>(&MagicalActual::TinkerablePiece::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TinkerablePiece::EDHDFLHMDFG
// Il2CppName: EDHDFLHMDFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TinkerablePiece::*)(::MagicalActual::Grabber*)>(&MagicalActual::TinkerablePiece::EDHDFLHMDFG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TinkerablePiece*), "EDHDFLHMDFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
