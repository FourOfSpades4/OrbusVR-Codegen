// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: IPhysicsButton
#include "GlobalNamespace/IPhysicsButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: LongDistanceTeleporter
  class LongDistanceTeleporter;
  // Forward declaring type: Portal
  class Portal;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: HouseElevatorButton
  class HouseElevatorButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::HouseElevatorButton);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::HouseElevatorButton*, "MagicalActual", "HouseElevatorButton");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.HouseElevatorButton
  // [TokenAttribute] Offset: FFFFFFFF
  class HouseElevatorButton : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler, public ::GlobalNamespace::IPhysicsButton*/ {
    public:
    public:
    // private UnityEngine.GameObject teleportDestination
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* teleportDestination;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Vector3 teleportLocation
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 teleportLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean destinationIsIndoors
    // Size: 0x1
    // Offset: 0x2C
    bool destinationIsIndoors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: destinationIsIndoors and: hoverInfo
    char __padding2[0x3] = {};
    // private UnityEngine.GameObject hoverInfo
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* hoverInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private MagicalActual.LongDistanceTeleporter BDCJPKIPNMB
    // Size: 0x8
    // Offset: 0x38
    ::MagicalActual::LongDistanceTeleporter* BDCJPKIPNMB;
    // Field size check
    static_assert(sizeof(::MagicalActual::LongDistanceTeleporter*) == 0x8);
    // private MagicalActual.Portal MGAFGEMEEMH
    // Size: 0x8
    // Offset: 0x40
    ::MagicalActual::Portal* MGAFGEMEEMH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Portal*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IPhysicsButton
    operator ::GlobalNamespace::IPhysicsButton() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPhysicsButton*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject teleportDestination
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_teleportDestination();
    // Get instance field reference: private UnityEngine.Vector3 teleportLocation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_teleportLocation();
    // Get instance field reference: private System.Boolean destinationIsIndoors
    [[deprecated("Use field access instead!")]] bool& dyn_destinationIsIndoors();
    // Get instance field reference: private UnityEngine.GameObject hoverInfo
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_hoverInfo();
    // Get instance field reference: private MagicalActual.LongDistanceTeleporter BDCJPKIPNMB
    [[deprecated("Use field access instead!")]] ::MagicalActual::LongDistanceTeleporter*& dyn_BDCJPKIPNMB();
    // Get instance field reference: private MagicalActual.Portal MGAFGEMEEMH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Portal*& dyn_MGAFGEMEEMH();
    // public System.Void ELAIFGJBDMF()
    // Offset: 0x188AD3C
    void ELAIFGJBDMF();
    // public System.Void NAHPFDOEJGN()
    // Offset: 0x188B2B4
    void NAHPFDOEJGN();
    // public System.Void BLDFMFJEGNI(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188B2B8
    void BLDFMFJEGNI(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188B370
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void Teleport()
    // Offset: 0x188B428
    void Teleport();
    // private System.Void PBEMGGBBDCK()
    // Offset: 0x188B854
    void PBEMGGBBDCK();
    // public System.Void NNFMDIMJLJL(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188B858
    void NNFMDIMJLJL(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // private System.Void Start()
    // Offset: 0x188B910
    void Start();
    // public System.Void NOIBGLLJDAJ(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188B914
    void NOIBGLLJDAJ(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void ClickButton()
    // Offset: 0x188B9CC
    void ClickButton();
    // private System.Void KHLHBBFFLDH(UnityEngine.Vector3 NHFBFBMNPFC)
    // Offset: 0x188B710
    void KHLHBBFFLDH(::UnityEngine::Vector3 NHFBFBMNPFC);
    // public System.Void PBOGJENJCKG(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188B9D0
    void PBOGJENJCKG(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KNEDNDIMCFF()
    // Offset: 0x188BA88
    void KNEDNDIMCFF();
    // public System.Void BCHFALNINJO()
    // Offset: 0x188BA8C
    void BCHFALNINJO();
    // public System.Void JPKJANIKIOB()
    // Offset: 0x188BA90
    void JPKJANIKIOB();
    // private System.Void FINEDPOIOFB(UnityEngine.Vector3 NHFBFBMNPFC)
    // Offset: 0x188BED8
    void FINEDPOIOFB(::UnityEngine::Vector3 NHFBFBMNPFC);
    // public System.Void EEHPDDFCMLP(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188C028
    void EEHPDDFCMLP(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void NMHIKMOPODM()
    // Offset: 0x188C0E0
    void NMHIKMOPODM();
    // private System.Void HHBPENIJFFC(UnityEngine.Vector3 NHFBFBMNPFC)
    // Offset: 0x188B014
    void HHBPENIJFFC(::UnityEngine::Vector3 NHFBFBMNPFC);
    // private System.Void NHADFEMILCC()
    // Offset: 0x188C2A8
    void NHADFEMILCC();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x188C2AC
    void GECHLDPLPCC();
    // private System.Void JKJOPKPFEOH(UnityEngine.Vector3 NHFBFBMNPFC)
    // Offset: 0x188BD88
    void JKJOPKPFEOH(::UnityEngine::Vector3 NHFBFBMNPFC);
    // private System.Void GMENHFDLOOO(UnityEngine.Vector3 NHFBFBMNPFC)
    // Offset: 0x188C2B0
    void GMENHFDLOOO(::UnityEngine::Vector3 NHFBFBMNPFC);
    // private System.Void KGHFFHIEHAG(UnityEngine.Vector3 NHFBFBMNPFC)
    // Offset: 0x188B164
    void KGHFFHIEHAG(::UnityEngine::Vector3 NHFBFBMNPFC);
    // public System.Void HPFAGFGDECC(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188C400
    void HPFAGFGDECC(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void PBCEOEFGIFH(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188C4B8
    void PBCEOEFGIFH(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void KDOOCGPEGEF()
    // Offset: 0x188C570
    void KDOOCGPEGEF();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188C574
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void GLABCJKNLPO(UnityEngine.EventSystems.PointerEventData ALEGFPIGIMP)
    // Offset: 0x188C62C
    void GLABCJKNLPO(::UnityEngine::EventSystems::PointerEventData* ALEGFPIGIMP);
    // public System.Void NGFCFGFFFNN()
    // Offset: 0x188C6E4
    void NGFCFGFFFNN();
    // public System.Void .ctor()
    // Offset: 0x188C6E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HouseElevatorButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::HouseElevatorButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HouseElevatorButton*, creationType>()));
    }
    // public System.Void OCKNMJCFBAE()
    // Offset: 0x188C0E4
    void OCKNMJCFBAE();
    // public System.Void BAPCLDDIALK()
    // Offset: 0x188C6F0
    void BAPCLDDIALK();
  }; // MagicalActual.HouseElevatorButton
  #pragma pack(pop)
  static check_size<sizeof(HouseElevatorButton), 64 + sizeof(::MagicalActual::Portal*)> __MagicalActual_HouseElevatorButtonSizeCheck;
  static_assert(sizeof(HouseElevatorButton) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::ELAIFGJBDMF
// Il2CppName: ELAIFGJBDMF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::ELAIFGJBDMF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "ELAIFGJBDMF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::NAHPFDOEJGN
// Il2CppName: NAHPFDOEJGN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::NAHPFDOEJGN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "NAHPFDOEJGN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::BLDFMFJEGNI
// Il2CppName: BLDFMFJEGNI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::BLDFMFJEGNI)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "BLDFMFJEGNI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::Teleport
// Il2CppName: Teleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::Teleport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "Teleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::PBEMGGBBDCK
// Il2CppName: PBEMGGBBDCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::PBEMGGBBDCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "PBEMGGBBDCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::NNFMDIMJLJL
// Il2CppName: NNFMDIMJLJL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::NNFMDIMJLJL)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "NNFMDIMJLJL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::NOIBGLLJDAJ
// Il2CppName: NOIBGLLJDAJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::NOIBGLLJDAJ)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "NOIBGLLJDAJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::ClickButton
// Il2CppName: ClickButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::ClickButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "ClickButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::KHLHBBFFLDH
// Il2CppName: KHLHBBFFLDH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::Vector3)>(&MagicalActual::HouseElevatorButton::KHLHBBFFLDH)> {
  static const MethodInfo* get() {
    static auto* NHFBFBMNPFC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "KHLHBBFFLDH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NHFBFBMNPFC});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::PBOGJENJCKG
// Il2CppName: PBOGJENJCKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::PBOGJENJCKG)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "PBOGJENJCKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::KNEDNDIMCFF
// Il2CppName: KNEDNDIMCFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::KNEDNDIMCFF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "KNEDNDIMCFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::BCHFALNINJO
// Il2CppName: BCHFALNINJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::BCHFALNINJO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "BCHFALNINJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::JPKJANIKIOB
// Il2CppName: JPKJANIKIOB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::JPKJANIKIOB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "JPKJANIKIOB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::FINEDPOIOFB
// Il2CppName: FINEDPOIOFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::Vector3)>(&MagicalActual::HouseElevatorButton::FINEDPOIOFB)> {
  static const MethodInfo* get() {
    static auto* NHFBFBMNPFC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "FINEDPOIOFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NHFBFBMNPFC});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::EEHPDDFCMLP
// Il2CppName: EEHPDDFCMLP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::EEHPDDFCMLP)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "EEHPDDFCMLP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::NMHIKMOPODM
// Il2CppName: NMHIKMOPODM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::NMHIKMOPODM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "NMHIKMOPODM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::HHBPENIJFFC
// Il2CppName: HHBPENIJFFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::Vector3)>(&MagicalActual::HouseElevatorButton::HHBPENIJFFC)> {
  static const MethodInfo* get() {
    static auto* NHFBFBMNPFC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "HHBPENIJFFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NHFBFBMNPFC});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::JKJOPKPFEOH
// Il2CppName: JKJOPKPFEOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::Vector3)>(&MagicalActual::HouseElevatorButton::JKJOPKPFEOH)> {
  static const MethodInfo* get() {
    static auto* NHFBFBMNPFC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "JKJOPKPFEOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NHFBFBMNPFC});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::GMENHFDLOOO
// Il2CppName: GMENHFDLOOO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::Vector3)>(&MagicalActual::HouseElevatorButton::GMENHFDLOOO)> {
  static const MethodInfo* get() {
    static auto* NHFBFBMNPFC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "GMENHFDLOOO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NHFBFBMNPFC});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::KGHFFHIEHAG
// Il2CppName: KGHFFHIEHAG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::Vector3)>(&MagicalActual::HouseElevatorButton::KGHFFHIEHAG)> {
  static const MethodInfo* get() {
    static auto* NHFBFBMNPFC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "KGHFFHIEHAG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NHFBFBMNPFC});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::HPFAGFGDECC
// Il2CppName: HPFAGFGDECC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::HPFAGFGDECC)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "HPFAGFGDECC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::PBCEOEFGIFH
// Il2CppName: PBCEOEFGIFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::PBCEOEFGIFH)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "PBCEOEFGIFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::KDOOCGPEGEF
// Il2CppName: KDOOCGPEGEF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::KDOOCGPEGEF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "KDOOCGPEGEF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::GLABCJKNLPO
// Il2CppName: GLABCJKNLPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&MagicalActual::HouseElevatorButton::GLABCJKNLPO)> {
  static const MethodInfo* get() {
    static auto* ALEGFPIGIMP = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "GLABCJKNLPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ALEGFPIGIMP});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::NGFCFGFFFNN
// Il2CppName: NGFCFGFFFNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::NGFCFGFFFNN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "NGFCFGFFFNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::OCKNMJCFBAE
// Il2CppName: OCKNMJCFBAE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::OCKNMJCFBAE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "OCKNMJCFBAE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::HouseElevatorButton::BAPCLDDIALK
// Il2CppName: BAPCLDDIALK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::HouseElevatorButton::*)()>(&MagicalActual::HouseElevatorButton::BAPCLDDIALK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::HouseElevatorButton*), "BAPCLDDIALK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
