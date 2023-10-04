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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: WorldMenu
  class WorldMenu;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PhysicsInteractable
  class PhysicsInteractable;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: TeleportPillar
  class TeleportPillar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::TeleportPillar);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::TeleportPillar*, "MagicalActual", "TeleportPillar");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.TeleportPillar
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportPillar : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::TeleportPillar::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    public:
    // public System.String pillarKey
    // Size: 0x8
    // Offset: 0x18
    ::StringW pillarKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject foundVfx
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* foundVfx;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single JDHBOCAFOOC
    // Size: 0x4
    // Offset: 0x28
    float JDHBOCAFOOC;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single GLEGHGCDIKJ
    // Size: 0x4
    // Offset: 0x2C
    float GLEGHGCDIKJ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean ENKNDOCJIOM
    // Size: 0x1
    // Offset: 0x30
    bool ENKNDOCJIOM;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ENKNDOCJIOM and: PHAHKGDIPKH
    char __padding4[0x7] = {};
    // private System.String[] PHAHKGDIPKH
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> PHAHKGDIPKH;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private MagicalActual.WorldMenu KNCKPELAKBH
    // Size: 0x8
    // Offset: 0x40
    ::MagicalActual::WorldMenu* KNCKPELAKBH;
    // Field size check
    static_assert(sizeof(::MagicalActual::WorldMenu*) == 0x8);
    // private System.Boolean KJLJAJMPNDI
    // Size: 0x1
    // Offset: 0x48
    bool KJLJAJMPNDI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: KJLJAJMPNDI and: BKMKMILINPK
    char __padding7[0x7] = {};
    // private PhysicsInteractable[] BKMKMILINPK
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::GlobalNamespace::PhysicsInteractable*> BKMKMILINPK;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PhysicsInteractable*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String pillarKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn_pillarKey();
    // Get instance field reference: public UnityEngine.GameObject foundVfx
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_foundVfx();
    // Get instance field reference: private System.Single JDHBOCAFOOC
    [[deprecated("Use field access instead!")]] float& dyn_JDHBOCAFOOC();
    // Get instance field reference: private System.Single GLEGHGCDIKJ
    [[deprecated("Use field access instead!")]] float& dyn_GLEGHGCDIKJ();
    // Get instance field reference: private System.Boolean ENKNDOCJIOM
    [[deprecated("Use field access instead!")]] bool& dyn_ENKNDOCJIOM();
    // Get instance field reference: private System.String[] PHAHKGDIPKH
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_PHAHKGDIPKH();
    // Get instance field reference: private MagicalActual.WorldMenu KNCKPELAKBH
    [[deprecated("Use field access instead!")]] ::MagicalActual::WorldMenu*& dyn_KNCKPELAKBH();
    // Get instance field reference: private System.Boolean KJLJAJMPNDI
    [[deprecated("Use field access instead!")]] bool& dyn_KJLJAJMPNDI();
    // Get instance field reference: private PhysicsInteractable[] BKMKMILINPK
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PhysicsInteractable*>& dyn_BKMKMILINPK();
    // public System.Void JHEGDMGLKHG()
    // Offset: 0x1672FC0
    void JHEGDMGLKHG();
    // private System.Void HKINNMLBMMG()
    // Offset: 0x16730FC
    void HKINNMLBMMG();
    // public System.Void .ctor()
    // Offset: 0x16733D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportPillar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::TeleportPillar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportPillar*, creationType>()));
    }
    // public System.Void IDLMGGKJKNH(System.String ANCJMBHEDKF)
    // Offset: 0x1673430
    void IDLMGGKJKNH(::StringW ANCJMBHEDKF);
    // public System.Void BKNJEHBHAEF(System.String ANCJMBHEDKF)
    // Offset: 0x1673570
    void BKNJEHBHAEF(::StringW ANCJMBHEDKF);
    // private System.Void MDLALKIJEBN()
    // Offset: 0x16736B0
    void MDLALKIJEBN();
    // private System.Void FixedUpdate()
    // Offset: 0x167370C
    void FixedUpdate();
    // private System.Void FIAAJDPMNJP(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x1673E54
    void FIAAJDPMNJP(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // public System.Void BIJIDLDFJCB(System.String ANCJMBHEDKF)
    // Offset: 0x1674028
    void BIJIDLDFJCB(::StringW ANCJMBHEDKF);
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x1674168
    void GHLPBOJJHNG();
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x167445C
    void KBDGAPMJGLG();
    // public System.Void BIIBMLIMINP(System.String ANCJMBHEDKF)
    // Offset: 0x1674730
    void BIIBMLIMINP(::StringW ANCJMBHEDKF);
    // private System.Void JKDFCMDDCIK()
    // Offset: 0x1674870
    void JKDFCMDDCIK();
    // private System.Void OEIOPGPDPAG()
    // Offset: 0x16748CC
    void OEIOPGPDPAG();
    // private System.Void MDOPMJPONBJ()
    // Offset: 0x1674928
    void MDOPMJPONBJ();
    // public System.Void NKACICIKLNI()
    // Offset: 0x1674984
    void NKACICIKLNI();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x1674AC0
    void DGJGAFKDIDK();
    // private System.Void NPNEIAFEMLJ()
    // Offset: 0x1674DB4
    void NPNEIAFEMLJ();
    // private System.Void DDJINHIPKCE()
    // Offset: 0x1674E10
    void DDJINHIPKCE();
    // public System.Void PromptClickChoice(System.String ANCJMBHEDKF)
    // Offset: 0x1675570
    void PromptClickChoice(::StringW ANCJMBHEDKF);
    // private System.Void LIFHHDAEPFK()
    // Offset: 0x16756B0
    void LIFHHDAEPFK();
    // private System.Void MCNFKFNOPDC()
    // Offset: 0x167570C
    void MCNFKFNOPDC();
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x1675768
    void ABIHCGOKNCL();
    // private System.Void DMCJPKJCIAO(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x1675A60
    void DMCJPKJCIAO(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // private System.Void NNBODOLEAFK()
    // Offset: 0x1675C2C
    void NNBODOLEAFK();
    // private System.Void LMGJADIMGHC()
    // Offset: 0x167638C
    void LMGJADIMGHC();
    // public System.Void NBEKIPNIIGK(System.String ANCJMBHEDKF)
    // Offset: 0x16763E8
    void NBEKIPNIIGK(::StringW ANCJMBHEDKF);
    // private System.Void CHEMMHEMDCB()
    // Offset: 0x1676528
    void CHEMMHEMDCB();
    // private System.Void OnDestroy()
    // Offset: 0x1676C64
    void OnDestroy();
    // private System.Void MOHGAKOPKBC(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x1676CC0
    void MOHGAKOPKBC(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // public System.Void CMEDMIGMMHC()
    // Offset: 0x1676E8C
    void CMEDMIGMMHC();
    // private System.Void CLDFOKICOOO(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x1676FC8
    void CLDFOKICOOO(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // public System.Void ShowPillarEffect()
    // Offset: 0x1677194
    void ShowPillarEffect();
    // public System.Void JBLJNFEPNFA(System.String ANCJMBHEDKF)
    // Offset: 0x16772CC
    void JBLJNFEPNFA(::StringW ANCJMBHEDKF);
    // private System.Void OGNGICBJPMF(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x167740C
    void OGNGICBJPMF(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // private System.Void BGNGPANDNAP(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x16775D8
    void BGNGPANDNAP(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // private System.Void FBBNOBGFMKP(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x16777A4
    void FBBNOBGFMKP(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // private System.Void EHAFAMENLCG(MagicalActual.WorldMenu JCEAHGHCCPC)
    // Offset: 0x1677970
    void EHAFAMENLCG(::MagicalActual::WorldMenu* JCEAHGHCCPC);
    // private System.Void Start()
    // Offset: 0x1677B3C
    void Start();
    // public System.Void JPGMINGDDOH(System.String ANCJMBHEDKF)
    // Offset: 0x1677E34
    void JPGMINGDDOH(::StringW ANCJMBHEDKF);
    // public System.Void PMJMGEIICLC()
    // Offset: 0x1677F74
    void PMJMGEIICLC();
  }; // MagicalActual.TeleportPillar
  #pragma pack(pop)
  static check_size<sizeof(TeleportPillar), 80 + sizeof(::ArrayW<::GlobalNamespace::PhysicsInteractable*>)> __MagicalActual_TeleportPillarSizeCheck;
  static_assert(sizeof(TeleportPillar) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::JHEGDMGLKHG
// Il2CppName: JHEGDMGLKHG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::JHEGDMGLKHG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "JHEGDMGLKHG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::IDLMGGKJKNH
// Il2CppName: IDLMGGKJKNH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::IDLMGGKJKNH)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "IDLMGGKJKNH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::BKNJEHBHAEF
// Il2CppName: BKNJEHBHAEF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::BKNJEHBHAEF)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "BKNJEHBHAEF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::MDLALKIJEBN
// Il2CppName: MDLALKIJEBN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::MDLALKIJEBN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "MDLALKIJEBN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::FIAAJDPMNJP
// Il2CppName: FIAAJDPMNJP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::FIAAJDPMNJP)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "FIAAJDPMNJP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::BIJIDLDFJCB
// Il2CppName: BIJIDLDFJCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::BIJIDLDFJCB)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "BIJIDLDFJCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::BIIBMLIMINP
// Il2CppName: BIIBMLIMINP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::BIIBMLIMINP)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "BIIBMLIMINP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::JKDFCMDDCIK
// Il2CppName: JKDFCMDDCIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::JKDFCMDDCIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "JKDFCMDDCIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::OEIOPGPDPAG
// Il2CppName: OEIOPGPDPAG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::OEIOPGPDPAG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "OEIOPGPDPAG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::MDOPMJPONBJ
// Il2CppName: MDOPMJPONBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::MDOPMJPONBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "MDOPMJPONBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::NKACICIKLNI
// Il2CppName: NKACICIKLNI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::NKACICIKLNI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "NKACICIKLNI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::NPNEIAFEMLJ
// Il2CppName: NPNEIAFEMLJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::NPNEIAFEMLJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "NPNEIAFEMLJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::DDJINHIPKCE
// Il2CppName: DDJINHIPKCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::DDJINHIPKCE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "DDJINHIPKCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::PromptClickChoice
// Il2CppName: PromptClickChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::PromptClickChoice)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "PromptClickChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::LIFHHDAEPFK
// Il2CppName: LIFHHDAEPFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::LIFHHDAEPFK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "LIFHHDAEPFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::MCNFKFNOPDC
// Il2CppName: MCNFKFNOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::MCNFKFNOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "MCNFKFNOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::DMCJPKJCIAO
// Il2CppName: DMCJPKJCIAO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::DMCJPKJCIAO)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "DMCJPKJCIAO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::NNBODOLEAFK
// Il2CppName: NNBODOLEAFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::NNBODOLEAFK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "NNBODOLEAFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::LMGJADIMGHC
// Il2CppName: LMGJADIMGHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::LMGJADIMGHC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "LMGJADIMGHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::NBEKIPNIIGK
// Il2CppName: NBEKIPNIIGK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::NBEKIPNIIGK)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "NBEKIPNIIGK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::CHEMMHEMDCB
// Il2CppName: CHEMMHEMDCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::CHEMMHEMDCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "CHEMMHEMDCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::MOHGAKOPKBC
// Il2CppName: MOHGAKOPKBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::MOHGAKOPKBC)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "MOHGAKOPKBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::CMEDMIGMMHC
// Il2CppName: CMEDMIGMMHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::CMEDMIGMMHC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "CMEDMIGMMHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::CLDFOKICOOO
// Il2CppName: CLDFOKICOOO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::CLDFOKICOOO)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "CLDFOKICOOO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::ShowPillarEffect
// Il2CppName: ShowPillarEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::ShowPillarEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "ShowPillarEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::JBLJNFEPNFA
// Il2CppName: JBLJNFEPNFA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::JBLJNFEPNFA)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "JBLJNFEPNFA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::OGNGICBJPMF
// Il2CppName: OGNGICBJPMF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::OGNGICBJPMF)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "OGNGICBJPMF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::BGNGPANDNAP
// Il2CppName: BGNGPANDNAP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::BGNGPANDNAP)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "BGNGPANDNAP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::FBBNOBGFMKP
// Il2CppName: FBBNOBGFMKP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::FBBNOBGFMKP)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "FBBNOBGFMKP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::EHAFAMENLCG
// Il2CppName: EHAFAMENLCG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::MagicalActual::WorldMenu*)>(&MagicalActual::TeleportPillar::EHAFAMENLCG)> {
  static const MethodInfo* get() {
    static auto* JCEAHGHCCPC = &::il2cpp_utils::GetClassFromName("MagicalActual", "WorldMenu")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "EHAFAMENLCG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JCEAHGHCCPC});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::JPGMINGDDOH
// Il2CppName: JPGMINGDDOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)(::StringW)>(&MagicalActual::TeleportPillar::JPGMINGDDOH)> {
  static const MethodInfo* get() {
    static auto* ANCJMBHEDKF = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "JPGMINGDDOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ANCJMBHEDKF});
  }
};
// Writing MetadataGetter for method: MagicalActual::TeleportPillar::PMJMGEIICLC
// Il2CppName: PMJMGEIICLC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TeleportPillar::*)()>(&MagicalActual::TeleportPillar::PMJMGEIICLC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TeleportPillar*), "PMJMGEIICLC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
