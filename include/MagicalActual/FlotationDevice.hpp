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
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: FlotationDevice
  class FlotationDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::FlotationDevice);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::FlotationDevice*, "MagicalActual", "FlotationDevice");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.FlotationDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class FlotationDevice : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.PlayerTool FKJHGIFOJKD
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::PlayerTool* FKJHGIFOJKD;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerTool*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.PlayerTool FKJHGIFOJKD
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerTool*& dyn_FKJHGIFOJKD();
    // private System.Void PJOIJIEDPMP()
    // Offset: 0x15007F4
    void PJOIJIEDPMP();
    // public System.Void .ctor()
    // Offset: 0x1500B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlotationDevice* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::FlotationDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlotationDevice*, creationType>()));
    }
    // private System.Void GECHLDPLPCC()
    // Offset: 0x1500B4C
    void GECHLDPLPCC();
    // private System.Void GGPFEOEOBPH(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1500BD4
    void GGPFEOEOBPH(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void CHKCOPCNIDC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1500DC0
    void CHKCOPCNIDC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void GFHFCGIBIEE(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1500FAC
    void GFHFCGIBIEE(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void ECBJEKPINME(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1501198
    void ECBJEKPINME(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void LPLGKBGLPOK()
    // Offset: 0x1501384
    void LPLGKBGLPOK();
    // private System.Void FixedUpdate()
    // Offset: 0x150140C
    void FixedUpdate();
    // private System.Void AGAEICIFBAN(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1501754
    void AGAEICIFBAN(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void Start()
    // Offset: 0x1501940
    void Start();
    // private System.Void OBEBPGLHIHJ(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x15019C8
    void OBEBPGLHIHJ(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void BLPAEBLJMIL(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1501BB4
    void BLPAEBLJMIL(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x1501DA0
    void NNDKJCJFIAK();
    // private System.Void AHMLIMDJCJO()
    // Offset: 0x1501E28
    void AHMLIMDJCJO();
    // private System.Void LBIKOKCCILF()
    // Offset: 0x1502178
    void LBIKOKCCILF();
    // private System.Void FGPHMNHNKHP(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1502200
    void FGPHMNHNKHP(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x15023EC
    void FGIFGGNGKPK();
    // private System.Void PABPOCMFEJK(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1502474
    void PABPOCMFEJK(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void FIJGCHFAFHN()
    // Offset: 0x1502660
    void FIJGCHFAFHN();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x15029B0
    void KPOAAAHLGLA();
    // private System.Void GKIOLADOCOK()
    // Offset: 0x1502A38
    void GKIOLADOCOK();
    // private System.Void PhysicsInteractableGrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1502AC0
    void PhysicsInteractableGrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x1502CA8
    void DGJGAFKDIDK();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x1502D30
    void CBMDGNKFPIO();
    // private System.Void NIGOCBKLOFH()
    // Offset: 0x1502DB8
    void NIGOCBKLOFH();
    // private System.Void DNJOEDHOPFC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x1503108
    void DNJOEDHOPFC(::MagicalActual::Grabber* FOIEAOKBGLM);
  }; // MagicalActual.FlotationDevice
  #pragma pack(pop)
  static check_size<sizeof(FlotationDevice), 24 + sizeof(::MagicalActual::PlayerTool*)> __MagicalActual_FlotationDeviceSizeCheck;
  static_assert(sizeof(FlotationDevice) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::PJOIJIEDPMP
// Il2CppName: PJOIJIEDPMP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::PJOIJIEDPMP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "PJOIJIEDPMP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::GGPFEOEOBPH
// Il2CppName: GGPFEOEOBPH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::GGPFEOEOBPH)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "GGPFEOEOBPH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::CHKCOPCNIDC
// Il2CppName: CHKCOPCNIDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::CHKCOPCNIDC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "CHKCOPCNIDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::GFHFCGIBIEE
// Il2CppName: GFHFCGIBIEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::GFHFCGIBIEE)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "GFHFCGIBIEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::ECBJEKPINME
// Il2CppName: ECBJEKPINME
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::ECBJEKPINME)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "ECBJEKPINME", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::LPLGKBGLPOK
// Il2CppName: LPLGKBGLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::LPLGKBGLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "LPLGKBGLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::AGAEICIFBAN
// Il2CppName: AGAEICIFBAN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::AGAEICIFBAN)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "AGAEICIFBAN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::OBEBPGLHIHJ
// Il2CppName: OBEBPGLHIHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::OBEBPGLHIHJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "OBEBPGLHIHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::BLPAEBLJMIL
// Il2CppName: BLPAEBLJMIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::BLPAEBLJMIL)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "BLPAEBLJMIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::AHMLIMDJCJO
// Il2CppName: AHMLIMDJCJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::AHMLIMDJCJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "AHMLIMDJCJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::FGPHMNHNKHP
// Il2CppName: FGPHMNHNKHP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::FGPHMNHNKHP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "FGPHMNHNKHP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::PABPOCMFEJK
// Il2CppName: PABPOCMFEJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::PABPOCMFEJK)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "PABPOCMFEJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::FIJGCHFAFHN
// Il2CppName: FIJGCHFAFHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::FIJGCHFAFHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "FIJGCHFAFHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::PhysicsInteractableGrip
// Il2CppName: PhysicsInteractableGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::PhysicsInteractableGrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "PhysicsInteractableGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::NIGOCBKLOFH
// Il2CppName: NIGOCBKLOFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)()>(&MagicalActual::FlotationDevice::NIGOCBKLOFH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "NIGOCBKLOFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FlotationDevice::DNJOEDHOPFC
// Il2CppName: DNJOEDHOPFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FlotationDevice::*)(::MagicalActual::Grabber*)>(&MagicalActual::FlotationDevice::DNJOEDHOPFC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FlotationDevice*), "DNJOEDHOPFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
