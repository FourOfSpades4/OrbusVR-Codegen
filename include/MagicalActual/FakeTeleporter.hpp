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
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: LaserPointer
  class LaserPointer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: FakeTeleporter
  class FakeTeleporter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::FakeTeleporter);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::FakeTeleporter*, "MagicalActual", "FakeTeleporter");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.FakeTeleporter
  // [TokenAttribute] Offset: FFFFFFFF
  class FakeTeleporter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.LaserPointer LLDJNFONHFD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::LaserPointer* LLDJNFONHFD;
    // Field size check
    static_assert(sizeof(::MagicalActual::LaserPointer*) == 0x8);
    // private UnityEngine.Vector3[] KKGJPMDJOMJ
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> KKGJPMDJOMJ;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.LineRenderer ADMMPKAAILI
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::LineRenderer* ADMMPKAAILI;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.GameObject CHOBOICMCCN
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* CHOBOICMCCN;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Boolean OCLOJAFCLAO
    // Size: 0x1
    // Offset: 0x38
    bool OCLOJAFCLAO;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.LaserPointer LLDJNFONHFD
    [[deprecated("Use field access instead!")]] ::MagicalActual::LaserPointer*& dyn_LLDJNFONHFD();
    // Get instance field reference: private UnityEngine.Vector3[] KKGJPMDJOMJ
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_KKGJPMDJOMJ();
    // Get instance field reference: private UnityEngine.LineRenderer ADMMPKAAILI
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_ADMMPKAAILI();
    // Get instance field reference: private UnityEngine.GameObject CHOBOICMCCN
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_CHOBOICMCCN();
    // Get instance field reference: private System.Boolean OCLOJAFCLAO
    [[deprecated("Use field access instead!")]] bool& dyn_OCLOJAFCLAO();
    // public System.Void OnDestroy()
    // Offset: 0x14E9104
    void OnDestroy();
    // public System.Void CGAEJLIMDFH()
    // Offset: 0x14E91B8
    void CGAEJLIMDFH();
    // public System.Void HCIMDNFFMIC()
    // Offset: 0x14E92F8
    void HCIMDNFFMIC();
    // private UnityEngine.Vector3 BPONBBMJFOJ(UnityEngine.Vector3 MILGJAJMKAB, UnityEngine.Vector3 LKMBPNJDCFN, System.Single BINJODOOEDL, System.Single FFNMEJOKJID)
    // Offset: 0x14E9544
    ::UnityEngine::Vector3 BPONBBMJFOJ(::UnityEngine::Vector3 MILGJAJMKAB, ::UnityEngine::Vector3 LKMBPNJDCFN, float BINJODOOEDL, float FFNMEJOKJID);
    // public System.Void LJHMJPAGEEP()
    // Offset: 0x14E97C4
    void LJHMJPAGEEP();
    // public System.Void PJOIJIEDPMP()
    // Offset: 0x14E9878
    void PJOIJIEDPMP();
    // public System.Void FixedUpdate()
    // Offset: 0x14E9C68
    void FixedUpdate();
    // private UnityEngine.Vector3 EONODDDEFGC(UnityEngine.Vector3 MILGJAJMKAB, UnityEngine.Vector3 LKMBPNJDCFN, System.Single BINJODOOEDL, System.Single FFNMEJOKJID)
    // Offset: 0x14EA064
    ::UnityEngine::Vector3 EONODDDEFGC(::UnityEngine::Vector3 MILGJAJMKAB, ::UnityEngine::Vector3 LKMBPNJDCFN, float BINJODOOEDL, float FFNMEJOKJID);
    // private System.Void GPFBGGFPINB()
    // Offset: 0x14EA2E8
    void GPFBGGFPINB();
    // public System.Void PCKKEDBIBNO()
    // Offset: 0x14EA5A0
    void PCKKEDBIBNO();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x14EA6E4
    void EPCHNEGNKNF();
    // private System.Void DJMACFDJMNJ()
    // Offset: 0x14EA99C
    void DJMACFDJMNJ();
    // public System.Void TurnOn()
    // Offset: 0x14EAABC
    void TurnOn();
    // public System.Void DIBLOAOHNMO()
    // Offset: 0x14EABF0
    void DIBLOAOHNMO();
    // private System.Void IADFPCCECBP()
    // Offset: 0x14EACA4
    void IADFPCCECBP();
    // private System.Void EMNLEDCJGLP()
    // Offset: 0x14EAEF4
    void EMNLEDCJGLP();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x14EAEF8
    void KPOAAAHLGLA();
    // private System.Void FFEBAINKOAH()
    // Offset: 0x14E9F68
    void FFEBAINKOAH();
    // public System.Void DKPNMMLDBAA()
    // Offset: 0x14EB1B0
    void DKPNMMLDBAA();
    // private System.Void BJDKKEBBLBJ()
    // Offset: 0x14EB2F0
    void BJDKKEBBLBJ();
    // public System.Void CHEMMHEMDCB()
    // Offset: 0x14EB540
    void CHEMMHEMDCB();
    // public System.Void CMNAEHHBNFK()
    // Offset: 0x14EB850
    void CMNAEHHBNFK();
    // public System.Void TurnOff()
    // Offset: 0x14EACA8
    void TurnOff();
    // public System.Void .ctor()
    // Offset: 0x14EBA9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FakeTeleporter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::FakeTeleporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FakeTeleporter*, creationType>()));
    }
    // public System.Void DNPJOGNFDBD()
    // Offset: 0x14EB2F4
    void DNPJOGNFDBD();
    // private System.Void NMKKEOHDCJF()
    // Offset: 0x14EBAA4
    void NMKKEOHDCJF();
    // private System.Void Start()
    // Offset: 0x14EBCF4
    void Start();
    // public System.Void JKDFCMDDCIK()
    // Offset: 0x14EBFAC
    void JKDFCMDDCIK();
    // public System.Void OEIDCJJCAPD()
    // Offset: 0x14EBAA8
    void OEIDCJJCAPD();
    // private System.Void OnDisable()
    // Offset: 0x14EC060
    void OnDisable();
    // public System.Void LBBHKKFNJPA()
    // Offset: 0x14EC064
    void LBBHKKFNJPA();
    // private System.Void PNEFKEOIGCK()
    // Offset: 0x14E9B68
    void PNEFKEOIGCK();
    // public System.Void MKHEDAAIDIE()
    // Offset: 0x14EC118
    void MKHEDAAIDIE();
  }; // MagicalActual.FakeTeleporter
  #pragma pack(pop)
  static check_size<sizeof(FakeTeleporter), 56 + sizeof(bool)> __MagicalActual_FakeTeleporterSizeCheck;
  static_assert(sizeof(FakeTeleporter) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::CGAEJLIMDFH
// Il2CppName: CGAEJLIMDFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::CGAEJLIMDFH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "CGAEJLIMDFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::HCIMDNFFMIC
// Il2CppName: HCIMDNFFMIC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::HCIMDNFFMIC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "HCIMDNFFMIC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::BPONBBMJFOJ
// Il2CppName: BPONBBMJFOJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::FakeTeleporter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float)>(&MagicalActual::FakeTeleporter::BPONBBMJFOJ)> {
  static const MethodInfo* get() {
    static auto* MILGJAJMKAB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* LKMBPNJDCFN = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* BINJODOOEDL = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* FFNMEJOKJID = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "BPONBBMJFOJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MILGJAJMKAB, LKMBPNJDCFN, BINJODOOEDL, FFNMEJOKJID});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::LJHMJPAGEEP
// Il2CppName: LJHMJPAGEEP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::LJHMJPAGEEP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "LJHMJPAGEEP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::PJOIJIEDPMP
// Il2CppName: PJOIJIEDPMP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::PJOIJIEDPMP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "PJOIJIEDPMP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::EONODDDEFGC
// Il2CppName: EONODDDEFGC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::FakeTeleporter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float)>(&MagicalActual::FakeTeleporter::EONODDDEFGC)> {
  static const MethodInfo* get() {
    static auto* MILGJAJMKAB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* LKMBPNJDCFN = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* BINJODOOEDL = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* FFNMEJOKJID = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "EONODDDEFGC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MILGJAJMKAB, LKMBPNJDCFN, BINJODOOEDL, FFNMEJOKJID});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::PCKKEDBIBNO
// Il2CppName: PCKKEDBIBNO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::PCKKEDBIBNO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "PCKKEDBIBNO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::DJMACFDJMNJ
// Il2CppName: DJMACFDJMNJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::DJMACFDJMNJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "DJMACFDJMNJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::TurnOn
// Il2CppName: TurnOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::TurnOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "TurnOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::DIBLOAOHNMO
// Il2CppName: DIBLOAOHNMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::DIBLOAOHNMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "DIBLOAOHNMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::IADFPCCECBP
// Il2CppName: IADFPCCECBP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::IADFPCCECBP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "IADFPCCECBP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::EMNLEDCJGLP
// Il2CppName: EMNLEDCJGLP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::EMNLEDCJGLP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "EMNLEDCJGLP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::FFEBAINKOAH
// Il2CppName: FFEBAINKOAH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::FFEBAINKOAH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "FFEBAINKOAH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::DKPNMMLDBAA
// Il2CppName: DKPNMMLDBAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::DKPNMMLDBAA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "DKPNMMLDBAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::BJDKKEBBLBJ
// Il2CppName: BJDKKEBBLBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::BJDKKEBBLBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "BJDKKEBBLBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::CHEMMHEMDCB
// Il2CppName: CHEMMHEMDCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::CHEMMHEMDCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "CHEMMHEMDCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::CMNAEHHBNFK
// Il2CppName: CMNAEHHBNFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::CMNAEHHBNFK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "CMNAEHHBNFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::TurnOff
// Il2CppName: TurnOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::TurnOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "TurnOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::DNPJOGNFDBD
// Il2CppName: DNPJOGNFDBD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::DNPJOGNFDBD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "DNPJOGNFDBD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::NMKKEOHDCJF
// Il2CppName: NMKKEOHDCJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::NMKKEOHDCJF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "NMKKEOHDCJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::JKDFCMDDCIK
// Il2CppName: JKDFCMDDCIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::JKDFCMDDCIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "JKDFCMDDCIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::OEIDCJJCAPD
// Il2CppName: OEIDCJJCAPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::OEIDCJJCAPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "OEIDCJJCAPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::LBBHKKFNJPA
// Il2CppName: LBBHKKFNJPA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::LBBHKKFNJPA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "LBBHKKFNJPA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::PNEFKEOIGCK
// Il2CppName: PNEFKEOIGCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::PNEFKEOIGCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "PNEFKEOIGCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FakeTeleporter::MKHEDAAIDIE
// Il2CppName: MKHEDAAIDIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FakeTeleporter::*)()>(&MagicalActual::FakeTeleporter::MKHEDAAIDIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FakeTeleporter*), "MKHEDAAIDIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};