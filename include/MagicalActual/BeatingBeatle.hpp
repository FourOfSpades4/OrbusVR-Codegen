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
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: BeatingBeatle
  class BeatingBeatle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BeatingBeatle);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BeatingBeatle*, "MagicalActual", "BeatingBeatle");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BeatingBeatle
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD2D14
  class BeatingBeatle : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // private System.Void JENOIOBAEPG()
    // Offset: 0x1CA9AD0
    void JENOIOBAEPG();
    // public System.Void EBJDLAIJJJE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9B28
    void EBJDLAIJJJE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void IBMKENLAMGB()
    // Offset: 0x1CA9B30
    void IBMKENLAMGB();
    // public System.Void EGJMIHFLOKP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9B34
    void EGJMIHFLOKP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void DIDADMBDAAK()
    // Offset: 0x1CA9B3C
    void DIDADMBDAAK();
    // public System.Void IOOBCJAJKCJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9B40
    void IOOBCJAJKCJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void FNAJKCKMHHJ()
    // Offset: 0x1CA9B48
    void FNAJKCKMHHJ();
    // public System.Void PKINMLEHJFB()
    // Offset: 0x1CA9B4C
    void PKINMLEHJFB();
    // public System.Void MKAECMFKIEN()
    // Offset: 0x1CA9B50
    void MKAECMFKIEN();
    // public System.Void HJADIOCKECN()
    // Offset: 0x1CA9B54
    void HJADIOCKECN();
    // public System.Void CEPPICBNJOI()
    // Offset: 0x1CA9B58
    void CEPPICBNJOI();
    // public System.Void Slash()
    // Offset: 0x1CA9B5C
    void Slash();
    // public System.Void .ctor()
    // Offset: 0x1CA9B60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatingBeatle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BeatingBeatle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatingBeatle*, creationType>()));
    }
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x1CA9BB8
    void DGJGAFKDIDK();
    // public System.Void HLGKLABMHHD()
    // Offset: 0x1CA9C10
    void HLGKLABMHHD();
    // public System.Void CCOODLILKJD()
    // Offset: 0x1CA9C14
    void CCOODLILKJD();
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9C18
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AMBHFINDKPK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9C20
    void AMBHFINDKPK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9C28
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GKIOLADOCOK()
    // Offset: 0x1CA9C30
    void GKIOLADOCOK();
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x1CA9C88
    void EIIKFEMCNKM();
    // public System.Void NEMKNLGDEAK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9CE0
    void NEMKNLGDEAK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void FMFOGAKFJGJ()
    // Offset: 0x1CA9CE8
    void FMFOGAKFJGJ();
    // public System.Void BIIPJEPNIBH()
    // Offset: 0x1CA9CEC
    void BIIPJEPNIBH();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x1CA9CF0
    void EPCHNEGNKNF();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9D48
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void JMPBEJDKDGJ()
    // Offset: 0x1CA9D50
    void JMPBEJDKDGJ();
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9D54
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1CA9D5C
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void Start()
    // Offset: 0x1CA9D64
    void Start();
  }; // MagicalActual.BeatingBeatle
  #pragma pack(pop)
  static check_size<sizeof(BeatingBeatle), 40 + sizeof(::StringW)> __MagicalActual_BeatingBeatleSizeCheck;
  static_assert(sizeof(BeatingBeatle) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::EBJDLAIJJJE
// Il2CppName: EBJDLAIJJJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::EBJDLAIJJJE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "EBJDLAIJJJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::IBMKENLAMGB
// Il2CppName: IBMKENLAMGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::IBMKENLAMGB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "IBMKENLAMGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::EGJMIHFLOKP
// Il2CppName: EGJMIHFLOKP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::EGJMIHFLOKP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "EGJMIHFLOKP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::DIDADMBDAAK
// Il2CppName: DIDADMBDAAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::DIDADMBDAAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "DIDADMBDAAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::IOOBCJAJKCJ
// Il2CppName: IOOBCJAJKCJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::IOOBCJAJKCJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "IOOBCJAJKCJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::FNAJKCKMHHJ
// Il2CppName: FNAJKCKMHHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::FNAJKCKMHHJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "FNAJKCKMHHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::PKINMLEHJFB
// Il2CppName: PKINMLEHJFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::PKINMLEHJFB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "PKINMLEHJFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::MKAECMFKIEN
// Il2CppName: MKAECMFKIEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::MKAECMFKIEN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "MKAECMFKIEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::HJADIOCKECN
// Il2CppName: HJADIOCKECN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::HJADIOCKECN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "HJADIOCKECN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::CEPPICBNJOI
// Il2CppName: CEPPICBNJOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::CEPPICBNJOI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "CEPPICBNJOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::HLGKLABMHHD
// Il2CppName: HLGKLABMHHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::HLGKLABMHHD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "HLGKLABMHHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::CCOODLILKJD
// Il2CppName: CCOODLILKJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::CCOODLILKJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "CCOODLILKJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::AMBHFINDKPK
// Il2CppName: AMBHFINDKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::AMBHFINDKPK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "AMBHFINDKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::NEMKNLGDEAK
// Il2CppName: NEMKNLGDEAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::NEMKNLGDEAK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "NEMKNLGDEAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::FMFOGAKFJGJ
// Il2CppName: FMFOGAKFJGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::FMFOGAKFJGJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "FMFOGAKFJGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::BIIPJEPNIBH
// Il2CppName: BIIPJEPNIBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::BIIPJEPNIBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "BIIPJEPNIBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::JMPBEJDKDGJ
// Il2CppName: JMPBEJDKDGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::JMPBEJDKDGJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "JMPBEJDKDGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BeatingBeatle::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BeatingBeatle::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BeatingBeatle::*)()>(&MagicalActual::BeatingBeatle::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BeatingBeatle*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};