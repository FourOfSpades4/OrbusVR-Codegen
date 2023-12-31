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
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerTool
  class PlayerTool;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: BossGun
  class BossGun;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::BossGun);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::BossGun*, "MagicalActual", "BossGun");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.BossGun
  // [TokenAttribute] Offset: FFFFFFFF
  class BossGun : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.PlayerTool FKJHGIFOJKD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::PlayerTool* FKJHGIFOJKD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerTool*) == 0x8);
    // public UnityEngine.GameObject fireVfx
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* fireVfx;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.AudioSource GHPLEIOBCOD
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* GHPLEIOBCOD;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public UnityEngine.AudioClip gunFireSound
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioClip* gunFireSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.Animator NBNKFBECLJG
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Animator* NBNKFBECLJG;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private System.Single AGFNNJEGMIL
    // Size: 0x4
    // Offset: 0x40
    float AGFNNJEGMIL;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single NJEAJDANNLE
    // Size: 0x4
    // Offset: 0x44
    float NJEAJDANNLE;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.PlayerTool FKJHGIFOJKD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerTool*& dyn_FKJHGIFOJKD();
    // Get instance field reference: public UnityEngine.GameObject fireVfx
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_fireVfx();
    // Get instance field reference: private UnityEngine.AudioSource GHPLEIOBCOD
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_GHPLEIOBCOD();
    // Get instance field reference: public UnityEngine.AudioClip gunFireSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_gunFireSound();
    // Get instance field reference: private UnityEngine.Animator NBNKFBECLJG
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_NBNKFBECLJG();
    // Get instance field reference: private System.Single AGFNNJEGMIL
    [[deprecated("Use field access instead!")]] float& dyn_AGFNNJEGMIL();
    // Get instance field reference: private System.Single NJEAJDANNLE
    [[deprecated("Use field access instead!")]] float& dyn_NJEAJDANNLE();
    // private System.Void BKGHKPPKGCA()
    // Offset: 0x17926A8
    void BKGHKPPKGCA();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x17926F8
    void CBMDGNKFPIO();
    // public System.Void .ctor()
    // Offset: 0x1792780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BossGun* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::BossGun::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BossGun*, creationType>()));
    }
    // private System.Void NKMCBNONNHC(System.Byte KLIPNGBEELK)
    // Offset: 0x1792794
    void NKMCBNONNHC(uint8_t KLIPNGBEELK);
    // private System.Void ICFANEFPFBJ()
    // Offset: 0x1792798
    void ICFANEFPFBJ();
    // private System.Void GNAJKKCCCNO()
    // Offset: 0x17927D8
    void GNAJKKCCCNO();
    // private System.Void GPNKFJCGIPH()
    // Offset: 0x1792828
    void GPNKFJCGIPH();
    // private System.Void Start()
    // Offset: 0x1792878
    void Start();
    // private System.Void AGOBDBDGJKD()
    // Offset: 0x1792900
    void AGOBDBDGJKD();
    // private System.Void FixedUpdate()
    // Offset: 0x1792940
    void FixedUpdate();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x1792980
    void LBIKOKCCILF();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x1792A08
    void MLGBKBMHHLE();
    // private System.Void IKLEACMHAMK()
    // Offset: 0x1792A90
    void IKLEACMHAMK();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x1792AE4
    void GECHLDPLPCC();
    // private System.Void SignalReceived(System.Byte KLIPNGBEELK)
    // Offset: 0x1792B6C
    void SignalReceived(uint8_t KLIPNGBEELK);
    // private System.Void FNAHDBCEMHD(System.Byte KLIPNGBEELK)
    // Offset: 0x1792B70
    void FNAHDBCEMHD(uint8_t KLIPNGBEELK);
    // private System.Void JENOIOBAEPG()
    // Offset: 0x1792B74
    void JENOIOBAEPG();
    // private System.Void GKIOLADOCOK()
    // Offset: 0x1792BFC
    void GKIOLADOCOK();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x1792C84
    void IPIFMKAGODD();
    // private System.Void PhysicsInteractableTrigger()
    // Offset: 0x1792D0C
    void PhysicsInteractableTrigger();
    // private System.Void PFABJJGAOMM()
    // Offset: 0x1792D58
    void PFABJJGAOMM();
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x1792DE0
    void ABIHCGOKNCL();
    // private System.Void FLJMJKAKNBH()
    // Offset: 0x1792E68
    void FLJMJKAKNBH();
    // private System.Void NHGKENEFKKC(System.Byte KLIPNGBEELK)
    // Offset: 0x1792EA8
    void NHGKENEFKKC(uint8_t KLIPNGBEELK);
    // private System.Void GLLAAOCNAGL()
    // Offset: 0x1792EAC
    void GLLAAOCNAGL();
  }; // MagicalActual.BossGun
  #pragma pack(pop)
  static check_size<sizeof(BossGun), 68 + sizeof(float)> __MagicalActual_BossGunSizeCheck;
  static_assert(sizeof(BossGun) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::BossGun::BKGHKPPKGCA
// Il2CppName: BKGHKPPKGCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::BKGHKPPKGCA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "BKGHKPPKGCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::BossGun::NKMCBNONNHC
// Il2CppName: NKMCBNONNHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)(uint8_t)>(&MagicalActual::BossGun::NKMCBNONNHC)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "NKMCBNONNHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::ICFANEFPFBJ
// Il2CppName: ICFANEFPFBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::ICFANEFPFBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "ICFANEFPFBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::GNAJKKCCCNO
// Il2CppName: GNAJKKCCCNO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::GNAJKKCCCNO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "GNAJKKCCCNO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::GPNKFJCGIPH
// Il2CppName: GPNKFJCGIPH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::GPNKFJCGIPH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "GPNKFJCGIPH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::AGOBDBDGJKD
// Il2CppName: AGOBDBDGJKD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::AGOBDBDGJKD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "AGOBDBDGJKD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::IKLEACMHAMK
// Il2CppName: IKLEACMHAMK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::IKLEACMHAMK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "IKLEACMHAMK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::SignalReceived
// Il2CppName: SignalReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)(uint8_t)>(&MagicalActual::BossGun::SignalReceived)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "SignalReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::FNAHDBCEMHD
// Il2CppName: FNAHDBCEMHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)(uint8_t)>(&MagicalActual::BossGun::FNAHDBCEMHD)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "FNAHDBCEMHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::PhysicsInteractableTrigger
// Il2CppName: PhysicsInteractableTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::PhysicsInteractableTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "PhysicsInteractableTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::PFABJJGAOMM
// Il2CppName: PFABJJGAOMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::PFABJJGAOMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "PFABJJGAOMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::FLJMJKAKNBH
// Il2CppName: FLJMJKAKNBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::FLJMJKAKNBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "FLJMJKAKNBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::NHGKENEFKKC
// Il2CppName: NHGKENEFKKC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)(uint8_t)>(&MagicalActual::BossGun::NHGKENEFKKC)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "NHGKENEFKKC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::BossGun::GLLAAOCNAGL
// Il2CppName: GLLAAOCNAGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::BossGun::*)()>(&MagicalActual::BossGun::GLLAAOCNAGL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::BossGun*), "GLLAAOCNAGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
