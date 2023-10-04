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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: NetEntity
  class NetEntity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerTombstone
  class PlayerTombstone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PlayerTombstone);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PlayerTombstone*, "MagicalActual", "PlayerTombstone");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PlayerTombstone
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerTombstone : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject vfxResurrect
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* vfxResurrect;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Boolean AFCEMEHGIJA
    // Size: 0x1
    // Offset: 0x28
    bool AFCEMEHGIJA;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AFCEMEHGIJA and: IJJGNKLFGJN
    char __padding2[0x7] = {};
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x30
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: public UnityEngine.GameObject vfxResurrect
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxResurrect();
    // Get instance field reference: private System.Boolean AFCEMEHGIJA
    [[deprecated("Use field access instead!")]] bool& dyn_AFCEMEHGIJA();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // private System.Void FixedUpdate()
    // Offset: 0x14792D4
    void FixedUpdate();
    // private System.Void EFPELGNCEBB(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1479594
    void EFPELGNCEBB(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void HMMEKLJLHLK(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x14796D0
    void HMMEKLJLHLK(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147980C
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void HKLCBAMMNAH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x14798E4
    void HKLCBAMMNAH(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void GECHLDPLPCC()
    // Offset: 0x1479A1C
    void GECHLDPLPCC();
    // private System.Void LLBAENEGEMN()
    // Offset: 0x1479A20
    void LLBAENEGEMN();
    // public System.Void KEGEKFNLCJD(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1479CE8
    void KEGEKFNLCJD(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void IDLOFFGDFFC(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1479DC0
    void IDLOFFGDFFC(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x1479EFC
    void KBDGAPMJGLG();
    // private System.Void JENOIOBAEPG()
    // Offset: 0x1479F00
    void JENOIOBAEPG();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x1479F04
    void IDOCJGNLNFL();
    // private System.Void NONFBJFLIFB(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1479F08
    void NONFBJFLIFB(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void FGGKEEKHDHN()
    // Offset: 0x147A044
    void FGGKEEKHDHN();
    // private System.Void CIJPPCPNPCI()
    // Offset: 0x147A308
    void CIJPPCPNPCI();
    // public System.Void NOLENMEIGLN(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147A5CC
    void NOLENMEIGLN(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147A6A4
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void OGALJHFFLHP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147A77C
    void OGALJHFFLHP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void KDPKJNJKNLC(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147A854
    void KDPKJNJKNLC(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void .ctor()
    // Offset: 0x147A990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTombstone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PlayerTombstone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTombstone*, creationType>()));
    }
    // private System.Void HKINNMLBMMG()
    // Offset: 0x147A9E8
    void HKINNMLBMMG();
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147A9EC
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NLFOPEAGLDJ()
    // Offset: 0x147AAC4
    void NLFOPEAGLDJ();
    // private System.Void FBONHOOJHBG()
    // Offset: 0x147AD88
    void FBONHOOJHBG();
    // private System.Void BPGOHJHLMFD(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147AD8C
    void BPGOHJHLMFD(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void OFDMFGNMEOP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147AEC8
    void OFDMFGNMEOP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void FNMKMDHHFDG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147AFA0
    void FNMKMDHHFDG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void OJFAEAIKFED()
    // Offset: 0x147B078
    void OJFAEAIKFED();
    // public System.Void LCMLLJGPKEM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147B07C
    void LCMLLJGPKEM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void Start()
    // Offset: 0x147B154
    void Start();
    // private System.Void EFEDNMKDDGH()
    // Offset: 0x147B158
    void EFEDNMKDDGH();
    // private System.Void GGAFMPPDBOH()
    // Offset: 0x147B420
    void GGAFMPPDBOH();
    // private System.Void DGHHIDEKEEA(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147B6E4
    void DGHHIDEKEEA(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void COJFJIMFEBA(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147B820
    void COJFJIMFEBA(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147B95C
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NOJBHHCKNKD(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147BA34
    void NOJBHHCKNKD(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void KMPPLBBIMGJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x147BB70
    void KMPPLBBIMGJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void AGOBDBDGJKD()
    // Offset: 0x147BC48
    void AGOBDBDGJKD();
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x147BF10
    void BDEDGNGMHMN();
    // private System.Void JJDNMMPJLEA(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147BF14
    void JJDNMMPJLEA(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void FNGLOIECKDG()
    // Offset: 0x147C050
    void FNGLOIECKDG();
    // private System.Void AEBAMIGEFGN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x147C054
    void AEBAMIGEFGN(::System::Collections::ArrayList* HPEANAHIBAH);
  }; // MagicalActual.PlayerTombstone
  #pragma pack(pop)
  static check_size<sizeof(PlayerTombstone), 48 + sizeof(::MagicalActual::NetEntity*)> __MagicalActual_PlayerTombstoneSizeCheck;
  static_assert(sizeof(PlayerTombstone) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::EFPELGNCEBB
// Il2CppName: EFPELGNCEBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::EFPELGNCEBB)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "EFPELGNCEBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::HMMEKLJLHLK
// Il2CppName: HMMEKLJLHLK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::HMMEKLJLHLK)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "HMMEKLJLHLK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::HKLCBAMMNAH
// Il2CppName: HKLCBAMMNAH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::HKLCBAMMNAH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "HKLCBAMMNAH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::LLBAENEGEMN
// Il2CppName: LLBAENEGEMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::LLBAENEGEMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "LLBAENEGEMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::KEGEKFNLCJD
// Il2CppName: KEGEKFNLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::KEGEKFNLCJD)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "KEGEKFNLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::IDLOFFGDFFC
// Il2CppName: IDLOFFGDFFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::IDLOFFGDFFC)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "IDLOFFGDFFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::NONFBJFLIFB
// Il2CppName: NONFBJFLIFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::NONFBJFLIFB)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "NONFBJFLIFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::FGGKEEKHDHN
// Il2CppName: FGGKEEKHDHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::FGGKEEKHDHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "FGGKEEKHDHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::CIJPPCPNPCI
// Il2CppName: CIJPPCPNPCI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::CIJPPCPNPCI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "CIJPPCPNPCI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::NOLENMEIGLN
// Il2CppName: NOLENMEIGLN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::NOLENMEIGLN)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "NOLENMEIGLN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::OGALJHFFLHP
// Il2CppName: OGALJHFFLHP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::OGALJHFFLHP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "OGALJHFFLHP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::KDPKJNJKNLC
// Il2CppName: KDPKJNJKNLC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::KDPKJNJKNLC)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "KDPKJNJKNLC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::NLFOPEAGLDJ
// Il2CppName: NLFOPEAGLDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::NLFOPEAGLDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "NLFOPEAGLDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::FBONHOOJHBG
// Il2CppName: FBONHOOJHBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::FBONHOOJHBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "FBONHOOJHBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::BPGOHJHLMFD
// Il2CppName: BPGOHJHLMFD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::BPGOHJHLMFD)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "BPGOHJHLMFD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::OFDMFGNMEOP
// Il2CppName: OFDMFGNMEOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::OFDMFGNMEOP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "OFDMFGNMEOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::FNMKMDHHFDG
// Il2CppName: FNMKMDHHFDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::FNMKMDHHFDG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "FNMKMDHHFDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::OJFAEAIKFED
// Il2CppName: OJFAEAIKFED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::OJFAEAIKFED)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "OJFAEAIKFED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::LCMLLJGPKEM
// Il2CppName: LCMLLJGPKEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::LCMLLJGPKEM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "LCMLLJGPKEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::EFEDNMKDDGH
// Il2CppName: EFEDNMKDDGH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::EFEDNMKDDGH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "EFEDNMKDDGH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::GGAFMPPDBOH
// Il2CppName: GGAFMPPDBOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::GGAFMPPDBOH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "GGAFMPPDBOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::DGHHIDEKEEA
// Il2CppName: DGHHIDEKEEA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::DGHHIDEKEEA)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "DGHHIDEKEEA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::COJFJIMFEBA
// Il2CppName: COJFJIMFEBA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::COJFJIMFEBA)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "COJFJIMFEBA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::NOJBHHCKNKD
// Il2CppName: NOJBHHCKNKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::NOJBHHCKNKD)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "NOJBHHCKNKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::KMPPLBBIMGJ
// Il2CppName: KMPPLBBIMGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PlayerTombstone::KMPPLBBIMGJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "KMPPLBBIMGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::AGOBDBDGJKD
// Il2CppName: AGOBDBDGJKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::AGOBDBDGJKD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "AGOBDBDGJKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::JJDNMMPJLEA
// Il2CppName: JJDNMMPJLEA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::JJDNMMPJLEA)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "JJDNMMPJLEA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)()>(&MagicalActual::PlayerTombstone::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTombstone::AEBAMIGEFGN
// Il2CppName: AEBAMIGEFGN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTombstone::*)(::System::Collections::ArrayList*)>(&MagicalActual::PlayerTombstone::AEBAMIGEFGN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTombstone*), "AEBAMIGEFGN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
