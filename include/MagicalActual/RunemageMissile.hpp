// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IPooling
#include "GlobalNamespace/IPooling.hpp"
// Including type: CodeStage.AntiCheat.ObscuredTypes.ObFlt
#include "CodeStage/AntiCheat/ObscuredTypes/ObFlt.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: NetEntity
  class NetEntity;
  // Forward declaring type: Runemage
  class Runemage;
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
  // Forward declaring type: RunemageMissile
  class RunemageMissile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::RunemageMissile);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::RunemageMissile*, "MagicalActual", "RunemageMissile");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.RunemageMissile
  // [TokenAttribute] Offset: FFFFFFFF
  class RunemageMissile : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IPooling*/ {
    public:
    public:
    // public UnityEngine.GameObject[] vfx
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::GameObject*> vfx;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] collideVfx
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> collideVfx;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x28
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private UnityEngine.GameObject[] OOOFKPLJEIL
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> OOOFKPLJEIL;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public MagicalActual.Runemage myMage
    // Size: 0x8
    // Offset: 0x38
    ::MagicalActual::Runemage* myMage;
    // Field size check
    static_assert(sizeof(::MagicalActual::Runemage*) == 0x8);
    // public CodeStage.AntiCheat.ObscuredTypes.ObFlt speed
    // Size: 0x19
    // Offset: 0x40
    ::CodeStage::AntiCheat::ObscuredTypes::ObFlt speed;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::ObscuredTypes::ObFlt) == 0x19);
    // Padding between fields: speed and: KNPCNCAKAIO
    char __padding5[0x7] = {};
    // private System.Single KNPCNCAKAIO
    // Size: 0x4
    // Offset: 0x60
    float KNPCNCAKAIO;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: KNPCNCAKAIO and: arrowMaxTime
    char __padding6[0x4] = {};
    // public CodeStage.AntiCheat.ObscuredTypes.ObFlt arrowMaxTime
    // Size: 0x19
    // Offset: 0x68
    ::CodeStage::AntiCheat::ObscuredTypes::ObFlt arrowMaxTime;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::ObscuredTypes::ObFlt) == 0x19);
    // Padding between fields: arrowMaxTime and: fired
    char __padding7[0x7] = {};
    // public System.Boolean fired
    // Size: 0x1
    // Offset: 0x88
    bool fired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fired and: arrowId
    char __padding8[0x3] = {};
    // public System.Int32 arrowId
    // Size: 0x4
    // Offset: 0x8C
    int arrowId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Collider[] JGOGJDHABHN
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Collider*> JGOGJDHABHN;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.GameObject> LIHHDKMPDLK
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LIHHDKMPDLK;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Boolean onWand
    // Size: 0x1
    // Offset: 0xA0
    bool onWand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean MCIBDIEGOAG
    // Size: 0x1
    // Offset: 0xA1
    bool MCIBDIEGOAG;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: MCIBDIEGOAG and: spellId
    char __padding13[0x2] = {};
    // public System.Int32 spellId
    // Size: 0x4
    // Offset: 0xA4
    int spellId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPooling
    operator ::GlobalNamespace::IPooling() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPooling*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject[] vfx
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_vfx();
    // Get instance field reference: public UnityEngine.GameObject[] collideVfx
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_collideVfx();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private UnityEngine.GameObject[] OOOFKPLJEIL
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_OOOFKPLJEIL();
    // Get instance field reference: public MagicalActual.Runemage myMage
    [[deprecated("Use field access instead!")]] ::MagicalActual::Runemage*& dyn_myMage();
    // Get instance field reference: public CodeStage.AntiCheat.ObscuredTypes.ObFlt speed
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::ObscuredTypes::ObFlt& dyn_speed();
    // Get instance field reference: private System.Single KNPCNCAKAIO
    [[deprecated("Use field access instead!")]] float& dyn_KNPCNCAKAIO();
    // Get instance field reference: public CodeStage.AntiCheat.ObscuredTypes.ObFlt arrowMaxTime
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::ObscuredTypes::ObFlt& dyn_arrowMaxTime();
    // Get instance field reference: public System.Boolean fired
    [[deprecated("Use field access instead!")]] bool& dyn_fired();
    // Get instance field reference: public System.Int32 arrowId
    [[deprecated("Use field access instead!")]] int& dyn_arrowId();
    // Get instance field reference: private UnityEngine.Collider[] JGOGJDHABHN
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_JGOGJDHABHN();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.GameObject> LIHHDKMPDLK
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_LIHHDKMPDLK();
    // Get instance field reference: public System.Boolean onWand
    [[deprecated("Use field access instead!")]] bool& dyn_onWand();
    // Get instance field reference: private System.Boolean MCIBDIEGOAG
    [[deprecated("Use field access instead!")]] bool& dyn_MCIBDIEGOAG();
    // Get instance field reference: public System.Int32 spellId
    [[deprecated("Use field access instead!")]] int& dyn_spellId();
    // private System.Void IDGLLGOOENO()
    // Offset: 0x11DB590
    void IDGLLGOOENO();
    // public System.Void .ctor()
    // Offset: 0x11DC530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunemageMissile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::RunemageMissile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunemageMissile*, creationType>()));
    }
    // public System.Void ILAAPJHLOFH()
    // Offset: 0x11DC614
    void ILAAPJHLOFH();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x11DCB14
    void LBIKOKCCILF();
    // public System.Void BGJDBKMPLOP()
    // Offset: 0x11DCDE0
    void BGJDBKMPLOP();
    // private System.Void JALEANLOGDO(System.Byte PNCGKMCNHAD)
    // Offset: 0x11DBF00
    void JALEANLOGDO(uint8_t PNCGKMCNHAD);
    // private System.Void Awake()
    // Offset: 0x11DD304
    void Awake();
    // private System.Void LGPGLFGMODN()
    // Offset: 0x11DD938
    void LGPGLFGMODN();
    // private System.Void NMNEHPJPEHJ()
    // Offset: 0x11DDA48
    void NMNEHPJPEHJ();
    // public System.Void MOJIBNLOCKB()
    // Offset: 0x11DDC88
    void MOJIBNLOCKB();
    // private System.Void OGMGPDABNCB()
    // Offset: 0x11DD0C4
    void OGMGPDABNCB();
    // private System.Void APIMIOELFAJ()
    // Offset: 0x11DDF50
    void APIMIOELFAJ();
    // private System.Void OnDestroy()
    // Offset: 0x11DE21C
    void OnDestroy();
    // private System.Void MDLALKIJEBN()
    // Offset: 0x11DE32C
    void MDLALKIJEBN();
    // private System.Void NDAOHLAOCDE()
    // Offset: 0x11DE43C
    void NDAOHLAOCDE();
    // public System.Void JEMDFPFLNHD()
    // Offset: 0x11DEA0C
    void JEMDFPFLNHD();
    // private System.Void FixedUpdate()
    // Offset: 0x11DECD4
    void FixedUpdate();
    // private System.Void OGKAFDNHENJ()
    // Offset: 0x11DF730
    void OGKAFDNHENJ();
    // private System.Void KHLGIMBINJG()
    // Offset: 0x11DF840
    void KHLGIMBINJG();
    // private System.Void HHKOFMNJKDA()
    // Offset: 0x11DFE80
    void HHKOFMNJKDA();
    // private System.Void FAHDGOAALEM()
    // Offset: 0x11E07DC
    void FAHDGOAALEM();
    // private System.Void LBBHKKFNJPA()
    // Offset: 0x11E08EC
    void LBBHKKFNJPA();
    // public System.Void DFECBKIKKKL()
    // Offset: 0x11E09FC
    void DFECBKIKKKL();
    // private System.Void Start()
    // Offset: 0x11E0AAC
    void Start();
    // public System.Void OIICAEPNGCG()
    // Offset: 0x11DCB18
    void OIICAEPNGCG();
    // public System.Void ALGHDMBOEOD()
    // Offset: 0x11DDF54
    void ALGHDMBOEOD();
    // private System.Void JKPIPJHJDCJ()
    // Offset: 0x11DC8D4
    void JKPIPJHJDCJ();
    // public System.Void UpdateMissile()
    // Offset: 0x11E0AB0
    void UpdateMissile();
    // private System.Void KKCBMBOMNOL()
    // Offset: 0x11E0FA0
    void KKCBMBOMNOL();
    // private System.Void AJFLAEFOMGD()
    // Offset: 0x11E0D78
    void AJFLAEFOMGD();
    // private System.Void FLJMJKAKNBH()
    // Offset: 0x11E11D4
    void FLJMJKAKNBH();
    // private System.Void NDIEKBKNBOJ()
    // Offset: 0x11E1F58
    void NDIEKBKNBOJ();
    // private System.Void AKONOOIDPDA()
    // Offset: 0x11E219C
    void AKONOOIDPDA();
    // private System.Void IBHKJIKJCPN(System.Byte PNCGKMCNHAD)
    // Offset: 0x11E1C2C
    void IBHKJIKJCPN(uint8_t PNCGKMCNHAD);
    // public System.Void JGAIALLHHJM()
    // Offset: 0x11E2768
    void JGAIALLHHJM();
    // private System.Void GKIOLADOCOK()
    // Offset: 0x11E2818
    void GKIOLADOCOK();
    // public System.Void PoolingReset()
    // Offset: 0x11E281C
    void PoolingReset();
    // private System.Void JMPPPHNKAFG()
    // Offset: 0x11E28C0
    void JMPPPHNKAFG();
    // private System.Void IAMHAELCKHH()
    // Offset: 0x11E2EC4
    void IAMHAELCKHH();
    // private System.Void KIPDPKEIOEO()
    // Offset: 0x11E3514
    void KIPDPKEIOEO();
    // private System.Void MACOPOONGCD(System.Byte PNCGKMCNHAD)
    // Offset: 0x11DC208
    void MACOPOONGCD(uint8_t PNCGKMCNHAD);
    // private System.Void ANKCGGIBCAI()
    // Offset: 0x11E3AD0
    void ANKCGGIBCAI();
    // private System.Void PFANIDBFALB()
    // Offset: 0x11DCE90
    void PFANIDBFALB();
    // private System.Void LPLGKBGLPOK()
    // Offset: 0x11E4538
    void LPLGKBGLPOK();
    // private System.Void JNELNIGPBIM()
    // Offset: 0x11E453C
    void JNELNIGPBIM();
    // private System.Void AHPDCIGFMJI()
    // Offset: 0x11E4B08
    void AHPDCIGFMJI();
    // private System.Void BIMCNDAFFJC()
    // Offset: 0x11E4B0C
    void BIMCNDAFFJC();
  }; // MagicalActual.RunemageMissile
  #pragma pack(pop)
  static check_size<sizeof(RunemageMissile), 164 + sizeof(int)> __MagicalActual_RunemageMissileSizeCheck;
  static_assert(sizeof(RunemageMissile) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::IDGLLGOOENO
// Il2CppName: IDGLLGOOENO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::IDGLLGOOENO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "IDGLLGOOENO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::ILAAPJHLOFH
// Il2CppName: ILAAPJHLOFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::ILAAPJHLOFH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "ILAAPJHLOFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::BGJDBKMPLOP
// Il2CppName: BGJDBKMPLOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::BGJDBKMPLOP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "BGJDBKMPLOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::JALEANLOGDO
// Il2CppName: JALEANLOGDO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)(uint8_t)>(&MagicalActual::RunemageMissile::JALEANLOGDO)> {
  static const MethodInfo* get() {
    static auto* PNCGKMCNHAD = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "JALEANLOGDO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PNCGKMCNHAD});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::LGPGLFGMODN
// Il2CppName: LGPGLFGMODN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::LGPGLFGMODN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "LGPGLFGMODN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::NMNEHPJPEHJ
// Il2CppName: NMNEHPJPEHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::NMNEHPJPEHJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "NMNEHPJPEHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::MOJIBNLOCKB
// Il2CppName: MOJIBNLOCKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::MOJIBNLOCKB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "MOJIBNLOCKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::OGMGPDABNCB
// Il2CppName: OGMGPDABNCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::OGMGPDABNCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "OGMGPDABNCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::APIMIOELFAJ
// Il2CppName: APIMIOELFAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::APIMIOELFAJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "APIMIOELFAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::MDLALKIJEBN
// Il2CppName: MDLALKIJEBN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::MDLALKIJEBN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "MDLALKIJEBN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::NDAOHLAOCDE
// Il2CppName: NDAOHLAOCDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::NDAOHLAOCDE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "NDAOHLAOCDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::JEMDFPFLNHD
// Il2CppName: JEMDFPFLNHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::JEMDFPFLNHD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "JEMDFPFLNHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::OGKAFDNHENJ
// Il2CppName: OGKAFDNHENJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::OGKAFDNHENJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "OGKAFDNHENJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::KHLGIMBINJG
// Il2CppName: KHLGIMBINJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::KHLGIMBINJG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "KHLGIMBINJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::HHKOFMNJKDA
// Il2CppName: HHKOFMNJKDA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::HHKOFMNJKDA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "HHKOFMNJKDA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::FAHDGOAALEM
// Il2CppName: FAHDGOAALEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::FAHDGOAALEM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "FAHDGOAALEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::LBBHKKFNJPA
// Il2CppName: LBBHKKFNJPA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::LBBHKKFNJPA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "LBBHKKFNJPA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::DFECBKIKKKL
// Il2CppName: DFECBKIKKKL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::DFECBKIKKKL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "DFECBKIKKKL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::OIICAEPNGCG
// Il2CppName: OIICAEPNGCG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::OIICAEPNGCG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "OIICAEPNGCG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::ALGHDMBOEOD
// Il2CppName: ALGHDMBOEOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::ALGHDMBOEOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "ALGHDMBOEOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::JKPIPJHJDCJ
// Il2CppName: JKPIPJHJDCJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::JKPIPJHJDCJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "JKPIPJHJDCJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::UpdateMissile
// Il2CppName: UpdateMissile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::UpdateMissile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "UpdateMissile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::KKCBMBOMNOL
// Il2CppName: KKCBMBOMNOL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::KKCBMBOMNOL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "KKCBMBOMNOL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::AJFLAEFOMGD
// Il2CppName: AJFLAEFOMGD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::AJFLAEFOMGD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "AJFLAEFOMGD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::FLJMJKAKNBH
// Il2CppName: FLJMJKAKNBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::FLJMJKAKNBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "FLJMJKAKNBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::NDIEKBKNBOJ
// Il2CppName: NDIEKBKNBOJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::NDIEKBKNBOJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "NDIEKBKNBOJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::AKONOOIDPDA
// Il2CppName: AKONOOIDPDA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::AKONOOIDPDA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "AKONOOIDPDA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::IBHKJIKJCPN
// Il2CppName: IBHKJIKJCPN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)(uint8_t)>(&MagicalActual::RunemageMissile::IBHKJIKJCPN)> {
  static const MethodInfo* get() {
    static auto* PNCGKMCNHAD = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "IBHKJIKJCPN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PNCGKMCNHAD});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::JGAIALLHHJM
// Il2CppName: JGAIALLHHJM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::JGAIALLHHJM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "JGAIALLHHJM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::PoolingReset
// Il2CppName: PoolingReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::PoolingReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "PoolingReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::JMPPPHNKAFG
// Il2CppName: JMPPPHNKAFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::JMPPPHNKAFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "JMPPPHNKAFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::IAMHAELCKHH
// Il2CppName: IAMHAELCKHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::IAMHAELCKHH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "IAMHAELCKHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::KIPDPKEIOEO
// Il2CppName: KIPDPKEIOEO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::KIPDPKEIOEO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "KIPDPKEIOEO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::MACOPOONGCD
// Il2CppName: MACOPOONGCD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)(uint8_t)>(&MagicalActual::RunemageMissile::MACOPOONGCD)> {
  static const MethodInfo* get() {
    static auto* PNCGKMCNHAD = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "MACOPOONGCD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PNCGKMCNHAD});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::ANKCGGIBCAI
// Il2CppName: ANKCGGIBCAI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::ANKCGGIBCAI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "ANKCGGIBCAI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::PFANIDBFALB
// Il2CppName: PFANIDBFALB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::PFANIDBFALB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "PFANIDBFALB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::LPLGKBGLPOK
// Il2CppName: LPLGKBGLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::LPLGKBGLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "LPLGKBGLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::JNELNIGPBIM
// Il2CppName: JNELNIGPBIM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::JNELNIGPBIM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "JNELNIGPBIM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::AHPDCIGFMJI
// Il2CppName: AHPDCIGFMJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::AHPDCIGFMJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "AHPDCIGFMJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::RunemageMissile::BIMCNDAFFJC
// Il2CppName: BIMCNDAFFJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::RunemageMissile::*)()>(&MagicalActual::RunemageMissile::BIMCNDAFFJC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::RunemageMissile*), "BIMCNDAFFJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
