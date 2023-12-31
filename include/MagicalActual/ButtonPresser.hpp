// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ButtonPresser
  class ButtonPresser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ButtonPresser);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ButtonPresser*, "MagicalActual", "ButtonPresser");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ButtonPresser
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonPresser : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerDownHandler, public ::UnityEngine::EventSystems::IPointerUpHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    public:
    // public System.Boolean ispressed
    // Size: 0x1
    // Offset: 0x18
    bool ispressed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerDownHandler
    operator ::UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerUpHandler
    operator ::UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean ispressed
    [[deprecated("Use field access instead!")]] bool& dyn_ispressed();
    // public System.Void EHLOFGPCAHI(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A556D8
    void EHLOFGPCAHI(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void OPHJBBBILOG(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A556E0
    void OPHJBBBILOG(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KKFMMMBDPGF(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A556EC
    void KKFMMMBDPGF(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void AGBLBGCMBDE(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A556F4
    void AGBLBGCMBDE(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void GIJAOMFAHHC(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A556FC
    void GIJAOMFAHHC(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55704
    void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void PBOGJENJCKG(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55710
    void PBOGJENJCKG(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KLMILAECGGO(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55718
    void KLMILAECGGO(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void MMDEPECJAFK(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55720
    void MMDEPECJAFK(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void EBFEDNNMEKL(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55728
    void EBFEDNNMEKL(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void IJPOGPGEBBC(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55734
    void IJPOGPGEBBC(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void MKJBFDIPFAJ(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A5573C
    void MKJBFDIPFAJ(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void LKLEABAPKEM(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55744
    void LKLEABAPKEM(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // private System.Void Update()
    // Offset: 0x1A5574C
    void Update();
    // public System.Void GEDIPHHNMCJ(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55750
    void GEDIPHHNMCJ(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void IEAJKNIDHNJ(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A5575C
    void IEAJKNIDHNJ(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // private System.Void EFGJFMENOAL()
    // Offset: 0x1A55768
    void EFGJFMENOAL();
    // private System.Void CHMCEGMCENL()
    // Offset: 0x1A5576C
    void CHMCEGMCENL();
    // public System.Void IBIHFABMGOB(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55770
    void IBIHFABMGOB(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55778
    void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void MIBGBBHGEFC(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55780
    void MIBGBBHGEFC(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55788
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void CDDIDFAIBGF(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55790
    void CDDIDFAIBGF(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // private System.Void GEJIJMPGALF()
    // Offset: 0x1A5579C
    void GEJIJMPGALF();
    // public System.Void AAEHIAPHDMO(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557A0
    void AAEHIAPHDMO(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void NMEAJMEKAFF(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557A8
    void NMEAJMEKAFF(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void IMCMEENAGMD(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557B4
    void IMCMEENAGMD(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void EECHHKKKEBA(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557BC
    void EECHHKKKEBA(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // private System.Void JGPEKDOEPOC()
    // Offset: 0x1A557C4
    void JGPEKDOEPOC();
    // public System.Void NAAGLBLJOMO(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557C8
    void NAAGLBLJOMO(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void OPGFPFLLLEN(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557D0
    void OPGFPFLLLEN(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void NEPKAAOEDMF(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557DC
    void NEPKAAOEDMF(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KPIJOLODJFP(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557E8
    void KPIJOLODJFP(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void JHBBGGMNDCE(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557F0
    void JHBBGGMNDCE(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void GLABCJKNLPO(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A557F8
    void GLABCJKNLPO(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KDEJNHHPEEE(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55800
    void KDEJNHHPEEE(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KPLIJEDINGP(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55808
    void KPLIJEDINGP(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void EMFMDPBFBPJ(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55814
    void EMFMDPBFBPJ(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void GFIINAGODGE(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A5581C
    void GFIINAGODGE(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void PDFIMFADJNE(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55828
    void PDFIMFADJNE(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // private System.Void MHHFAOGFAPO()
    // Offset: 0x1A55830
    void MHHFAOGFAPO();
    // private System.Void AGDFOIFHGGG()
    // Offset: 0x1A55834
    void AGDFOIFHGGG();
    // public System.Void AHGBDGHKALH(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x1A55838
    void AHGBDGHKALH(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void .ctor()
    // Offset: 0x1A55840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonPresser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ButtonPresser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonPresser*, creationType>()));
    }
    // private System.Void PPKHOKCIJBL()
    // Offset: 0x1A55848
    void PPKHOKCIJBL();
  }; // MagicalActual.ButtonPresser
  #pragma pack(pop)
  static check_size<sizeof(ButtonPresser), 24 + sizeof(bool)> __MagicalActual_ButtonPresserSizeCheck;
  static_assert(sizeof(ButtonPresser) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::EHLOFGPCAHI
// Il2CppName: EHLOFGPCAHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::EHLOFGPCAHI)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "EHLOFGPCAHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::OPHJBBBILOG
// Il2CppName: OPHJBBBILOG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::OPHJBBBILOG)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "OPHJBBBILOG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::KKFMMMBDPGF
// Il2CppName: KKFMMMBDPGF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::KKFMMMBDPGF)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "KKFMMMBDPGF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::AGBLBGCMBDE
// Il2CppName: AGBLBGCMBDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::AGBLBGCMBDE)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "AGBLBGCMBDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::GIJAOMFAHHC
// Il2CppName: GIJAOMFAHHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::GIJAOMFAHHC)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "GIJAOMFAHHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::PBOGJENJCKG
// Il2CppName: PBOGJENJCKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::PBOGJENJCKG)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "PBOGJENJCKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::KLMILAECGGO
// Il2CppName: KLMILAECGGO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::KLMILAECGGO)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "KLMILAECGGO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::MMDEPECJAFK
// Il2CppName: MMDEPECJAFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::MMDEPECJAFK)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "MMDEPECJAFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::EBFEDNNMEKL
// Il2CppName: EBFEDNNMEKL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::EBFEDNNMEKL)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "EBFEDNNMEKL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::IJPOGPGEBBC
// Il2CppName: IJPOGPGEBBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::IJPOGPGEBBC)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "IJPOGPGEBBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::MKJBFDIPFAJ
// Il2CppName: MKJBFDIPFAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::MKJBFDIPFAJ)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "MKJBFDIPFAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::LKLEABAPKEM
// Il2CppName: LKLEABAPKEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::LKLEABAPKEM)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "LKLEABAPKEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::GEDIPHHNMCJ
// Il2CppName: GEDIPHHNMCJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::GEDIPHHNMCJ)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "GEDIPHHNMCJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::IEAJKNIDHNJ
// Il2CppName: IEAJKNIDHNJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::IEAJKNIDHNJ)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "IEAJKNIDHNJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::EFGJFMENOAL
// Il2CppName: EFGJFMENOAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::EFGJFMENOAL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "EFGJFMENOAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::CHMCEGMCENL
// Il2CppName: CHMCEGMCENL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::CHMCEGMCENL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "CHMCEGMCENL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::IBIHFABMGOB
// Il2CppName: IBIHFABMGOB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::IBIHFABMGOB)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "IBIHFABMGOB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::MIBGBBHGEFC
// Il2CppName: MIBGBBHGEFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::MIBGBBHGEFC)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "MIBGBBHGEFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::CDDIDFAIBGF
// Il2CppName: CDDIDFAIBGF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::CDDIDFAIBGF)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "CDDIDFAIBGF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::GEJIJMPGALF
// Il2CppName: GEJIJMPGALF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::GEJIJMPGALF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "GEJIJMPGALF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::AAEHIAPHDMO
// Il2CppName: AAEHIAPHDMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::AAEHIAPHDMO)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "AAEHIAPHDMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::NMEAJMEKAFF
// Il2CppName: NMEAJMEKAFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::NMEAJMEKAFF)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "NMEAJMEKAFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::IMCMEENAGMD
// Il2CppName: IMCMEENAGMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::IMCMEENAGMD)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "IMCMEENAGMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::EECHHKKKEBA
// Il2CppName: EECHHKKKEBA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::EECHHKKKEBA)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "EECHHKKKEBA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::JGPEKDOEPOC
// Il2CppName: JGPEKDOEPOC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::JGPEKDOEPOC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "JGPEKDOEPOC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::NAAGLBLJOMO
// Il2CppName: NAAGLBLJOMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::NAAGLBLJOMO)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "NAAGLBLJOMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::OPGFPFLLLEN
// Il2CppName: OPGFPFLLLEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::OPGFPFLLLEN)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "OPGFPFLLLEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::NEPKAAOEDMF
// Il2CppName: NEPKAAOEDMF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::NEPKAAOEDMF)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "NEPKAAOEDMF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::KPIJOLODJFP
// Il2CppName: KPIJOLODJFP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::KPIJOLODJFP)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "KPIJOLODJFP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::JHBBGGMNDCE
// Il2CppName: JHBBGGMNDCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::JHBBGGMNDCE)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "JHBBGGMNDCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::GLABCJKNLPO
// Il2CppName: GLABCJKNLPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::GLABCJKNLPO)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "GLABCJKNLPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::KDEJNHHPEEE
// Il2CppName: KDEJNHHPEEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::KDEJNHHPEEE)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "KDEJNHHPEEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::KPLIJEDINGP
// Il2CppName: KPLIJEDINGP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::KPLIJEDINGP)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "KPLIJEDINGP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::EMFMDPBFBPJ
// Il2CppName: EMFMDPBFBPJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::EMFMDPBFBPJ)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "EMFMDPBFBPJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::GFIINAGODGE
// Il2CppName: GFIINAGODGE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::GFIINAGODGE)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "GFIINAGODGE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::PDFIMFADJNE
// Il2CppName: PDFIMFADJNE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::PDFIMFADJNE)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "PDFIMFADJNE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::MHHFAOGFAPO
// Il2CppName: MHHFAOGFAPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::MHHFAOGFAPO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "MHHFAOGFAPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::AGDFOIFHGGG
// Il2CppName: AGDFOIFHGGG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::AGDFOIFHGGG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "AGDFOIFHGGG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::AHGBDGHKALH
// Il2CppName: AHGBDGHKALH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::ButtonPresser::AHGBDGHKALH)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "AHGBDGHKALH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::ButtonPresser::PPKHOKCIJBL
// Il2CppName: PPKHOKCIJBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ButtonPresser::*)()>(&MagicalActual::ButtonPresser::PPKHOKCIJBL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ButtonPresser*), "PPKHOKCIJBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
