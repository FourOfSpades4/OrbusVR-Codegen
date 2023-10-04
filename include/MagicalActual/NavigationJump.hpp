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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: NavigationJump
  class NavigationJump;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::NavigationJump);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::NavigationJump*, "MagicalActual", "NavigationJump");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.NavigationJump
  // [TokenAttribute] Offset: FFFFFFFF
  class NavigationJump : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject destination
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* destination;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Vector3 destinationLocation
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 destinationLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean destinationIsIndoors
    // Size: 0x1
    // Offset: 0x2C
    bool destinationIsIndoors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject destination
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_destination();
    // Get instance field reference: public UnityEngine.Vector3 destinationLocation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_destinationLocation();
    // Get instance field reference: public System.Boolean destinationIsIndoors
    [[deprecated("Use field access instead!")]] bool& dyn_destinationIsIndoors();
    // public System.Void JNHNEBOHOIB()
    // Offset: 0x19402B8
    void JNHNEBOHOIB();
    // public System.Void NNDKJCJFIAK()
    // Offset: 0x19402BC
    void NNDKJCJFIAK();
    // public System.Void PFKGBAAOBIJ(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x19402C0
    void PFKGBAAOBIJ(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void KAEKIAHIDDI(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1940450
    void KAEKIAHIDDI(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void EPCHNEGNKNF()
    // Offset: 0x1940604
    void EPCHNEGNKNF();
    // public System.Void doJump(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1940608
    void doJump(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void ABIHCGOKNCL()
    // Offset: 0x1940794
    void ABIHCGOKNCL();
    // public System.Void AKEHMAIMBJI(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1940798
    void AKEHMAIMBJI(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void HKAJLGEJENP(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x194094C
    void HKAJLGEJENP(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void KBDGAPMJGLG()
    // Offset: 0x1940AF8
    void KBDGAPMJGLG();
    // public System.Void HFFMFNHKJIF(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1940AFC
    void HFFMFNHKJIF(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void .ctor()
    // Offset: 0x1940C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavigationJump* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::NavigationJump::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavigationJump*, creationType>()));
    }
    // public System.Void HKINNMLBMMG()
    // Offset: 0x1940C98
    void HKINNMLBMMG();
    // public System.Void FGCMCMKBFDF(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1940C9C
    void FGCMCMKBFDF(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void LDGAMIIHHEP(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1940E50
    void LDGAMIIHHEP(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void CBMDGNKFPIO()
    // Offset: 0x1941004
    void CBMDGNKFPIO();
    // public System.Void APIMIOELFAJ()
    // Offset: 0x1941008
    void APIMIOELFAJ();
    // public System.Void BDEDGNGMHMN()
    // Offset: 0x194100C
    void BDEDGNGMHMN();
    // public System.Void Start()
    // Offset: 0x1941010
    void Start();
    // public System.Void GECHLDPLPCC()
    // Offset: 0x1941014
    void GECHLDPLPCC();
    // public System.Void OEDOMGAOADD(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x1941018
    void OEDOMGAOADD(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void IPIFMKAGODD()
    // Offset: 0x19411CC
    void IPIFMKAGODD();
    // public System.Void PFABJJGAOMM()
    // Offset: 0x19411D0
    void PFABJJGAOMM();
    // public System.Void NEDFCIDMJBB()
    // Offset: 0x19411D4
    void NEDFCIDMJBB();
    // public System.Void AKGFEENGKJD()
    // Offset: 0x19411D8
    void AKGFEENGKJD();
    // public System.Void MLGBKBMHHLE()
    // Offset: 0x19411DC
    void MLGBKBMHHLE();
    // public System.Void KPOAAAHLGLA()
    // Offset: 0x19411E0
    void KPOAAAHLGLA();
    // public System.Void JENOIOBAEPG()
    // Offset: 0x19411E4
    void JENOIOBAEPG();
    // public System.Void PBEMGGBBDCK()
    // Offset: 0x19411E8
    void PBEMGGBBDCK();
    // public System.Void DEHINBOHPKD(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x19411EC
    void DEHINBOHPKD(::UnityEngine::GameObject* FOIEAOKBGLM);
    // public System.Void EIIKFEMCNKM()
    // Offset: 0x1941398
    void EIIKFEMCNKM();
    // public System.Void LPLGKBGLPOK()
    // Offset: 0x194139C
    void LPLGKBGLPOK();
    // public System.Void LBIKOKCCILF()
    // Offset: 0x19413A0
    void LBIKOKCCILF();
    // public System.Void FHCFLDDPGJJ(UnityEngine.GameObject FOIEAOKBGLM)
    // Offset: 0x19413A4
    void FHCFLDDPGJJ(::UnityEngine::GameObject* FOIEAOKBGLM);
  }; // MagicalActual.NavigationJump
  #pragma pack(pop)
  static check_size<sizeof(NavigationJump), 44 + sizeof(bool)> __MagicalActual_NavigationJumpSizeCheck;
  static_assert(sizeof(NavigationJump) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::NavigationJump::JNHNEBOHOIB
// Il2CppName: JNHNEBOHOIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::JNHNEBOHOIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "JNHNEBOHOIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::PFKGBAAOBIJ
// Il2CppName: PFKGBAAOBIJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::PFKGBAAOBIJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "PFKGBAAOBIJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::KAEKIAHIDDI
// Il2CppName: KAEKIAHIDDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::KAEKIAHIDDI)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "KAEKIAHIDDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::doJump
// Il2CppName: doJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::doJump)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "doJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::AKEHMAIMBJI
// Il2CppName: AKEHMAIMBJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::AKEHMAIMBJI)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "AKEHMAIMBJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::HKAJLGEJENP
// Il2CppName: HKAJLGEJENP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::HKAJLGEJENP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "HKAJLGEJENP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::HFFMFNHKJIF
// Il2CppName: HFFMFNHKJIF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::HFFMFNHKJIF)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "HFFMFNHKJIF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::NavigationJump::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::FGCMCMKBFDF
// Il2CppName: FGCMCMKBFDF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::FGCMCMKBFDF)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "FGCMCMKBFDF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::LDGAMIIHHEP
// Il2CppName: LDGAMIIHHEP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::LDGAMIIHHEP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "LDGAMIIHHEP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::APIMIOELFAJ
// Il2CppName: APIMIOELFAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::APIMIOELFAJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "APIMIOELFAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::OEDOMGAOADD
// Il2CppName: OEDOMGAOADD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::OEDOMGAOADD)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "OEDOMGAOADD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::PFABJJGAOMM
// Il2CppName: PFABJJGAOMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::PFABJJGAOMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "PFABJJGAOMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::NEDFCIDMJBB
// Il2CppName: NEDFCIDMJBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::NEDFCIDMJBB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "NEDFCIDMJBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::AKGFEENGKJD
// Il2CppName: AKGFEENGKJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::AKGFEENGKJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "AKGFEENGKJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::DEHINBOHPKD
// Il2CppName: DEHINBOHPKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::DEHINBOHPKD)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "DEHINBOHPKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::LPLGKBGLPOK
// Il2CppName: LPLGKBGLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::LPLGKBGLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "LPLGKBGLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)()>(&MagicalActual::NavigationJump::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::NavigationJump::FHCFLDDPGJJ
// Il2CppName: FHCFLDDPGJJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::NavigationJump::*)(::UnityEngine::GameObject*)>(&MagicalActual::NavigationJump::FHCFLDDPGJJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::NavigationJump*), "FHCFLDDPGJJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};