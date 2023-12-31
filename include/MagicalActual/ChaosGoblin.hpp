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
  // Forward declaring type: OrbusAudioParticleController
  class OrbusAudioParticleController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ChaosGoblin
  class ChaosGoblin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ChaosGoblin);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ChaosGoblin*, "MagicalActual", "ChaosGoblin");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ChaosGoblin
  // [TokenAttribute] Offset: FFFFFFFF
  class ChaosGoblin : public ::UnityEngine::MonoBehaviour {
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
    // private MagicalActual.OrbusAudioParticleController glowVFX
    // Size: 0x8
    // Offset: 0x28
    ::MagicalActual::OrbusAudioParticleController* glowVFX;
    // Field size check
    static_assert(sizeof(::MagicalActual::OrbusAudioParticleController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private MagicalActual.OrbusAudioParticleController glowVFX
    [[deprecated("Use field access instead!")]] ::MagicalActual::OrbusAudioParticleController*& dyn_glowVFX();
    // private System.Void EIJKCKMGFJM(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A7097C
    void EIJKCKMGFJM(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void PLCBAGFMGAE(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A70A78
    void PLCBAGFMGAE(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void FNMKMDHHFDG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A70B74
    void FNMKMDHHFDG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JFKAABGOAPJ(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A70C78
    void JFKAABGOAPJ(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void KKCABIAOCAH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A70D60
    void KKCABIAOCAH(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void MJIDOOGPEBE()
    // Offset: 0x1A70DFC
    void MJIDOOGPEBE();
    // public System.Void JJEJNGMIMOI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A70E5C
    void JJEJNGMIMOI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A70F60
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void JOCIAJOCGNM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A71064
    void JOCIAJOCGNM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void ONAMNPMFOGI()
    // Offset: 0x1A71168
    void ONAMNPMFOGI();
    // private System.Void NKOFCKHLNCF()
    // Offset: 0x1A71198
    void NKOFCKHLNCF();
    // private System.Void JCDCGPGOGBE()
    // Offset: 0x1A711C8
    void JCDCGPGOGBE();
    // public System.Void LCMLLJGPKEM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A711F8
    void LCMLLJGPKEM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void OGALJHFFLHP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A712FC
    void OGALJHFFLHP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void AFBFPJALHEF()
    // Offset: 0x1A70A48
    void AFBFPJALHEF();
    // private System.Void FLPHGBIOLFM(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A71400
    void FLPHGBIOLFM(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A714CC
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A715D0
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void AKONAGPFFDH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A716D4
    void AKONAGPFFDH(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void MFNIONAEMCL()
    // Offset: 0x1A70E2C
    void MFNIONAEMCL();
    // private System.Void ALDCMFEKIDJ()
    // Offset: 0x1A70B44
    void ALDCMFEKIDJ();
    // public System.Void KIDNJNOFOFF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A7178C
    void KIDNJNOFOFF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A71890
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void FHIPDMMODNM(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A71994
    void FHIPDMMODNM(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void KMKHGLCMOPH()
    // Offset: 0x1A70B14
    void KMKHGLCMOPH();
    // private System.Void ANNOLFBBOIH()
    // Offset: 0x1A70A18
    void ANNOLFBBOIH();
    // private System.Void CIPAIPHLGGD()
    // Offset: 0x1A70D30
    void CIPAIPHLGGD();
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A71A4C
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KEGEKFNLCJD(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A71B50
    void KEGEKFNLCJD(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BMPKJDGPJDI()
    // Offset: 0x1A7149C
    void BMPKJDGPJDI();
    // private System.Void AMDGEPOIIBM(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A71C54
    void AMDGEPOIIBM(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void NGEJKELGIJC(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A71CF0
    void NGEJKELGIJC(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void IPELEPLPKJJ()
    // Offset: 0x1A71DA8
    void IPELEPLPKJJ();
    // public System.Void AKEEGHHHCKK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A71DD8
    void AKEEGHHHCKK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void HCKPFGAIMHH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A71EDC
    void HCKPFGAIMHH(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void .ctor()
    // Offset: 0x1A71F94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaosGoblin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ChaosGoblin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaosGoblin*, creationType>()));
    }
  }; // MagicalActual.ChaosGoblin
  #pragma pack(pop)
  static check_size<sizeof(ChaosGoblin), 40 + sizeof(::MagicalActual::OrbusAudioParticleController*)> __MagicalActual_ChaosGoblinSizeCheck;
  static_assert(sizeof(ChaosGoblin) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::EIJKCKMGFJM
// Il2CppName: EIJKCKMGFJM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::EIJKCKMGFJM)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "EIJKCKMGFJM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::PLCBAGFMGAE
// Il2CppName: PLCBAGFMGAE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::PLCBAGFMGAE)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "PLCBAGFMGAE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::FNMKMDHHFDG
// Il2CppName: FNMKMDHHFDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::FNMKMDHHFDG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "FNMKMDHHFDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::JFKAABGOAPJ
// Il2CppName: JFKAABGOAPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::JFKAABGOAPJ)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "JFKAABGOAPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::KKCABIAOCAH
// Il2CppName: KKCABIAOCAH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::KKCABIAOCAH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "KKCABIAOCAH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::MJIDOOGPEBE
// Il2CppName: MJIDOOGPEBE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::MJIDOOGPEBE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "MJIDOOGPEBE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::JJEJNGMIMOI
// Il2CppName: JJEJNGMIMOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::JJEJNGMIMOI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "JJEJNGMIMOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::JOCIAJOCGNM
// Il2CppName: JOCIAJOCGNM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::JOCIAJOCGNM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "JOCIAJOCGNM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::ONAMNPMFOGI
// Il2CppName: ONAMNPMFOGI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::ONAMNPMFOGI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "ONAMNPMFOGI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::NKOFCKHLNCF
// Il2CppName: NKOFCKHLNCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::NKOFCKHLNCF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "NKOFCKHLNCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::JCDCGPGOGBE
// Il2CppName: JCDCGPGOGBE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::JCDCGPGOGBE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "JCDCGPGOGBE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::LCMLLJGPKEM
// Il2CppName: LCMLLJGPKEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::LCMLLJGPKEM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "LCMLLJGPKEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::OGALJHFFLHP
// Il2CppName: OGALJHFFLHP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::OGALJHFFLHP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "OGALJHFFLHP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::AFBFPJALHEF
// Il2CppName: AFBFPJALHEF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::AFBFPJALHEF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "AFBFPJALHEF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::FLPHGBIOLFM
// Il2CppName: FLPHGBIOLFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::FLPHGBIOLFM)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "FLPHGBIOLFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::AKONAGPFFDH
// Il2CppName: AKONAGPFFDH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::AKONAGPFFDH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "AKONAGPFFDH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::MFNIONAEMCL
// Il2CppName: MFNIONAEMCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::MFNIONAEMCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "MFNIONAEMCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::ALDCMFEKIDJ
// Il2CppName: ALDCMFEKIDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::ALDCMFEKIDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "ALDCMFEKIDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::KIDNJNOFOFF
// Il2CppName: KIDNJNOFOFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::KIDNJNOFOFF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "KIDNJNOFOFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::FHIPDMMODNM
// Il2CppName: FHIPDMMODNM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::FHIPDMMODNM)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "FHIPDMMODNM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::KMKHGLCMOPH
// Il2CppName: KMKHGLCMOPH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::KMKHGLCMOPH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "KMKHGLCMOPH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::ANNOLFBBOIH
// Il2CppName: ANNOLFBBOIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::ANNOLFBBOIH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "ANNOLFBBOIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::CIPAIPHLGGD
// Il2CppName: CIPAIPHLGGD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::CIPAIPHLGGD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "CIPAIPHLGGD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::KEGEKFNLCJD
// Il2CppName: KEGEKFNLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::KEGEKFNLCJD)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "KEGEKFNLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::BMPKJDGPJDI
// Il2CppName: BMPKJDGPJDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::BMPKJDGPJDI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "BMPKJDGPJDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::AMDGEPOIIBM
// Il2CppName: AMDGEPOIIBM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::AMDGEPOIIBM)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "AMDGEPOIIBM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::NGEJKELGIJC
// Il2CppName: NGEJKELGIJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::NGEJKELGIJC)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "NGEJKELGIJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::IPELEPLPKJJ
// Il2CppName: IPELEPLPKJJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)()>(&MagicalActual::ChaosGoblin::IPELEPLPKJJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "IPELEPLPKJJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::AKEEGHHHCKK
// Il2CppName: AKEEGHHHCKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosGoblin::AKEEGHHHCKK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "AKEEGHHHCKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::HCKPFGAIMHH
// Il2CppName: HCKPFGAIMHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosGoblin::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosGoblin::HCKPFGAIMHH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosGoblin*), "HCKPFGAIMHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosGoblin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
