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
  // Forward declaring type: PlayerTool
  class PlayerTool;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: DungeonShard
  class DungeonShard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::DungeonShard);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::DungeonShard*, "MagicalActual", "DungeonShard");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.DungeonShard
  // [TokenAttribute] Offset: FFFFFFFF
  class DungeonShard : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.PlayerTool FKJHGIFOJKD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::PlayerTool* FKJHGIFOJKD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerTool*) == 0x8);
    // private System.Boolean IMAFJMEOHIF
    // Size: 0x1
    // Offset: 0x20
    bool IMAFJMEOHIF;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IMAFJMEOHIF and: MGIJGHBFFOO
    char __padding1[0x7] = {};
    // private UnityEngine.Transform MGIJGHBFFOO
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* MGIJGHBFFOO;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Collider[] JGOGJDHABHN
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Collider*> JGOGJDHABHN;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.String ACNINLKMMKB
    // Size: 0x8
    // Offset: 0x38
    ::StringW ACNINLKMMKB;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject activateVfx
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* activateVfx;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.PlayerTool FKJHGIFOJKD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerTool*& dyn_FKJHGIFOJKD();
    // Get instance field reference: private System.Boolean IMAFJMEOHIF
    [[deprecated("Use field access instead!")]] bool& dyn_IMAFJMEOHIF();
    // Get instance field reference: private UnityEngine.Transform MGIJGHBFFOO
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_MGIJGHBFFOO();
    // Get instance field reference: private UnityEngine.Collider[] JGOGJDHABHN
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_JGOGJDHABHN();
    // Get instance field reference: private System.String ACNINLKMMKB
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ACNINLKMMKB();
    // Get instance field reference: public UnityEngine.GameObject activateVfx
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_activateVfx();
    // private System.Void OAEPHGIOHAO()
    // Offset: 0x134A4BC
    void OAEPHGIOHAO();
    // private System.Void AKGFEENGKJD()
    // Offset: 0x134A544
    void AKGFEENGKJD();
    // private System.Void IEDBMOOGDKM(System.Byte KLIPNGBEELK)
    // Offset: 0x134A718
    void IEDBMOOGDKM(uint8_t KLIPNGBEELK);
    // private System.Void PBEMGGBBDCK()
    // Offset: 0x134A8A4
    void PBEMGGBBDCK();
    // private System.Void CNBJHFMDCOE()
    // Offset: 0x134AA78
    void CNBJHFMDCOE();
    // private System.Void FixedUpdate()
    // Offset: 0x134AAD0
    void FixedUpdate();
    // private System.Void CDFDPCDCGAK()
    // Offset: 0x134AD5C
    void CDFDPCDCGAK();
    // private System.Void JCGIGLJIGOM()
    // Offset: 0x134ADE4
    void JCGIGLJIGOM();
    // private System.Void BMALDPKJJPG()
    // Offset: 0x134AE6C
    void BMALDPKJJPG();
    // private System.Void IEJMKFPGDOB(System.Byte KLIPNGBEELK)
    // Offset: 0x134AEC4
    void IEJMKFPGDOB(uint8_t KLIPNGBEELK);
    // private System.Void CAPGFLFKCLN(System.Byte KLIPNGBEELK)
    // Offset: 0x134B050
    void CAPGFLFKCLN(uint8_t KLIPNGBEELK);
    // private System.Void FMCCEHMILOP()
    // Offset: 0x134B1DC
    void FMCCEHMILOP();
    // private System.Void FNHKAIGMMLG()
    // Offset: 0x134B264
    void FNHKAIGMMLG();
    // private System.Void LACFBAIDCBK()
    // Offset: 0x134B2BC
    void LACFBAIDCBK();
    // private System.Void FLGPKPALCIO(System.Byte KLIPNGBEELK)
    // Offset: 0x134B314
    void FLGPKPALCIO(uint8_t KLIPNGBEELK);
    // private System.Void JBMANAJHKBI(System.Byte KLIPNGBEELK)
    // Offset: 0x134B4A0
    void JBMANAJHKBI(uint8_t KLIPNGBEELK);
    // private System.Void AFALAKLIBEB()
    // Offset: 0x134ACD4
    void AFALAKLIBEB();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x134B62C
    void IPIFMKAGODD();
    // private System.Void Awake()
    // Offset: 0x134B800
    void Awake();
    // private System.Void JEDINCAJKLC()
    // Offset: 0x134B858
    void JEDINCAJKLC();
    // private System.Void BHBFEEJHKIH()
    // Offset: 0x134BA4C
    void BHBFEEJHKIH();
    // private System.Void OJFAEAIKFED()
    // Offset: 0x134BC44
    void OJFAEAIKFED();
    // private System.Void FBONHOOJHBG()
    // Offset: 0x134BE18
    void FBONHOOJHBG();
    // private System.Void LLBAENEGEMN()
    // Offset: 0x134BFEC
    void LLBAENEGEMN();
    // public System.Void .ctor()
    // Offset: 0x134C1F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DungeonShard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::DungeonShard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DungeonShard*, creationType>()));
    }
    // private System.Void KILJDKHADHJ()
    // Offset: 0x134C250
    void KILJDKHADHJ();
    // private System.Void HMLPEKMDCDI(System.Byte KLIPNGBEELK)
    // Offset: 0x134C2A8
    void HMLPEKMDCDI(uint8_t KLIPNGBEELK);
    // private System.Void KKEABMBACIC()
    // Offset: 0x134C434
    void KKEABMBACIC();
    // private System.Void PFABJJGAOMM()
    // Offset: 0x134C48C
    void PFABJJGAOMM();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x134C660
    void DGJGAFKDIDK();
    // private System.Void AMIPIMKIJMO()
    // Offset: 0x134C834
    void AMIPIMKIJMO();
    // private System.Void MELPNKHDJFN()
    // Offset: 0x134CA28
    void MELPNKHDJFN();
    // private System.Void OOKAOJFGODO()
    // Offset: 0x134CA80
    void OOKAOJFGODO();
    // private System.Void JFJCCNIMOPO()
    // Offset: 0x134CB08
    void JFJCCNIMOPO();
    // private System.Void MDGLGNKOPLD()
    // Offset: 0x134CB90
    void MDGLGNKOPLD();
    // private System.Void CAHEKCFLDHP()
    // Offset: 0x134CC18
    void CAHEKCFLDHP();
    // private System.Void HADIPALABDL(System.Byte KLIPNGBEELK)
    // Offset: 0x134CE10
    void HADIPALABDL(uint8_t KLIPNGBEELK);
    // private System.Void Start()
    // Offset: 0x134CF9C
    void Start();
    // private System.Void LLFALEBAGKG()
    // Offset: 0x134D170
    void LLFALEBAGKG();
    // private System.Void JPHEBENNLCB()
    // Offset: 0x134D1F8
    void JPHEBENNLCB();
    // private System.Void SignalReceived(System.Byte KLIPNGBEELK)
    // Offset: 0x134D3EC
    void SignalReceived(uint8_t KLIPNGBEELK);
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x134D574
    void MLGBKBMHHLE();
    // private System.Void KIPDPKEIOEO()
    // Offset: 0x134D748
    void KIPDPKEIOEO();
    // private System.Void AFGEJPPGMPE()
    // Offset: 0x134D7A0
    void AFGEJPPGMPE();
  }; // MagicalActual.DungeonShard
  #pragma pack(pop)
  static check_size<sizeof(DungeonShard), 64 + sizeof(::UnityEngine::GameObject*)> __MagicalActual_DungeonShardSizeCheck;
  static_assert(sizeof(DungeonShard) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::DungeonShard::OAEPHGIOHAO
// Il2CppName: OAEPHGIOHAO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::OAEPHGIOHAO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "OAEPHGIOHAO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::AKGFEENGKJD
// Il2CppName: AKGFEENGKJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::AKGFEENGKJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "AKGFEENGKJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::IEDBMOOGDKM
// Il2CppName: IEDBMOOGDKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::IEDBMOOGDKM)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "IEDBMOOGDKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::CNBJHFMDCOE
// Il2CppName: CNBJHFMDCOE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::CNBJHFMDCOE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "CNBJHFMDCOE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::CDFDPCDCGAK
// Il2CppName: CDFDPCDCGAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::CDFDPCDCGAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "CDFDPCDCGAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::JCGIGLJIGOM
// Il2CppName: JCGIGLJIGOM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::JCGIGLJIGOM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "JCGIGLJIGOM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::BMALDPKJJPG
// Il2CppName: BMALDPKJJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::BMALDPKJJPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "BMALDPKJJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::IEJMKFPGDOB
// Il2CppName: IEJMKFPGDOB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::IEJMKFPGDOB)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "IEJMKFPGDOB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::CAPGFLFKCLN
// Il2CppName: CAPGFLFKCLN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::CAPGFLFKCLN)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "CAPGFLFKCLN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::FMCCEHMILOP
// Il2CppName: FMCCEHMILOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::FMCCEHMILOP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "FMCCEHMILOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::FNHKAIGMMLG
// Il2CppName: FNHKAIGMMLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::FNHKAIGMMLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "FNHKAIGMMLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::LACFBAIDCBK
// Il2CppName: LACFBAIDCBK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::LACFBAIDCBK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "LACFBAIDCBK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::FLGPKPALCIO
// Il2CppName: FLGPKPALCIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::FLGPKPALCIO)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "FLGPKPALCIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::JBMANAJHKBI
// Il2CppName: JBMANAJHKBI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::JBMANAJHKBI)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "JBMANAJHKBI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::AFALAKLIBEB
// Il2CppName: AFALAKLIBEB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::AFALAKLIBEB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "AFALAKLIBEB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::JEDINCAJKLC
// Il2CppName: JEDINCAJKLC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::JEDINCAJKLC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "JEDINCAJKLC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::BHBFEEJHKIH
// Il2CppName: BHBFEEJHKIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::BHBFEEJHKIH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "BHBFEEJHKIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::OJFAEAIKFED
// Il2CppName: OJFAEAIKFED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::OJFAEAIKFED)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "OJFAEAIKFED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::FBONHOOJHBG
// Il2CppName: FBONHOOJHBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::FBONHOOJHBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "FBONHOOJHBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::LLBAENEGEMN
// Il2CppName: LLBAENEGEMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::LLBAENEGEMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "LLBAENEGEMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::DungeonShard::KILJDKHADHJ
// Il2CppName: KILJDKHADHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::KILJDKHADHJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "KILJDKHADHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::HMLPEKMDCDI
// Il2CppName: HMLPEKMDCDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::HMLPEKMDCDI)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "HMLPEKMDCDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::KKEABMBACIC
// Il2CppName: KKEABMBACIC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::KKEABMBACIC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "KKEABMBACIC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::PFABJJGAOMM
// Il2CppName: PFABJJGAOMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::PFABJJGAOMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "PFABJJGAOMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::AMIPIMKIJMO
// Il2CppName: AMIPIMKIJMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::AMIPIMKIJMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "AMIPIMKIJMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::MELPNKHDJFN
// Il2CppName: MELPNKHDJFN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::MELPNKHDJFN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "MELPNKHDJFN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::OOKAOJFGODO
// Il2CppName: OOKAOJFGODO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::OOKAOJFGODO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "OOKAOJFGODO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::JFJCCNIMOPO
// Il2CppName: JFJCCNIMOPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::JFJCCNIMOPO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "JFJCCNIMOPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::MDGLGNKOPLD
// Il2CppName: MDGLGNKOPLD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::MDGLGNKOPLD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "MDGLGNKOPLD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::CAHEKCFLDHP
// Il2CppName: CAHEKCFLDHP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::CAHEKCFLDHP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "CAHEKCFLDHP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::HADIPALABDL
// Il2CppName: HADIPALABDL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::HADIPALABDL)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "HADIPALABDL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::LLFALEBAGKG
// Il2CppName: LLFALEBAGKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::LLFALEBAGKG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "LLFALEBAGKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::JPHEBENNLCB
// Il2CppName: JPHEBENNLCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::JPHEBENNLCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "JPHEBENNLCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::SignalReceived
// Il2CppName: SignalReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)(uint8_t)>(&MagicalActual::DungeonShard::SignalReceived)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "SignalReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::KIPDPKEIOEO
// Il2CppName: KIPDPKEIOEO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::KIPDPKEIOEO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "KIPDPKEIOEO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::DungeonShard::AFGEJPPGMPE
// Il2CppName: AFGEJPPGMPE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::DungeonShard::*)()>(&MagicalActual::DungeonShard::AFGEJPPGMPE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::DungeonShard*), "AFGEJPPGMPE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};