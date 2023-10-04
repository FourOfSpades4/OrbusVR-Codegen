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
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: M_RootManMini
  class M_RootManMini;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::M_RootManMini);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_RootManMini*, "MagicalActual", "M_RootManMini");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_RootManMini
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD5D0C
  class M_RootManMini : public ::UnityEngine::MonoBehaviour {
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
    // private System.Boolean MNMNGGLAFPF
    // Size: 0x1
    // Offset: 0x38
    bool MNMNGGLAFPF;
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
    // Get instance field reference: private System.Boolean MNMNGGLAFPF
    [[deprecated("Use field access instead!")]] bool& dyn_MNMNGGLAFPF();
    // private System.Void LCFONHJONFL(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FE12C
    void LCFONHJONFL(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FE1D4
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void GILLJBIMGNJ()
    // Offset: 0x25FE288
    void GILLJBIMGNJ();
    // private System.Void LLAFBMEBMEN(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FE4AC
    void LLAFBMEBMEN(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void JOGPGAPOBBK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FE554
    void JOGPGAPOBBK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x25FE608
    void GHLPBOJJHNG();
    // public System.Void BJAKPGDONDJ()
    // Offset: 0x25FE688
    void BJAKPGDONDJ();
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FE8AC
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NOLENMEIGLN(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FE960
    void NOLENMEIGLN(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GCCCCNPGHAK(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FEA14
    void GCCCCNPGHAK(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FEABC
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void DMDBBBHCPMG(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FEB70
    void DMDBBBHCPMG(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void HMIDAAAHFCB()
    // Offset: 0x25FEC18
    void HMIDAAAHFCB();
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FEE3C
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x25FEEF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static M_RootManMini* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::M_RootManMini::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<M_RootManMini*, creationType>()));
    }
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FEF50
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void FNAJKCKMHHJ()
    // Offset: 0x25FF004
    void FNAJKCKMHHJ();
    // private System.Void Start()
    // Offset: 0x25FF228
    void Start();
    // private System.Void NKLOKJIOACM()
    // Offset: 0x25FF2A8
    void NKLOKJIOACM();
    // private System.Void NCCOFNKCBDB(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FF300
    void NCCOFNKCBDB(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void KLPLAHINIGH()
    // Offset: 0x25FF3A8
    void KLPLAHINIGH();
    // public System.Void IEDNIMMEJBL(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x25FF5CC
    void IEDNIMMEJBL(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x25FF680
    void EPCHNEGNKNF();
    // public System.Void JMPBEJDKDGJ()
    // Offset: 0x25FF700
    void JMPBEJDKDGJ();
    // private System.Void AHPDCIGFMJI()
    // Offset: 0x25FF924
    void AHPDCIGFMJI();
    // private System.Void BMALDPKJJPG()
    // Offset: 0x25FF9A4
    void BMALDPKJJPG();
    // public System.Void Slash()
    // Offset: 0x25FF9FC
    void Slash();
    // private System.Void ENEHGKIMBFK(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FFC14
    void ENEHGKIMBFK(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void BOABNOIDPLA(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FFCBC
    void BOABNOIDPLA(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void BHGJNBNBPBJ(System.Object OMLPNCLFFMJ)
    // Offset: 0x25FFD64
    void BHGJNBNBPBJ(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void ADLGPKAIPAA()
    // Offset: 0x25FFE0C
    void ADLGPKAIPAA();
    // public System.Void CCOODLILKJD()
    // Offset: 0x25FFE64
    void CCOODLILKJD();
    // private System.Void FNABBDIKCIE(System.Object OMLPNCLFFMJ)
    // Offset: 0x2600088
    void FNABBDIKCIE(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void MIPEOCANMMO()
    // Offset: 0x2600130
    void MIPEOCANMMO();
    // private System.Void Awake()
    // Offset: 0x2600188
    void Awake();
    // public System.Void DIDADMBDAAK()
    // Offset: 0x26001E0
    void DIDADMBDAAK();
    // public System.Void EGJMIHFLOKP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2600404
    void EGJMIHFLOKP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JMPPPHNKAFG()
    // Offset: 0x26004B8
    void JMPPPHNKAFG();
    // private System.Void DMGLIODNKOG(System.Object OMLPNCLFFMJ)
    // Offset: 0x2600510
    void DMGLIODNKOG(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void BECBLPDEELP(System.Object OMLPNCLFFMJ)
    // Offset: 0x26005B8
    void BECBLPDEELP(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void HLGKLABMHHD()
    // Offset: 0x2600660
    void HLGKLABMHHD();
    // public System.Void KEGEKFNLCJD(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2600884
    void KEGEKFNLCJD(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GAOFEAPPLNN(System.Object OMLPNCLFFMJ)
    // Offset: 0x2600938
    void GAOFEAPPLNN(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void MENDPLCEJOP(System.Object OMLPNCLFFMJ)
    // Offset: 0x26009E0
    void MENDPLCEJOP(::Il2CppObject* OMLPNCLFFMJ);
  }; // MagicalActual.M_RootManMini
  #pragma pack(pop)
  static check_size<sizeof(M_RootManMini), 56 + sizeof(bool)> __MagicalActual_M_RootManMiniSizeCheck;
  static_assert(sizeof(M_RootManMini) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::LCFONHJONFL
// Il2CppName: LCFONHJONFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::LCFONHJONFL)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "LCFONHJONFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::GILLJBIMGNJ
// Il2CppName: GILLJBIMGNJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::GILLJBIMGNJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "GILLJBIMGNJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::LLAFBMEBMEN
// Il2CppName: LLAFBMEBMEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::LLAFBMEBMEN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "LLAFBMEBMEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::JOGPGAPOBBK
// Il2CppName: JOGPGAPOBBK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::JOGPGAPOBBK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "JOGPGAPOBBK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::BJAKPGDONDJ
// Il2CppName: BJAKPGDONDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::BJAKPGDONDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "BJAKPGDONDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::NOLENMEIGLN
// Il2CppName: NOLENMEIGLN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::NOLENMEIGLN)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "NOLENMEIGLN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::GCCCCNPGHAK
// Il2CppName: GCCCCNPGHAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::GCCCCNPGHAK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "GCCCCNPGHAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::DMDBBBHCPMG
// Il2CppName: DMDBBBHCPMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::DMDBBBHCPMG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "DMDBBBHCPMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::HMIDAAAHFCB
// Il2CppName: HMIDAAAHFCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::HMIDAAAHFCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "HMIDAAAHFCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::FNAJKCKMHHJ
// Il2CppName: FNAJKCKMHHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::FNAJKCKMHHJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "FNAJKCKMHHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::NKLOKJIOACM
// Il2CppName: NKLOKJIOACM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::NKLOKJIOACM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "NKLOKJIOACM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::NCCOFNKCBDB
// Il2CppName: NCCOFNKCBDB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::NCCOFNKCBDB)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "NCCOFNKCBDB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::KLPLAHINIGH
// Il2CppName: KLPLAHINIGH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::KLPLAHINIGH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "KLPLAHINIGH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::IEDNIMMEJBL
// Il2CppName: IEDNIMMEJBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::IEDNIMMEJBL)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "IEDNIMMEJBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::JMPBEJDKDGJ
// Il2CppName: JMPBEJDKDGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::JMPBEJDKDGJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "JMPBEJDKDGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::AHPDCIGFMJI
// Il2CppName: AHPDCIGFMJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::AHPDCIGFMJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "AHPDCIGFMJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::BMALDPKJJPG
// Il2CppName: BMALDPKJJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::BMALDPKJJPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "BMALDPKJJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::ENEHGKIMBFK
// Il2CppName: ENEHGKIMBFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::ENEHGKIMBFK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "ENEHGKIMBFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::BOABNOIDPLA
// Il2CppName: BOABNOIDPLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::BOABNOIDPLA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "BOABNOIDPLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::BHGJNBNBPBJ
// Il2CppName: BHGJNBNBPBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::BHGJNBNBPBJ)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "BHGJNBNBPBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::ADLGPKAIPAA
// Il2CppName: ADLGPKAIPAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::ADLGPKAIPAA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "ADLGPKAIPAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::CCOODLILKJD
// Il2CppName: CCOODLILKJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::CCOODLILKJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "CCOODLILKJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::FNABBDIKCIE
// Il2CppName: FNABBDIKCIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::FNABBDIKCIE)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "FNABBDIKCIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::MIPEOCANMMO
// Il2CppName: MIPEOCANMMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::MIPEOCANMMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "MIPEOCANMMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::DIDADMBDAAK
// Il2CppName: DIDADMBDAAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::DIDADMBDAAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "DIDADMBDAAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::EGJMIHFLOKP
// Il2CppName: EGJMIHFLOKP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::EGJMIHFLOKP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "EGJMIHFLOKP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::JMPPPHNKAFG
// Il2CppName: JMPPPHNKAFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::JMPPPHNKAFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "JMPPPHNKAFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::DMGLIODNKOG
// Il2CppName: DMGLIODNKOG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::DMGLIODNKOG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "DMGLIODNKOG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::BECBLPDEELP
// Il2CppName: BECBLPDEELP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::BECBLPDEELP)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "BECBLPDEELP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::HLGKLABMHHD
// Il2CppName: HLGKLABMHHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)()>(&MagicalActual::M_RootManMini::HLGKLABMHHD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "HLGKLABMHHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::KEGEKFNLCJD
// Il2CppName: KEGEKFNLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_RootManMini::KEGEKFNLCJD)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "KEGEKFNLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::GAOFEAPPLNN
// Il2CppName: GAOFEAPPLNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::GAOFEAPPLNN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "GAOFEAPPLNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_RootManMini::MENDPLCEJOP
// Il2CppName: MENDPLCEJOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_RootManMini::*)(::Il2CppObject*)>(&MagicalActual::M_RootManMini::MENDPLCEJOP)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_RootManMini*), "MENDPLCEJOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
