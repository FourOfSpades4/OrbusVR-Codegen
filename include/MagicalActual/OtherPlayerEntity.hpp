// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MagicalActual.NetEntity
#include "MagicalActual/NetEntity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerAvatar
  class PlayerAvatar;
  // Forward declaring type: OrbusNetManager
  class OrbusNetManager;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: OtherPlayerEntity
  class OtherPlayerEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::OtherPlayerEntity);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::OtherPlayerEntity*, "MagicalActual", "OtherPlayerEntity");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x150
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.OtherPlayerEntity
  // [TokenAttribute] Offset: FFFFFFFF
  class OtherPlayerEntity : public ::MagicalActual::NetEntity {
    public:
    // Writing base type padding for base size: 0xC9 to desired offset: 0xD0
    char ___base_padding[0x7] = {};
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAE4B08
    // private MagicalActual.PlayerAvatar <PGDKIGPKELF>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    ::MagicalActual::PlayerAvatar* PGDKIGPKELF;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerAvatar*) == 0x8);
    // private UnityEngine.Vector3 MJBLKFEIHGC
    // Size: 0xC
    // Offset: 0xD8
    ::UnityEngine::Vector3 MJBLKFEIHGC;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 AFHPJBIEMLF
    // Size: 0xC
    // Offset: 0xE4
    ::UnityEngine::Vector3 AFHPJBIEMLF;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion AFNKGIEBBNE
    // Size: 0x10
    // Offset: 0xF0
    ::UnityEngine::Quaternion AFNKGIEBBNE;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion MELIFJGOHPH
    // Size: 0x10
    // Offset: 0x100
    ::UnityEngine::Quaternion MELIFJGOHPH;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 HPJOLOLOOHH
    // Size: 0xC
    // Offset: 0x110
    ::UnityEngine::Vector3 HPJOLOLOOHH;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 ALPIMOPMENH
    // Size: 0xC
    // Offset: 0x11C
    ::UnityEngine::Vector3 ALPIMOPMENH;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion NJJKAMHILFE
    // Size: 0x10
    // Offset: 0x128
    ::UnityEngine::Quaternion NJJKAMHILFE;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion JCFMIONFIBG
    // Size: 0x10
    // Offset: 0x138
    ::UnityEngine::Quaternion JCFMIONFIBG;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.String KIPDGIFLKIA
    // Size: 0x8
    // Offset: 0x148
    ::StringW KIPDGIFLKIA;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private MagicalActual.PlayerAvatar <PGDKIGPKELF>k__BackingField
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerAvatar*& dyn_$PGDKIGPKELF$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 MJBLKFEIHGC
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_MJBLKFEIHGC();
    // Get instance field reference: private UnityEngine.Vector3 AFHPJBIEMLF
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_AFHPJBIEMLF();
    // Get instance field reference: private UnityEngine.Quaternion AFNKGIEBBNE
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_AFNKGIEBBNE();
    // Get instance field reference: private UnityEngine.Quaternion MELIFJGOHPH
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_MELIFJGOHPH();
    // Get instance field reference: private UnityEngine.Vector3 HPJOLOLOOHH
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_HPJOLOLOOHH();
    // Get instance field reference: private UnityEngine.Vector3 ALPIMOPMENH
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_ALPIMOPMENH();
    // Get instance field reference: private UnityEngine.Quaternion NJJKAMHILFE
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_NJJKAMHILFE();
    // Get instance field reference: private UnityEngine.Quaternion JCFMIONFIBG
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_JCFMIONFIBG();
    // Get instance field reference: private System.String KIPDGIFLKIA
    [[deprecated("Use field access instead!")]] ::StringW& dyn_KIPDGIFLKIA();
    // private System.Void GBKMOJFOIDE(MagicalActual.PlayerAvatar MMMEIONJJFJ)
    // Offset: 0xFCC3A4
    void GBKMOJFOIDE(::MagicalActual::PlayerAvatar* MMMEIONJJFJ);
    // public System.Void INNAANLOAOH(System.Single JGKDCNPGHOC)
    // Offset: 0xFCC3AC
    void INNAANLOAOH(float JGKDCNPGHOC);
    // public System.Void MCELFJBCODB(System.Single JGKDCNPGHOC)
    // Offset: 0xFCC824
    void MCELFJBCODB(float JGKDCNPGHOC);
    // public System.Void OBGCOPHBFFO(System.IO.BinaryReader CBNPFJGIFIH)
    // Offset: 0xFCCC8C
    void OBGCOPHBFFO(::System::IO::BinaryReader* CBNPFJGIFIH);
    // public System.Void BGKFLCFKKMD(System.Single JGKDCNPGHOC)
    // Offset: 0xFCD4D8
    void BGKFLCFKKMD(float JGKDCNPGHOC);
    // public System.Void JFBHKBAGFMO(System.IO.BinaryReader CBNPFJGIFIH)
    // Offset: 0xFCD930
    void JFBHKBAGFMO(::System::IO::BinaryReader* CBNPFJGIFIH);
    // public MagicalActual.PlayerAvatar DGPLDAPNJGF()
    // Offset: 0xFCCC84
    ::MagicalActual::PlayerAvatar* DGPLDAPNJGF();
    // public System.Void COBDADMMPHM(System.IO.BinaryReader CBNPFJGIFIH)
    // Offset: 0xFCDFF4
    void COBDADMMPHM(::System::IO::BinaryReader* CBNPFJGIFIH);
    // public MagicalActual.PlayerAvatar CFAIDMLGCPK()
    // Offset: 0xFCC80C
    ::MagicalActual::PlayerAvatar* CFAIDMLGCPK();
    // public System.Void PPDHPJEKEFM(System.IO.BinaryReader CBNPFJGIFIH)
    // Offset: 0xFCE6B8
    void PPDHPJEKEFM(::System::IO::BinaryReader* CBNPFJGIFIH);
    // public MagicalActual.PlayerAvatar LIBADBPOGAA()
    // Offset: 0xFCC804
    ::MagicalActual::PlayerAvatar* LIBADBPOGAA();
    // public MagicalActual.PlayerAvatar LPIGKNIOMJE()
    // Offset: 0xFCCC7C
    ::MagicalActual::PlayerAvatar* LPIGKNIOMJE();
    // private System.Void MBIHJCDEBHO(MagicalActual.PlayerAvatar MMMEIONJJFJ)
    // Offset: 0xFCED74
    void MBIHJCDEBHO(::MagicalActual::PlayerAvatar* MMMEIONJJFJ);
    // private System.Void LHPEOLENBDM(MagicalActual.PlayerAvatar MMMEIONJJFJ)
    // Offset: 0xFCED7C
    void LHPEOLENBDM(::MagicalActual::PlayerAvatar* MMMEIONJJFJ);
    // public System.Void ABHMGGMLIGG(System.Single JGKDCNPGHOC)
    // Offset: 0xFCED84
    void ABHMGGMLIGG(float JGKDCNPGHOC);
    // public System.Void LCJOFNIALHG(System.Single JGKDCNPGHOC)
    // Offset: 0xFCF1DC
    void LCJOFNIALHG(float JGKDCNPGHOC);
    // public System.Void FOKBNJGDKFF(System.Single JGKDCNPGHOC)
    // Offset: 0xFCF634
    void FOKBNJGDKFF(float JGKDCNPGHOC);
    // public System.Void AGOEKDDGACJ(System.Single JGKDCNPGHOC)
    // Offset: 0xFCFA88
    void AGOEKDDGACJ(float JGKDCNPGHOC);
    // public System.Void KOJMOPJPDMN(System.Single JGKDCNPGHOC)
    // Offset: 0xFCFEE0
    void KOJMOPJPDMN(float JGKDCNPGHOC);
    // public System.Void HIFCEMDGOOD(System.Single JGKDCNPGHOC)
    // Offset: 0xFD0338
    void HIFCEMDGOOD(float JGKDCNPGHOC);
    // public MagicalActual.PlayerAvatar FBINPCFGFHB()
    // Offset: 0xFCC81C
    ::MagicalActual::PlayerAvatar* FBINPCFGFHB();
    // public MagicalActual.PlayerAvatar EACMELIBKOE()
    // Offset: 0xFCC814
    ::MagicalActual::PlayerAvatar* EACMELIBKOE();
    // public System.Void FKGFPBMOMBG(System.IO.BinaryReader CBNPFJGIFIH)
    // Offset: 0xFD0790
    void FKGFPBMOMBG(::System::IO::BinaryReader* CBNPFJGIFIH);
    // private System.Void PEEEMKCHHJA(MagicalActual.PlayerAvatar MMMEIONJJFJ)
    // Offset: 0xFCD4D0
    void PEEEMKCHHJA(::MagicalActual::PlayerAvatar* MMMEIONJJFJ);
    // private System.Void BAOEPBBLCBC(MagicalActual.PlayerAvatar MMMEIONJJFJ)
    // Offset: 0xFD12A4
    void BAOEPBBLCBC(::MagicalActual::PlayerAvatar* MMMEIONJJFJ);
    // public MagicalActual.PlayerAvatar GEAHBLLPMLH()
    // Offset: 0xFCD350
    ::MagicalActual::PlayerAvatar* GEAHBLLPMLH();
    // public System.Void .ctor(System.UInt16 FANCHPOCDBO, System.UInt16 EDMAIMGFAAC, System.String FHGPCHHPJLB, MagicalActual.OrbusNetManager KPMLFHPFLBL)
    // Offset: 0xFCD358
    // Implemented from: MagicalActual.NetEntity
    // Base method: System.Void NetEntity::.ctor(System.UInt16 FANCHPOCDBO, System.UInt16 EDMAIMGFAAC, System.String FHGPCHHPJLB, MagicalActual.OrbusNetManager KPMLFHPFLBL)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OtherPlayerEntity* New_ctor(uint16_t FANCHPOCDBO, uint16_t EDMAIMGFAAC, ::StringW FHGPCHHPJLB, ::MagicalActual::OrbusNetManager* KPMLFHPFLBL) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::OtherPlayerEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OtherPlayerEntity*, creationType>(FANCHPOCDBO, EDMAIMGFAAC, FHGPCHHPJLB, KPMLFHPFLBL)));
    }
    // public override System.Void KMNKFGOELAE(System.Single JGKDCNPGHOC)
    // Offset: 0xFD0E54
    // Implemented from: MagicalActual.NetEntity
    // Base method: System.Void NetEntity::KMNKFGOELAE(System.Single JGKDCNPGHOC)
    void KMNKFGOELAE(float JGKDCNPGHOC);
  }; // MagicalActual.OtherPlayerEntity
  #pragma pack(pop)
  static check_size<sizeof(OtherPlayerEntity), 328 + sizeof(::StringW)> __MagicalActual_OtherPlayerEntitySizeCheck;
  static_assert(sizeof(OtherPlayerEntity) == 0x150);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::GBKMOJFOIDE
// Il2CppName: GBKMOJFOIDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::MagicalActual::PlayerAvatar*)>(&MagicalActual::OtherPlayerEntity::GBKMOJFOIDE)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "PlayerAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "GBKMOJFOIDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::INNAANLOAOH
// Il2CppName: INNAANLOAOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::INNAANLOAOH)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "INNAANLOAOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::MCELFJBCODB
// Il2CppName: MCELFJBCODB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::MCELFJBCODB)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "MCELFJBCODB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::OBGCOPHBFFO
// Il2CppName: OBGCOPHBFFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::System::IO::BinaryReader*)>(&MagicalActual::OtherPlayerEntity::OBGCOPHBFFO)> {
  static const MethodInfo* get() {
    static auto* CBNPFJGIFIH = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "OBGCOPHBFFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CBNPFJGIFIH});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::BGKFLCFKKMD
// Il2CppName: BGKFLCFKKMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::BGKFLCFKKMD)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "BGKFLCFKKMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::JFBHKBAGFMO
// Il2CppName: JFBHKBAGFMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::System::IO::BinaryReader*)>(&MagicalActual::OtherPlayerEntity::JFBHKBAGFMO)> {
  static const MethodInfo* get() {
    static auto* CBNPFJGIFIH = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "JFBHKBAGFMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CBNPFJGIFIH});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::DGPLDAPNJGF
// Il2CppName: DGPLDAPNJGF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::DGPLDAPNJGF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "DGPLDAPNJGF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::COBDADMMPHM
// Il2CppName: COBDADMMPHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::System::IO::BinaryReader*)>(&MagicalActual::OtherPlayerEntity::COBDADMMPHM)> {
  static const MethodInfo* get() {
    static auto* CBNPFJGIFIH = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "COBDADMMPHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CBNPFJGIFIH});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::CFAIDMLGCPK
// Il2CppName: CFAIDMLGCPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::CFAIDMLGCPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "CFAIDMLGCPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::PPDHPJEKEFM
// Il2CppName: PPDHPJEKEFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::System::IO::BinaryReader*)>(&MagicalActual::OtherPlayerEntity::PPDHPJEKEFM)> {
  static const MethodInfo* get() {
    static auto* CBNPFJGIFIH = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "PPDHPJEKEFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CBNPFJGIFIH});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::LIBADBPOGAA
// Il2CppName: LIBADBPOGAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::LIBADBPOGAA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "LIBADBPOGAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::LPIGKNIOMJE
// Il2CppName: LPIGKNIOMJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::LPIGKNIOMJE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "LPIGKNIOMJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::MBIHJCDEBHO
// Il2CppName: MBIHJCDEBHO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::MagicalActual::PlayerAvatar*)>(&MagicalActual::OtherPlayerEntity::MBIHJCDEBHO)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "PlayerAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "MBIHJCDEBHO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::LHPEOLENBDM
// Il2CppName: LHPEOLENBDM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::MagicalActual::PlayerAvatar*)>(&MagicalActual::OtherPlayerEntity::LHPEOLENBDM)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "PlayerAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "LHPEOLENBDM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::ABHMGGMLIGG
// Il2CppName: ABHMGGMLIGG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::ABHMGGMLIGG)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "ABHMGGMLIGG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::LCJOFNIALHG
// Il2CppName: LCJOFNIALHG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::LCJOFNIALHG)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "LCJOFNIALHG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::FOKBNJGDKFF
// Il2CppName: FOKBNJGDKFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::FOKBNJGDKFF)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "FOKBNJGDKFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::AGOEKDDGACJ
// Il2CppName: AGOEKDDGACJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::AGOEKDDGACJ)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "AGOEKDDGACJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::KOJMOPJPDMN
// Il2CppName: KOJMOPJPDMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::KOJMOPJPDMN)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "KOJMOPJPDMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::HIFCEMDGOOD
// Il2CppName: HIFCEMDGOOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::HIFCEMDGOOD)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "HIFCEMDGOOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::FBINPCFGFHB
// Il2CppName: FBINPCFGFHB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::FBINPCFGFHB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "FBINPCFGFHB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::EACMELIBKOE
// Il2CppName: EACMELIBKOE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::EACMELIBKOE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "EACMELIBKOE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::FKGFPBMOMBG
// Il2CppName: FKGFPBMOMBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::System::IO::BinaryReader*)>(&MagicalActual::OtherPlayerEntity::FKGFPBMOMBG)> {
  static const MethodInfo* get() {
    static auto* CBNPFJGIFIH = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "FKGFPBMOMBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CBNPFJGIFIH});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::PEEEMKCHHJA
// Il2CppName: PEEEMKCHHJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::MagicalActual::PlayerAvatar*)>(&MagicalActual::OtherPlayerEntity::PEEEMKCHHJA)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "PlayerAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "PEEEMKCHHJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::BAOEPBBLCBC
// Il2CppName: BAOEPBBLCBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(::MagicalActual::PlayerAvatar*)>(&MagicalActual::OtherPlayerEntity::BAOEPBBLCBC)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "PlayerAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "BAOEPBBLCBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::GEAHBLLPMLH
// Il2CppName: GEAHBLLPMLH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::PlayerAvatar* (MagicalActual::OtherPlayerEntity::*)()>(&MagicalActual::OtherPlayerEntity::GEAHBLLPMLH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "GEAHBLLPMLH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::OtherPlayerEntity::KMNKFGOELAE
// Il2CppName: KMNKFGOELAE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::OtherPlayerEntity::*)(float)>(&MagicalActual::OtherPlayerEntity::KMNKFGOELAE)> {
  static const MethodInfo* get() {
    static auto* JGKDCNPGHOC = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::OtherPlayerEntity*), "KMNKFGOELAE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{JGKDCNPGHOC});
  }
};
