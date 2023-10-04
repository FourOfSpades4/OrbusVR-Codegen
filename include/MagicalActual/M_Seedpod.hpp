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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: M_Seedpod
  class M_Seedpod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::M_Seedpod);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_Seedpod*, "MagicalActual", "M_Seedpod");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_Seedpod
  // [TokenAttribute] Offset: FFFFFFFF
  class M_Seedpod : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::M_Seedpod::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
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
    // private UnityEngine.GameObject KLNBHKEEJCL
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* KLNBHKEEJCL;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject PLPCLIEAJMC
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* PLPCLIEAJMC;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject MKFHKKKOEBG
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* MKFHKKKOEBG;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Rigidbody EIPMBKLODIJ
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rigidbody* EIPMBKLODIJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private UnityEngine.GameObject KLNBHKEEJCL
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_KLNBHKEEJCL();
    // Get instance field reference: private UnityEngine.GameObject PLPCLIEAJMC
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_PLPCLIEAJMC();
    // Get instance field reference: private UnityEngine.GameObject MKFHKKKOEBG
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_MKFHKKKOEBG();
    // Get instance field reference: private UnityEngine.Rigidbody EIPMBKLODIJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_EIPMBKLODIJ();
    // private System.Void Start()
    // Offset: 0x26026B8
    void Start();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x26027EC
    void IPIFMKAGODD();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x2602920
    void GECHLDPLPCC();
    // public System.Void AKEEGHHHCKK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2602A54
    void AKEEGHHHCKK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void AFIACGLCIPB()
    // Offset: 0x2602BCC
    void AFIACGLCIPB();
    // public System.Void IKDGLCBOCJG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2602D00
    void IKDGLCBOCJG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void HMKJKOKPOBP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2602E70
    void HMKJKOKPOBP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void DKDBFFDLADP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2602FE0
    void DKDBFFDLADP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2603150
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x26032C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static M_Seedpod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::M_Seedpod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<M_Seedpod*, creationType>()));
    }
    // public System.Void OAMOHIMHKEK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2603318
    void OAMOHIMHKEK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2603488
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void FNGLOIECKDG()
    // Offset: 0x26035F8
    void FNGLOIECKDG();
    // private System.Void NEDFCIDMJBB()
    // Offset: 0x260372C
    void NEDFCIDMJBB();
    // private System.Void NHADFEMILCC()
    // Offset: 0x2603860
    void NHADFEMILCC();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x2603994
    void EPCHNEGNKNF();
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x2603AC8
    void BDEDGNGMHMN();
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2603BFC
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KIDNJNOFOFF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2603D6C
    void KIDNJNOFOFF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KEGEKFNLCJD(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2603EDC
    void KEGEKFNLCJD(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void PBEMGGBBDCK()
    // Offset: 0x260404C
    void PBEMGGBBDCK();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x2604180
    void KPOAAAHLGLA();
    // public System.Void IOOBCJAJKCJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x26042B4
    void IOOBCJAJKCJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void EBJDLAIJJJE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2604424
    void EBJDLAIJJJE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x2604594
    void DGJGAFKDIDK();
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x26046C8
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void IEDNIMMEJBL(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2604838
    void IEDNIMMEJBL(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x26049A8
    void MLGBKBMHHLE();
    // public System.Void JOCIAJOCGNM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x2604ADC
    void JOCIAJOCGNM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x2604C4C
    void FGIFGGNGKPK();
  }; // MagicalActual.M_Seedpod
  #pragma pack(pop)
  static check_size<sizeof(M_Seedpod), 64 + sizeof(::UnityEngine::Rigidbody*)> __MagicalActual_M_SeedpodSizeCheck;
  static_assert(sizeof(M_Seedpod) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::AKEEGHHHCKK
// Il2CppName: AKEEGHHHCKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::AKEEGHHHCKK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "AKEEGHHHCKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::IKDGLCBOCJG
// Il2CppName: IKDGLCBOCJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::IKDGLCBOCJG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "IKDGLCBOCJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::HMKJKOKPOBP
// Il2CppName: HMKJKOKPOBP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::HMKJKOKPOBP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "HMKJKOKPOBP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::DKDBFFDLADP
// Il2CppName: DKDBFFDLADP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::DKDBFFDLADP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "DKDBFFDLADP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::OAMOHIMHKEK
// Il2CppName: OAMOHIMHKEK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::OAMOHIMHKEK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "OAMOHIMHKEK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::NEDFCIDMJBB
// Il2CppName: NEDFCIDMJBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::NEDFCIDMJBB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "NEDFCIDMJBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::KIDNJNOFOFF
// Il2CppName: KIDNJNOFOFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::KIDNJNOFOFF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "KIDNJNOFOFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::KEGEKFNLCJD
// Il2CppName: KEGEKFNLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::KEGEKFNLCJD)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "KEGEKFNLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::IOOBCJAJKCJ
// Il2CppName: IOOBCJAJKCJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::IOOBCJAJKCJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "IOOBCJAJKCJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::EBJDLAIJJJE
// Il2CppName: EBJDLAIJJJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::EBJDLAIJJJE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "EBJDLAIJJJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::IEDNIMMEJBL
// Il2CppName: IEDNIMMEJBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::IEDNIMMEJBL)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "IEDNIMMEJBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::JOCIAJOCGNM
// Il2CppName: JOCIAJOCGNM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_Seedpod::JOCIAJOCGNM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "JOCIAJOCGNM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_Seedpod::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_Seedpod::*)()>(&MagicalActual::M_Seedpod::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_Seedpod*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
