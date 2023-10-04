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
  // Forward declaring type: PlayerTool
  class PlayerTool;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: BountyMap
  class BountyMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BountyMap);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BountyMap*, "MagicalActual", "BountyMap");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BountyMap
  // [TokenAttribute] Offset: FFFFFFFF
  class BountyMap : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.PlayerTool FKJHGIFOJKD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::PlayerTool* FKJHGIFOJKD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerTool*) == 0x8);
    // private UnityEngine.SpriteRenderer spriteRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.Sprite[] maps
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Sprite*> maps;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Sprite*>) == 0x8);
    // private UnityEngine.GameObject gettingCloseParticle
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* gettingCloseParticle;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject burnMapParticle
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* burnMapParticle;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Boolean CEEFDLFAFOG
    // Size: 0x1
    // Offset: 0x40
    bool CEEFDLFAFOG;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CEEFDLFAFOG and: CNMEJNJFKAI
    char __padding5[0x3] = {};
    // private System.Single CNMEJNJFKAI
    // Size: 0x4
    // Offset: 0x44
    float CNMEJNJFKAI;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single LKKCCIOIEBK
    // Size: 0x4
    // Offset: 0x48
    float LKKCCIOIEBK;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.PlayerTool FKJHGIFOJKD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerTool*& dyn_FKJHGIFOJKD();
    // Get instance field reference: private UnityEngine.SpriteRenderer spriteRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SpriteRenderer*& dyn_spriteRenderer();
    // Get instance field reference: private UnityEngine.Sprite[] maps
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Sprite*>& dyn_maps();
    // Get instance field reference: private UnityEngine.GameObject gettingCloseParticle
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gettingCloseParticle();
    // Get instance field reference: private UnityEngine.GameObject burnMapParticle
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_burnMapParticle();
    // Get instance field reference: private System.Boolean CEEFDLFAFOG
    [[deprecated("Use field access instead!")]] bool& dyn_CEEFDLFAFOG();
    // Get instance field reference: private System.Single CNMEJNJFKAI
    [[deprecated("Use field access instead!")]] float& dyn_CNMEJNJFKAI();
    // Get instance field reference: private System.Single LKKCCIOIEBK
    [[deprecated("Use field access instead!")]] float& dyn_LKKCCIOIEBK();
    // private System.Void SignalReceived(System.Byte KLIPNGBEELK)
    // Offset: 0x1794850
    void SignalReceived(uint8_t KLIPNGBEELK);
    // private System.Void EFLLEILOGJN()
    // Offset: 0x17949D0
    void EFLLEILOGJN();
    // private System.Void OPJFCPJDKOC(System.Byte KLIPNGBEELK)
    // Offset: 0x1794BB0
    void OPJFCPJDKOC(uint8_t KLIPNGBEELK);
    // private System.Void PFABJJGAOMM()
    // Offset: 0x1794D60
    void PFABJJGAOMM();
    // private System.Void HADIPALABDL(System.Byte KLIPNGBEELK)
    // Offset: 0x1794F98
    void HADIPALABDL(uint8_t KLIPNGBEELK);
    // private System.Void AFIACGLCIPB()
    // Offset: 0x1795104
    void AFIACGLCIPB();
    // private System.Void AGDFOIFHGGG()
    // Offset: 0x179533C
    void AGDFOIFHGGG();
    // private System.Void COGOCIOPEEE(System.Byte KLIPNGBEELK)
    // Offset: 0x179551C
    void COGOCIOPEEE(uint8_t KLIPNGBEELK);
    // private System.Void LEKNJGKKCIE(System.Byte KLIPNGBEELK)
    // Offset: 0x179568C
    void LEKNJGKKCIE(uint8_t KLIPNGBEELK);
    // private System.Void GKIOLADOCOK()
    // Offset: 0x179584C
    void GKIOLADOCOK();
    // private System.Void MHKONMHMJOK(System.Byte KLIPNGBEELK)
    // Offset: 0x1795A64
    void MHKONMHMJOK(uint8_t KLIPNGBEELK);
    // private System.Void BJMMJNDCPLF()
    // Offset: 0x1795BD8
    void BJMMJNDCPLF();
    // private System.Void DPDDNOBAFIP()
    // Offset: 0x1795DB4
    void DPDDNOBAFIP();
    // private System.Void FEIGDJNEHBG()
    // Offset: 0x1795F7C
    void FEIGDJNEHBG();
    // private System.Void FEAPFNNLNFG(System.Byte KLIPNGBEELK)
    // Offset: 0x1796144
    void FEAPFNNLNFG(uint8_t KLIPNGBEELK);
    // private System.Void PPKHOKCIJBL()
    // Offset: 0x17962B8
    void PPKHOKCIJBL();
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x1796498
    void GHLPBOJJHNG();
    // private System.Void Update()
    // Offset: 0x17966D0
    void Update();
    // private System.Void Start()
    // Offset: 0x17968A4
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1796ADC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BountyMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BountyMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BountyMap*, creationType>()));
    }
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x1796AEC
    void ABIHCGOKNCL();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x1796D00
    void EPCHNEGNKNF();
    // private System.Void KCEPMBHOMCD()
    // Offset: 0x1796F10
    void KCEPMBHOMCD();
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x17970D8
    void BDEDGNGMHMN();
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x1797314
    void EIIKFEMCNKM();
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x179751C
    void KBDGAPMJGLG();
    // private System.Void CMGMNHMIHFD()
    // Offset: 0x1797754
    void CMGMNHMIHFD();
    // private System.Void OACMGPBCPEL()
    // Offset: 0x179791C
    void OACMGPBCPEL();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x1797B2C
    void GECHLDPLPCC();
    // private System.Void EMIPDKFHMPA(System.Byte KLIPNGBEELK)
    // Offset: 0x1797D64
    void EMIPDKFHMPA(uint8_t KLIPNGBEELK);
    // private System.Void LBIKOKCCILF()
    // Offset: 0x1797ED8
    void LBIKOKCCILF();
    // private System.Void LJOGIPIJIPF()
    // Offset: 0x17980E4
    void LJOGIPIJIPF();
    // private System.Void EFGJFMENOAL()
    // Offset: 0x17982C0
    void EFGJFMENOAL();
    // private System.Void ABBNBBPDILC(System.Byte KLIPNGBEELK)
    // Offset: 0x1798488
    void ABBNBBPDILC(uint8_t KLIPNGBEELK);
    // private System.Void DHCNJHAMIJO()
    // Offset: 0x1798608
    void DHCNJHAMIJO();
  }; // MagicalActual.BountyMap
  #pragma pack(pop)
  static check_size<sizeof(BountyMap), 72 + sizeof(float)> __MagicalActual_BountyMapSizeCheck;
  static_assert(sizeof(BountyMap) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BountyMap::SignalReceived
// Il2CppName: SignalReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::SignalReceived)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "SignalReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::EFLLEILOGJN
// Il2CppName: EFLLEILOGJN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::EFLLEILOGJN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "EFLLEILOGJN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::OPJFCPJDKOC
// Il2CppName: OPJFCPJDKOC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::OPJFCPJDKOC)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "OPJFCPJDKOC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::PFABJJGAOMM
// Il2CppName: PFABJJGAOMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::PFABJJGAOMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "PFABJJGAOMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::HADIPALABDL
// Il2CppName: HADIPALABDL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::HADIPALABDL)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "HADIPALABDL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::AGDFOIFHGGG
// Il2CppName: AGDFOIFHGGG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::AGDFOIFHGGG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "AGDFOIFHGGG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::COGOCIOPEEE
// Il2CppName: COGOCIOPEEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::COGOCIOPEEE)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "COGOCIOPEEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::LEKNJGKKCIE
// Il2CppName: LEKNJGKKCIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::LEKNJGKKCIE)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "LEKNJGKKCIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::MHKONMHMJOK
// Il2CppName: MHKONMHMJOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::MHKONMHMJOK)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "MHKONMHMJOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::BJMMJNDCPLF
// Il2CppName: BJMMJNDCPLF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::BJMMJNDCPLF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "BJMMJNDCPLF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::DPDDNOBAFIP
// Il2CppName: DPDDNOBAFIP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::DPDDNOBAFIP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "DPDDNOBAFIP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::FEIGDJNEHBG
// Il2CppName: FEIGDJNEHBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::FEIGDJNEHBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "FEIGDJNEHBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::FEAPFNNLNFG
// Il2CppName: FEAPFNNLNFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::FEAPFNNLNFG)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "FEAPFNNLNFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::PPKHOKCIJBL
// Il2CppName: PPKHOKCIJBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::PPKHOKCIJBL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "PPKHOKCIJBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::BountyMap::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::KCEPMBHOMCD
// Il2CppName: KCEPMBHOMCD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::KCEPMBHOMCD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "KCEPMBHOMCD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::CMGMNHMIHFD
// Il2CppName: CMGMNHMIHFD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::CMGMNHMIHFD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "CMGMNHMIHFD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::OACMGPBCPEL
// Il2CppName: OACMGPBCPEL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::OACMGPBCPEL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "OACMGPBCPEL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::EMIPDKFHMPA
// Il2CppName: EMIPDKFHMPA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::EMIPDKFHMPA)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "EMIPDKFHMPA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::LJOGIPIJIPF
// Il2CppName: LJOGIPIJIPF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::LJOGIPIJIPF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "LJOGIPIJIPF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::EFGJFMENOAL
// Il2CppName: EFGJFMENOAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::EFGJFMENOAL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "EFGJFMENOAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::ABBNBBPDILC
// Il2CppName: ABBNBBPDILC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)(uint8_t)>(&MagicalActual::BountyMap::ABBNBBPDILC)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "ABBNBBPDILC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BountyMap::DHCNJHAMIJO
// Il2CppName: DHCNJHAMIJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BountyMap::*)()>(&MagicalActual::BountyMap::DHCNJHAMIJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BountyMap*), "DHCNJHAMIJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};