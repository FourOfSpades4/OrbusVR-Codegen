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
  // Forward declaring type: PlayerCharacter
  class PlayerCharacter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ClickedEventArgs
  struct ClickedEventArgs;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: InventoryManager
  class InventoryManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::InventoryManager);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::InventoryManager*, "MagicalActual", "InventoryManager");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.InventoryManager
  // [TokenAttribute] Offset: FFFFFFFF
  class InventoryManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.PlayerCharacter HCFELEODBLD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::PlayerCharacter* HCFELEODBLD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerCharacter*) == 0x8);
    // private System.Boolean JPLPKKGMPCD
    // Size: 0x1
    // Offset: 0x20
    bool JPLPKKGMPCD;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: JPLPKKGMPCD and: inventoryPrefab
    char __padding1[0x7] = {};
    // public UnityEngine.GameObject inventoryPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* inventoryPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject ELOAJHCMGCB
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* ELOAJHCMGCB;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Animator MOHMBJNGKGG
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Animator* MOHMBJNGKGG;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.PlayerCharacter HCFELEODBLD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerCharacter*& dyn_HCFELEODBLD();
    // Get instance field reference: private System.Boolean JPLPKKGMPCD
    [[deprecated("Use field access instead!")]] bool& dyn_JPLPKKGMPCD();
    // Get instance field reference: public UnityEngine.GameObject inventoryPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_inventoryPrefab();
    // Get instance field reference: private UnityEngine.GameObject ELOAJHCMGCB
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_ELOAJHCMGCB();
    // Get instance field reference: private UnityEngine.Animator MOHMBJNGKGG
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_MOHMBJNGKGG();
    // public System.Void NNPMKGCDBCJ()
    // Offset: 0x1266774
    void NNPMKGCDBCJ();
    // public System.Void FIFFCBKKOAD()
    // Offset: 0x1266A2C
    void FIFFCBKKOAD();
    // public System.Void BIHJGGHGKPF()
    // Offset: 0x1266CE8
    void BIHJGGHGKPF();
    // public System.Void PGBEEOFCGDE()
    // Offset: 0x1266D80
    void PGBEEOFCGDE();
    // public System.Void ONDHIBCIOGM()
    // Offset: 0x126703C
    void ONDHIBCIOGM();
    // public System.Void Open()
    // Offset: 0x12672F4
    void Open();
    // private System.Void ECAJHPMGCNG(System.Object FOIEAOKBGLM, ClickedEventArgs LMKCFANDAKH)
    // Offset: 0x12675B0
    void ECAJHPMGCNG(::Il2CppObject* FOIEAOKBGLM, ::GlobalNamespace::ClickedEventArgs LMKCFANDAKH);
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x1267658
    void MLGBKBMHHLE();
    // private System.Void IDOCJGNLNFL()
    // Offset: 0x1267778
    void IDOCJGNLNFL();
    // public System.Void BHLCOGLBBDC()
    // Offset: 0x1267898
    void BHLCOGLBBDC();
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x1267930
    void KBDGAPMJGLG();
    // private System.Void Start()
    // Offset: 0x1267A50
    void Start();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x1267B70
    void GECHLDPLPCC();
    // public System.Void BGCFAKHPAIG()
    // Offset: 0x1267C90
    void BGCFAKHPAIG();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x1267D28
    void IPIFMKAGODD();
    // public System.Void MLLEFFGDJLP()
    // Offset: 0x1267E48
    void MLLEFFGDJLP();
    // public System.Void FOBKOLECINF()
    // Offset: 0x1267EEC
    void FOBKOLECINF();
    // public System.Void NNOALJMIHMH()
    // Offset: 0x1267F90
    void NNOALJMIHMH();
    // public System.Void JIBIJEJOLPM()
    // Offset: 0x1268028
    void JIBIJEJOLPM();
    // public System.Void .ctor()
    // Offset: 0x12682E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InventoryManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::InventoryManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InventoryManager*, creationType>()));
    }
    // private System.Void GPFBGGFPINB()
    // Offset: 0x12682EC
    void GPFBGGFPINB();
    // public System.Void KFAMCFCDJHL()
    // Offset: 0x126840C
    void KFAMCFCDJHL();
    // public System.Void Close()
    // Offset: 0x12684A4
    void Close();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x126853C
    void DGJGAFKDIDK();
    // private System.Void AFIACGLCIPB()
    // Offset: 0x126865C
    void AFIACGLCIPB();
    // public System.Void MNDPGKFEJKE()
    // Offset: 0x12675C0
    void MNDPGKFEJKE();
    // private System.Void CBOPENHJIIJ(System.Object FOIEAOKBGLM, ClickedEventArgs LMKCFANDAKH)
    // Offset: 0x126877C
    void CBOPENHJIIJ(::Il2CppObject* FOIEAOKBGLM, ::GlobalNamespace::ClickedEventArgs LMKCFANDAKH);
    // private System.Void BKDHMKNNOEH(System.Object FOIEAOKBGLM, ClickedEventArgs LMKCFANDAKH)
    // Offset: 0x1268A44
    void BKDHMKNNOEH(::Il2CppObject* FOIEAOKBGLM, ::GlobalNamespace::ClickedEventArgs LMKCFANDAKH);
    // private System.Void OACMGPBCPEL()
    // Offset: 0x1268A54
    void OACMGPBCPEL();
    // public System.Void GLOFOHIIMOM()
    // Offset: 0x1268B74
    void GLOFOHIIMOM();
    // private System.Void MMDGFDEJPCM(System.Object FOIEAOKBGLM, ClickedEventArgs LMKCFANDAKH)
    // Offset: 0x1268E30
    void MMDGFDEJPCM(::Il2CppObject* FOIEAOKBGLM, ::GlobalNamespace::ClickedEventArgs LMKCFANDAKH);
    // public System.Void AEALKJBPCKE()
    // Offset: 0x12690F8
    void AEALKJBPCKE();
    // public System.Void FLHADEKFPEN()
    // Offset: 0x1269190
    void FLHADEKFPEN();
    // public System.Void AOCGBOFDGJM()
    // Offset: 0x126878C
    void AOCGBOFDGJM();
    // public System.Void GBBLOFBCEHC()
    // Offset: 0x1268E40
    void GBBLOFBCEHC();
    // private System.Void JENOIOBAEPG()
    // Offset: 0x126944C
    void JENOIOBAEPG();
    // private System.Void AHPDCIGFMJI()
    // Offset: 0x126956C
    void AHPDCIGFMJI();
    // public System.Void CHOPDENADBC()
    // Offset: 0x126968C
    void CHOPDENADBC();
    // private System.Void GOGLIDAAGGF(System.Object FOIEAOKBGLM, ClickedEventArgs LMKCFANDAKH)
    // Offset: 0x1269724
    void GOGLIDAAGGF(::Il2CppObject* FOIEAOKBGLM, ::GlobalNamespace::ClickedEventArgs LMKCFANDAKH);
    // private System.Void FNGLOIECKDG()
    // Offset: 0x1269734
    void FNGLOIECKDG();
  }; // MagicalActual.InventoryManager
  #pragma pack(pop)
  static check_size<sizeof(InventoryManager), 56 + sizeof(::UnityEngine::Animator*)> __MagicalActual_InventoryManagerSizeCheck;
  static_assert(sizeof(InventoryManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::InventoryManager::NNPMKGCDBCJ
// Il2CppName: NNPMKGCDBCJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::NNPMKGCDBCJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "NNPMKGCDBCJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::FIFFCBKKOAD
// Il2CppName: FIFFCBKKOAD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::FIFFCBKKOAD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "FIFFCBKKOAD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::BIHJGGHGKPF
// Il2CppName: BIHJGGHGKPF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::BIHJGGHGKPF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "BIHJGGHGKPF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::PGBEEOFCGDE
// Il2CppName: PGBEEOFCGDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::PGBEEOFCGDE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "PGBEEOFCGDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::ONDHIBCIOGM
// Il2CppName: ONDHIBCIOGM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::ONDHIBCIOGM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "ONDHIBCIOGM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::Open)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::ECAJHPMGCNG
// Il2CppName: ECAJHPMGCNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)(::Il2CppObject*, ::GlobalNamespace::ClickedEventArgs)>(&MagicalActual::InventoryManager::ECAJHPMGCNG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* LMKCFANDAKH = &::il2cpp_utils::GetClassFromName("", "ClickedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "ECAJHPMGCNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM, LMKCFANDAKH});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::IDOCJGNLNFL
// Il2CppName: IDOCJGNLNFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::IDOCJGNLNFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "IDOCJGNLNFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::BHLCOGLBBDC
// Il2CppName: BHLCOGLBBDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::BHLCOGLBBDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "BHLCOGLBBDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::BGCFAKHPAIG
// Il2CppName: BGCFAKHPAIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::BGCFAKHPAIG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "BGCFAKHPAIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::MLLEFFGDJLP
// Il2CppName: MLLEFFGDJLP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::MLLEFFGDJLP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "MLLEFFGDJLP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::FOBKOLECINF
// Il2CppName: FOBKOLECINF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::FOBKOLECINF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "FOBKOLECINF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::NNOALJMIHMH
// Il2CppName: NNOALJMIHMH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::NNOALJMIHMH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "NNOALJMIHMH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::JIBIJEJOLPM
// Il2CppName: JIBIJEJOLPM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::JIBIJEJOLPM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "JIBIJEJOLPM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::InventoryManager::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::KFAMCFCDJHL
// Il2CppName: KFAMCFCDJHL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::KFAMCFCDJHL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "KFAMCFCDJHL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::MNDPGKFEJKE
// Il2CppName: MNDPGKFEJKE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::MNDPGKFEJKE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "MNDPGKFEJKE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::CBOPENHJIIJ
// Il2CppName: CBOPENHJIIJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)(::Il2CppObject*, ::GlobalNamespace::ClickedEventArgs)>(&MagicalActual::InventoryManager::CBOPENHJIIJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* LMKCFANDAKH = &::il2cpp_utils::GetClassFromName("", "ClickedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "CBOPENHJIIJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM, LMKCFANDAKH});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::BKDHMKNNOEH
// Il2CppName: BKDHMKNNOEH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)(::Il2CppObject*, ::GlobalNamespace::ClickedEventArgs)>(&MagicalActual::InventoryManager::BKDHMKNNOEH)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* LMKCFANDAKH = &::il2cpp_utils::GetClassFromName("", "ClickedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "BKDHMKNNOEH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM, LMKCFANDAKH});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::OACMGPBCPEL
// Il2CppName: OACMGPBCPEL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::OACMGPBCPEL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "OACMGPBCPEL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::GLOFOHIIMOM
// Il2CppName: GLOFOHIIMOM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::GLOFOHIIMOM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "GLOFOHIIMOM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::MMDGFDEJPCM
// Il2CppName: MMDGFDEJPCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)(::Il2CppObject*, ::GlobalNamespace::ClickedEventArgs)>(&MagicalActual::InventoryManager::MMDGFDEJPCM)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* LMKCFANDAKH = &::il2cpp_utils::GetClassFromName("", "ClickedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "MMDGFDEJPCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM, LMKCFANDAKH});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::AEALKJBPCKE
// Il2CppName: AEALKJBPCKE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::AEALKJBPCKE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "AEALKJBPCKE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::FLHADEKFPEN
// Il2CppName: FLHADEKFPEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::FLHADEKFPEN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "FLHADEKFPEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::AOCGBOFDGJM
// Il2CppName: AOCGBOFDGJM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::AOCGBOFDGJM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "AOCGBOFDGJM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::GBBLOFBCEHC
// Il2CppName: GBBLOFBCEHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::GBBLOFBCEHC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "GBBLOFBCEHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::AHPDCIGFMJI
// Il2CppName: AHPDCIGFMJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::AHPDCIGFMJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "AHPDCIGFMJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::CHOPDENADBC
// Il2CppName: CHOPDENADBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::CHOPDENADBC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "CHOPDENADBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::GOGLIDAAGGF
// Il2CppName: GOGLIDAAGGF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)(::Il2CppObject*, ::GlobalNamespace::ClickedEventArgs)>(&MagicalActual::InventoryManager::GOGLIDAAGGF)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* LMKCFANDAKH = &::il2cpp_utils::GetClassFromName("", "ClickedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "GOGLIDAAGGF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM, LMKCFANDAKH});
  }
};
// Writing MetadataGetter for method: MagicalActual::InventoryManager::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::InventoryManager::*)()>(&MagicalActual::InventoryManager::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::InventoryManager*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
