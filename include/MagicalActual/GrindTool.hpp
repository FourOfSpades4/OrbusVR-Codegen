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
  // Forward declaring type: Grabber
  class Grabber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: GrindTool
  class GrindTool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::GrindTool);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::GrindTool*, "MagicalActual", "GrindTool");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.GrindTool
  // [TokenAttribute] Offset: FFFFFFFF
  class GrindTool : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.PlayerTool FKJHGIFOJKD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::PlayerTool* FKJHGIFOJKD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerTool*) == 0x8);
    // private System.Boolean DNBJEMJMAJC
    // Size: 0x1
    // Offset: 0x20
    bool DNBJEMJMAJC;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean FFDEBPIEPDO
    // Size: 0x1
    // Offset: 0x21
    bool FFDEBPIEPDO;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FFDEBPIEPDO and: model
    char __padding2[0x6] = {};
    // private UnityEngine.GameObject model
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* model;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Vector3 APHKKAKIAKB
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 APHKKAKIAKB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single CKJMGLKIFDD
    // Size: 0x4
    // Offset: 0x3C
    float CKJMGLKIFDD;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.PlayerTool FKJHGIFOJKD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerTool*& dyn_FKJHGIFOJKD();
    // Get instance field reference: private System.Boolean DNBJEMJMAJC
    [[deprecated("Use field access instead!")]] bool& dyn_DNBJEMJMAJC();
    // Get instance field reference: private System.Boolean FFDEBPIEPDO
    [[deprecated("Use field access instead!")]] bool& dyn_FFDEBPIEPDO();
    // Get instance field reference: private UnityEngine.GameObject model
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_model();
    // Get instance field reference: private UnityEngine.Vector3 APHKKAKIAKB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_APHKKAKIAKB();
    // Get instance field reference: private System.Single CKJMGLKIFDD
    [[deprecated("Use field access instead!")]] float& dyn_CKJMGLKIFDD();
    // public System.Void PhysicsInteractableGrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x15A5010
    void PhysicsInteractableGrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x15A50CC
    void MLGBKBMHHLE();
    // public System.Void MKPGOEKKDPA()
    // Offset: 0x15A5124
    void MKPGOEKKDPA();
    // private System.Void Update()
    // Offset: 0x15A5128
    void Update();
    // public System.Void GFHFCGIBIEE(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x15A538C
    void GFHFCGIBIEE(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void SnappedBack()
    // Offset: 0x15A5448
    void SnappedBack();
    // public System.Void DeployGrindTool()
    // Offset: 0x15A5450
    void DeployGrindTool();
    // private System.Void EFLLEILOGJN()
    // Offset: 0x15A5454
    void EFLLEILOGJN();
    // private System.Void CHMCEGMCENL()
    // Offset: 0x15A56B8
    void CHMCEGMCENL();
    // public System.Void BFNGJBLHEJF()
    // Offset: 0x15A5920
    void BFNGJBLHEJF();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x15A592C
    void GECHLDPLPCC();
    // public System.Void .ctor()
    // Offset: 0x15A5984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrindTool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::GrindTool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrindTool*, creationType>()));
    }
    // private System.Void IOHCMGPOHBM(System.Byte KLIPNGBEELK)
    // Offset: 0x15A598C
    void IOHCMGPOHBM(uint8_t KLIPNGBEELK);
    // private System.Void FNAHDBCEMHD(System.Byte KLIPNGBEELK)
    // Offset: 0x15A5990
    void FNAHDBCEMHD(uint8_t KLIPNGBEELK);
    // private System.Void FEAPFNNLNFG(System.Byte KLIPNGBEELK)
    // Offset: 0x15A5994
    void FEAPFNNLNFG(uint8_t KLIPNGBEELK);
    // public System.Void OHBGDJCGEJG()
    // Offset: 0x15A5998
    void OHBGDJCGEJG();
    // public System.Void PhysicsInteractableUngrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x15A59A4
    void PhysicsInteractableUngrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void SignalReceived(System.Byte KLIPNGBEELK)
    // Offset: 0x15A59C8
    void SignalReceived(uint8_t KLIPNGBEELK);
    // public System.Void IDFDGFDAGIG()
    // Offset: 0x15A59CC
    void IDFDGFDAGIG();
    // public System.Void LKHHHCDFENN()
    // Offset: 0x15A59D4
    void LKHHHCDFENN();
    // public System.Void IEMJAEABNGN()
    // Offset: 0x15A59DC
    void IEMJAEABNGN();
    // public System.Void BHNCGLFPILK(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x15A59E0
    void BHNCGLFPILK(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void NHADFEMILCC()
    // Offset: 0x15A5A0C
    void NHADFEMILCC();
    // public System.Void HCPBMPDABGM()
    // Offset: 0x15A5A64
    void HCPBMPDABGM();
    // public System.Void LMMGGIFNEDC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x15A5A6C
    void LMMGGIFNEDC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void Start()
    // Offset: 0x15A5A9C
    void Start();
    // private System.Void OPJFCPJDKOC(System.Byte KLIPNGBEELK)
    // Offset: 0x15A5AF4
    void OPJFCPJDKOC(uint8_t KLIPNGBEELK);
    // public System.Void DGOCGMFOPCH()
    // Offset: 0x15A5AF8
    void DGOCGMFOPCH();
    // public System.Void JMDNCLNIALP()
    // Offset: 0x15A5AFC
    void JMDNCLNIALP();
    // private System.Void JBMANAJHKBI(System.Byte KLIPNGBEELK)
    // Offset: 0x15A5B04
    void JBMANAJHKBI(uint8_t KLIPNGBEELK);
    // private System.Void LEKNJGKKCIE(System.Byte KLIPNGBEELK)
    // Offset: 0x15A5B08
    void LEKNJGKKCIE(uint8_t KLIPNGBEELK);
  }; // MagicalActual.GrindTool
  #pragma pack(pop)
  static check_size<sizeof(GrindTool), 60 + sizeof(float)> __MagicalActual_GrindToolSizeCheck;
  static_assert(sizeof(GrindTool) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::GrindTool::PhysicsInteractableGrip
// Il2CppName: PhysicsInteractableGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::GrindTool::PhysicsInteractableGrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "PhysicsInteractableGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::MKPGOEKKDPA
// Il2CppName: MKPGOEKKDPA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::MKPGOEKKDPA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "MKPGOEKKDPA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::GFHFCGIBIEE
// Il2CppName: GFHFCGIBIEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::GrindTool::GFHFCGIBIEE)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "GFHFCGIBIEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::SnappedBack
// Il2CppName: SnappedBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::SnappedBack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "SnappedBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::DeployGrindTool
// Il2CppName: DeployGrindTool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::DeployGrindTool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "DeployGrindTool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::EFLLEILOGJN
// Il2CppName: EFLLEILOGJN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::EFLLEILOGJN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "EFLLEILOGJN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::CHMCEGMCENL
// Il2CppName: CHMCEGMCENL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::CHMCEGMCENL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "CHMCEGMCENL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::BFNGJBLHEJF
// Il2CppName: BFNGJBLHEJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::BFNGJBLHEJF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "BFNGJBLHEJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::GrindTool::IOHCMGPOHBM
// Il2CppName: IOHCMGPOHBM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::IOHCMGPOHBM)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "IOHCMGPOHBM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::FNAHDBCEMHD
// Il2CppName: FNAHDBCEMHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::FNAHDBCEMHD)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "FNAHDBCEMHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::FEAPFNNLNFG
// Il2CppName: FEAPFNNLNFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::FEAPFNNLNFG)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "FEAPFNNLNFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::OHBGDJCGEJG
// Il2CppName: OHBGDJCGEJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::OHBGDJCGEJG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "OHBGDJCGEJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::PhysicsInteractableUngrip
// Il2CppName: PhysicsInteractableUngrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::GrindTool::PhysicsInteractableUngrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "PhysicsInteractableUngrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::SignalReceived
// Il2CppName: SignalReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::SignalReceived)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "SignalReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::IDFDGFDAGIG
// Il2CppName: IDFDGFDAGIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::IDFDGFDAGIG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "IDFDGFDAGIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::LKHHHCDFENN
// Il2CppName: LKHHHCDFENN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::LKHHHCDFENN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "LKHHHCDFENN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::IEMJAEABNGN
// Il2CppName: IEMJAEABNGN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::IEMJAEABNGN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "IEMJAEABNGN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::BHNCGLFPILK
// Il2CppName: BHNCGLFPILK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::GrindTool::BHNCGLFPILK)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "BHNCGLFPILK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::HCPBMPDABGM
// Il2CppName: HCPBMPDABGM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::HCPBMPDABGM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "HCPBMPDABGM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::LMMGGIFNEDC
// Il2CppName: LMMGGIFNEDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::GrindTool::LMMGGIFNEDC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "LMMGGIFNEDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::OPJFCPJDKOC
// Il2CppName: OPJFCPJDKOC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::OPJFCPJDKOC)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "OPJFCPJDKOC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::DGOCGMFOPCH
// Il2CppName: DGOCGMFOPCH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::DGOCGMFOPCH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "DGOCGMFOPCH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::JMDNCLNIALP
// Il2CppName: JMDNCLNIALP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)()>(&MagicalActual::GrindTool::JMDNCLNIALP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "JMDNCLNIALP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::JBMANAJHKBI
// Il2CppName: JBMANAJHKBI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::JBMANAJHKBI)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "JBMANAJHKBI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::GrindTool::LEKNJGKKCIE
// Il2CppName: LEKNJGKKCIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::GrindTool::*)(uint8_t)>(&MagicalActual::GrindTool::LEKNJGKKCIE)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::GrindTool*), "LEKNJGKKCIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
