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
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: M_RaidBell
  class M_RaidBell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::M_RaidBell);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_RaidBell*, "MagicalActual", "M_RaidBell");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_RaidBell
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD5B18
  class M_RaidBell : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.MeshRenderer bellRenderer
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::MeshRenderer* bellRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x30
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte FNNDEMDBLPH
    // Size: 0x1
    // Offset: 0x38
    uint8_t FNNDEMDBLPH;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public UnityEngine.MeshRenderer bellRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_bellRenderer();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private System.Byte FNNDEMDBLPH
    [[deprecated("Use field access instead!")]] uint8_t& dyn_FNNDEMDBLPH();
    // public System.Void .ctor()
    // Offset: 0x25F2B5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static M_RaidBell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::M_RaidBell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<M_RaidBell*, creationType>()));
    }
    // private System.Void IPIFMKAGODD()
    // Offset: 0x25F2BB4
    void IPIFMKAGODD();
    // public System.Void JOGPGAPOBBK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F2C0C
    void JOGPGAPOBBK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F2CC0
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void IGHINNOEOLB()
    // Offset: 0x25F2D74
    void IGHINNOEOLB();
    // public System.Void KMPPLBBIMGJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F2E90
    void KMPPLBBIMGJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NMCODOOJNGA()
    // Offset: 0x25F2F44
    void NMCODOOJNGA();
    // public System.Void DKDBFFDLADP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F3060
    void DKDBFFDLADP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AKEEGHHHCKK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F3114
    void AKEEGHHHCKK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JGBHFICLLLP()
    // Offset: 0x25F31C8
    void JGBHFICLLLP();
    // private System.Void PIGJBMHPJBG()
    // Offset: 0x25F32E4
    void PIGJBMHPJBG();
    // private System.Void Start()
    // Offset: 0x25F3400
    void Start();
    // private System.Void HKINNMLBMMG()
    // Offset: 0x25F3458
    void HKINNMLBMMG();
    // private System.Void GJIMMCPKPMD(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F34B0
    void GJIMMCPKPMD(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void CLNMKBPKGDN(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3638
    void CLNMKBPKGDN(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void JJEJNGMIMOI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F36A4
    void JJEJNGMIMOI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void LLEDPBEJPJA(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3758
    void LLEDPBEJPJA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void KFBBLPNKLBM()
    // Offset: 0x25F37C4
    void KFBBLPNKLBM();
    // public System.Void IKDGLCBOCJG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F38E0
    void IKDGLCBOCJG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void OEJDFNBOAEM()
    // Offset: 0x25F351C
    void OEJDFNBOAEM();
    // public System.Void HMKJKOKPOBP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F3994
    void HMKJKOKPOBP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NEMKNLGDEAK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F3A48
    void NEMKNLGDEAK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void DPDBJMBKNHM(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3AFC
    void DPDBJMBKNHM(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void BBMOOPGEBIA(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3B68
    void BBMOOPGEBIA(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F3BD4
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void PLCJOLCFNJM()
    // Offset: 0x25F3C88
    void PLCJOLCFNJM();
    // private System.Void PLFIKFNPKDI(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3DA4
    void PLFIKFNPKDI(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void GJBFFPOMPMB(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3E10
    void GJBFFPOMPMB(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DKJFPDMDIAA(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3E7C
    void DKJFPDMDIAA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DBIIJPPPIBA(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F3EE8
    void DBIIJPPPIBA(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void FNMKMDHHFDG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F3F54
    void FNMKMDHHFDG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25F4008
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JHPMDNJLGJA(System.Object OMLPNCLFFMJ)
    // Offset: 0x25F40BC
    void JHPMDNJLGJA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void GKIOLADOCOK()
    // Offset: 0x25F4128
    void GKIOLADOCOK();
  }; // MagicalActual.M_RaidBell
  #pragma pack(pop)
  static check_size<sizeof(M_RaidBell), 56 + sizeof(uint8_t)> __MagicalActual_M_RaidBellSizeCheck;
  static_assert(sizeof(M_RaidBell) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::JOGPGAPOBBK
// Il2CppName: JOGPGAPOBBK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::JOGPGAPOBBK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "JOGPGAPOBBK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::IGHINNOEOLB
// Il2CppName: IGHINNOEOLB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::IGHINNOEOLB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "IGHINNOEOLB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::KMPPLBBIMGJ
// Il2CppName: KMPPLBBIMGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::KMPPLBBIMGJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "KMPPLBBIMGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::NMCODOOJNGA
// Il2CppName: NMCODOOJNGA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::NMCODOOJNGA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "NMCODOOJNGA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::DKDBFFDLADP
// Il2CppName: DKDBFFDLADP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::DKDBFFDLADP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "DKDBFFDLADP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::AKEEGHHHCKK
// Il2CppName: AKEEGHHHCKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::AKEEGHHHCKK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "AKEEGHHHCKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::JGBHFICLLLP
// Il2CppName: JGBHFICLLLP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::JGBHFICLLLP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "JGBHFICLLLP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::PIGJBMHPJBG
// Il2CppName: PIGJBMHPJBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::PIGJBMHPJBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "PIGJBMHPJBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::GJIMMCPKPMD
// Il2CppName: GJIMMCPKPMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::GJIMMCPKPMD)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "GJIMMCPKPMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::CLNMKBPKGDN
// Il2CppName: CLNMKBPKGDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::CLNMKBPKGDN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "CLNMKBPKGDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::JJEJNGMIMOI
// Il2CppName: JJEJNGMIMOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::JJEJNGMIMOI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "JJEJNGMIMOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::LLEDPBEJPJA
// Il2CppName: LLEDPBEJPJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::LLEDPBEJPJA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "LLEDPBEJPJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::KFBBLPNKLBM
// Il2CppName: KFBBLPNKLBM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::KFBBLPNKLBM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "KFBBLPNKLBM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::IKDGLCBOCJG
// Il2CppName: IKDGLCBOCJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::IKDGLCBOCJG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "IKDGLCBOCJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::OEJDFNBOAEM
// Il2CppName: OEJDFNBOAEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::OEJDFNBOAEM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "OEJDFNBOAEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::HMKJKOKPOBP
// Il2CppName: HMKJKOKPOBP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::HMKJKOKPOBP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "HMKJKOKPOBP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::NEMKNLGDEAK
// Il2CppName: NEMKNLGDEAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::NEMKNLGDEAK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "NEMKNLGDEAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::DPDBJMBKNHM
// Il2CppName: DPDBJMBKNHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::DPDBJMBKNHM)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "DPDBJMBKNHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::BBMOOPGEBIA
// Il2CppName: BBMOOPGEBIA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::BBMOOPGEBIA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "BBMOOPGEBIA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::PLCJOLCFNJM
// Il2CppName: PLCJOLCFNJM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::PLCJOLCFNJM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "PLCJOLCFNJM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::PLFIKFNPKDI
// Il2CppName: PLFIKFNPKDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::PLFIKFNPKDI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "PLFIKFNPKDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::GJBFFPOMPMB
// Il2CppName: GJBFFPOMPMB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::GJBFFPOMPMB)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "GJBFFPOMPMB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::DKJFPDMDIAA
// Il2CppName: DKJFPDMDIAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::DKJFPDMDIAA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "DKJFPDMDIAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::DBIIJPPPIBA
// Il2CppName: DBIIJPPPIBA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::DBIIJPPPIBA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "DBIIJPPPIBA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::FNMKMDHHFDG
// Il2CppName: FNMKMDHHFDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::FNMKMDHHFDG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "FNMKMDHHFDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RaidBell::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::JHPMDNJLGJA
// Il2CppName: JHPMDNJLGJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)(::Il2CppObject*)>(&MagicalActual::M_RaidBell::JHPMDNJLGJA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "JHPMDNJLGJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RaidBell::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RaidBell::*)()>(&MagicalActual::M_RaidBell::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RaidBell*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
