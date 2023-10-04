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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Monster
  class Monster;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: M_TraduBoss6
  class M_TraduBoss6;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::M_TraduBoss6);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_TraduBoss6*, "MagicalActual", "M_TraduBoss6");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_TraduBoss6
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD71BC
  class M_TraduBoss6 : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject vfxSlash
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* vfxSlash;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x27555B8
    void EPCHNEGNKNF();
    // public System.Void GLJFFHNKKPI()
    // Offset: 0x2755610
    void GLJFFHNKKPI();
    // private System.Void Start()
    // Offset: 0x2755834
    void Start();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x275588C
    void CBMDGNKFPIO();
    // private System.Void AFIACGLCIPB()
    // Offset: 0x27558E4
    void AFIACGLCIPB();
    // public System.Void CEPPICBNJOI()
    // Offset: 0x275593C
    void CEPPICBNJOI();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x2755B60
    void LBIKOKCCILF();
    // private System.Void GPFBGGFPINB()
    // Offset: 0x2755BB8
    void GPFBGGFPINB();
    // private System.Void NHADFEMILCC()
    // Offset: 0x2755C10
    void NHADFEMILCC();
    // public System.Void GILLJBIMGNJ()
    // Offset: 0x2755C68
    void GILLJBIMGNJ();
    // public System.Void JFDEDDEJJPK()
    // Offset: 0x2755E8C
    void JFDEDDEJJPK();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x27560B0
    void IDOCJGNLNFL();
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x2756108
    void FGIFGGNGKPK();
    // public System.Void DBOKLBMPMJO()
    // Offset: 0x2756160
    void DBOKLBMPMJO();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x2756384
    void GECHLDPLPCC();
    // private System.Void HKINNMLBMMG()
    // Offset: 0x27563DC
    void HKINNMLBMMG();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x2756434
    void IPIFMKAGODD();
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x275648C
    void GHLPBOJJHNG();
    // public System.Void FNAJKCKMHHJ()
    // Offset: 0x27564E4
    void FNAJKCKMHHJ();
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x2756708
    void NNDKJCJFIAK();
    // public System.Void PHMNKLJAEMC()
    // Offset: 0x2756760
    void PHMNKLJAEMC();
    // public System.Void .ctor()
    // Offset: 0x2756984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static M_TraduBoss6* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::M_TraduBoss6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<M_TraduBoss6*, creationType>()));
    }
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x27569DC
    void MLGBKBMHHLE();
    // public System.Void Slash()
    // Offset: 0x2756A34
    void Slash();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x2756C4C
    void KPOAAAHLGLA();
    // private System.Void PFABJJGAOMM()
    // Offset: 0x2756CA4
    void PFABJJGAOMM();
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x2756CFC
    void ABIHCGOKNCL();
    // private System.Void EIIKFEMCNKM()
    // Offset: 0x2756D54
    void EIIKFEMCNKM();
  }; // MagicalActual.M_TraduBoss6
  #pragma pack(pop)
  static check_size<sizeof(M_TraduBoss6), 40 + sizeof(::StringW)> __MagicalActual_M_TraduBoss6SizeCheck;
  static_assert(sizeof(M_TraduBoss6) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::GLJFFHNKKPI
// Il2CppName: GLJFFHNKKPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::GLJFFHNKKPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "GLJFFHNKKPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::CEPPICBNJOI
// Il2CppName: CEPPICBNJOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::CEPPICBNJOI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "CEPPICBNJOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::GILLJBIMGNJ
// Il2CppName: GILLJBIMGNJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::GILLJBIMGNJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "GILLJBIMGNJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::JFDEDDEJJPK
// Il2CppName: JFDEDDEJJPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::JFDEDDEJJPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "JFDEDDEJJPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::DBOKLBMPMJO
// Il2CppName: DBOKLBMPMJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::DBOKLBMPMJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "DBOKLBMPMJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::FNAJKCKMHHJ
// Il2CppName: FNAJKCKMHHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::FNAJKCKMHHJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "FNAJKCKMHHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::PHMNKLJAEMC
// Il2CppName: PHMNKLJAEMC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::PHMNKLJAEMC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "PHMNKLJAEMC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::PFABJJGAOMM
// Il2CppName: PFABJJGAOMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::PFABJJGAOMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "PFABJJGAOMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_TraduBoss6::EIIKFEMCNKM
// Il2CppName: EIIKFEMCNKM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_TraduBoss6::*)()>(&MagicalActual::M_TraduBoss6::EIIKFEMCNKM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_TraduBoss6*), "EIIKFEMCNKM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};