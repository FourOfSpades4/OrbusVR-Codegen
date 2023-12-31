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
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: GeminiBoss
  class GeminiBoss;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::GeminiBoss);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::GeminiBoss*, "MagicalActual", "GeminiBoss");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.GeminiBoss
  // [TokenAttribute] Offset: FFFFFFFF
  class GeminiBoss : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private UnityEngine.Animator animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_animator();
    // private System.Void DMJFJGGBHNI(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596658
    void DMJFJGGBHNI(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void NEMKNLGDEAK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1596710
    void NEMKNLGDEAK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JNELNIGPBIM()
    // Offset: 0x15967C4
    void JNELNIGPBIM();
    // private System.Void HOCAAMOHPFG(System.Object OMLPNCLFFMJ)
    // Offset: 0x15967C8
    void HOCAAMOHPFG(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void EEONKAHJKAD(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596880
    void EEONKAHJKAD(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void JMPPPHNKAFG()
    // Offset: 0x1596938
    void JMPPPHNKAFG();
    // private System.Void AFMOIOAGKLM()
    // Offset: 0x159693C
    void AFMOIOAGKLM();
    // private System.Void IKFPBMPHNFF()
    // Offset: 0x1596940
    void IKFPBMPHNFF();
    // private System.Void EKEDCCIDOBI()
    // Offset: 0x1596944
    void EKEDCCIDOBI();
    // private System.Void KKEABMBACIC()
    // Offset: 0x1596948
    void KKEABMBACIC();
    // private System.Void JIKJBAMGGBF()
    // Offset: 0x159694C
    void JIKJBAMGGBF();
    // private System.Void KDBGBFBCBCF()
    // Offset: 0x1596950
    void KDBGBFBCBCF();
    // private System.Void CNAMNCJAAGK(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596954
    void CNAMNCJAAGK(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void LDGBMNHMGKN(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596A0C
    void LDGBMNHMGKN(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void MDALPNHFBBJ()
    // Offset: 0x1596AC4
    void MDALPNHFBBJ();
    // private System.Void OPAPGNGNHJC(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596AC8
    void OPAPGNGNHJC(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void BBJGCNABFCG()
    // Offset: 0x1596B80
    void BBJGCNABFCG();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1596B84
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1596C38
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JBHBPFBDDFH(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596CEC
    void JBHBPFBDDFH(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void Awake()
    // Offset: 0x1596DA4
    void Awake();
    // private System.Void DJIGIJKOPDC()
    // Offset: 0x1596DA8
    void DJIGIJKOPDC();
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1596DAC
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1596E60
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x1596F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeminiBoss* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::GeminiBoss::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeminiBoss*, creationType>()));
    }
    // private System.Void MOEBOEAJLDE()
    // Offset: 0x1596F6C
    void MOEBOEAJLDE();
    // private System.Void EJPPHNJKFPP()
    // Offset: 0x1596F70
    void EJPPHNJKFPP();
    // private System.Void OnDestroy()
    // Offset: 0x1596F74
    void OnDestroy();
    // private System.Void CFDACDEPNGK(System.Object OMLPNCLFFMJ)
    // Offset: 0x1596F78
    void CFDACDEPNGK(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void HNFEGEMMACF()
    // Offset: 0x1597030
    void HNFEGEMMACF();
  }; // MagicalActual.GeminiBoss
  #pragma pack(pop)
  static check_size<sizeof(GeminiBoss), 40 + sizeof(::UnityEngine::Animator*)> __MagicalActual_GeminiBossSizeCheck;
  static_assert(sizeof(GeminiBoss) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::DMJFJGGBHNI
// Il2CppName: DMJFJGGBHNI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::DMJFJGGBHNI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "DMJFJGGBHNI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::NEMKNLGDEAK
// Il2CppName: NEMKNLGDEAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::GeminiBoss::NEMKNLGDEAK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "NEMKNLGDEAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::JNELNIGPBIM
// Il2CppName: JNELNIGPBIM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::JNELNIGPBIM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "JNELNIGPBIM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::HOCAAMOHPFG
// Il2CppName: HOCAAMOHPFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::HOCAAMOHPFG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "HOCAAMOHPFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::EEONKAHJKAD
// Il2CppName: EEONKAHJKAD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::EEONKAHJKAD)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "EEONKAHJKAD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::JMPPPHNKAFG
// Il2CppName: JMPPPHNKAFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::JMPPPHNKAFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "JMPPPHNKAFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::AFMOIOAGKLM
// Il2CppName: AFMOIOAGKLM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::AFMOIOAGKLM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "AFMOIOAGKLM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::IKFPBMPHNFF
// Il2CppName: IKFPBMPHNFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::IKFPBMPHNFF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "IKFPBMPHNFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::EKEDCCIDOBI
// Il2CppName: EKEDCCIDOBI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::EKEDCCIDOBI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "EKEDCCIDOBI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::KKEABMBACIC
// Il2CppName: KKEABMBACIC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::KKEABMBACIC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "KKEABMBACIC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::JIKJBAMGGBF
// Il2CppName: JIKJBAMGGBF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::JIKJBAMGGBF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "JIKJBAMGGBF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::KDBGBFBCBCF
// Il2CppName: KDBGBFBCBCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::KDBGBFBCBCF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "KDBGBFBCBCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::CNAMNCJAAGK
// Il2CppName: CNAMNCJAAGK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::CNAMNCJAAGK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "CNAMNCJAAGK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::LDGBMNHMGKN
// Il2CppName: LDGBMNHMGKN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::LDGBMNHMGKN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "LDGBMNHMGKN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::MDALPNHFBBJ
// Il2CppName: MDALPNHFBBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::MDALPNHFBBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "MDALPNHFBBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::OPAPGNGNHJC
// Il2CppName: OPAPGNGNHJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::OPAPGNGNHJC)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "OPAPGNGNHJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::BBJGCNABFCG
// Il2CppName: BBJGCNABFCG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::BBJGCNABFCG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "BBJGCNABFCG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::GeminiBoss::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::GeminiBoss::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::JBHBPFBDDFH
// Il2CppName: JBHBPFBDDFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::JBHBPFBDDFH)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "JBHBPFBDDFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::DJIGIJKOPDC
// Il2CppName: DJIGIJKOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::DJIGIJKOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "DJIGIJKOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::GeminiBoss::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::MagicalActual::NetEntity*)>(&MagicalActual::GeminiBoss::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::MOEBOEAJLDE
// Il2CppName: MOEBOEAJLDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::MOEBOEAJLDE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "MOEBOEAJLDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::EJPPHNJKFPP
// Il2CppName: EJPPHNJKFPP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::EJPPHNJKFPP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "EJPPHNJKFPP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::CFDACDEPNGK
// Il2CppName: CFDACDEPNGK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)(::Il2CppObject*)>(&MagicalActual::GeminiBoss::CFDACDEPNGK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "CFDACDEPNGK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::GeminiBoss::HNFEGEMMACF
// Il2CppName: HNFEGEMMACF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GeminiBoss::*)()>(&MagicalActual::GeminiBoss::HNFEGEMMACF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GeminiBoss*), "HNFEGEMMACF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
