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
  // Forward declaring type: OrbusAudioParticleController
  class OrbusAudioParticleController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ChaosBat
  class ChaosBat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ChaosBat);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ChaosBat*, "MagicalActual", "ChaosBat");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ChaosBat
  // [TokenAttribute] Offset: FFFFFFFF
  class ChaosBat : public ::UnityEngine::MonoBehaviour {
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
    // private MagicalActual.OrbusAudioParticleController breath
    // Size: 0x8
    // Offset: 0x28
    ::MagicalActual::OrbusAudioParticleController* breath;
    // Field size check
    static_assert(sizeof(::MagicalActual::OrbusAudioParticleController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private MagicalActual.OrbusAudioParticleController breath
    [[deprecated("Use field access instead!")]] ::MagicalActual::OrbusAudioParticleController*& dyn_breath();
    // public System.Void KMPPLBBIMGJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A62564
    void KMPPLBBIMGJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NOODBODJNMF(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A62668
    void NOODBODJNMF(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void EACJHHMJIHH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A6274C
    void EACJHHMJIHH(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void PBEMGGBBDCK()
    // Offset: 0x1A62830
    void PBEMGGBBDCK();
    // private System.Void CNJLBPMFLMO(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A62834
    void CNJLBPMFLMO(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void EBKMGINMPPJ(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A62918
    void EBKMGINMPPJ(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void Start()
    // Offset: 0x1A62A1C
    void Start();
    // private System.Void KMCDFPIAADI(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A62A20
    void KMCDFPIAADI(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x1A62B04
    void GHLPBOJJHNG();
    // private System.Void NEDFCIDMJBB()
    // Offset: 0x1A62B08
    void NEDFCIDMJBB();
    // public System.Void KHOMLKJBDGE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A62B0C
    void KHOMLKJBDGE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void KIDNJNOFOFF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A62C10
    void KIDNJNOFOFF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void HKINNMLBMMG()
    // Offset: 0x1A62D14
    void HKINNMLBMMG();
    // private System.Void OMMNOEPOMMG(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A62D18
    void OMMNOEPOMMG(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void HMLAIEKHBDE(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A62DFC
    void HMLAIEKHBDE(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A62EE0
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void NGPCCKBKJIK(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A62FE4
    void NGPCCKBKJIK(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void AOIAEMNLBND(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A630C8
    void AOIAEMNLBND(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void KFEKEGGEMFF(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A631AC
    void KFEKEGGEMFF(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void NFJANCHLOLE(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A63290
    void NFJANCHLOLE(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void BEONFBMOPEH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A63374
    void BEONFBMOPEH(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void OGALJHFFLHP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A63458
    void OGALJHFFLHP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void AKAJICBGGIG(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A6355C
    void AKAJICBGGIG(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void JOGPGAPOBBK(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A63660
    void JOGPGAPOBBK(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void .ctor()
    // Offset: 0x1A63764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaosBat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ChaosBat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaosBat*, creationType>()));
    }
    // public System.Void OIPLBADJHFI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A637BC
    void OIPLBADJHFI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void GFHPFJHINBN(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A638C0
    void GFHPFJHINBN(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void HKMAPCOKCFC(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A639A4
    void HKMAPCOKCFC(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void EJOIFNCBOAB(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A63A88
    void EJOIFNCBOAB(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void LLLAMDICCPH(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A63B6C
    void LLLAMDICCPH(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void OOLJMDDNNCF(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A63C50
    void OOLJMDDNNCF(::System::Collections::ArrayList* HPEANAHIBAH);
    // private System.Void KDBJMJAPJEI(System.Collections.ArrayList HPEANAHIBAH)
    // Offset: 0x1A63D34
    void KDBJMJAPJEI(::System::Collections::ArrayList* HPEANAHIBAH);
    // public System.Void HMKJKOKPOBP(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1A63E18
    void HMKJKOKPOBP(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JENOIOBAEPG()
    // Offset: 0x1A63F1C
    void JENOIOBAEPG();
  }; // MagicalActual.ChaosBat
  #pragma pack(pop)
  static check_size<sizeof(ChaosBat), 40 + sizeof(::MagicalActual::OrbusAudioParticleController*)> __MagicalActual_ChaosBatSizeCheck;
  static_assert(sizeof(ChaosBat) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ChaosBat::KMPPLBBIMGJ
// Il2CppName: KMPPLBBIMGJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::KMPPLBBIMGJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "KMPPLBBIMGJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::NOODBODJNMF
// Il2CppName: NOODBODJNMF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::NOODBODJNMF)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "NOODBODJNMF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::EACJHHMJIHH
// Il2CppName: EACJHHMJIHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::EACJHHMJIHH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "EACJHHMJIHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)()>(&MagicalActual::ChaosBat::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::CNJLBPMFLMO
// Il2CppName: CNJLBPMFLMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::CNJLBPMFLMO)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "CNJLBPMFLMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::EBKMGINMPPJ
// Il2CppName: EBKMGINMPPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::EBKMGINMPPJ)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "EBKMGINMPPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)()>(&MagicalActual::ChaosBat::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::KMCDFPIAADI
// Il2CppName: KMCDFPIAADI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::KMCDFPIAADI)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "KMCDFPIAADI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)()>(&MagicalActual::ChaosBat::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::NEDFCIDMJBB
// Il2CppName: NEDFCIDMJBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)()>(&MagicalActual::ChaosBat::NEDFCIDMJBB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "NEDFCIDMJBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::KHOMLKJBDGE
// Il2CppName: KHOMLKJBDGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::KHOMLKJBDGE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "KHOMLKJBDGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::KIDNJNOFOFF
// Il2CppName: KIDNJNOFOFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::KIDNJNOFOFF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "KIDNJNOFOFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)()>(&MagicalActual::ChaosBat::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::OMMNOEPOMMG
// Il2CppName: OMMNOEPOMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::OMMNOEPOMMG)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "OMMNOEPOMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::HMLAIEKHBDE
// Il2CppName: HMLAIEKHBDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::HMLAIEKHBDE)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "HMLAIEKHBDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::NGPCCKBKJIK
// Il2CppName: NGPCCKBKJIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::NGPCCKBKJIK)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "NGPCCKBKJIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::AOIAEMNLBND
// Il2CppName: AOIAEMNLBND
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::AOIAEMNLBND)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "AOIAEMNLBND", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::KFEKEGGEMFF
// Il2CppName: KFEKEGGEMFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::KFEKEGGEMFF)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "KFEKEGGEMFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::NFJANCHLOLE
// Il2CppName: NFJANCHLOLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::NFJANCHLOLE)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "NFJANCHLOLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::BEONFBMOPEH
// Il2CppName: BEONFBMOPEH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::BEONFBMOPEH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "BEONFBMOPEH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::OGALJHFFLHP
// Il2CppName: OGALJHFFLHP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::OGALJHFFLHP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "OGALJHFFLHP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::AKAJICBGGIG
// Il2CppName: AKAJICBGGIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::AKAJICBGGIG)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "AKAJICBGGIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::JOGPGAPOBBK
// Il2CppName: JOGPGAPOBBK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::JOGPGAPOBBK)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "JOGPGAPOBBK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::ChaosBat::OIPLBADJHFI
// Il2CppName: OIPLBADJHFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::OIPLBADJHFI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "OIPLBADJHFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::GFHPFJHINBN
// Il2CppName: GFHPFJHINBN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::GFHPFJHINBN)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "GFHPFJHINBN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::HKMAPCOKCFC
// Il2CppName: HKMAPCOKCFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::HKMAPCOKCFC)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "HKMAPCOKCFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::EJOIFNCBOAB
// Il2CppName: EJOIFNCBOAB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::EJOIFNCBOAB)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "EJOIFNCBOAB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::LLLAMDICCPH
// Il2CppName: LLLAMDICCPH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::LLLAMDICCPH)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "LLLAMDICCPH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::OOLJMDDNNCF
// Il2CppName: OOLJMDDNNCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::OOLJMDDNNCF)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "OOLJMDDNNCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::KDBJMJAPJEI
// Il2CppName: KDBJMJAPJEI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::System::Collections::ArrayList*)>(&MagicalActual::ChaosBat::KDBJMJAPJEI)> {
  static const MethodInfo* get() {
    static auto* HPEANAHIBAH = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "KDBJMJAPJEI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{HPEANAHIBAH});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::HMKJKOKPOBP
// Il2CppName: HMKJKOKPOBP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ChaosBat::HMKJKOKPOBP)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "HMKJKOKPOBP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ChaosBat::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ChaosBat::*)()>(&MagicalActual::ChaosBat::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ChaosBat*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
