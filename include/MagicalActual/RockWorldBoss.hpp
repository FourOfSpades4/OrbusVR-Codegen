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
  // Forward declaring type: OrbusAudioParticleController
  class OrbusAudioParticleController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: RockWorldBoss
  class RockWorldBoss;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::RockWorldBoss);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::RockWorldBoss*, "MagicalActual", "RockWorldBoss");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.RockWorldBoss
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD7B68
  class RockWorldBoss : public ::UnityEngine::MonoBehaviour {
    public:
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
    // public UnityEngine.GameObject vfxSoulsuck
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* vfxSoulsuck;
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
    // private MagicalActual.OrbusAudioParticleController worldBossEffect
    // Size: 0x8
    // Offset: 0x40
    ::MagicalActual::OrbusAudioParticleController* worldBossEffect;
    // Field size check
    static_assert(sizeof(::MagicalActual::OrbusAudioParticleController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // Get instance field reference: public UnityEngine.GameObject vfxSoulsuck
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSoulsuck();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private MagicalActual.OrbusAudioParticleController worldBossEffect
    [[deprecated("Use field access instead!")]] ::MagicalActual::OrbusAudioParticleController*& dyn_worldBossEffect();
    // public System.Void Soulsuck()
    // Offset: 0x12FFE20
    void Soulsuck();
    // public System.Void EALJLNLCEAE()
    // Offset: 0x1300038
    void EALJLNLCEAE();
    // public System.Void Laser()
    // Offset: 0x130003C
    void Laser();
    // public System.Void LeftFoot()
    // Offset: 0x1300040
    void LeftFoot();
    // private System.Void LPLGKBGLPOK()
    // Offset: 0x1300044
    void LPLGKBGLPOK();
    // private System.Void BFDBIONEKIA(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x130009C
    void BFDBIONEKIA(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void FBHLJMIDKDO(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13005CC
    void FBHLJMIDKDO(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void KMBFLGFBLLK()
    // Offset: 0x13006B4
    void KMBFLGFBLLK();
    // public System.Void RightFoot()
    // Offset: 0x13006B8
    void RightFoot();
    // public System.Void LaserStop()
    // Offset: 0x13006BC
    void LaserStop();
    // private System.Void CLNMKBPKGDN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13006C0
    void CLNMKBPKGDN(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void DKJFPDMDIAA(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13009C0
    void DKJFPDMDIAA(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void Slash()
    // Offset: 0x13007A8
    void Slash();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1300AA8
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GJBFFPOMPMB(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1300BAC
    void GJBFFPOMPMB(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void GBOFFJKGMOL()
    // Offset: 0x1300C94
    void GBOFFJKGMOL();
    // public System.Void KJIKJPNOLFN()
    // Offset: 0x1300C98
    void KJIKJPNOLFN();
    // private System.Void HKINNMLBMMG()
    // Offset: 0x1300C9C
    void HKINNMLBMMG();
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1300CF4
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void BDHJKKFFKNN()
    // Offset: 0x1300DF8
    void BDHJKKFFKNN();
    // private System.Void Start()
    // Offset: 0x1300DFC
    void Start();
    // private System.Void GKIOLADOCOK()
    // Offset: 0x1300E54
    void GKIOLADOCOK();
    // public System.Void ENAMJGFIGLP()
    // Offset: 0x1300EAC
    void ENAMJGFIGLP();
    // public System.Void DKDBFFDLADP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1300EB0
    void DKDBFFDLADP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NOIOCPFBFIE()
    // Offset: 0x1300FB4
    void NOIOCPFBFIE();
    // public System.Void JLCHMGILKHC()
    // Offset: 0x1300FB8
    void JLCHMGILKHC();
    // public System.Void .ctor()
    // Offset: 0x1300FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RockWorldBoss* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::RockWorldBoss::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RockWorldBoss*, creationType>()));
    }
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1301014
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void EHGLKEEKBHK()
    // Offset: 0x1301118
    void EHGLKEEKBHK();
    // public System.Void LOFIKIDINDF()
    // Offset: 0x130111C
    void LOFIKIDINDF();
    // public System.Void Clap()
    // Offset: 0x1301120
    void Clap();
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x1301124
    void FGIFGGNGKPK();
    // public System.Void BEEKABOOADH()
    // Offset: 0x1300184
    void BEEKABOOADH();
    // private System.Void DPDBJMBKNHM(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x130117C
    void DPDBJMBKNHM(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void IBMKENLAMGB()
    // Offset: 0x13003A8
    void IBMKENLAMGB();
    // public System.Void IGGCJKAGOLJ()
    // Offset: 0x1301264
    void IGGCJKAGOLJ();
  }; // MagicalActual.RockWorldBoss
  #pragma pack(pop)
  static check_size<sizeof(RockWorldBoss), 64 + sizeof(::MagicalActual::OrbusAudioParticleController*)> __MagicalActual_RockWorldBossSizeCheck;
  static_assert(sizeof(RockWorldBoss) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::Soulsuck
// Il2CppName: Soulsuck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::Soulsuck)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "Soulsuck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::EALJLNLCEAE
// Il2CppName: EALJLNLCEAE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::EALJLNLCEAE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "EALJLNLCEAE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::Laser
// Il2CppName: Laser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::Laser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "Laser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::LeftFoot
// Il2CppName: LeftFoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::LeftFoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "LeftFoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::LPLGKBGLPOK
// Il2CppName: LPLGKBGLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::LPLGKBGLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "LPLGKBGLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::BFDBIONEKIA
// Il2CppName: BFDBIONEKIA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::RockWorldBoss::BFDBIONEKIA)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "BFDBIONEKIA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::FBHLJMIDKDO
// Il2CppName: FBHLJMIDKDO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::RockWorldBoss::FBHLJMIDKDO)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "FBHLJMIDKDO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::KMBFLGFBLLK
// Il2CppName: KMBFLGFBLLK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::KMBFLGFBLLK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "KMBFLGFBLLK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::RightFoot
// Il2CppName: RightFoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::RightFoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "RightFoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::LaserStop
// Il2CppName: LaserStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::LaserStop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "LaserStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::CLNMKBPKGDN
// Il2CppName: CLNMKBPKGDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::RockWorldBoss::CLNMKBPKGDN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "CLNMKBPKGDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::DKJFPDMDIAA
// Il2CppName: DKJFPDMDIAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::RockWorldBoss::DKJFPDMDIAA)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "DKJFPDMDIAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RockWorldBoss::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::GJBFFPOMPMB
// Il2CppName: GJBFFPOMPMB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::RockWorldBoss::GJBFFPOMPMB)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "GJBFFPOMPMB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::GBOFFJKGMOL
// Il2CppName: GBOFFJKGMOL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::GBOFFJKGMOL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "GBOFFJKGMOL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::KJIKJPNOLFN
// Il2CppName: KJIKJPNOLFN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::KJIKJPNOLFN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "KJIKJPNOLFN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RockWorldBoss::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::BDHJKKFFKNN
// Il2CppName: BDHJKKFFKNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::BDHJKKFFKNN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "BDHJKKFFKNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::ENAMJGFIGLP
// Il2CppName: ENAMJGFIGLP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::ENAMJGFIGLP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "ENAMJGFIGLP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::DKDBFFDLADP
// Il2CppName: DKDBFFDLADP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RockWorldBoss::DKDBFFDLADP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "DKDBFFDLADP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::NOIOCPFBFIE
// Il2CppName: NOIOCPFBFIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::NOIOCPFBFIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "NOIOCPFBFIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::JLCHMGILKHC
// Il2CppName: JLCHMGILKHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::JLCHMGILKHC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "JLCHMGILKHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::RockWorldBoss::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::EHGLKEEKBHK
// Il2CppName: EHGLKEEKBHK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::EHGLKEEKBHK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "EHGLKEEKBHK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::LOFIKIDINDF
// Il2CppName: LOFIKIDINDF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::LOFIKIDINDF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "LOFIKIDINDF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::Clap
// Il2CppName: Clap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::Clap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "Clap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::BEEKABOOADH
// Il2CppName: BEEKABOOADH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::BEEKABOOADH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "BEEKABOOADH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::DPDBJMBKNHM
// Il2CppName: DPDBJMBKNHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::RockWorldBoss::DPDBJMBKNHM)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "DPDBJMBKNHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::IBMKENLAMGB
// Il2CppName: IBMKENLAMGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::IBMKENLAMGB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "IBMKENLAMGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RockWorldBoss::IGGCJKAGOLJ
// Il2CppName: IGGCJKAGOLJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RockWorldBoss::*)()>(&MagicalActual::RockWorldBoss::IGGCJKAGOLJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RockWorldBoss*), "IGGCJKAGOLJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
