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
  // Forward declaring type: PlayerTorso
  class PlayerTorso;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PlayerTorso);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PlayerTorso*, "MagicalActual", "PlayerTorso");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PlayerTorso
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerTorso : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject PLIHPKENLKF
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* PLIHPKENLKF;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single JMOCBCMBKHD
    // Size: 0x4
    // Offset: 0x20
    float JMOCBCMBKHD;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject PLIHPKENLKF
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_PLIHPKENLKF();
    // Get instance field reference: private System.Single JMOCBCMBKHD
    [[deprecated("Use field access instead!")]] float& dyn_JMOCBCMBKHD();
    // private System.Void AMGJNJLJIFO()
    // Offset: 0x147E7B0
    void AMGJNJLJIFO();
    // private System.Void BHBFEEJHKIH()
    // Offset: 0x147E9C0
    void BHBFEEJHKIH();
    // private System.Void LMFIENPBFKA()
    // Offset: 0x147EBD0
    void LMFIENPBFKA();
    // private System.Void FixedUpdate()
    // Offset: 0x147ECDC
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x147EEE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTorso* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PlayerTorso::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTorso*, creationType>()));
    }
    // private System.Void DJIGIJKOPDC()
    // Offset: 0x147EEEC
    void DJIGIJKOPDC();
    // private System.Void ICFANEFPFBJ()
    // Offset: 0x147EFF8
    void ICFANEFPFBJ();
    // private System.Void FIJGCHFAFHN()
    // Offset: 0x147F208
    void FIJGCHFAFHN();
    // private System.Void FGGKEEKHDHN()
    // Offset: 0x147F418
    void FGGKEEKHDHN();
    // private System.Void KIPDPKEIOEO()
    // Offset: 0x147F628
    void KIPDPKEIOEO();
    // private System.Void ADLGPKAIPAA()
    // Offset: 0x147F734
    void ADLGPKAIPAA();
    // private System.Void PJOIJIEDPMP()
    // Offset: 0x147F840
    void PJOIJIEDPMP();
    // private System.Void CHEMMHEMDCB()
    // Offset: 0x147FA50
    void CHEMMHEMDCB();
    // private System.Void AHMLIMDJCJO()
    // Offset: 0x147FC60
    void AHMLIMDJCJO();
    // private System.Void JPHEBENNLCB()
    // Offset: 0x147FE70
    void JPHEBENNLCB();
    // private System.Void Awake()
    // Offset: 0x1480080
    void Awake();
    // private System.Void BLIPCIAAIHI()
    // Offset: 0x148018C
    void BLIPCIAAIHI();
    // private System.Void AFMOIOAGKLM()
    // Offset: 0x148039C
    void AFMOIOAGKLM();
    // private System.Void FLJMJKAKNBH()
    // Offset: 0x14804A8
    void FLJMJKAKNBH();
    // private System.Void AIKBLNGPOON()
    // Offset: 0x14806B4
    void AIKBLNGPOON();
    // private System.Void AGOBDBDGJKD()
    // Offset: 0x14807C0
    void AGOBDBDGJKD();
    // private System.Void NIGOCBKLOFH()
    // Offset: 0x14809D0
    void NIGOCBKLOFH();
    // private System.Void JBEJCKDIKIE()
    // Offset: 0x1480BE0
    void JBEJCKDIKIE();
    // private System.Void DDJINHIPKCE()
    // Offset: 0x1480CEC
    void DDJINHIPKCE();
    // private System.Void NDAOHLAOCDE()
    // Offset: 0x1480EFC
    void NDAOHLAOCDE();
    // private System.Void HABDJCEKMNH()
    // Offset: 0x1481008
    void HABDJCEKMNH();
    // private System.Void DGELIHGGOKB()
    // Offset: 0x1481218
    void DGELIHGGOKB();
    // private System.Void KGKKNFEMGAM()
    // Offset: 0x1481324
    void KGKKNFEMGAM();
  }; // MagicalActual.PlayerTorso
  #pragma pack(pop)
  static check_size<sizeof(PlayerTorso), 32 + sizeof(float)> __MagicalActual_PlayerTorsoSizeCheck;
  static_assert(sizeof(PlayerTorso) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::AMGJNJLJIFO
// Il2CppName: AMGJNJLJIFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::AMGJNJLJIFO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "AMGJNJLJIFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::BHBFEEJHKIH
// Il2CppName: BHBFEEJHKIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::BHBFEEJHKIH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "BHBFEEJHKIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::LMFIENPBFKA
// Il2CppName: LMFIENPBFKA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::LMFIENPBFKA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "LMFIENPBFKA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::DJIGIJKOPDC
// Il2CppName: DJIGIJKOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::DJIGIJKOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "DJIGIJKOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::ICFANEFPFBJ
// Il2CppName: ICFANEFPFBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::ICFANEFPFBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "ICFANEFPFBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::FIJGCHFAFHN
// Il2CppName: FIJGCHFAFHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::FIJGCHFAFHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "FIJGCHFAFHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::FGGKEEKHDHN
// Il2CppName: FGGKEEKHDHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::FGGKEEKHDHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "FGGKEEKHDHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::KIPDPKEIOEO
// Il2CppName: KIPDPKEIOEO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::KIPDPKEIOEO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "KIPDPKEIOEO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::ADLGPKAIPAA
// Il2CppName: ADLGPKAIPAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::ADLGPKAIPAA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "ADLGPKAIPAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::PJOIJIEDPMP
// Il2CppName: PJOIJIEDPMP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::PJOIJIEDPMP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "PJOIJIEDPMP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::CHEMMHEMDCB
// Il2CppName: CHEMMHEMDCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::CHEMMHEMDCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "CHEMMHEMDCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::AHMLIMDJCJO
// Il2CppName: AHMLIMDJCJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::AHMLIMDJCJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "AHMLIMDJCJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::JPHEBENNLCB
// Il2CppName: JPHEBENNLCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::JPHEBENNLCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "JPHEBENNLCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::BLIPCIAAIHI
// Il2CppName: BLIPCIAAIHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::BLIPCIAAIHI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "BLIPCIAAIHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::AFMOIOAGKLM
// Il2CppName: AFMOIOAGKLM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::AFMOIOAGKLM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "AFMOIOAGKLM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::FLJMJKAKNBH
// Il2CppName: FLJMJKAKNBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::FLJMJKAKNBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "FLJMJKAKNBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::AIKBLNGPOON
// Il2CppName: AIKBLNGPOON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::AIKBLNGPOON)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "AIKBLNGPOON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::AGOBDBDGJKD
// Il2CppName: AGOBDBDGJKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::AGOBDBDGJKD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "AGOBDBDGJKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::NIGOCBKLOFH
// Il2CppName: NIGOCBKLOFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::NIGOCBKLOFH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "NIGOCBKLOFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::JBEJCKDIKIE
// Il2CppName: JBEJCKDIKIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::JBEJCKDIKIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "JBEJCKDIKIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::DDJINHIPKCE
// Il2CppName: DDJINHIPKCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::DDJINHIPKCE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "DDJINHIPKCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::NDAOHLAOCDE
// Il2CppName: NDAOHLAOCDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::NDAOHLAOCDE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "NDAOHLAOCDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::HABDJCEKMNH
// Il2CppName: HABDJCEKMNH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::HABDJCEKMNH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "HABDJCEKMNH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::DGELIHGGOKB
// Il2CppName: DGELIHGGOKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::DGELIHGGOKB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "DGELIHGGOKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTorso::KGKKNFEMGAM
// Il2CppName: KGKKNFEMGAM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTorso::*)()>(&MagicalActual::PlayerTorso::KGKKNFEMGAM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTorso*), "KGKKNFEMGAM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
