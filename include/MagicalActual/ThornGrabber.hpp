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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Monster
  class Monster;
  // Forward declaring type: NetEntity
  class NetEntity;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ThornGrabber
  class ThornGrabber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ThornGrabber);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ThornGrabber*, "MagicalActual", "ThornGrabber");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ThornGrabber
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD7E00
  class ThornGrabber : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.BoxCollider BBOMOHLELBB
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::BoxCollider* BBOMOHLELBB;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x28
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // public UnityEngine.GameObject vfxExplode
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* vfxExplode;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x38
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.BoxCollider BBOMOHLELBB
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn_BBOMOHLELBB();
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public UnityEngine.GameObject vfxExplode
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxExplode();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // private System.Void DKJFPDMDIAA(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A778C
    void DKJFPDMDIAA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DJIGIJKOPDC()
    // Offset: 0x13A7810
    void DJIGIJKOPDC();
    // private System.Void KKBEOCKIBGI(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A7880
    void KKBEOCKIBGI(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void JNHAKMMKHPP()
    // Offset: 0x13A7904
    void JNHAKMMKHPP();
    // public System.Void KBLCHJGCHFG()
    // Offset: 0x13A7A30
    void KBLCHJGCHFG();
    // private System.Void GJIMMCPKPMD(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A7B5C
    void GJIMMCPKPMD(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void NBNKDMCCNJE(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A7BE0
    void NBNKDMCCNJE(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void MonsterDeath()
    // Offset: 0x13A7C64
    void MonsterDeath();
    // private System.Void EPKPFPGJCBD(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A7D8C
    void EPKPFPGJCBD(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void LNICPJBGLOH()
    // Offset: 0x13A7E10
    void LNICPJBGLOH();
    // private System.Void PLFIKFNPKDI(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A7F3C
    void PLFIKFNPKDI(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void JMPPPHNKAFG()
    // Offset: 0x13A7FC0
    void JMPPPHNKAFG();
    // public System.Void FPCPEJBMEOF()
    // Offset: 0x13A8030
    void FPCPEJBMEOF();
    // private System.Void EDJIILEFNPD()
    // Offset: 0x13A815C
    void EDJIILEFNPD();
    // private System.Void DGELIHGGOKB()
    // Offset: 0x13A81CC
    void DGELIHGGOKB();
    // private System.Void FEJNAOBCKJK()
    // Offset: 0x13A823C
    void FEJNAOBCKJK();
    // private System.Void HGMNMNBFGBO(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A82AC
    void HGMNMNBFGBO(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DALODFNBEPG(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A8330
    void DALODFNBEPG(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void PLPDCBMCEJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13A83B4
    void PLPDCBMCEJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NGBDLGIFKDI(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A8468
    void NGBDLGIFKDI(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void HKEMCNIDDEK()
    // Offset: 0x13A84EC
    void HKEMCNIDDEK();
    // private System.Void AFMOIOAGKLM()
    // Offset: 0x13A8618
    void AFMOIOAGKLM();
    // public System.Void JJEJNGMIMOI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13A8688
    void JJEJNGMIMOI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void BCKHDMEFHBJ()
    // Offset: 0x13A873C
    void BCKHDMEFHBJ();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13A8868
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x13A891C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThornGrabber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ThornGrabber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThornGrabber*, creationType>()));
    }
    // public System.Void KIDNJNOFOFF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13A8974
    void KIDNJNOFOFF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13A8A28
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void Awake()
    // Offset: 0x13A8ADC
    void Awake();
    // public System.Void FNMKMDHHFDG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13A8B4C
    void FNMKMDHHFDG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GJBFFPOMPMB(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A8C00
    void GJBFFPOMPMB(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void JLMEEMCEEDO(System.Object OMLPNCLFFMJ)
    // Offset: 0x13A8C84
    void JLMEEMCEEDO(::Il2CppObject* OMLPNCLFFMJ);
  }; // MagicalActual.ThornGrabber
  #pragma pack(pop)
  static check_size<sizeof(ThornGrabber), 56 + sizeof(::StringW)> __MagicalActual_ThornGrabberSizeCheck;
  static_assert(sizeof(ThornGrabber) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::DKJFPDMDIAA
// Il2CppName: DKJFPDMDIAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::DKJFPDMDIAA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "DKJFPDMDIAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::DJIGIJKOPDC
// Il2CppName: DJIGIJKOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::DJIGIJKOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "DJIGIJKOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::KKBEOCKIBGI
// Il2CppName: KKBEOCKIBGI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::KKBEOCKIBGI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "KKBEOCKIBGI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::JNHAKMMKHPP
// Il2CppName: JNHAKMMKHPP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::JNHAKMMKHPP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "JNHAKMMKHPP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::KBLCHJGCHFG
// Il2CppName: KBLCHJGCHFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::KBLCHJGCHFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "KBLCHJGCHFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::GJIMMCPKPMD
// Il2CppName: GJIMMCPKPMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::GJIMMCPKPMD)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "GJIMMCPKPMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::NBNKDMCCNJE
// Il2CppName: NBNKDMCCNJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::NBNKDMCCNJE)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "NBNKDMCCNJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::MonsterDeath
// Il2CppName: MonsterDeath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::MonsterDeath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "MonsterDeath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::EPKPFPGJCBD
// Il2CppName: EPKPFPGJCBD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::EPKPFPGJCBD)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "EPKPFPGJCBD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::LNICPJBGLOH
// Il2CppName: LNICPJBGLOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::LNICPJBGLOH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "LNICPJBGLOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::PLFIKFNPKDI
// Il2CppName: PLFIKFNPKDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::PLFIKFNPKDI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "PLFIKFNPKDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::JMPPPHNKAFG
// Il2CppName: JMPPPHNKAFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::JMPPPHNKAFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "JMPPPHNKAFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::FPCPEJBMEOF
// Il2CppName: FPCPEJBMEOF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::FPCPEJBMEOF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "FPCPEJBMEOF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::EDJIILEFNPD
// Il2CppName: EDJIILEFNPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::EDJIILEFNPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "EDJIILEFNPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::DGELIHGGOKB
// Il2CppName: DGELIHGGOKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::DGELIHGGOKB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "DGELIHGGOKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::FEJNAOBCKJK
// Il2CppName: FEJNAOBCKJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::FEJNAOBCKJK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "FEJNAOBCKJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::HGMNMNBFGBO
// Il2CppName: HGMNMNBFGBO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::HGMNMNBFGBO)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "HGMNMNBFGBO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::DALODFNBEPG
// Il2CppName: DALODFNBEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::DALODFNBEPG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "DALODFNBEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::PLPDCBMCEJF
// Il2CppName: PLPDCBMCEJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ThornGrabber::PLPDCBMCEJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "PLPDCBMCEJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::NGBDLGIFKDI
// Il2CppName: NGBDLGIFKDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::NGBDLGIFKDI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "NGBDLGIFKDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::HKEMCNIDDEK
// Il2CppName: HKEMCNIDDEK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::HKEMCNIDDEK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "HKEMCNIDDEK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::AFMOIOAGKLM
// Il2CppName: AFMOIOAGKLM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::AFMOIOAGKLM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "AFMOIOAGKLM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::JJEJNGMIMOI
// Il2CppName: JJEJNGMIMOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ThornGrabber::JJEJNGMIMOI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "JJEJNGMIMOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::BCKHDMEFHBJ
// Il2CppName: BCKHDMEFHBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::BCKHDMEFHBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "BCKHDMEFHBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ThornGrabber::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::KIDNJNOFOFF
// Il2CppName: KIDNJNOFOFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ThornGrabber::KIDNJNOFOFF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "KIDNJNOFOFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ThornGrabber::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)()>(&MagicalActual::ThornGrabber::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::FNMKMDHHFDG
// Il2CppName: FNMKMDHHFDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ThornGrabber::FNMKMDHHFDG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "FNMKMDHHFDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::GJBFFPOMPMB
// Il2CppName: GJBFFPOMPMB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::GJBFFPOMPMB)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "GJBFFPOMPMB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ThornGrabber::JLMEEMCEEDO
// Il2CppName: JLMEEMCEEDO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ThornGrabber::*)(::Il2CppObject*)>(&MagicalActual::ThornGrabber::JLMEEMCEEDO)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ThornGrabber*), "JLMEEMCEEDO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
