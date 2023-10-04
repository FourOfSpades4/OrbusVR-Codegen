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
  // Forward declaring type: BarbarianHitMarker
  class BarbarianHitMarker;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: BarbarianBeat
  class BarbarianBeat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BarbarianBeat);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BarbarianBeat*, "MagicalActual", "BarbarianBeat");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BarbarianBeat
  // [TokenAttribute] Offset: FFFFFFFF
  class BarbarianBeat : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::BarbarianBeat::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    public:
    // public UnityEngine.GameObject hitMarkerAny
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* hitMarkerAny;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject hitMarkerVertical
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* hitMarkerVertical;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject hitMarkerHorizontal
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* hitMarkerHorizontal;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single HPDFHCJJGMO
    // Size: 0x4
    // Offset: 0x30
    float HPDFHCJJGMO;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single KIEALDCOLBI
    // Size: 0x4
    // Offset: 0x34
    float KIEALDCOLBI;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single JJBHMGDJEAL
    // Size: 0x4
    // Offset: 0x38
    float JJBHMGDJEAL;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single EMFLAHHPMBN
    // Size: 0x4
    // Offset: 0x3C
    float EMFLAHHPMBN;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single BLHGLPPPLFP
    // Size: 0x4
    // Offset: 0x40
    float BLHGLPPPLFP;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: BLHGLPPPLFP and: hitmarkers
    char __padding7[0x4] = {};
    // public System.Collections.Generic.List`1<MagicalActual.BarbarianHitMarker> hitmarkers
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::MagicalActual::BarbarianHitMarker*>* hitmarkers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::MagicalActual::BarbarianHitMarker*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> OPDIOJNHKDK
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<int>* OPDIOJNHKDK;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Int32 DIKLKIEFENJ
    // Size: 0x4
    // Offset: 0x58
    int DIKLKIEFENJ;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 DBHFAPMMECG
    // Size: 0x4
    // Offset: 0x5C
    int DBHFAPMMECG;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject hitMarkerAny
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_hitMarkerAny();
    // Get instance field reference: public UnityEngine.GameObject hitMarkerVertical
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_hitMarkerVertical();
    // Get instance field reference: public UnityEngine.GameObject hitMarkerHorizontal
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_hitMarkerHorizontal();
    // Get instance field reference: private System.Single HPDFHCJJGMO
    [[deprecated("Use field access instead!")]] float& dyn_HPDFHCJJGMO();
    // Get instance field reference: private System.Single KIEALDCOLBI
    [[deprecated("Use field access instead!")]] float& dyn_KIEALDCOLBI();
    // Get instance field reference: private System.Single JJBHMGDJEAL
    [[deprecated("Use field access instead!")]] float& dyn_JJBHMGDJEAL();
    // Get instance field reference: private System.Single EMFLAHHPMBN
    [[deprecated("Use field access instead!")]] float& dyn_EMFLAHHPMBN();
    // Get instance field reference: private System.Single BLHGLPPPLFP
    [[deprecated("Use field access instead!")]] float& dyn_BLHGLPPPLFP();
    // Get instance field reference: public System.Collections.Generic.List`1<MagicalActual.BarbarianHitMarker> hitmarkers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::MagicalActual::BarbarianHitMarker*>*& dyn_hitmarkers();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> OPDIOJNHKDK
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_OPDIOJNHKDK();
    // Get instance field reference: private System.Int32 DIKLKIEFENJ
    [[deprecated("Use field access instead!")]] int& dyn_DIKLKIEFENJ();
    // Get instance field reference: private System.Int32 DBHFAPMMECG
    [[deprecated("Use field access instead!")]] int& dyn_DBHFAPMMECG();
    // private System.Void MABMOOIFCMJ()
    // Offset: 0x10D9BF4
    void MABMOOIFCMJ();
    // public System.Void addToAttackPattern(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D53EC
    void addToAttackPattern(::ArrayW<int> JCCCDGFFLGE);
    // private System.Void MKHEDAAIDIE()
    // Offset: 0x10D9F48
    void MKHEDAAIDIE();
    // private System.Void PHIILFGONMH()
    // Offset: 0x10DAD6C
    void PHIILFGONMH();
    // private System.Void FixedUpdate()
    // Offset: 0x10DB0C0
    void FixedUpdate();
    // private System.Void BJOFONCHPFP()
    // Offset: 0x10DB25C
    void BJOFONCHPFP();
    // private System.Void HKINNMLBMMG()
    // Offset: 0x10DB5B0
    void HKINNMLBMMG();
    // public System.Boolean HitWasValid(System.Int32 CMHBEGEOMJF)
    // Offset: 0x10DB624
    bool HitWasValid(int CMHBEGEOMJF);
    // private System.Void FJFECNCKGEC(System.Int32 CMHBEGEOMJF, System.Single MAMDNKELACK)
    // Offset: 0x10DB71C
    void FJFECNCKGEC(int CMHBEGEOMJF, float MAMDNKELACK);
    // private System.Void OCCOMEMDPAL(System.Int32 CMHBEGEOMJF, System.Single MAMDNKELACK)
    // Offset: 0x10DBA4C
    void OCCOMEMDPAL(int CMHBEGEOMJF, float MAMDNKELACK);
    // private System.Void Start()
    // Offset: 0x10DBD78
    void Start();
    // private System.Void IBBEHGGEACI()
    // Offset: 0x10DBDEC
    void IBBEHGGEACI();
    // private System.Void ILDLHHOPPIP()
    // Offset: 0x10DAA44
    void ILDLHHOPPIP();
    // private System.Void OKLAAGAAKKA(System.Int32 CMHBEGEOMJF, System.Single MAMDNKELACK)
    // Offset: 0x10DA3F0
    void OKLAAGAAKKA(int CMHBEGEOMJF, float MAMDNKELACK);
    // private System.Void LEFKDBOLOPO(System.Int32 CMHBEGEOMJF, System.Single MAMDNKELACK)
    // Offset: 0x10DA71C
    void LEFKDBOLOPO(int CMHBEGEOMJF, float MAMDNKELACK);
    // private System.Void NLFOPEAGLDJ()
    // Offset: 0x10DC138
    void NLFOPEAGLDJ();
    // private System.Void AHPDCIGFMJI()
    // Offset: 0x10DC2C8
    void AHPDCIGFMJI();
    // private System.Void LPLGKBGLPOK()
    // Offset: 0x10DC33C
    void LPLGKBGLPOK();
    // private System.Void CJLOPNJDNDJ(System.Int32 CMHBEGEOMJF, System.Single MAMDNKELACK)
    // Offset: 0x10DA0F0
    void CJLOPNJDNDJ(int CMHBEGEOMJF, float MAMDNKELACK);
    // private System.Void PCINPPKMLBP()
    // Offset: 0x10DC3B0
    void PCINPPKMLBP();
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x10DC704
    void NNDKJCJFIAK();
    // public System.Void GKDPIAGDCPI(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D2768
    void GKDPIAGDCPI(::ArrayW<int> JCCCDGFFLGE);
    // private System.Void NCDDANAICCB()
    // Offset: 0x10DC778
    void NCDDANAICCB();
    // public System.Boolean HCNEKGOEEGP(System.Int32 CMHBEGEOMJF)
    // Offset: 0x10DCAD8
    bool HCNEKGOEEGP(int CMHBEGEOMJF);
    // private System.Void EDPMHCDOPKK()
    // Offset: 0x10DCBCC
    void EDPMHCDOPKK();
    // private System.Void AJOPONOEPIE(System.Int32 CMHBEGEOMJF, System.Single MAMDNKELACK)
    // Offset: 0x10DCF20
    void AJOPONOEPIE(int CMHBEGEOMJF, float MAMDNKELACK);
    // private System.Void GECHLDPLPCC()
    // Offset: 0x10DD24C
    void GECHLDPLPCC();
    // public System.Void OMCMFKFDAAN(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D7DDC
    void OMCMFKFDAAN(::ArrayW<int> JCCCDGFFLGE);
    // public System.Boolean PEGJCACLNLJ(System.Int32 CMHBEGEOMJF)
    // Offset: 0x10DD2C0
    bool PEGJCACLNLJ(int CMHBEGEOMJF);
    // public System.Void GBGBEKPEFDO(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D7BEC
    void GBGBEKPEFDO(::ArrayW<int> JCCCDGFFLGE);
    // private System.Void AKGFEENGKJD()
    // Offset: 0x10DD3B4
    void AKGFEENGKJD();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x10DD428
    void LBIKOKCCILF();
    // private System.Void ELKJABJAFEF()
    // Offset: 0x10DD49C
    void ELKJABJAFEF();
    // public System.Void GBOCLNOMNOD(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D828C
    void GBOCLNOMNOD(::ArrayW<int> JCCCDGFFLGE);
    // private System.Void GBKHFOHCOJK()
    // Offset: 0x10DD7FC
    void GBKHFOHCOJK();
    // public System.Void .ctor()
    // Offset: 0x10DDB50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BarbarianBeat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BarbarianBeat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BarbarianBeat*, creationType>()));
    }
    // public System.Boolean MJHJOHJFONE(System.Int32 CMHBEGEOMJF)
    // Offset: 0x10DDBD4
    bool MJHJOHJFONE(int CMHBEGEOMJF);
    // private System.Void AGOBDBDGJKD()
    // Offset: 0x10DDCC4
    void AGOBDBDGJKD();
    // public System.Void OEEAGHFIJMI(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D7FCC
    void OEEAGHFIJMI(::ArrayW<int> JCCCDGFFLGE);
    // public System.Void MAPKABGMGPO(System.Int32[] JCCCDGFFLGE)
    // Offset: 0x10D847C
    void MAPKABGMGPO(::ArrayW<int> JCCCDGFFLGE);
  }; // MagicalActual.BarbarianBeat
  #pragma pack(pop)
  static check_size<sizeof(BarbarianBeat), 92 + sizeof(int)> __MagicalActual_BarbarianBeatSizeCheck;
  static_assert(sizeof(BarbarianBeat) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::MABMOOIFCMJ
// Il2CppName: MABMOOIFCMJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::MABMOOIFCMJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "MABMOOIFCMJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::addToAttackPattern
// Il2CppName: addToAttackPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::addToAttackPattern)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "addToAttackPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::MKHEDAAIDIE
// Il2CppName: MKHEDAAIDIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::MKHEDAAIDIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "MKHEDAAIDIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::PHIILFGONMH
// Il2CppName: PHIILFGONMH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::PHIILFGONMH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "PHIILFGONMH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::BJOFONCHPFP
// Il2CppName: BJOFONCHPFP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::BJOFONCHPFP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "BJOFONCHPFP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::HitWasValid
// Il2CppName: HitWasValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MagicalActual::BarbarianBeat::*)(int)>(&MagicalActual::BarbarianBeat::HitWasValid)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "HitWasValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::FJFECNCKGEC
// Il2CppName: FJFECNCKGEC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(int, float)>(&MagicalActual::BarbarianBeat::FJFECNCKGEC)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* MAMDNKELACK = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "FJFECNCKGEC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF, MAMDNKELACK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::OCCOMEMDPAL
// Il2CppName: OCCOMEMDPAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(int, float)>(&MagicalActual::BarbarianBeat::OCCOMEMDPAL)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* MAMDNKELACK = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "OCCOMEMDPAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF, MAMDNKELACK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::IBBEHGGEACI
// Il2CppName: IBBEHGGEACI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::IBBEHGGEACI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "IBBEHGGEACI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::ILDLHHOPPIP
// Il2CppName: ILDLHHOPPIP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::ILDLHHOPPIP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "ILDLHHOPPIP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::OKLAAGAAKKA
// Il2CppName: OKLAAGAAKKA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(int, float)>(&MagicalActual::BarbarianBeat::OKLAAGAAKKA)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* MAMDNKELACK = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "OKLAAGAAKKA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF, MAMDNKELACK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::LEFKDBOLOPO
// Il2CppName: LEFKDBOLOPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(int, float)>(&MagicalActual::BarbarianBeat::LEFKDBOLOPO)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* MAMDNKELACK = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "LEFKDBOLOPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF, MAMDNKELACK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::NLFOPEAGLDJ
// Il2CppName: NLFOPEAGLDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::NLFOPEAGLDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "NLFOPEAGLDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::AHPDCIGFMJI
// Il2CppName: AHPDCIGFMJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::AHPDCIGFMJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "AHPDCIGFMJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::LPLGKBGLPOK
// Il2CppName: LPLGKBGLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::LPLGKBGLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "LPLGKBGLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::CJLOPNJDNDJ
// Il2CppName: CJLOPNJDNDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(int, float)>(&MagicalActual::BarbarianBeat::CJLOPNJDNDJ)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* MAMDNKELACK = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "CJLOPNJDNDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF, MAMDNKELACK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::PCINPPKMLBP
// Il2CppName: PCINPPKMLBP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::PCINPPKMLBP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "PCINPPKMLBP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::GKDPIAGDCPI
// Il2CppName: GKDPIAGDCPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::GKDPIAGDCPI)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "GKDPIAGDCPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::NCDDANAICCB
// Il2CppName: NCDDANAICCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::NCDDANAICCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "NCDDANAICCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::HCNEKGOEEGP
// Il2CppName: HCNEKGOEEGP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MagicalActual::BarbarianBeat::*)(int)>(&MagicalActual::BarbarianBeat::HCNEKGOEEGP)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "HCNEKGOEEGP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::EDPMHCDOPKK
// Il2CppName: EDPMHCDOPKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::EDPMHCDOPKK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "EDPMHCDOPKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::AJOPONOEPIE
// Il2CppName: AJOPONOEPIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(int, float)>(&MagicalActual::BarbarianBeat::AJOPONOEPIE)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* MAMDNKELACK = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "AJOPONOEPIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF, MAMDNKELACK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::OMCMFKFDAAN
// Il2CppName: OMCMFKFDAAN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::OMCMFKFDAAN)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "OMCMFKFDAAN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::PEGJCACLNLJ
// Il2CppName: PEGJCACLNLJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MagicalActual::BarbarianBeat::*)(int)>(&MagicalActual::BarbarianBeat::PEGJCACLNLJ)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "PEGJCACLNLJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::GBGBEKPEFDO
// Il2CppName: GBGBEKPEFDO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::GBGBEKPEFDO)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "GBGBEKPEFDO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::AKGFEENGKJD
// Il2CppName: AKGFEENGKJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::AKGFEENGKJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "AKGFEENGKJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::ELKJABJAFEF
// Il2CppName: ELKJABJAFEF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::ELKJABJAFEF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "ELKJABJAFEF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::GBOCLNOMNOD
// Il2CppName: GBOCLNOMNOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::GBOCLNOMNOD)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "GBOCLNOMNOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::GBKHFOHCOJK
// Il2CppName: GBKHFOHCOJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::GBKHFOHCOJK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "GBKHFOHCOJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::MJHJOHJFONE
// Il2CppName: MJHJOHJFONE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MagicalActual::BarbarianBeat::*)(int)>(&MagicalActual::BarbarianBeat::MJHJOHJFONE)> {
  static const MethodInfo* get() {
    static auto* CMHBEGEOMJF = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "MJHJOHJFONE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMHBEGEOMJF});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::AGOBDBDGJKD
// Il2CppName: AGOBDBDGJKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)()>(&MagicalActual::BarbarianBeat::AGOBDBDGJKD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "AGOBDBDGJKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::OEEAGHFIJMI
// Il2CppName: OEEAGHFIJMI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::OEEAGHFIJMI)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "OEEAGHFIJMI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};
// Writing MetadataGetter for method: MagicalActual::BarbarianBeat::MAPKABGMGPO
// Il2CppName: MAPKABGMGPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BarbarianBeat::*)(::ArrayW<int>)>(&MagicalActual::BarbarianBeat::MAPKABGMGPO)> {
  static const MethodInfo* get() {
    static auto* JCCCDGFFLGE = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BarbarianBeat*), "MAPKABGMGPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCCCDGFFLGE});
  }
};