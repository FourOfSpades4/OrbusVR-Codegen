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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Monster
  class Monster;
  // Forward declaring type: NetEntity
  class NetEntity;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: TraduButton
  class TraduButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::TraduButton);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::TraduButton*, "MagicalActual", "TraduButton");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.TraduButton
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD41B0
  class TraduButton : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // public UnityEngine.GameObject vfxSlash
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* vfxSlash;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x30
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Material onMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* onMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material offMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* offMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.SkinnedMeshRenderer globeRenderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::SkinnedMeshRenderer* globeRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // public System.Boolean activated
    // Size: 0x1
    // Offset: 0x50
    bool activated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: public UnityEngine.Material onMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_onMaterial();
    // Get instance field reference: public UnityEngine.Material offMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_offMaterial();
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer globeRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn_globeRenderer();
    // Get instance field reference: public System.Boolean activated
    [[deprecated("Use field access instead!")]] bool& dyn_activated();
    // private System.Void DGIKKMCHFGM(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDF18
    void DGIKKMCHFGM(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void PMOJCEANELA(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDFD0
    void PMOJCEANELA(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BE088
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void AGPEIDHOJPN(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE13C
    void AGPEIDHOJPN(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void PIBPBJELIBH()
    // Offset: 0x13BE1A8
    void PIBPBJELIBH();
    // private System.Void CBODMMEJOEC()
    // Offset: 0x13BE1F4
    void CBODMMEJOEC();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x13BE240
    void IDOCJGNLNFL();
    // private System.Void PGCEBGGIDMA(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE29C
    void PGCEBGGIDMA(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void .ctor()
    // Offset: 0x13BE354
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraduButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::TraduButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraduButton*, creationType>()));
    }
    // private System.Void CFOMLHBHNMG()
    // Offset: 0x13BE308
    void CFOMLHBHNMG();
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x13BE3AC
    void EIIKFEMCNKM();
    // private System.Void FLDCOFHHDKN()
    // Offset: 0x13BE408
    void FLDCOFHHDKN();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x13BE454
    void KPOAAAHLGLA();
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BE4FC
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BLLLIJPBEMC(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE5B0
    void BLLLIJPBEMC(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void OGHPMKHFJNE()
    // Offset: 0x13BE61C
    void OGHPMKHFJNE();
    // private System.Void MONCBOKMLEA(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE668
    void MONCBOKMLEA(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BE6D4
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NEMKNLGDEAK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BE788
    void NEMKNLGDEAK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JFGIIPHBBCC()
    // Offset: 0x13BDF84
    void JFGIIPHBBCC();
    // private System.Void Start()
    // Offset: 0x13BE83C
    void Start();
    // private System.Void DDOOFFHBJJN(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE898
    void DDOOFFHBJJN(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void FNGLOIECKDG()
    // Offset: 0x13BE904
    void FNGLOIECKDG();
    // private System.Void JGDLMKDHDMP()
    // Offset: 0x13BE03C
    void JGDLMKDHDMP();
    // private System.Void LOKDCCBIBCM(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE960
    void LOKDCCBIBCM(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void IBCHFKNBAOF()
    // Offset: 0x13BE4B0
    void IBCHFKNBAOF();
    // private System.Void LBNIKPDOGPK(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BE9CC
    void LBNIKPDOGPK(::Il2CppObject* OMLPNCLFFMJ);
  }; // MagicalActual.TraduButton
  #pragma pack(pop)
  static check_size<sizeof(TraduButton), 80 + sizeof(bool)> __MagicalActual_TraduButtonSizeCheck;
  static_assert(sizeof(TraduButton) == 0x51);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::TraduButton::DGIKKMCHFGM
// Il2CppName: DGIKKMCHFGM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::DGIKKMCHFGM)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "DGIKKMCHFGM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::PMOJCEANELA
// Il2CppName: PMOJCEANELA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::PMOJCEANELA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "PMOJCEANELA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduButton::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::AGPEIDHOJPN
// Il2CppName: AGPEIDHOJPN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::AGPEIDHOJPN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "AGPEIDHOJPN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::PIBPBJELIBH
// Il2CppName: PIBPBJELIBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::PIBPBJELIBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "PIBPBJELIBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::CBODMMEJOEC
// Il2CppName: CBODMMEJOEC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::CBODMMEJOEC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "CBODMMEJOEC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::PGCEBGGIDMA
// Il2CppName: PGCEBGGIDMA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::PGCEBGGIDMA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "PGCEBGGIDMA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::TraduButton::CFOMLHBHNMG
// Il2CppName: CFOMLHBHNMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::CFOMLHBHNMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "CFOMLHBHNMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::FLDCOFHHDKN
// Il2CppName: FLDCOFHHDKN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::FLDCOFHHDKN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "FLDCOFHHDKN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduButton::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::BLLLIJPBEMC
// Il2CppName: BLLLIJPBEMC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::BLLLIJPBEMC)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "BLLLIJPBEMC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::OGHPMKHFJNE
// Il2CppName: OGHPMKHFJNE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::OGHPMKHFJNE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "OGHPMKHFJNE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::MONCBOKMLEA
// Il2CppName: MONCBOKMLEA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::MONCBOKMLEA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "MONCBOKMLEA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduButton::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::NEMKNLGDEAK
// Il2CppName: NEMKNLGDEAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduButton::NEMKNLGDEAK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "NEMKNLGDEAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::JFGIIPHBBCC
// Il2CppName: JFGIIPHBBCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::JFGIIPHBBCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "JFGIIPHBBCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::DDOOFFHBJJN
// Il2CppName: DDOOFFHBJJN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::DDOOFFHBJJN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "DDOOFFHBJJN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::JGDLMKDHDMP
// Il2CppName: JGDLMKDHDMP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::JGDLMKDHDMP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "JGDLMKDHDMP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::LOKDCCBIBCM
// Il2CppName: LOKDCCBIBCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::LOKDCCBIBCM)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "LOKDCCBIBCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::IBCHFKNBAOF
// Il2CppName: IBCHFKNBAOF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)()>(&MagicalActual::TraduButton::IBCHFKNBAOF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "IBCHFKNBAOF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduButton::LBNIKPDOGPK
// Il2CppName: LBNIKPDOGPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduButton::*)(::Il2CppObject*)>(&MagicalActual::TraduButton::LBNIKPDOGPK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduButton*), "LBNIKPDOGPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};