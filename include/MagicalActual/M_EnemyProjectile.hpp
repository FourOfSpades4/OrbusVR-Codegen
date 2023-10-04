// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IPooling
#include "GlobalNamespace/IPooling.hpp"
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
  // Forward declaring type: NetEntity
  class NetEntity;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: M_EnemyProjectile
  class M_EnemyProjectile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::M_EnemyProjectile);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_EnemyProjectile*, "MagicalActual", "M_EnemyProjectile");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_EnemyProjectile
  // [TokenAttribute] Offset: FFFFFFFF
  class M_EnemyProjectile : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IPooling*/ {
    public:
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // public UnityEngine.GameObject[] vfxObjs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> vfxObjs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] explosionObjs
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> explosionObjs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private System.Byte KEGKEPCLAJP
    // Size: 0x1
    // Offset: 0x38
    uint8_t KEGKEPCLAJP;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: KEGKEPCLAJP and: CMLGFACMOLD
    char __padding4[0x7] = {};
    // private UnityEngine.GameObject CMLGFACMOLD
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* CMLGFACMOLD;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPooling
    operator ::GlobalNamespace::IPooling() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPooling*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: public UnityEngine.GameObject[] vfxObjs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_vfxObjs();
    // Get instance field reference: public UnityEngine.GameObject[] explosionObjs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_explosionObjs();
    // Get instance field reference: private System.Byte KEGKEPCLAJP
    [[deprecated("Use field access instead!")]] uint8_t& dyn_KEGKEPCLAJP();
    // Get instance field reference: private UnityEngine.GameObject CMLGFACMOLD
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_CMLGFACMOLD();
    // public System.Void PoolingReset()
    // Offset: 0x24B7164
    void PoolingReset();
    // public System.Void AMBHFINDKPK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x24B7214
    void AMBHFINDKPK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GAOFEAPPLNN(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B7354
    void GAOFEAPPLNN(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void JBDJMJPHLLL(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B7650
    void JBDJMJPHLLL(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void GAGGDPMKEEK()
    // Offset: 0x24B7950
    void GAGGDPMKEEK();
    // public System.Void EBJDLAIJJJE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x24B7A00
    void EBJDLAIJJJE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void Start()
    // Offset: 0x24B7B40
    void Start();
    // public System.Void AGKHMBHBNFM(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x24B7B44
    void AGKHMBHBNFM(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x24B7C84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static M_EnemyProjectile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::M_EnemyProjectile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<M_EnemyProjectile*, creationType>()));
    }
    // private System.Void LNMMKFLJLKJ(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B7CDC
    void LNMMKFLJLKJ(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void IAGHKONNJJC()
    // Offset: 0x24B7FD8
    void IAGHKONNJJC();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x24B808C
    void MLGBKBMHHLE();
    // public System.Void BFLDICJBCGK()
    // Offset: 0x24B8090
    void BFLDICJBCGK();
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x24B8144
    void NNDKJCJFIAK();
    // private System.Void AMIGPBKBDCG(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x24B8148
    void AMIGPBKBDCG(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x24B8398
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BMGBHICJBNA(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x24B84D8
    void BMGBHICJBNA(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void GGOCGGBDGPI(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B8728
    void GGOCGGBDGPI(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void EJPBJNNMKNN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x24B8A24
    void EJPBJNNMKNN(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void GAEBLIBPFAE()
    // Offset: 0x24B8C6C
    void GAEBLIBPFAE();
    // private System.Void FBNBNLALDGI(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B8D20
    void FBNBNLALDGI(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DMDBBBHCPMG(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B9020
    void DMDBBBHCPMG(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void NEMKNLGDEAK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x24B9320
    void NEMKNLGDEAK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AKEEGHHHCKK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x24B9460
    void AKEEGHHHCKK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void NMHJNDPFFAO()
    // Offset: 0x24B95A0
    void NMHJNDPFFAO();
    // private System.Void EBKOPELDJCF(System.Object OMLPNCLFFMJ)
    // Offset: 0x24B9650
    void EBKOPELDJCF(::Il2CppObject* OMLPNCLFFMJ);
  }; // MagicalActual.M_EnemyProjectile
  #pragma pack(pop)
  static check_size<sizeof(M_EnemyProjectile), 64 + sizeof(::UnityEngine::GameObject*)> __MagicalActual_M_EnemyProjectileSizeCheck;
  static_assert(sizeof(M_EnemyProjectile) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::PoolingReset
// Il2CppName: PoolingReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::PoolingReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "PoolingReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::AMBHFINDKPK
// Il2CppName: AMBHFINDKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_EnemyProjectile::AMBHFINDKPK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "AMBHFINDKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::GAOFEAPPLNN
// Il2CppName: GAOFEAPPLNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::GAOFEAPPLNN)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "GAOFEAPPLNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::JBDJMJPHLLL
// Il2CppName: JBDJMJPHLLL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::JBDJMJPHLLL)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "JBDJMJPHLLL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::GAGGDPMKEEK
// Il2CppName: GAGGDPMKEEK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::GAGGDPMKEEK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "GAGGDPMKEEK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::EBJDLAIJJJE
// Il2CppName: EBJDLAIJJJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_EnemyProjectile::EBJDLAIJJJE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "EBJDLAIJJJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::AGKHMBHBNFM
// Il2CppName: AGKHMBHBNFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_EnemyProjectile::AGKHMBHBNFM)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "AGKHMBHBNFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::LNMMKFLJLKJ
// Il2CppName: LNMMKFLJLKJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::LNMMKFLJLKJ)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "LNMMKFLJLKJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::IAGHKONNJJC
// Il2CppName: IAGHKONNJJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::IAGHKONNJJC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "IAGHKONNJJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::BFLDICJBCGK
// Il2CppName: BFLDICJBCGK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::BFLDICJBCGK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "BFLDICJBCGK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::AMIGPBKBDCG
// Il2CppName: AMIGPBKBDCG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::System::Collections::ArrayList*)>(&MagicalActual::M_EnemyProjectile::AMIGPBKBDCG)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "AMIGPBKBDCG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_EnemyProjectile::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::BMGBHICJBNA
// Il2CppName: BMGBHICJBNA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::System::Collections::ArrayList*)>(&MagicalActual::M_EnemyProjectile::BMGBHICJBNA)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "BMGBHICJBNA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::GGOCGGBDGPI
// Il2CppName: GGOCGGBDGPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::GGOCGGBDGPI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "GGOCGGBDGPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::EJPBJNNMKNN
// Il2CppName: EJPBJNNMKNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::System::Collections::ArrayList*)>(&MagicalActual::M_EnemyProjectile::EJPBJNNMKNN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "EJPBJNNMKNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::GAEBLIBPFAE
// Il2CppName: GAEBLIBPFAE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::GAEBLIBPFAE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "GAEBLIBPFAE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::FBNBNLALDGI
// Il2CppName: FBNBNLALDGI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::FBNBNLALDGI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "FBNBNLALDGI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::DMDBBBHCPMG
// Il2CppName: DMDBBBHCPMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::DMDBBBHCPMG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "DMDBBBHCPMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::NEMKNLGDEAK
// Il2CppName: NEMKNLGDEAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_EnemyProjectile::NEMKNLGDEAK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "NEMKNLGDEAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::AKEEGHHHCKK
// Il2CppName: AKEEGHHHCKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::MagicalActual::NetEntity*)>(&MagicalActual::M_EnemyProjectile::AKEEGHHHCKK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "AKEEGHHHCKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::NMHJNDPFFAO
// Il2CppName: NMHJNDPFFAO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)()>(&MagicalActual::M_EnemyProjectile::NMHJNDPFFAO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "NMHJNDPFFAO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::M_EnemyProjectile::EBKOPELDJCF
// Il2CppName: EBKOPELDJCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::M_EnemyProjectile::*)(::Il2CppObject*)>(&MagicalActual::M_EnemyProjectile::EBKOPELDJCF)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::M_EnemyProjectile*), "EBKOPELDJCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
