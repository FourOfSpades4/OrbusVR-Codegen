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
  // Forward declaring type: NetEntity
  class NetEntity;
  // Forward declaring type: PetExplorerTreat
  class PetExplorerTreat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: WaitForSeconds
  class WaitForSeconds;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PhysicsInteractable
  class PhysicsInteractable;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PetExplorerStation
  class PetExplorerStation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PetExplorerStation);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PetExplorerStation*, "MagicalActual", "PetExplorerStation");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PetExplorerStation
  // [TokenAttribute] Offset: FFFFFFFF
  class PetExplorerStation : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::PetExplorerStation::$ResetTreatPosition$d__13
    class $ResetTreatPosition$d__13;
    // Nested type: ::MagicalActual::PetExplorerStation::$$c
    class $$c;
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE4B78
    // private MagicalActual.NetEntity <JANFCAJMFMP>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::NetEntity* JANFCAJMFMP;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private UnityEngine.Transform treatPosition
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* treatPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private PhysicsInteractable DNHFHHGPOAL
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PhysicsInteractable* DNHFHHGPOAL;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PhysicsInteractable*) == 0x8);
    // private System.Boolean OKGNEKOLAIB
    // Size: 0x1
    // Offset: 0x38
    bool OKGNEKOLAIB;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: OKGNEKOLAIB and: DGKNBAHBCDF
    char __padding4[0x7] = {};
    // private UnityEngine.Coroutine DGKNBAHBCDF
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Coroutine* DGKNBAHBCDF;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private UnityEngine.WaitForSeconds LHPNMKFBNAB
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::WaitForSeconds* LHPNMKFBNAB;
    // Field size check
    static_assert(sizeof(::UnityEngine::WaitForSeconds*) == 0x8);
    // public MagicalActual.PetExplorerTreat treat
    // Size: 0x8
    // Offset: 0x50
    ::MagicalActual::PetExplorerTreat* treat;
    // Field size check
    static_assert(sizeof(::MagicalActual::PetExplorerTreat*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity <JANFCAJMFMP>k__BackingField
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_$JANFCAJMFMP$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform treatPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_treatPosition();
    // Get instance field reference: private PhysicsInteractable DNHFHHGPOAL
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PhysicsInteractable*& dyn_DNHFHHGPOAL();
    // Get instance field reference: private System.Boolean OKGNEKOLAIB
    [[deprecated("Use field access instead!")]] bool& dyn_OKGNEKOLAIB();
    // Get instance field reference: private UnityEngine.Coroutine DGKNBAHBCDF
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn_DGKNBAHBCDF();
    // Get instance field reference: private UnityEngine.WaitForSeconds LHPNMKFBNAB
    [[deprecated("Use field access instead!")]] ::UnityEngine::WaitForSeconds*& dyn_LHPNMKFBNAB();
    // Get instance field reference: public MagicalActual.PetExplorerTreat treat
    [[deprecated("Use field access instead!")]] ::MagicalActual::PetExplorerTreat*& dyn_treat();
    // private System.Collections.IEnumerator LPMJAJDFKJB()
    // Offset: 0xD8FFBC
    ::System::Collections::IEnumerator* LPMJAJDFKJB();
    // private System.Void LIFGLIHALIG()
    // Offset: 0xD9005C
    void LIFGLIHALIG();
    // public System.Void PEDJPHKCAFL()
    // Offset: 0xD901EC
    void PEDJPHKCAFL();
    // private System.Void PEBEGKADCEL(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD90300
    void PEBEGKADCEL(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0xD90308
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0xD9044C
    void NNDKJCJFIAK();
    // private System.Void OIKLNHKAKKF(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD904DC
    void OIKLNHKAKKF(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // private System.Void HBBPONBMNIM(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD904E4
    void HBBPONBMNIM(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0xD904EC
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NGCGKDPPDBG()
    // Offset: 0xD90630
    void NGCGKDPPDBG();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0xD9083C
    void DGJGAFKDIDK();
    // public MagicalActual.NetEntity EGFAGMEPAPB()
    // Offset: 0xD908CC
    ::MagicalActual::NetEntity* EGFAGMEPAPB();
    // private System.Void GPFBGGFPINB()
    // Offset: 0xD908D4
    void GPFBGGFPINB();
    // private System.Void CLKPBFHCJNN(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD90964
    void CLKPBFHCJNN(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // private System.Void Update()
    // Offset: 0xD9096C
    void Update();
    // private System.Void LCCEMGEHNHG(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD90444
    void LCCEMGEHNHG(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // private System.Void FLAMKKBMADJ(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD90628
    void FLAMKKBMADJ(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // public System.Void AKAJICBGGIG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0xD90B00
    void AKAJICBGGIG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void HHBGMBFILAI()
    // Offset: 0xD90C3C
    void HHBGMBFILAI();
    // public System.Void JPONEBHBCPE()
    // Offset: 0xD90D48
    void JPONEBHBCPE();
    // public System.Void .ctor()
    // Offset: 0xD90E54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PetExplorerStation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PetExplorerStation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PetExplorerStation*, creationType>()));
    }
    // public System.Void PFCACIIBAKC()
    // Offset: 0xD90EAC
    void PFCACIIBAKC();
    // private System.Collections.IEnumerator OPEOGOEOOLO()
    // Offset: 0xD907C8
    ::System::Collections::IEnumerator* OPEOGOEOOLO();
    // public System.Void OFDMFGNMEOP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0xD90FB8
    void OFDMFGNMEOP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void BDEDGNGMHMN()
    // Offset: 0xD910F4
    void BDEDGNGMHMN();
    // private System.Void GHBOEBHBEEJ()
    // Offset: 0xD91184
    void GHBOEBHBEEJ();
    // private System.Void DHKPPAENLLA(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD9131C
    void DHKPPAENLLA(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // private System.Void HKINNMLBMMG()
    // Offset: 0xD91324
    void HKINNMLBMMG();
    // private System.Void GECHLDPLPCC()
    // Offset: 0xD913B4
    void GECHLDPLPCC();
    // private System.Void JBCNDKPFMBF(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0xD91444
    void JBCNDKPFMBF(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // public System.Void TreatConsumed()
    // Offset: 0xD9144C
    void TreatConsumed();
    // private System.Void KBDGAPMJGLG()
    // Offset: 0xD91558
    void KBDGAPMJGLG();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0xD915E8
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public MagicalActual.NetEntity get_myEntity()
    // Offset: 0xD902F8
    ::MagicalActual::NetEntity* get_myEntity();
    // private System.Void Start()
    // Offset: 0xD91724
    void Start();
    // private System.Void DMNMEKAJBNA()
    // Offset: 0xD917B0
    void DMNMEKAJBNA();
    // public MagicalActual.NetEntity JKOLNACNGMC()
    // Offset: 0xD91948
    ::MagicalActual::NetEntity* JKOLNACNGMC();
    // private System.Void JNHNEBOHOIB()
    // Offset: 0xD91950
    void JNHNEBOHOIB();
  }; // MagicalActual.PetExplorerStation
  #pragma pack(pop)
  static check_size<sizeof(PetExplorerStation), 80 + sizeof(::MagicalActual::PetExplorerTreat*)> __MagicalActual_PetExplorerStationSizeCheck;
  static_assert(sizeof(PetExplorerStation) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::LPMJAJDFKJB
// Il2CppName: LPMJAJDFKJB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::LPMJAJDFKJB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "LPMJAJDFKJB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::LIFGLIHALIG
// Il2CppName: LIFGLIHALIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::LIFGLIHALIG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "LIFGLIHALIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::PEDJPHKCAFL
// Il2CppName: PEDJPHKCAFL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::PEDJPHKCAFL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "PEDJPHKCAFL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::PEBEGKADCEL
// Il2CppName: PEBEGKADCEL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::PEBEGKADCEL)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "PEBEGKADCEL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::OIKLNHKAKKF
// Il2CppName: OIKLNHKAKKF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::OIKLNHKAKKF)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "OIKLNHKAKKF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::HBBPONBMNIM
// Il2CppName: HBBPONBMNIM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::HBBPONBMNIM)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "HBBPONBMNIM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::NGCGKDPPDBG
// Il2CppName: NGCGKDPPDBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::NGCGKDPPDBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "NGCGKDPPDBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::EGFAGMEPAPB
// Il2CppName: EGFAGMEPAPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::NetEntity* (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::EGFAGMEPAPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "EGFAGMEPAPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::CLKPBFHCJNN
// Il2CppName: CLKPBFHCJNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::CLKPBFHCJNN)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "CLKPBFHCJNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::LCCEMGEHNHG
// Il2CppName: LCCEMGEHNHG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::LCCEMGEHNHG)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "LCCEMGEHNHG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::FLAMKKBMADJ
// Il2CppName: FLAMKKBMADJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::FLAMKKBMADJ)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "FLAMKKBMADJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::AKAJICBGGIG
// Il2CppName: AKAJICBGGIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::AKAJICBGGIG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "AKAJICBGGIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::HHBGMBFILAI
// Il2CppName: HHBGMBFILAI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::HHBGMBFILAI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "HHBGMBFILAI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::JPONEBHBCPE
// Il2CppName: JPONEBHBCPE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::JPONEBHBCPE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "JPONEBHBCPE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::PFCACIIBAKC
// Il2CppName: PFCACIIBAKC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::PFCACIIBAKC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "PFCACIIBAKC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::OPEOGOEOOLO
// Il2CppName: OPEOGOEOOLO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::OPEOGOEOOLO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "OPEOGOEOOLO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::OFDMFGNMEOP
// Il2CppName: OFDMFGNMEOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::OFDMFGNMEOP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "OFDMFGNMEOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::GHBOEBHBEEJ
// Il2CppName: GHBOEBHBEEJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::GHBOEBHBEEJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "GHBOEBHBEEJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::DHKPPAENLLA
// Il2CppName: DHKPPAENLLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::DHKPPAENLLA)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "DHKPPAENLLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::JBCNDKPFMBF
// Il2CppName: JBCNDKPFMBF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::JBCNDKPFMBF)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "JBCNDKPFMBF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::TreatConsumed
// Il2CppName: TreatConsumed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::TreatConsumed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "TreatConsumed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)(::MagicalActual::NetEntity*)>(&MagicalActual::PetExplorerStation::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::get_myEntity
// Il2CppName: get_myEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::NetEntity* (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::get_myEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "get_myEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::DMNMEKAJBNA
// Il2CppName: DMNMEKAJBNA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::DMNMEKAJBNA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "DMNMEKAJBNA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::JKOLNACNGMC
// Il2CppName: JKOLNACNGMC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::NetEntity* (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::JKOLNACNGMC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "JKOLNACNGMC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PetExplorerStation::JNHNEBOHOIB
// Il2CppName: JNHNEBOHOIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PetExplorerStation::*)()>(&MagicalActual::PetExplorerStation::JNHNEBOHOIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PetExplorerStation*), "JNHNEBOHOIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};