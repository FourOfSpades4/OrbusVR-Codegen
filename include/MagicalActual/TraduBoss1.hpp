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
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: TraduBoss1
  class TraduBoss1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::TraduBoss1);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::TraduBoss1*, "MagicalActual", "TraduBoss1");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.TraduBoss1
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD414C
  class TraduBoss1 : public ::UnityEngine::MonoBehaviour {
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
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject[] phaseMists
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> phaseMists;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Int32 currentPhase
    // Size: 0x4
    // Offset: 0x38
    int currentPhase;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: public UnityEngine.GameObject[] phaseMists
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_phaseMists();
    // Get instance field reference: public System.Int32 currentPhase
    [[deprecated("Use field access instead!")]] int& dyn_currentPhase();
    // private System.Void HFBNHODMGPE()
    // Offset: 0x13BC61C
    void HFBNHODMGPE();
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BC99C
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BCA50
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void FNACOCFPKDO()
    // Offset: 0x13BCB04
    void FNACOCFPKDO();
    // public System.Void EGJMIHFLOKP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BCE84
    void EGJMIHFLOKP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x13BCF38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraduBoss1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::TraduBoss1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraduBoss1*, creationType>()));
    }
    // public System.Void JJEJNGMIMOI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BCF98
    void JJEJNGMIMOI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void PEMIGCGHNHH()
    // Offset: 0x13BD04C
    void PEMIGCGHNHH();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x13BD3CC
    void IDOCJGNLNFL();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x13BD784
    void DGJGAFKDIDK();
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x13BD7E0
    void KBDGAPMJGLG();
    // private System.Void LLEDPBEJPJA(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BD83C
    void LLEDPBEJPJA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x13BD8A8
    void FGIFGGNGKPK();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x13BD904
    void MLGBKBMHHLE();
    // private System.Void NHADFEMILCC()
    // Offset: 0x13BD960
    void NHADFEMILCC();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x13BD9BC
    void CBMDGNKFPIO();
    // private System.Void NBNKDMCCNJE(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDA18
    void NBNKDMCCNJE(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void JENOIOBAEPG()
    // Offset: 0x13BDA84
    void JENOIOBAEPG();
    // private System.Void Start()
    // Offset: 0x13BDAE0
    void Start();
    // private System.Void NGBDLGIFKDI(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDB3C
    void NGBDLGIFKDI(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void HLJAKLGDHDM()
    // Offset: 0x13BD428
    void HLJAKLGDHDM();
    // private System.Void GJIMMCPKPMD(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDBA8
    void GJIMMCPKPMD(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DKJFPDMDIAA(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDC14
    void DKJFPDMDIAA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void GKIOLADOCOK()
    // Offset: 0x13BDC80
    void GKIOLADOCOK();
    // private System.Void DALODFNBEPG(System.Object OMLPNCLFFMJ)
    // Offset: 0x13BDCDC
    void DALODFNBEPG(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void AMBHFINDKPK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13BDD48
    void AMBHFINDKPK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x13BDDFC
    void NNDKJCJFIAK();
  }; // MagicalActual.TraduBoss1
  #pragma pack(pop)
  static check_size<sizeof(TraduBoss1), 56 + sizeof(int)> __MagicalActual_TraduBoss1SizeCheck;
  static_assert(sizeof(TraduBoss1) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::HFBNHODMGPE
// Il2CppName: HFBNHODMGPE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::HFBNHODMGPE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "HFBNHODMGPE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduBoss1::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduBoss1::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::FNACOCFPKDO
// Il2CppName: FNACOCFPKDO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::FNACOCFPKDO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "FNACOCFPKDO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::EGJMIHFLOKP
// Il2CppName: EGJMIHFLOKP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduBoss1::EGJMIHFLOKP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "EGJMIHFLOKP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::JJEJNGMIMOI
// Il2CppName: JJEJNGMIMOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduBoss1::JJEJNGMIMOI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "JJEJNGMIMOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::PEMIGCGHNHH
// Il2CppName: PEMIGCGHNHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::PEMIGCGHNHH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "PEMIGCGHNHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::LLEDPBEJPJA
// Il2CppName: LLEDPBEJPJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::Il2CppObject*)>(&MagicalActual::TraduBoss1::LLEDPBEJPJA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "LLEDPBEJPJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::NBNKDMCCNJE
// Il2CppName: NBNKDMCCNJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::Il2CppObject*)>(&MagicalActual::TraduBoss1::NBNKDMCCNJE)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "NBNKDMCCNJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::NGBDLGIFKDI
// Il2CppName: NGBDLGIFKDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::Il2CppObject*)>(&MagicalActual::TraduBoss1::NGBDLGIFKDI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "NGBDLGIFKDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::HLJAKLGDHDM
// Il2CppName: HLJAKLGDHDM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::HLJAKLGDHDM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "HLJAKLGDHDM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::GJIMMCPKPMD
// Il2CppName: GJIMMCPKPMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::Il2CppObject*)>(&MagicalActual::TraduBoss1::GJIMMCPKPMD)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "GJIMMCPKPMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::DKJFPDMDIAA
// Il2CppName: DKJFPDMDIAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::Il2CppObject*)>(&MagicalActual::TraduBoss1::DKJFPDMDIAA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "DKJFPDMDIAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::DALODFNBEPG
// Il2CppName: DALODFNBEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::Il2CppObject*)>(&MagicalActual::TraduBoss1::DALODFNBEPG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "DALODFNBEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::AMBHFINDKPK
// Il2CppName: AMBHFINDKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)(::MagicalActual::NetEntity*)>(&MagicalActual::TraduBoss1::AMBHFINDKPK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "AMBHFINDKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TraduBoss1::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TraduBoss1::*)()>(&MagicalActual::TraduBoss1::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TraduBoss1*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};