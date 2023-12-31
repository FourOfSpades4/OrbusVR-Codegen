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
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: MedusaBoss
  class MedusaBoss;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::MedusaBoss);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::MedusaBoss*, "MagicalActual", "MedusaBoss");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.MedusaBoss
  // [TokenAttribute] Offset: FFFFFFFF
  class MedusaBoss : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::MedusaBoss::$ScaleChargeEffect$d__9
    class $ScaleChargeEffect$d__9;
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
    // private UnityEngine.ParticleSystem chargeEffect
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::ParticleSystem* chargeEffect;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem glareEffect
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::ParticleSystem* glareEffect;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.AudioSource chargeSound
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioSource* chargeSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource glareSound
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AudioSource* glareSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: private UnityEngine.ParticleSystem chargeEffect
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_chargeEffect();
    // Get instance field reference: private UnityEngine.ParticleSystem glareEffect
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_glareEffect();
    // Get instance field reference: private UnityEngine.AudioSource chargeSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_chargeSound();
    // Get instance field reference: private UnityEngine.AudioSource glareSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_glareSound();
    // public System.Void OPNDMJMONNL()
    // Offset: 0x13E9BD4
    void OPNDMJMONNL();
    // private System.Void LHBPCEDIDBB(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13E9BD8
    void LHBPCEDIDBB(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void LBIKOKCCILF()
    // Offset: 0x13E9C60
    void LBIKOKCCILF();
    // public System.Void .ctor()
    // Offset: 0x13E9CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MedusaBoss* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::MedusaBoss::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MedusaBoss*, creationType>()));
    }
    // private System.Collections.IEnumerator DHKIJMIFCLC(System.Single MIMKAJAIHFB)
    // Offset: 0x13E9D10
    ::System::Collections::IEnumerator* DHKIJMIFCLC(float MIMKAJAIHFB);
    // public System.Void Shoot()
    // Offset: 0x13E9DD4
    void Shoot();
    // private System.Void EJPBJNNMKNN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13E9DD8
    void EJPBJNNMKNN(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Collections.IEnumerator PDDHCDDHEEG(System.Single MIMKAJAIHFB)
    // Offset: 0x13E9E60
    ::System::Collections::IEnumerator* PDDHCDDHEEG(float MIMKAJAIHFB);
    // private System.Void CKGJLBNDDMK(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13E9EF8
    void CKGJLBNDDMK(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x13E9F80
    void IDOCJGNLNFL();
    // public System.Void CKLMMKLOEFA()
    // Offset: 0x13E9FD8
    void CKLMMKLOEFA();
    // private System.Void KFKMNAAOFFH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13E9FDC
    void KFKMNAAOFFH(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Collections.IEnumerator HDIEIFAGMAJ(System.Single MIMKAJAIHFB)
    // Offset: 0x13EA168
    ::System::Collections::IEnumerator* HDIEIFAGMAJ(float MIMKAJAIHFB);
    // private System.Void OMNFJALHMCM(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EA204
    void OMNFJALHMCM(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Collections.IEnumerator DCDEFDMCLNF(System.Single MIMKAJAIHFB)
    // Offset: 0x13EA28C
    ::System::Collections::IEnumerator* DCDEFDMCLNF(float MIMKAJAIHFB);
    // private System.Void NFEJEIAPMFL(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EA328
    void NFEJEIAPMFL(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void AFIACGLCIPB()
    // Offset: 0x13EA3B0
    void AFIACGLCIPB();
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13EA408
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BNFOMMDPLGC(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EA580
    void BNFOMMDPLGC(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void HAOCADCIOAD(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EA608
    void HAOCADCIOAD(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void DMGLIODNKOG(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EA690
    void DMGLIODNKOG(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void OJOELPJLJFN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EA784
    void OJOELPJLJFN(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13EA80C
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x13EA984
    void FGIFGGNGKPK();
    // public System.Void JHPGGLDGNMG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13EA9DC
    void JHPGGLDGNMG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JNHNEBOHOIB()
    // Offset: 0x13EAB54
    void JNHNEBOHOIB();
    // public System.Void LCMLLJGPKEM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13EABAC
    void LCMLLJGPKEM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Collections.IEnumerator HPMKCJPFPBB(System.Single MIMKAJAIHFB)
    // Offset: 0x13EAD24
    ::System::Collections::IEnumerator* HPMKCJPFPBB(float MIMKAJAIHFB);
    // private System.Void AKJPGGNFNJE(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EADBC
    void AKJPGGNFNJE(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Collections.IEnumerator ODKFCJFCEJA(System.Single MIMKAJAIHFB)
    // Offset: 0x13EAE44
    ::System::Collections::IEnumerator* ODKFCJFCEJA(float MIMKAJAIHFB);
    // public System.Void OGALJHFFLHP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x13EAEDC
    void OGALJHFFLHP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void PBEMGGBBDCK()
    // Offset: 0x13EB054
    void PBEMGGBBDCK();
    // private System.Void Start()
    // Offset: 0x13EB0AC
    void Start();
    // private System.Collections.IEnumerator MMAFOBHHCJG(System.Single MIMKAJAIHFB)
    // Offset: 0x13EA0D0
    ::System::Collections::IEnumerator* MMAFOBHHCJG(float MIMKAJAIHFB);
    // private System.Void AMIGPBKBDCG(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EB104
    void AMIGPBKBDCG(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void GPCPAJPCIJJ(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EB18C
    void GPCPAJPCIJJ(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void GENFHKNJHNF()
    // Offset: 0x13EB280
    void GENFHKNJHNF();
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x13EB284
    void GHLPBOJJHNG();
    // private System.Collections.IEnumerator GBNJDNHMEIG(System.Single MIMKAJAIHFB)
    // Offset: 0x13EB2DC
    ::System::Collections::IEnumerator* GBNJDNHMEIG(float MIMKAJAIHFB);
    // private System.Void JPGPNKPFJOC(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EB374
    void JPGPNKPFJOC(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void GAOFEAPPLNN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EB3FC
    void GAOFEAPPLNN(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void LNMMKFLJLKJ(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x13EB4EC
    void LNMMKFLJLKJ(::System::Collections::ArrayList* HPEANAHIBAH);
  }; // MagicalActual.MedusaBoss
  #pragma pack(pop)
  static check_size<sizeof(MedusaBoss), 72 + sizeof(::UnityEngine::AudioSource*)> __MagicalActual_MedusaBossSizeCheck;
  static_assert(sizeof(MedusaBoss) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::OPNDMJMONNL
// Il2CppName: OPNDMJMONNL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::OPNDMJMONNL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "OPNDMJMONNL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::LHBPCEDIDBB
// Il2CppName: LHBPCEDIDBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::LHBPCEDIDBB)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "LHBPCEDIDBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::DHKIJMIFCLC
// Il2CppName: DHKIJMIFCLC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::DHKIJMIFCLC)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "DHKIJMIFCLC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::Shoot
// Il2CppName: Shoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::Shoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "Shoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::EJPBJNNMKNN
// Il2CppName: EJPBJNNMKNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::EJPBJNNMKNN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "EJPBJNNMKNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::PDDHCDDHEEG
// Il2CppName: PDDHCDDHEEG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::PDDHCDDHEEG)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "PDDHCDDHEEG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::CKGJLBNDDMK
// Il2CppName: CKGJLBNDDMK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::CKGJLBNDDMK)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "CKGJLBNDDMK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::CKLMMKLOEFA
// Il2CppName: CKLMMKLOEFA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::CKLMMKLOEFA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "CKLMMKLOEFA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::KFKMNAAOFFH
// Il2CppName: KFKMNAAOFFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::KFKMNAAOFFH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "KFKMNAAOFFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::HDIEIFAGMAJ
// Il2CppName: HDIEIFAGMAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::HDIEIFAGMAJ)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "HDIEIFAGMAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::OMNFJALHMCM
// Il2CppName: OMNFJALHMCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::OMNFJALHMCM)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "OMNFJALHMCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::DCDEFDMCLNF
// Il2CppName: DCDEFDMCLNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::DCDEFDMCLNF)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "DCDEFDMCLNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::NFEJEIAPMFL
// Il2CppName: NFEJEIAPMFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::NFEJEIAPMFL)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "NFEJEIAPMFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::MedusaBoss::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::BNFOMMDPLGC
// Il2CppName: BNFOMMDPLGC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::BNFOMMDPLGC)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "BNFOMMDPLGC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::HAOCADCIOAD
// Il2CppName: HAOCADCIOAD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::HAOCADCIOAD)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "HAOCADCIOAD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::DMGLIODNKOG
// Il2CppName: DMGLIODNKOG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::DMGLIODNKOG)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "DMGLIODNKOG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::OJOELPJLJFN
// Il2CppName: OJOELPJLJFN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::OJOELPJLJFN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "OJOELPJLJFN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::MedusaBoss::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::JHPGGLDGNMG
// Il2CppName: JHPGGLDGNMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::MedusaBoss::JHPGGLDGNMG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "JHPGGLDGNMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::JNHNEBOHOIB
// Il2CppName: JNHNEBOHOIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::JNHNEBOHOIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "JNHNEBOHOIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::LCMLLJGPKEM
// Il2CppName: LCMLLJGPKEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::MedusaBoss::LCMLLJGPKEM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "LCMLLJGPKEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::HPMKCJPFPBB
// Il2CppName: HPMKCJPFPBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::HPMKCJPFPBB)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "HPMKCJPFPBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::AKJPGGNFNJE
// Il2CppName: AKJPGGNFNJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::AKJPGGNFNJE)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "AKJPGGNFNJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::ODKFCJFCEJA
// Il2CppName: ODKFCJFCEJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::ODKFCJFCEJA)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "ODKFCJFCEJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::OGALJHFFLHP
// Il2CppName: OGALJHFFLHP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::MedusaBoss::OGALJHFFLHP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "OGALJHFFLHP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::MMAFOBHHCJG
// Il2CppName: MMAFOBHHCJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::MMAFOBHHCJG)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "MMAFOBHHCJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::AMIGPBKBDCG
// Il2CppName: AMIGPBKBDCG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::AMIGPBKBDCG)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "AMIGPBKBDCG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::GPCPAJPCIJJ
// Il2CppName: GPCPAJPCIJJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::GPCPAJPCIJJ)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "GPCPAJPCIJJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::GENFHKNJHNF
// Il2CppName: GENFHKNJHNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::GENFHKNJHNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "GENFHKNJHNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)()>(&MagicalActual::MedusaBoss::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::GBNJDNHMEIG
// Il2CppName: GBNJDNHMEIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::MedusaBoss::*)(float)>(&MagicalActual::MedusaBoss::GBNJDNHMEIG)> {
  static const MethodInfo* get() {
    static auto* MIMKAJAIHFB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "GBNJDNHMEIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MIMKAJAIHFB});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::JPGPNKPFJOC
// Il2CppName: JPGPNKPFJOC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::JPGPNKPFJOC)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "JPGPNKPFJOC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::GAOFEAPPLNN
// Il2CppName: GAOFEAPPLNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::GAOFEAPPLNN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "GAOFEAPPLNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::MedusaBoss::LNMMKFLJLKJ
// Il2CppName: LNMMKFLJLKJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::MedusaBoss::*)(::System::Collections::ArrayList*)>(&MagicalActual::MedusaBoss::LNMMKFLJLKJ)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::MedusaBoss*), "LNMMKFLJLKJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
