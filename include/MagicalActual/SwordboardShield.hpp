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
  // Forward declaring type: NetEntity
  class NetEntity;
  // Forward declaring type: Monster
  class Monster;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: SwordboardShield
  class SwordboardShield;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::SwordboardShield);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::SwordboardShield*, "MagicalActual", "SwordboardShield");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.SwordboardShield
  // [TokenAttribute] Offset: FFFFFFFF
  class SwordboardShield : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x28
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // public UnityEngine.GameObject vfxSlash
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* vfxSlash;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // public System.Void .ctor()
    // Offset: 0x1665014
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SwordboardShield* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::SwordboardShield::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SwordboardShield*, creationType>()));
    }
    // public System.Void OAMOHIMHKEK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166506C
    void OAMOHIMHKEK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void OJFAEAIKFED()
    // Offset: 0x1665074
    void OJFAEAIKFED();
    // public System.Void KMPPLBBIMGJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16650CC
    void KMPPLBBIMGJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void LPLGKBGLPOK()
    // Offset: 0x16650D4
    void LPLGKBGLPOK();
    // private System.Void OACMGPBCPEL()
    // Offset: 0x166512C
    void OACMGPBCPEL();
    // private System.Void AKGFEENGKJD()
    // Offset: 0x1665184
    void AKGFEENGKJD();
    // public System.Void KGNNMOBOEFG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16651DC
    void KGNNMOBOEFG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x16651E4
    void GHLPBOJJHNG();
    // private System.Void Start()
    // Offset: 0x166523C
    void Start();
    // public System.Void EBJDLAIJJJE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1665294
    void EBJDLAIJJJE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GPFBGGFPINB()
    // Offset: 0x166529C
    void GPFBGGFPINB();
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16652F4
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16652FC
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x1665304
    void NNDKJCJFIAK();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x166535C
    void EPCHNEGNKNF();
    // public System.Void AKEEGHHHCKK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16653B4
    void AKEEGHHHCKK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void DICPOOMKKKB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16653BC
    void DICPOOMKKKB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void FBONHOOJHBG()
    // Offset: 0x16653C4
    void FBONHOOJHBG();
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166541C
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void AFIACGLCIPB()
    // Offset: 0x1665424
    void AFIACGLCIPB();
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x166547C
    void EIIKFEMCNKM();
    // private System.Void DFCOAPEIKLN()
    // Offset: 0x16654D4
    void DFCOAPEIKLN();
    // public System.Void JOCIAJOCGNM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166552C
    void JOCIAJOCGNM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void HKINNMLBMMG()
    // Offset: 0x1665534
    void HKINNMLBMMG();
    // public System.Void OFDMFGNMEOP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166558C
    void OFDMFGNMEOP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NEMKNLGDEAK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1665594
    void NEMKNLGDEAK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KEGEKFNLCJD(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166559C
    void KEGEKFNLCJD(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void PLPDCBMCEJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x16655A4
    void PLPDCBMCEJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void LBIKOKCCILF()
    // Offset: 0x16655AC
    void LBIKOKCCILF();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x1665604
    void IDOCJGNLNFL();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166565C
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AMBHFINDKPK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1665664
    void AMBHFINDKPK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NMPGLDGDDNL(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166566C
    void NMPGLDGDDNL(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void JOGPGAPOBBK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1665674
    void JOGPGAPOBBK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void EGJMIHFLOKP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x166567C
    void EGJMIHFLOKP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void FNMKMDHHFDG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1665684
    void FNMKMDHHFDG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void APIMIOELFAJ()
    // Offset: 0x166568C
    void APIMIOELFAJ();
  }; // MagicalActual.SwordboardShield
  #pragma pack(pop)
  static check_size<sizeof(SwordboardShield), 48 + sizeof(::UnityEngine::GameObject*)> __MagicalActual_SwordboardShieldSizeCheck;
  static_assert(sizeof(SwordboardShield) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::OAMOHIMHKEK
// Il2CppName: OAMOHIMHKEK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::OAMOHIMHKEK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "OAMOHIMHKEK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::OJFAEAIKFED
// Il2CppName: OJFAEAIKFED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::OJFAEAIKFED)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "OJFAEAIKFED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::KMPPLBBIMGJ
// Il2CppName: KMPPLBBIMGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::KMPPLBBIMGJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "KMPPLBBIMGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::LPLGKBGLPOK
// Il2CppName: LPLGKBGLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::LPLGKBGLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "LPLGKBGLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::OACMGPBCPEL
// Il2CppName: OACMGPBCPEL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::OACMGPBCPEL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "OACMGPBCPEL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::AKGFEENGKJD
// Il2CppName: AKGFEENGKJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::AKGFEENGKJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "AKGFEENGKJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::KGNNMOBOEFG
// Il2CppName: KGNNMOBOEFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::KGNNMOBOEFG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "KGNNMOBOEFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::EBJDLAIJJJE
// Il2CppName: EBJDLAIJJJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::EBJDLAIJJJE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "EBJDLAIJJJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::AKEEGHHHCKK
// Il2CppName: AKEEGHHHCKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::AKEEGHHHCKK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "AKEEGHHHCKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::DICPOOMKKKB
// Il2CppName: DICPOOMKKKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::DICPOOMKKKB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "DICPOOMKKKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::FBONHOOJHBG
// Il2CppName: FBONHOOJHBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::FBONHOOJHBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "FBONHOOJHBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::DFCOAPEIKLN
// Il2CppName: DFCOAPEIKLN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::DFCOAPEIKLN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "DFCOAPEIKLN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::JOCIAJOCGNM
// Il2CppName: JOCIAJOCGNM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::JOCIAJOCGNM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "JOCIAJOCGNM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::OFDMFGNMEOP
// Il2CppName: OFDMFGNMEOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::OFDMFGNMEOP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "OFDMFGNMEOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::NEMKNLGDEAK
// Il2CppName: NEMKNLGDEAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::NEMKNLGDEAK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "NEMKNLGDEAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::KEGEKFNLCJD
// Il2CppName: KEGEKFNLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::KEGEKFNLCJD)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "KEGEKFNLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::PLPDCBMCEJF
// Il2CppName: PLPDCBMCEJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::PLPDCBMCEJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "PLPDCBMCEJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::AMBHFINDKPK
// Il2CppName: AMBHFINDKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::AMBHFINDKPK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "AMBHFINDKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::NMPGLDGDDNL
// Il2CppName: NMPGLDGDDNL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::NMPGLDGDDNL)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "NMPGLDGDDNL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::JOGPGAPOBBK
// Il2CppName: JOGPGAPOBBK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::JOGPGAPOBBK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "JOGPGAPOBBK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::EGJMIHFLOKP
// Il2CppName: EGJMIHFLOKP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::EGJMIHFLOKP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "EGJMIHFLOKP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::FNMKMDHHFDG
// Il2CppName: FNMKMDHHFDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)(::MagicalActual::NetEntity*)>(&MagicalActual::SwordboardShield::FNMKMDHHFDG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "FNMKMDHHFDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::SwordboardShield::APIMIOELFAJ
// Il2CppName: APIMIOELFAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::SwordboardShield::*)()>(&MagicalActual::SwordboardShield::APIMIOELFAJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::SwordboardShield*), "APIMIOELFAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
