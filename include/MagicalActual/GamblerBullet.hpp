// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Gambler
  class Gambler;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: GamblerBullet
  class GamblerBullet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::GamblerBullet);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::GamblerBullet*, "MagicalActual", "GamblerBullet");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.GamblerBullet
  // [TokenAttribute] Offset: FFFFFFFF
  class GamblerBullet : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean fired
    // Size: 0x1
    // Offset: 0x18
    bool fired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fired and: arrowFireDirection
    char __padding0[0x3] = {};
    // public UnityEngine.Vector3 arrowFireDirection
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 arrowFireDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single ENPHHEMGIML
    // Size: 0x4
    // Offset: 0x28
    float ENPHHEMGIML;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single KNPCNCAKAIO
    // Size: 0x4
    // Offset: 0x2C
    float KNPCNCAKAIO;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single ANDDIBNAPMK
    // Size: 0x4
    // Offset: 0x30
    float ANDDIBNAPMK;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 crossVelocity
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 crossVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public MagicalActual.Gambler myGambler
    // Size: 0x8
    // Offset: 0x40
    ::MagicalActual::Gambler* myGambler;
    // Field size check
    static_assert(sizeof(::MagicalActual::Gambler*) == 0x8);
    // public System.Int32 bulletsCharged
    // Size: 0x4
    // Offset: 0x48
    int bulletsCharged;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean wasFullBarrel
    // Size: 0x1
    // Offset: 0x4C
    bool wasFullBarrel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noMiss
    // Size: 0x1
    // Offset: 0x4D
    bool noMiss;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noMiss and: KGHGHJFCILP
    char __padding9[0x2] = {};
    // private UnityEngine.GameObject KGHGHJFCILP
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* KGHGHJFCILP;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Vector3 JCDFLLLGDLH
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 JCDFLLLGDLH;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: JCDFLLLGDLH and: JGOGJDHABHN
    char __padding11[0x4] = {};
    // private UnityEngine.Collider[] JGOGJDHABHN
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Collider*> JGOGJDHABHN;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private UnityEngine.RaycastHit[] EHLLMIKFMJG
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::RaycastHit> EHLLMIKFMJG;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RaycastHit>) == 0x8);
    // private UnityEngine.GameObject EJOPLGBIFOE
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* EJOPLGBIFOE;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean fired
    [[deprecated("Use field access instead!")]] bool& dyn_fired();
    // Get instance field reference: public UnityEngine.Vector3 arrowFireDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_arrowFireDirection();
    // Get instance field reference: private System.Single ENPHHEMGIML
    [[deprecated("Use field access instead!")]] float& dyn_ENPHHEMGIML();
    // Get instance field reference: private System.Single KNPCNCAKAIO
    [[deprecated("Use field access instead!")]] float& dyn_KNPCNCAKAIO();
    // Get instance field reference: private System.Single ANDDIBNAPMK
    [[deprecated("Use field access instead!")]] float& dyn_ANDDIBNAPMK();
    // Get instance field reference: public UnityEngine.Vector3 crossVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_crossVelocity();
    // Get instance field reference: public MagicalActual.Gambler myGambler
    [[deprecated("Use field access instead!")]] ::MagicalActual::Gambler*& dyn_myGambler();
    // Get instance field reference: public System.Int32 bulletsCharged
    [[deprecated("Use field access instead!")]] int& dyn_bulletsCharged();
    // Get instance field reference: public System.Boolean wasFullBarrel
    [[deprecated("Use field access instead!")]] bool& dyn_wasFullBarrel();
    // Get instance field reference: public System.Boolean noMiss
    [[deprecated("Use field access instead!")]] bool& dyn_noMiss();
    // Get instance field reference: private UnityEngine.GameObject KGHGHJFCILP
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_KGHGHJFCILP();
    // Get instance field reference: private UnityEngine.Vector3 JCDFLLLGDLH
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_JCDFLLLGDLH();
    // Get instance field reference: private UnityEngine.Collider[] JGOGJDHABHN
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_JGOGJDHABHN();
    // Get instance field reference: private UnityEngine.RaycastHit[] EHLLMIKFMJG
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RaycastHit>& dyn_EHLLMIKFMJG();
    // Get instance field reference: private UnityEngine.GameObject EJOPLGBIFOE
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_EJOPLGBIFOE();
    // private System.Void ICEGDGKAIIB()
    // Offset: 0x1231A70
    void ICEGDGKAIIB();
    // private System.Void NIGOCBKLOFH()
    // Offset: 0x1232728
    void NIGOCBKLOFH();
    // private System.Void FixedUpdate()
    // Offset: 0x1233408
    void FixedUpdate();
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x12340B4
    void FGIFGGNGKPK();
    // private System.Void JCOEAIILOND()
    // Offset: 0x123419C
    void JCOEAIILOND();
    // private System.Void AMIPIMKIJMO()
    // Offset: 0x1234E5C
    void AMIPIMKIJMO();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x1235B38
    void MLGBKBMHHLE();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x1235C20
    void LBIKOKCCILF();
    // private System.Void BIMCNDAFFJC()
    // Offset: 0x1235D08
    void BIMCNDAFFJC();
    // private System.Void BHBFEEJHKIH()
    // Offset: 0x12369E0
    void BHBFEEJHKIH();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x12376B4
    void GECHLDPLPCC();
    // public System.Void .ctor()
    // Offset: 0x123779C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GamblerBullet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::GamblerBullet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GamblerBullet*, creationType>()));
    }
    // private System.Void MKHEDAAIDIE()
    // Offset: 0x12377BC
    void MKHEDAAIDIE();
    // private System.Void AHMLIMDJCJO()
    // Offset: 0x123849C
    void AHMLIMDJCJO();
    // private System.Void FLJMJKAKNBH()
    // Offset: 0x1239158
    void FLJMJKAKNBH();
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x1239E3C
    void ABIHCGOKNCL();
    // private System.Void Start()
    // Offset: 0x1239F24
    void Start();
    // private System.Void ICFANEFPFBJ()
    // Offset: 0x1239FF0
    void ICFANEFPFBJ();
    // private System.Void CHEMMHEMDCB()
    // Offset: 0x123ACB4
    void CHEMMHEMDCB();
    // private System.Void NHADFEMILCC()
    // Offset: 0x123B968
    void NHADFEMILCC();
    // private System.Void ANKCGGIBCAI()
    // Offset: 0x123BA50
    void ANKCGGIBCAI();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x123C708
    void DGJGAFKDIDK();
    // private System.Void BLIPCIAAIHI()
    // Offset: 0x123C7F0
    void BLIPCIAAIHI();
    // private System.Void DDJINHIPKCE()
    // Offset: 0x123D4B0
    void DDJINHIPKCE();
    // private System.Void FIJGCHFAFHN()
    // Offset: 0x123E168
    void FIJGCHFAFHN();
  }; // MagicalActual.GamblerBullet
  #pragma pack(pop)
  static check_size<sizeof(GamblerBullet), 120 + sizeof(::UnityEngine::GameObject*)> __MagicalActual_GamblerBulletSizeCheck;
  static_assert(sizeof(GamblerBullet) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::ICEGDGKAIIB
// Il2CppName: ICEGDGKAIIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::ICEGDGKAIIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "ICEGDGKAIIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::NIGOCBKLOFH
// Il2CppName: NIGOCBKLOFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::NIGOCBKLOFH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "NIGOCBKLOFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::JCOEAIILOND
// Il2CppName: JCOEAIILOND
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::JCOEAIILOND)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "JCOEAIILOND", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::AMIPIMKIJMO
// Il2CppName: AMIPIMKIJMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::AMIPIMKIJMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "AMIPIMKIJMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::BIMCNDAFFJC
// Il2CppName: BIMCNDAFFJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::BIMCNDAFFJC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "BIMCNDAFFJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::BHBFEEJHKIH
// Il2CppName: BHBFEEJHKIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::BHBFEEJHKIH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "BHBFEEJHKIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::MKHEDAAIDIE
// Il2CppName: MKHEDAAIDIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::MKHEDAAIDIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "MKHEDAAIDIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::AHMLIMDJCJO
// Il2CppName: AHMLIMDJCJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::AHMLIMDJCJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "AHMLIMDJCJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::FLJMJKAKNBH
// Il2CppName: FLJMJKAKNBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::FLJMJKAKNBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "FLJMJKAKNBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::ICFANEFPFBJ
// Il2CppName: ICFANEFPFBJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::ICFANEFPFBJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "ICFANEFPFBJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::CHEMMHEMDCB
// Il2CppName: CHEMMHEMDCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::CHEMMHEMDCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "CHEMMHEMDCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::ANKCGGIBCAI
// Il2CppName: ANKCGGIBCAI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::ANKCGGIBCAI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "ANKCGGIBCAI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::BLIPCIAAIHI
// Il2CppName: BLIPCIAAIHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::BLIPCIAAIHI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "BLIPCIAAIHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::DDJINHIPKCE
// Il2CppName: DDJINHIPKCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::DDJINHIPKCE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "DDJINHIPKCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GamblerBullet::FIJGCHFAFHN
// Il2CppName: FIJGCHFAFHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GamblerBullet::*)()>(&MagicalActual::GamblerBullet::FIJGCHFAFHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GamblerBullet*), "FIJGCHFAFHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
