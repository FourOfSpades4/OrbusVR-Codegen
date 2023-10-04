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
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SuperTextMesh
  class SuperTextMesh;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: RunemageContest
  class RunemageContest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::RunemageContest);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::RunemageContest*, "MagicalActual", "RunemageContest");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.RunemageContest
  // [TokenAttribute] Offset: FFFFFFFF
  class RunemageContest : public ::UnityEngine::MonoBehaviour {
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
    // public SuperTextMesh scoreDisplay
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SuperTextMesh* scoreDisplay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // private System.Int32 IJKJLNAPKCG
    // Size: 0x4
    // Offset: 0x30
    int IJKJLNAPKCG;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public SuperTextMesh scoreDisplay
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_scoreDisplay();
    // Get instance field reference: private System.Int32 IJKJLNAPKCG
    [[deprecated("Use field access instead!")]] int& dyn_IJKJLNAPKCG();
    // private System.Void DLOHEKDJABK()
    // Offset: 0x11DA9BC
    void DLOHEKDJABK();
    // private System.Void PDFDIHNDGGK(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DAA4C
    void PDFDIHNDGGK(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void .ctor()
    // Offset: 0x11DAB48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunemageContest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::RunemageContest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunemageContest*, creationType>()));
    }
    // private System.Void NONFBJFLIFB(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DABA0
    void NONFBJFLIFB(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void IDLOFFGDFFC(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DAC9C
    void IDLOFFGDFFC(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x11DAD08
    void MLGBKBMHHLE();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x11DAD0C
    void IPIFMKAGODD();
    // public System.Void HMKJKOKPOBP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DAD10
    void HMKJKOKPOBP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void DKDBFFDLADP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DADC4
    void DKDBFFDLADP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void EGJMIHFLOKP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DAE78
    void EGJMIHFLOKP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BOOMBHAPBIF(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DAF2C
    void BOOMBHAPBIF(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void KEGEKFNLCJD(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DB028
    void KEGEKFNLCJD(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void Start()
    // Offset: 0x11DB0DC
    void Start();
    // private System.Void LEPALHHMEMJ()
    // Offset: 0x11DAAB8
    void LEPALHHMEMJ();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DB0E0
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DB194
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void ECBCKOEMELA()
    // Offset: 0x11DAC0C
    void ECBCKOEMELA();
    // public System.Void JJEJNGMIMOI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x11DB248
    void JJEJNGMIMOI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void CILKALCKMFC(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DB2FC
    void CILKALCKMFC(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void EBKNEBCIBCH(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DB368
    void EBKNEBCIBCH(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void HGKIEBGFEOP()
    // Offset: 0x11DAF98
    void HGKIEBGFEOP();
    // private System.Void HKLCBAMMNAH(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DB3D4
    void HKLCBAMMNAH(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x11DB440
    void NNDKJCJFIAK();
    // private System.Void HMMEKLJLHLK(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DB444
    void HMMEKLJLHLK(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void GPFBGGFPINB()
    // Offset: 0x11DB4B0
    void GPFBGGFPINB();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x11DB4B4
    void DGJGAFKDIDK();
    // private System.Void MAEKILBDLCD(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DB4B8
    void MAEKILBDLCD(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void GHFMKNIAPDF(System.Object OMLPNCLFFMJ)
    // Offset: 0x11DB524
    void GHFMKNIAPDF(::Il2CppObject* OMLPNCLFFMJ);
  }; // MagicalActual.RunemageContest
  #pragma pack(pop)
  static check_size<sizeof(RunemageContest), 48 + sizeof(int)> __MagicalActual_RunemageContestSizeCheck;
  static_assert(sizeof(RunemageContest) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::RunemageContest::DLOHEKDJABK
// Il2CppName: DLOHEKDJABK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::DLOHEKDJABK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "DLOHEKDJABK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::PDFDIHNDGGK
// Il2CppName: PDFDIHNDGGK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::PDFDIHNDGGK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "PDFDIHNDGGK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::RunemageContest::NONFBJFLIFB
// Il2CppName: NONFBJFLIFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::NONFBJFLIFB)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "NONFBJFLIFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::IDLOFFGDFFC
// Il2CppName: IDLOFFGDFFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::IDLOFFGDFFC)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "IDLOFFGDFFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::HMKJKOKPOBP
// Il2CppName: HMKJKOKPOBP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::HMKJKOKPOBP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "HMKJKOKPOBP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::DKDBFFDLADP
// Il2CppName: DKDBFFDLADP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::DKDBFFDLADP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "DKDBFFDLADP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::EGJMIHFLOKP
// Il2CppName: EGJMIHFLOKP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::EGJMIHFLOKP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "EGJMIHFLOKP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::BOOMBHAPBIF
// Il2CppName: BOOMBHAPBIF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::BOOMBHAPBIF)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "BOOMBHAPBIF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::KEGEKFNLCJD
// Il2CppName: KEGEKFNLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::KEGEKFNLCJD)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "KEGEKFNLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::LEPALHHMEMJ
// Il2CppName: LEPALHHMEMJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::LEPALHHMEMJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "LEPALHHMEMJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::ECBCKOEMELA
// Il2CppName: ECBCKOEMELA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::ECBCKOEMELA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "ECBCKOEMELA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::JJEJNGMIMOI
// Il2CppName: JJEJNGMIMOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RunemageContest::JJEJNGMIMOI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "JJEJNGMIMOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::CILKALCKMFC
// Il2CppName: CILKALCKMFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::CILKALCKMFC)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "CILKALCKMFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::EBKNEBCIBCH
// Il2CppName: EBKNEBCIBCH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::EBKNEBCIBCH)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "EBKNEBCIBCH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::HGKIEBGFEOP
// Il2CppName: HGKIEBGFEOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::HGKIEBGFEOP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "HGKIEBGFEOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::HKLCBAMMNAH
// Il2CppName: HKLCBAMMNAH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::HKLCBAMMNAH)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "HKLCBAMMNAH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::HMMEKLJLHLK
// Il2CppName: HMMEKLJLHLK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::HMMEKLJLHLK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "HMMEKLJLHLK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)()>(&MagicalActual::RunemageContest::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::MAEKILBDLCD
// Il2CppName: MAEKILBDLCD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::MAEKILBDLCD)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "MAEKILBDLCD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageContest::GHFMKNIAPDF
// Il2CppName: GHFMKNIAPDF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageContest::*)(::Il2CppObject*)>(&MagicalActual::RunemageContest::GHFMKNIAPDF)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageContest*), "GHFMKNIAPDF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
