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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Monster
  class Monster;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: CorruptedNatureBrute
  class CorruptedNatureBrute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::CorruptedNatureBrute);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::CorruptedNatureBrute*, "MagicalActual", "CorruptedNatureBrute");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.CorruptedNatureBrute
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD2F08
  class CorruptedNatureBrute : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // public UnityEngine.GameObject vfxSlash
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* vfxSlash;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x204FFE0
    void BDEDGNGMHMN();
    // public System.Void Slash()
    // Offset: 0x2050038
    void Slash();
    // public System.Void .ctor()
    // Offset: 0x2050250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CorruptedNatureBrute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::CorruptedNatureBrute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CorruptedNatureBrute*, creationType>()));
    }
    // public System.Void PKINMLEHJFB()
    // Offset: 0x20502A8
    void PKINMLEHJFB();
    // public System.Void HJADIOCKECN()
    // Offset: 0x20504CC
    void HJADIOCKECN();
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x20506F0
    void NNDKJCJFIAK();
    // public System.Void CEPPICBNJOI()
    // Offset: 0x2050748
    void CEPPICBNJOI();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x205096C
    void LBIKOKCCILF();
    // public System.Void IBMKENLAMGB()
    // Offset: 0x20509C4
    void IBMKENLAMGB();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x2050BE8
    void MLGBKBMHHLE();
    // public System.Void KIBDAOLFNJM()
    // Offset: 0x2050C40
    void KIBDAOLFNJM();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x2050E64
    void IDOCJGNLNFL();
    // public System.Void BIIPJEPNIBH()
    // Offset: 0x2050EBC
    void BIIPJEPNIBH();
    // public System.Void PNLNOOIGCBK()
    // Offset: 0x20510DC
    void PNLNOOIGCBK();
    // public System.Void JMPBEJDKDGJ()
    // Offset: 0x2051300
    void JMPBEJDKDGJ();
    // public System.Void DBOKLBMPMJO()
    // Offset: 0x2051524
    void DBOKLBMPMJO();
    // public System.Void GILLJBIMGNJ()
    // Offset: 0x2051748
    void GILLJBIMGNJ();
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x205196C
    void FGIFGGNGKPK();
    // public System.Void GLJFFHNKKPI()
    // Offset: 0x20519C4
    void GLJFFHNKKPI();
    // public System.Void FMFOGAKFJGJ()
    // Offset: 0x2051BE8
    void FMFOGAKFJGJ();
    // private System.Void FNGLOIECKDG()
    // Offset: 0x2051E0C
    void FNGLOIECKDG();
    // public System.Void DKILGFBCKHD()
    // Offset: 0x2051E64
    void DKILGFBCKHD();
    // public System.Void FNAJKCKMHHJ()
    // Offset: 0x2052088
    void FNAJKCKMHHJ();
    // private System.Void Start()
    // Offset: 0x20522A8
    void Start();
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x2052300
    void EIIKFEMCNKM();
    // public System.Void JFBOMHHGFDN()
    // Offset: 0x2052358
    void JFBOMHHGFDN();
    // public System.Void GHHAMAIIFFG()
    // Offset: 0x205257C
    void GHHAMAIIFFG();
  }; // MagicalActual.CorruptedNatureBrute
  #pragma pack(pop)
  static check_size<sizeof(CorruptedNatureBrute), 40 + sizeof(::StringW)> __MagicalActual_CorruptedNatureBruteSizeCheck;
  static_assert(sizeof(CorruptedNatureBrute) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::PKINMLEHJFB
// Il2CppName: PKINMLEHJFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::PKINMLEHJFB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "PKINMLEHJFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::HJADIOCKECN
// Il2CppName: HJADIOCKECN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::HJADIOCKECN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "HJADIOCKECN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::CEPPICBNJOI
// Il2CppName: CEPPICBNJOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::CEPPICBNJOI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "CEPPICBNJOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::IBMKENLAMGB
// Il2CppName: IBMKENLAMGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::IBMKENLAMGB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "IBMKENLAMGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::KIBDAOLFNJM
// Il2CppName: KIBDAOLFNJM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::KIBDAOLFNJM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "KIBDAOLFNJM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::BIIPJEPNIBH
// Il2CppName: BIIPJEPNIBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::BIIPJEPNIBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "BIIPJEPNIBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::PNLNOOIGCBK
// Il2CppName: PNLNOOIGCBK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::PNLNOOIGCBK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "PNLNOOIGCBK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::JMPBEJDKDGJ
// Il2CppName: JMPBEJDKDGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::JMPBEJDKDGJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "JMPBEJDKDGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::DBOKLBMPMJO
// Il2CppName: DBOKLBMPMJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::DBOKLBMPMJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "DBOKLBMPMJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::GILLJBIMGNJ
// Il2CppName: GILLJBIMGNJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::GILLJBIMGNJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "GILLJBIMGNJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::GLJFFHNKKPI
// Il2CppName: GLJFFHNKKPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::GLJFFHNKKPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "GLJFFHNKKPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::FMFOGAKFJGJ
// Il2CppName: FMFOGAKFJGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::FMFOGAKFJGJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "FMFOGAKFJGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::DKILGFBCKHD
// Il2CppName: DKILGFBCKHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::DKILGFBCKHD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "DKILGFBCKHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::FNAJKCKMHHJ
// Il2CppName: FNAJKCKMHHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::FNAJKCKMHHJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "FNAJKCKMHHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::JFBOMHHGFDN
// Il2CppName: JFBOMHHGFDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::JFBOMHHGFDN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "JFBOMHHGFDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::CorruptedNatureBrute::GHHAMAIIFFG
// Il2CppName: GHHAMAIIFFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::CorruptedNatureBrute::*)()>(&MagicalActual::CorruptedNatureBrute::GHHAMAIIFFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::CorruptedNatureBrute*), "GHHAMAIIFFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};