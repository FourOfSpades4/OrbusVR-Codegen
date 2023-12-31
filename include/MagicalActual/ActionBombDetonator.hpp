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
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Grabber
  class Grabber;
  // Forward declaring type: BoostBombDeployed
  class BoostBombDeployed;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ActionBombDetonator
  class ActionBombDetonator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ActionBombDetonator);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ActionBombDetonator*, "MagicalActual", "ActionBombDetonator");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ActionBombDetonator
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionBombDetonator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 HOKKHECIAAM
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 HOKKHECIAAM;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 CAIOFAGEEDM
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 CAIOFAGEEDM;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private MagicalActual.Grabber CLHMLLOPNJM
    // Size: 0x8
    // Offset: 0x30
    ::MagicalActual::Grabber* CLHMLLOPNJM;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // private System.Boolean DPIIJHJECDH
    // Size: 0x1
    // Offset: 0x38
    bool DPIIJHJECDH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DPIIJHJECDH and: lowestPoint
    char __padding3[0x3] = {};
    // private System.Single lowestPoint
    // Size: 0x4
    // Offset: 0x3C
    float lowestPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.GameObject trigger
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* trigger;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private MagicalActual.BoostBombDeployed myBoostBombDeployed
    // Size: 0x8
    // Offset: 0x48
    ::MagicalActual::BoostBombDeployed* myBoostBombDeployed;
    // Field size check
    static_assert(sizeof(::MagicalActual::BoostBombDeployed*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 HOKKHECIAAM
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_HOKKHECIAAM();
    // Get instance field reference: private UnityEngine.Vector3 CAIOFAGEEDM
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_CAIOFAGEEDM();
    // Get instance field reference: private MagicalActual.Grabber CLHMLLOPNJM
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_CLHMLLOPNJM();
    // Get instance field reference: private System.Boolean DPIIJHJECDH
    [[deprecated("Use field access instead!")]] bool& dyn_DPIIJHJECDH();
    // Get instance field reference: private System.Single lowestPoint
    [[deprecated("Use field access instead!")]] float& dyn_lowestPoint();
    // Get instance field reference: private UnityEngine.GameObject trigger
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_trigger();
    // Get instance field reference: private MagicalActual.BoostBombDeployed myBoostBombDeployed
    [[deprecated("Use field access instead!")]] ::MagicalActual::BoostBombDeployed*& dyn_myBoostBombDeployed();
    // public System.Void IMMKEFOHIOK()
    // Offset: 0x19FF9F0
    void IMMKEFOHIOK();
    // private System.Void HHKOFMNJKDA()
    // Offset: 0x19FFA60
    void HHKOFMNJKDA();
    // public System.Void doGripInteraction(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x19FFCB0
    void doGripInteraction(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void FixedUpdate()
    // Offset: 0x19FFE1C
    void FixedUpdate();
    // private System.Void AMGJNJLJIFO()
    // Offset: 0x1A00068
    void AMGJNJLJIFO();
    // private System.Void AHPDCIGFMJI()
    // Offset: 0x1A002B8
    void AHPDCIGFMJI();
    // public System.Void HLKCJBPDLIP(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A00318
    void HLKCJBPDLIP(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void LOKCCIOHHEB(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A00488
    void LOKCCIOHHEB(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void CBKLMOJBMJA()
    // Offset: 0x1A005F8
    void CBKLMOJBMJA();
    // private System.Void JPHNAIDIBKL()
    // Offset: 0x1A00668
    void JPHNAIDIBKL();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x1A008B8
    void IPIFMKAGODD();
    // public System.Void LFCLOLALALG()
    // Offset: 0x1A00918
    void LFCLOLALALG();
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x1A00988
    void KBDGAPMJGLG();
    // public System.Void HLFDABPBIPM(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A009E8
    void HLFDABPBIPM(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void Start()
    // Offset: 0x1A00B58
    void Start();
    // public System.Void GCCJNMIHCAN(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A00BB0
    void GCCJNMIHCAN(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void JMBOCECBBOL()
    // Offset: 0x1A00D20
    void JMBOCECBBOL();
    // public System.Void JAMJKPADBOG()
    // Offset: 0x1A00D90
    void JAMJKPADBOG();
    // public System.Void GLMEDNIODFG(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A00E00
    void GLMEDNIODFG(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void APIMIOELFAJ()
    // Offset: 0x1A00F0C
    void APIMIOELFAJ();
    // private System.Void AIEPGHLFDAL()
    // Offset: 0x1A00F6C
    void AIEPGHLFDAL();
    // public System.Void .ctor()
    // Offset: 0x1A011BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionBombDetonator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ActionBombDetonator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionBombDetonator*, creationType>()));
    }
    // private System.Void JENOIOBAEPG()
    // Offset: 0x1A011D0
    void JENOIOBAEPG();
    // private System.Void NHADFEMILCC()
    // Offset: 0x1A01230
    void NHADFEMILCC();
    // public System.Void doUnGripInteraction(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A01290
    void doUnGripInteraction(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void ICEGDGKAIIB()
    // Offset: 0x1A0139C
    void ICEGDGKAIIB();
    // public System.Void NFIJKLIFJAC()
    // Offset: 0x1A015F0
    void NFIJKLIFJAC();
    // private System.Void DFCOAPEIKLN()
    // Offset: 0x1A01660
    void DFCOAPEIKLN();
    // public System.Void DBHDPAEGHAP()
    // Offset: 0x1A016C0
    void DBHDPAEGHAP();
    // public System.Void DMIBMJBEFHN(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A01730
    void DMIBMJBEFHN(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void GPFBGGFPINB()
    // Offset: 0x1A018A0
    void GPFBGGFPINB();
    // public System.Void CKGKDIGNPCP()
    // Offset: 0x1A01900
    void CKGKDIGNPCP();
    // public System.Void ResetOriginalPosition()
    // Offset: 0x1A01970
    void ResetOriginalPosition();
    // private System.Void GGAFMPPDBOH()
    // Offset: 0x1A019E0
    void GGAFMPPDBOH();
    // public System.Void CANOKIMLKEG(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A01C34
    void CANOKIMLKEG(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void NEDFCIDMJBB()
    // Offset: 0x1A01D40
    void NEDFCIDMJBB();
    // private System.Void JPHEBENNLCB()
    // Offset: 0x1A01DA0
    void JPHEBENNLCB();
    // public System.Void FAGJOMPFIFD(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A01FF0
    void FAGJOMPFIFD(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void GCJBLHNELFB(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A02160
    void GCJBLHNELFB(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void INLFFBMBAHG(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A0226C
    void INLFFBMBAHG(::UnityEngine::GameObject* FOIEAOKBGLM);
    // private System.Void HABDJCEKMNH()
    // Offset: 0x1A023DC
    void HABDJCEKMNH();
    // public System.Void JCLFAHPMOJH()
    // Offset: 0x1A0262C
    void JCLFAHPMOJH();
    // public System.Void DIMJEMFFKEG()
    // Offset: 0x1A0269C
    void DIMJEMFFKEG();
    // public System.Void LDJHGMEFPKD(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1A0270C
    void LDJHGMEFPKD(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void HHDFOOMHKNL()
    // Offset: 0x1A02818
    void HHDFOOMHKNL();
  }; // MagicalActual.ActionBombDetonator
  #pragma pack(pop)
  static check_size<sizeof(ActionBombDetonator), 72 + sizeof(::MagicalActual::BoostBombDeployed*)> __MagicalActual_ActionBombDetonatorSizeCheck;
  static_assert(sizeof(ActionBombDetonator) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::IMMKEFOHIOK
// Il2CppName: IMMKEFOHIOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::IMMKEFOHIOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "IMMKEFOHIOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::HHKOFMNJKDA
// Il2CppName: HHKOFMNJKDA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::HHKOFMNJKDA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "HHKOFMNJKDA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::doGripInteraction
// Il2CppName: doGripInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::doGripInteraction)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "doGripInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::AMGJNJLJIFO
// Il2CppName: AMGJNJLJIFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::AMGJNJLJIFO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "AMGJNJLJIFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::AHPDCIGFMJI
// Il2CppName: AHPDCIGFMJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::AHPDCIGFMJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "AHPDCIGFMJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::HLKCJBPDLIP
// Il2CppName: HLKCJBPDLIP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::HLKCJBPDLIP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "HLKCJBPDLIP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::LOKCCIOHHEB
// Il2CppName: LOKCCIOHHEB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::LOKCCIOHHEB)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "LOKCCIOHHEB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::CBKLMOJBMJA
// Il2CppName: CBKLMOJBMJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::CBKLMOJBMJA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "CBKLMOJBMJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::JPHNAIDIBKL
// Il2CppName: JPHNAIDIBKL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::JPHNAIDIBKL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "JPHNAIDIBKL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::LFCLOLALALG
// Il2CppName: LFCLOLALALG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::LFCLOLALALG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "LFCLOLALALG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::HLFDABPBIPM
// Il2CppName: HLFDABPBIPM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::HLFDABPBIPM)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "HLFDABPBIPM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::GCCJNMIHCAN
// Il2CppName: GCCJNMIHCAN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::GCCJNMIHCAN)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "GCCJNMIHCAN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::JMBOCECBBOL
// Il2CppName: JMBOCECBBOL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::JMBOCECBBOL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "JMBOCECBBOL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::JAMJKPADBOG
// Il2CppName: JAMJKPADBOG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::JAMJKPADBOG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "JAMJKPADBOG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::GLMEDNIODFG
// Il2CppName: GLMEDNIODFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::GLMEDNIODFG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "GLMEDNIODFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::APIMIOELFAJ
// Il2CppName: APIMIOELFAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::APIMIOELFAJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "APIMIOELFAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::AIEPGHLFDAL
// Il2CppName: AIEPGHLFDAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::AIEPGHLFDAL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "AIEPGHLFDAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::doUnGripInteraction
// Il2CppName: doUnGripInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::doUnGripInteraction)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "doUnGripInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::ICEGDGKAIIB
// Il2CppName: ICEGDGKAIIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::ICEGDGKAIIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "ICEGDGKAIIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::NFIJKLIFJAC
// Il2CppName: NFIJKLIFJAC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::NFIJKLIFJAC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "NFIJKLIFJAC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::DFCOAPEIKLN
// Il2CppName: DFCOAPEIKLN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::DFCOAPEIKLN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "DFCOAPEIKLN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::DBHDPAEGHAP
// Il2CppName: DBHDPAEGHAP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::DBHDPAEGHAP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "DBHDPAEGHAP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::DMIBMJBEFHN
// Il2CppName: DMIBMJBEFHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::DMIBMJBEFHN)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "DMIBMJBEFHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::CKGKDIGNPCP
// Il2CppName: CKGKDIGNPCP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::CKGKDIGNPCP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "CKGKDIGNPCP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::ResetOriginalPosition
// Il2CppName: ResetOriginalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::ResetOriginalPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "ResetOriginalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::GGAFMPPDBOH
// Il2CppName: GGAFMPPDBOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::GGAFMPPDBOH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "GGAFMPPDBOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::CANOKIMLKEG
// Il2CppName: CANOKIMLKEG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::CANOKIMLKEG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "CANOKIMLKEG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::NEDFCIDMJBB
// Il2CppName: NEDFCIDMJBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::NEDFCIDMJBB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "NEDFCIDMJBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::JPHEBENNLCB
// Il2CppName: JPHEBENNLCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::JPHEBENNLCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "JPHEBENNLCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::FAGJOMPFIFD
// Il2CppName: FAGJOMPFIFD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::FAGJOMPFIFD)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "FAGJOMPFIFD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::GCJBLHNELFB
// Il2CppName: GCJBLHNELFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::GCJBLHNELFB)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "GCJBLHNELFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::INLFFBMBAHG
// Il2CppName: INLFFBMBAHG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::INLFFBMBAHG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "INLFFBMBAHG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::HABDJCEKMNH
// Il2CppName: HABDJCEKMNH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::HABDJCEKMNH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "HABDJCEKMNH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::JCLFAHPMOJH
// Il2CppName: JCLFAHPMOJH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::JCLFAHPMOJH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "JCLFAHPMOJH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::DIMJEMFFKEG
// Il2CppName: DIMJEMFFKEG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::DIMJEMFFKEG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "DIMJEMFFKEG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::LDJHGMEFPKD
// Il2CppName: LDJHGMEFPKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)(::UnityEngine::GameObject*)>(&MagicalActual::ActionBombDetonator::LDJHGMEFPKD)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "LDJHGMEFPKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::ActionBombDetonator::HHDFOOMHKNL
// Il2CppName: HHDFOOMHKNL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ActionBombDetonator::*)()>(&MagicalActual::ActionBombDetonator::HHDFOOMHKNL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ActionBombDetonator*), "HHDFOOMHKNL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
