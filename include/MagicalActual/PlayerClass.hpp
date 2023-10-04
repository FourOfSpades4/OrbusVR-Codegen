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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerAvatar
  class PlayerAvatar;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPlayerClass
  class IPlayerClass;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerClass
  class PlayerClass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PlayerClass);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PlayerClass*, "MagicalActual", "PlayerClass");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PlayerClass
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerClass : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String className
    // Size: 0x8
    // Offset: 0x18
    ::StringW className;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject hudSlot
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* hudSlot;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject[] objectsToEnable
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> objectsToEnable;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Boolean isEnabled
    // Size: 0x1
    // Offset: 0x30
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEnabled and: EENJNFDNJBD
    char __padding3[0x7] = {};
    // private MagicalActual.PlayerAvatar EENJNFDNJBD
    // Size: 0x8
    // Offset: 0x38
    ::MagicalActual::PlayerAvatar* EENJNFDNJBD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerAvatar*) == 0x8);
    // public IPlayerClass myClass
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IPlayerClass* myClass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPlayerClass*) == 0x8);
    // public System.String dummyEquipment
    // Size: 0x8
    // Offset: 0x48
    ::StringW dummyEquipment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String className
    [[deprecated("Use field access instead!")]] ::StringW& dyn_className();
    // Get instance field reference: public UnityEngine.GameObject hudSlot
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_hudSlot();
    // Get instance field reference: public UnityEngine.GameObject[] objectsToEnable
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_objectsToEnable();
    // Get instance field reference: public System.Boolean isEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_isEnabled();
    // Get instance field reference: private MagicalActual.PlayerAvatar EENJNFDNJBD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerAvatar*& dyn_EENJNFDNJBD();
    // Get instance field reference: public IPlayerClass myClass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPlayerClass*& dyn_myClass();
    // Get instance field reference: public System.String dummyEquipment
    [[deprecated("Use field access instead!")]] ::StringW& dyn_dummyEquipment();
    // public System.Void AJLGAAJOGOD()
    // Offset: 0x119435C
    void AJLGAAJOGOD();
    // public System.Void TurnOff()
    // Offset: 0x1194478
    void TurnOff();
    // public System.Void CDBOPONPIHM()
    // Offset: 0x1194574
    void CDBOPONPIHM();
    // public System.Void MEMOBGOOBMM()
    // Offset: 0x1194674
    void MEMOBGOOBMM();
    // public System.Void LLIJGIDNCAM()
    // Offset: 0x1194790
    void LLIJGIDNCAM();
    // public System.Void ToggleAdjustWeapon()
    // Offset: 0x1194798
    void ToggleAdjustWeapon();
    // public System.Void TurnOn()
    // Offset: 0x1194854
    void TurnOn();
    // public System.Void KOGCGKCKKFC()
    // Offset: 0x1194970
    void KOGCGKCKKFC();
    // public UnityEngine.GameObject OPHJILGAPBD()
    // Offset: 0x1194A2C
    ::UnityEngine::GameObject* OPHJILGAPBD();
    // public System.Void MJIBHHPMKHN()
    // Offset: 0x1194AE8
    void MJIBHHPMKHN();
    // public System.Void LPODEMFMDAG()
    // Offset: 0x1194C00
    void LPODEMFMDAG();
    // public System.Void JENOIOBAEPG()
    // Offset: 0x1194CFC
    void JENOIOBAEPG();
    // public System.Void OEKPKNLOLHF()
    // Offset: 0x1194E90
    void OEKPKNLOLHF();
    // public UnityEngine.GameObject JOKKIODFMIA()
    // Offset: 0x1194E9C
    ::UnityEngine::GameObject* JOKKIODFMIA();
    // public System.Void .ctor()
    // Offset: 0x1194F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerClass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PlayerClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerClass*, creationType>()));
    }
    // public System.Void PJPFKHKJOIM()
    // Offset: 0x1194FB0
    void PJPFKHKJOIM();
    // public System.Void PNBHLHGOLAF()
    // Offset: 0x1194FBC
    void PNBHLHGOLAF();
    // public System.Void EDKEMEPLKDN()
    // Offset: 0x11950D4
    void EDKEMEPLKDN();
    // public System.Void WeaponAdjusted()
    // Offset: 0x1195190
    void WeaponAdjusted();
    // public System.Void JKBGDFCGKNK()
    // Offset: 0x119524C
    void JKBGDFCGKNK();
    // public System.Void AEHPEHBALJP()
    // Offset: 0x1195368
    void AEHPEHBALJP();
    // public System.Void INJBFGKODHN()
    // Offset: 0x1195424
    void INJBFGKODHN();
    // public System.Void DOEAKBOKNCK()
    // Offset: 0x1195520
    void DOEAKBOKNCK();
    // public System.Void UnPause()
    // Offset: 0x1195638
    void UnPause();
    // public System.Void GGPEKJNFJHL()
    // Offset: 0x1195644
    void GGPEKJNFJHL();
    // public System.Void CNDDFFCGFOA()
    // Offset: 0x1195650
    void CNDDFFCGFOA();
    // public System.Void BCGIMONNJKD()
    // Offset: 0x119565C
    void BCGIMONNJKD();
    // public System.Void OEIDCJJCAPD()
    // Offset: 0x1195668
    void OEIDCJJCAPD();
    // public System.Void Pause()
    // Offset: 0x1195764
    void Pause();
    // public System.Void Start()
    // Offset: 0x119576C
    void Start();
    // public System.Void HLFHEJABDME()
    // Offset: 0x1195900
    void HLFHEJABDME();
    // public UnityEngine.GameObject MOMOHGJCGCA()
    // Offset: 0x1195A00
    ::UnityEngine::GameObject* MOMOHGJCGCA();
    // public System.Void LKCFLGEAHMP()
    // Offset: 0x1195ABC
    void LKCFLGEAHMP();
    // public System.Void HOJLIKONPKG()
    // Offset: 0x1195AC8
    void HOJLIKONPKG();
    // public System.Void PMEHEMPNPIH()
    // Offset: 0x1195AD4
    void PMEHEMPNPIH();
    // public System.Void NKNCLAIFLDB()
    // Offset: 0x1195B90
    void NKNCLAIFLDB();
    // public System.Void KPOAAAHLGLA()
    // Offset: 0x1195C4C
    void KPOAAAHLGLA();
    // public System.Void POKELLEGHPN()
    // Offset: 0x1195DE0
    void POKELLEGHPN();
    // public UnityEngine.GameObject GetWeaponObject()
    // Offset: 0x1195DEC
    ::UnityEngine::GameObject* GetWeaponObject();
    // public System.Void HOFBGKACOFI()
    // Offset: 0x1195EA8
    void HOFBGKACOFI();
  }; // MagicalActual.PlayerClass
  #pragma pack(pop)
  static check_size<sizeof(PlayerClass), 72 + sizeof(::StringW)> __MagicalActual_PlayerClassSizeCheck;
  static_assert(sizeof(PlayerClass) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PlayerClass::AJLGAAJOGOD
// Il2CppName: AJLGAAJOGOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::AJLGAAJOGOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "AJLGAAJOGOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::TurnOff
// Il2CppName: TurnOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::TurnOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "TurnOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::CDBOPONPIHM
// Il2CppName: CDBOPONPIHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::CDBOPONPIHM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "CDBOPONPIHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::MEMOBGOOBMM
// Il2CppName: MEMOBGOOBMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::MEMOBGOOBMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "MEMOBGOOBMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::LLIJGIDNCAM
// Il2CppName: LLIJGIDNCAM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::LLIJGIDNCAM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "LLIJGIDNCAM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::ToggleAdjustWeapon
// Il2CppName: ToggleAdjustWeapon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::ToggleAdjustWeapon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "ToggleAdjustWeapon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::TurnOn
// Il2CppName: TurnOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::TurnOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "TurnOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::KOGCGKCKKFC
// Il2CppName: KOGCGKCKKFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::KOGCGKCKKFC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "KOGCGKCKKFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::OPHJILGAPBD
// Il2CppName: OPHJILGAPBD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::OPHJILGAPBD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "OPHJILGAPBD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::MJIBHHPMKHN
// Il2CppName: MJIBHHPMKHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::MJIBHHPMKHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "MJIBHHPMKHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::LPODEMFMDAG
// Il2CppName: LPODEMFMDAG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::LPODEMFMDAG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "LPODEMFMDAG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::OEKPKNLOLHF
// Il2CppName: OEKPKNLOLHF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::OEKPKNLOLHF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "OEKPKNLOLHF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::JOKKIODFMIA
// Il2CppName: JOKKIODFMIA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::JOKKIODFMIA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "JOKKIODFMIA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::PlayerClass::PJPFKHKJOIM
// Il2CppName: PJPFKHKJOIM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::PJPFKHKJOIM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "PJPFKHKJOIM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::PNBHLHGOLAF
// Il2CppName: PNBHLHGOLAF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::PNBHLHGOLAF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "PNBHLHGOLAF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::EDKEMEPLKDN
// Il2CppName: EDKEMEPLKDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::EDKEMEPLKDN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "EDKEMEPLKDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::WeaponAdjusted
// Il2CppName: WeaponAdjusted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::WeaponAdjusted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "WeaponAdjusted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::JKBGDFCGKNK
// Il2CppName: JKBGDFCGKNK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::JKBGDFCGKNK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "JKBGDFCGKNK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::AEHPEHBALJP
// Il2CppName: AEHPEHBALJP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::AEHPEHBALJP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "AEHPEHBALJP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::INJBFGKODHN
// Il2CppName: INJBFGKODHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::INJBFGKODHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "INJBFGKODHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::DOEAKBOKNCK
// Il2CppName: DOEAKBOKNCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::DOEAKBOKNCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "DOEAKBOKNCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::UnPause
// Il2CppName: UnPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::UnPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "UnPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::GGPEKJNFJHL
// Il2CppName: GGPEKJNFJHL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::GGPEKJNFJHL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "GGPEKJNFJHL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::CNDDFFCGFOA
// Il2CppName: CNDDFFCGFOA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::CNDDFFCGFOA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "CNDDFFCGFOA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::BCGIMONNJKD
// Il2CppName: BCGIMONNJKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::BCGIMONNJKD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "BCGIMONNJKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::OEIDCJJCAPD
// Il2CppName: OEIDCJJCAPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::OEIDCJJCAPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "OEIDCJJCAPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::HLFHEJABDME
// Il2CppName: HLFHEJABDME
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::HLFHEJABDME)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "HLFHEJABDME", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::MOMOHGJCGCA
// Il2CppName: MOMOHGJCGCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::MOMOHGJCGCA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "MOMOHGJCGCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::LKCFLGEAHMP
// Il2CppName: LKCFLGEAHMP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::LKCFLGEAHMP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "LKCFLGEAHMP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::HOJLIKONPKG
// Il2CppName: HOJLIKONPKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::HOJLIKONPKG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "HOJLIKONPKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::PMEHEMPNPIH
// Il2CppName: PMEHEMPNPIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::PMEHEMPNPIH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "PMEHEMPNPIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::NKNCLAIFLDB
// Il2CppName: NKNCLAIFLDB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::NKNCLAIFLDB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "NKNCLAIFLDB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::POKELLEGHPN
// Il2CppName: POKELLEGHPN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::POKELLEGHPN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "POKELLEGHPN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::GetWeaponObject
// Il2CppName: GetWeaponObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::GetWeaponObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "GetWeaponObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerClass::HOFBGKACOFI
// Il2CppName: HOFBGKACOFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerClass::*)()>(&MagicalActual::PlayerClass::HOFBGKACOFI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerClass*), "HOFBGKACOFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
