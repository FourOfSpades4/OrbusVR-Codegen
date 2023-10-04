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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: M_Dragonbug
  class M_Dragonbug;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::M_Dragonbug);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_Dragonbug*, "MagicalActual", "M_Dragonbug");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_Dragonbug
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD4DE4
  class M_Dragonbug : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::M_Dragonbug::orbusNetMethodIdx
    struct orbusNetMethodIdx;
    public:
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // public UnityEngine.GameObject vfxSlash
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* vfxSlash;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject vfxBreath
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* vfxBreath;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x30
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x38
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private UnityEngine.Transform KNGDCIAIKBB
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* KNGDCIAIKBB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // Get instance field reference: public UnityEngine.GameObject vfxBreath
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxBreath();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private UnityEngine.Transform KNGDCIAIKBB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_KNGDCIAIKBB();
    // private System.Void GKIOLADOCOK()
    // Offset: 0x2474A88
    void GKIOLADOCOK();
    // public System.Void Slash()
    // Offset: 0x2474B88
    void Slash();
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2474DA0
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x2474DA8
    void BDEDGNGMHMN();
    // private System.Void Start()
    // Offset: 0x2474EA8
    void Start();
    // public System.Void KIDNJNOFOFF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2474FA8
    void KIDNJNOFOFF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void HKKLAAJKHCF()
    // Offset: 0x2474FB0
    void HKKLAAJKHCF();
    // private System.Void GPFBGGFPINB()
    // Offset: 0x2475128
    void GPFBGGFPINB();
    // public System.Void LJAHODPDFCA()
    // Offset: 0x2475228
    void LJAHODPDFCA();
    // private System.Void PFABJJGAOMM()
    // Offset: 0x24753A0
    void PFABJJGAOMM();
    // public System.Void MKAECMFKIEN()
    // Offset: 0x24754A0
    void MKAECMFKIEN();
    // public System.Void NPHGJOOJPCE()
    // Offset: 0x24756C4
    void NPHGJOOJPCE();
    // public System.Void JOCIAJOCGNM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x247583C
    void JOCIAJOCGNM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void HKINNMLBMMG()
    // Offset: 0x2475844
    void HKINNMLBMMG();
    // public System.Void .ctor()
    // Offset: 0x2475944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static M_Dragonbug* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::M_Dragonbug::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<M_Dragonbug*, creationType>()));
    }
    // public System.Void JGIHCPHNLCM()
    // Offset: 0x247599C
    void JGIHCPHNLCM();
    // public System.Void MHKEJPGPMIA()
    // Offset: 0x2475B14
    void MHKEJPGPMIA();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2475C8C
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x2475C94
    void NNDKJCJFIAK();
    // public System.Void HMDKBDDPDPO()
    // Offset: 0x2475D94
    void HMDKBDDPDPO();
    // public System.Void LICNNJFOJMF()
    // Offset: 0x2475F0C
    void LICNNJFOJMF();
    // public System.Void EBJDLAIJJJE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2476084
    void EBJDLAIJJJE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AKEEGHHHCKK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x247608C
    void AKEEGHHHCKK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void Breath()
    // Offset: 0x2476094
    void Breath();
    // public System.Void DEPAIFNIHEE()
    // Offset: 0x2476208
    void DEPAIFNIHEE();
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x2476380
    void FGIFGGNGKPK();
  }; // MagicalActual.M_Dragonbug
  #pragma pack(pop)
  static check_size<sizeof(M_Dragonbug), 64 + sizeof(::UnityEngine::Transform*)> __MagicalActual_M_DragonbugSizeCheck;
  static_assert(sizeof(M_Dragonbug) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Dragonbug::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::KIDNJNOFOFF
// Il2CppName: KIDNJNOFOFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Dragonbug::KIDNJNOFOFF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "KIDNJNOFOFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::HKKLAAJKHCF
// Il2CppName: HKKLAAJKHCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::HKKLAAJKHCF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "HKKLAAJKHCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::LJAHODPDFCA
// Il2CppName: LJAHODPDFCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::LJAHODPDFCA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "LJAHODPDFCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::PFABJJGAOMM
// Il2CppName: PFABJJGAOMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::PFABJJGAOMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "PFABJJGAOMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::MKAECMFKIEN
// Il2CppName: MKAECMFKIEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::MKAECMFKIEN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "MKAECMFKIEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::NPHGJOOJPCE
// Il2CppName: NPHGJOOJPCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::NPHGJOOJPCE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "NPHGJOOJPCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::JOCIAJOCGNM
// Il2CppName: JOCIAJOCGNM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Dragonbug::JOCIAJOCGNM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "JOCIAJOCGNM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::JGIHCPHNLCM
// Il2CppName: JGIHCPHNLCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::JGIHCPHNLCM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "JGIHCPHNLCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::MHKEJPGPMIA
// Il2CppName: MHKEJPGPMIA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::MHKEJPGPMIA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "MHKEJPGPMIA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Dragonbug::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::HMDKBDDPDPO
// Il2CppName: HMDKBDDPDPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::HMDKBDDPDPO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "HMDKBDDPDPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::LICNNJFOJMF
// Il2CppName: LICNNJFOJMF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::LICNNJFOJMF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "LICNNJFOJMF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::EBJDLAIJJJE
// Il2CppName: EBJDLAIJJJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Dragonbug::EBJDLAIJJJE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "EBJDLAIJJJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::AKEEGHHHCKK
// Il2CppName: AKEEGHHHCKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Dragonbug::AKEEGHHHCKK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "AKEEGHHHCKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::Breath
// Il2CppName: Breath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::Breath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "Breath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::DEPAIFNIHEE
// Il2CppName: DEPAIFNIHEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::DEPAIFNIHEE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "DEPAIFNIHEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Dragonbug::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Dragonbug::*)()>(&MagicalActual::M_Dragonbug::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Dragonbug*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
