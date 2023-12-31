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
  // Forward declaring type: WorldMenu
  class WorldMenu;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: BrotherhoodAltar
  class BrotherhoodAltar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BrotherhoodAltar);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BrotherhoodAltar*, "MagicalActual", "BrotherhoodAltar");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BrotherhoodAltar
  // [TokenAttribute] Offset: FFFFFFFF
  class BrotherhoodAltar : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::BrotherhoodAltar::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
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
    // public UnityEngine.Transform menuPoint
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* menuPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private MagicalActual.WorldMenu KNCKPELAKBH
    // Size: 0x8
    // Offset: 0x30
    ::MagicalActual::WorldMenu* KNCKPELAKBH;
    // Field size check
    static_assert(sizeof(::MagicalActual::WorldMenu*) == 0x8);
    // public UnityEngine.TextAsset MenuHtml
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::TextAsset* MenuHtml;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public UnityEngine.Transform menuPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_menuPoint();
    // Get instance field reference: private MagicalActual.WorldMenu KNCKPELAKBH
    [[deprecated("Use field access instead!")]] ::MagicalActual::WorldMenu*& dyn_KNCKPELAKBH();
    // Get instance field reference: public UnityEngine.TextAsset MenuHtml
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_MenuHtml();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x179ED70
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void OnDestroy()
    // Offset: 0x179ED78
    void OnDestroy();
    // public System.Void MLHPBGADMFA()
    // Offset: 0x179EDF8
    void MLHPBGADMFA();
    // private System.Void AFIACGLCIPB()
    // Offset: 0x179EEEC
    void AFIACGLCIPB();
    // public System.Void FDNOMAJOKFN()
    // Offset: 0x179F23C
    void FDNOMAJOKFN();
    // private System.Void KDBGBFBCBCF()
    // Offset: 0x179F330
    void KDBGBFBCBCF();
    // private System.Void GDNMJPBGBON()
    // Offset: 0x179F3B0
    void GDNMJPBGBON();
    // private System.Void NPNEIAFEMLJ()
    // Offset: 0x179F430
    void NPNEIAFEMLJ();
    // private System.Void EKEDCCIDOBI()
    // Offset: 0x179F4B0
    void EKEDCCIDOBI();
    // private System.Void NHADFEMILCC()
    // Offset: 0x179F530
    void NHADFEMILCC();
    // private System.Void LJHMJPAGEEP()
    // Offset: 0x179F790
    void LJHMJPAGEEP();
    // public System.Void BJDFCNDHFLO(System.String HLHIDHCLCEN)
    // Offset: 0x179F810
    void BJDFCNDHFLO(::StringW HLHIDHCLCEN);
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x179F984
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void ResetMenu()
    // Offset: 0x179F14C
    void ResetMenu();
    // public System.Void LABMKJGHFCN()
    // Offset: 0x179F98C
    void LABMKJGHFCN();
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x179FA80
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x179FA88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrotherhoodAltar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BrotherhoodAltar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrotherhoodAltar*, creationType>()));
    }
    // public System.Void JALLNNPBLEL()
    // Offset: 0x179FAE0
    void JALLNNPBLEL();
    // public System.Void KMPPLBBIMGJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x179FBD4
    void KMPPLBBIMGJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void OEIOPGPDPAG()
    // Offset: 0x179FBDC
    void OEIOPGPDPAG();
    // public System.Void MJBHGPIEEHC()
    // Offset: 0x179FC5C
    void MJBHGPIEEHC();
    // public System.Void IKDGLCBOCJG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x179FD50
    void IKDGLCBOCJG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void FIELHBEIPCE(System.String HLHIDHCLCEN)
    // Offset: 0x179FD58
    void FIELHBEIPCE(::StringW HLHIDHCLCEN);
    // private System.Void Start()
    // Offset: 0x179FEC4
    void Start();
    // private System.Void HNFEGEMMACF()
    // Offset: 0x17A0128
    void HNFEGEMMACF();
    // public System.Void HOFAOCOJHJC()
    // Offset: 0x17A01A8
    void HOFAOCOJHJC();
    // public System.Void HOODFIJMPGK(System.String HLHIDHCLCEN)
    // Offset: 0x17A0298
    void HOODFIJMPGK(::StringW HLHIDHCLCEN);
    // public System.Void EIGAPJHJKLB(System.String HLHIDHCLCEN)
    // Offset: 0x17A0404
    void EIGAPJHJKLB(::StringW HLHIDHCLCEN);
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x17A0570
    void CBMDGNKFPIO();
    // public System.Void PromptClickChoice(System.String HLHIDHCLCEN)
    // Offset: 0x17A07D4
    void PromptClickChoice(::StringW HLHIDHCLCEN);
  }; // MagicalActual.BrotherhoodAltar
  #pragma pack(pop)
  static check_size<sizeof(BrotherhoodAltar), 56 + sizeof(::UnityEngine::TextAsset*)> __MagicalActual_BrotherhoodAltarSizeCheck;
  static_assert(sizeof(BrotherhoodAltar) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BrotherhoodAltar::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::MLHPBGADMFA
// Il2CppName: MLHPBGADMFA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::MLHPBGADMFA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "MLHPBGADMFA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::FDNOMAJOKFN
// Il2CppName: FDNOMAJOKFN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::FDNOMAJOKFN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "FDNOMAJOKFN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::KDBGBFBCBCF
// Il2CppName: KDBGBFBCBCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::KDBGBFBCBCF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "KDBGBFBCBCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::GDNMJPBGBON
// Il2CppName: GDNMJPBGBON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::GDNMJPBGBON)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "GDNMJPBGBON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::NPNEIAFEMLJ
// Il2CppName: NPNEIAFEMLJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::NPNEIAFEMLJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "NPNEIAFEMLJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::EKEDCCIDOBI
// Il2CppName: EKEDCCIDOBI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::EKEDCCIDOBI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "EKEDCCIDOBI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::LJHMJPAGEEP
// Il2CppName: LJHMJPAGEEP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::LJHMJPAGEEP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "LJHMJPAGEEP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::BJDFCNDHFLO
// Il2CppName: BJDFCNDHFLO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::StringW)>(&MagicalActual::BrotherhoodAltar::BJDFCNDHFLO)> {
  static const MethodInfo* get() {
    static auto* HLHIDHCLCEN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "BJDFCNDHFLO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HLHIDHCLCEN});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BrotherhoodAltar::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::ResetMenu
// Il2CppName: ResetMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::ResetMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "ResetMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::LABMKJGHFCN
// Il2CppName: LABMKJGHFCN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::LABMKJGHFCN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "LABMKJGHFCN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BrotherhoodAltar::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::JALLNNPBLEL
// Il2CppName: JALLNNPBLEL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::JALLNNPBLEL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "JALLNNPBLEL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::KMPPLBBIMGJ
// Il2CppName: KMPPLBBIMGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BrotherhoodAltar::KMPPLBBIMGJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "KMPPLBBIMGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::OEIOPGPDPAG
// Il2CppName: OEIOPGPDPAG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::OEIOPGPDPAG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "OEIOPGPDPAG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::MJBHGPIEEHC
// Il2CppName: MJBHGPIEEHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::MJBHGPIEEHC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "MJBHGPIEEHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::IKDGLCBOCJG
// Il2CppName: IKDGLCBOCJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::MagicalActual::NetEntity*)>(&MagicalActual::BrotherhoodAltar::IKDGLCBOCJG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "IKDGLCBOCJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::FIELHBEIPCE
// Il2CppName: FIELHBEIPCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::StringW)>(&MagicalActual::BrotherhoodAltar::FIELHBEIPCE)> {
  static const MethodInfo* get() {
    static auto* HLHIDHCLCEN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "FIELHBEIPCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HLHIDHCLCEN});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::HNFEGEMMACF
// Il2CppName: HNFEGEMMACF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::HNFEGEMMACF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "HNFEGEMMACF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::HOFAOCOJHJC
// Il2CppName: HOFAOCOJHJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::HOFAOCOJHJC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "HOFAOCOJHJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::HOODFIJMPGK
// Il2CppName: HOODFIJMPGK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::StringW)>(&MagicalActual::BrotherhoodAltar::HOODFIJMPGK)> {
  static const MethodInfo* get() {
    static auto* HLHIDHCLCEN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "HOODFIJMPGK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HLHIDHCLCEN});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::EIGAPJHJKLB
// Il2CppName: EIGAPJHJKLB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::StringW)>(&MagicalActual::BrotherhoodAltar::EIGAPJHJKLB)> {
  static const MethodInfo* get() {
    static auto* HLHIDHCLCEN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "EIGAPJHJKLB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HLHIDHCLCEN});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)()>(&MagicalActual::BrotherhoodAltar::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BrotherhoodAltar::PromptClickChoice
// Il2CppName: PromptClickChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BrotherhoodAltar::*)(::StringW)>(&MagicalActual::BrotherhoodAltar::PromptClickChoice)> {
  static const MethodInfo* get() {
    static auto* HLHIDHCLCEN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BrotherhoodAltar*), "PromptClickChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HLHIDHCLCEN});
  }
};
