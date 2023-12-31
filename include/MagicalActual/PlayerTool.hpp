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
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: InventoryItemInstance
  class InventoryItemInstance;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Grabber
  class Grabber;
  // Forward declaring type: PlayerAvatar
  class PlayerAvatar;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PhysicsInteractable
  class PhysicsInteractable;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerTool
  class PlayerTool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PlayerTool);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PlayerTool*, "MagicalActual", "PlayerTool");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PlayerTool
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerTool : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Int32 itemId
    // Size: 0x4
    // Offset: 0x18
    int itemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: itemId and: slotName
    char __padding0[0x4] = {};
    // public System.String slotName
    // Size: 0x8
    // Offset: 0x20
    ::StringW slotName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public ExtUI.InventoryItemInstance inventoryItem
    // Size: 0x8
    // Offset: 0x28
    ::ExtUI::InventoryItemInstance* inventoryItem;
    // Field size check
    static_assert(sizeof(::ExtUI::InventoryItemInstance*) == 0x8);
    // public System.Boolean autoSnapBack
    // Size: 0x1
    // Offset: 0x30
    bool autoSnapBack;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isHidden
    // Size: 0x1
    // Offset: 0x31
    bool isHidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isHidden and: snapBackDelay
    char __padding4[0x2] = {};
    // public System.Single snapBackDelay
    // Size: 0x4
    // Offset: 0x34
    float snapBackDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 toolBeltOffset
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 toolBeltOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 toolBeltOrientation
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 toolBeltOrientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Transform ONANMANNPAN
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* ONANMANNPAN;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 JBAJFMHBCMD
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 JBAJFMHBCMD;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion IDFEBFFILHO
    // Size: 0x10
    // Offset: 0x64
    ::UnityEngine::Quaternion IDFEBFFILHO;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 POLONKMGCDN
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 POLONKMGCDN;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Rigidbody EIPMBKLODIJ
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Rigidbody* EIPMBKLODIJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public System.Boolean isGrabbed
    // Size: 0x1
    // Offset: 0x88
    bool isGrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean inAir
    // Size: 0x1
    // Offset: 0x89
    bool inAir;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inAir and: currentGrabber
    char __padding14[0x6] = {};
    // public MagicalActual.Grabber currentGrabber
    // Size: 0x8
    // Offset: 0x90
    ::MagicalActual::Grabber* currentGrabber;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // private UnityEngine.GameObject GHHPIHJAGCG
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::GameObject* GHHPIHJAGCG;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public MagicalActual.PlayerAvatar myAvatar
    // Size: 0x8
    // Offset: 0xA0
    ::MagicalActual::PlayerAvatar* myAvatar;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerAvatar*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE4C48
    // private PhysicsInteractable <NPOPILONGLE>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::PhysicsInteractable* NPOPILONGLE;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PhysicsInteractable*) == 0x8);
    // private System.Int32 IGOPFAFMIIP
    // Size: 0x4
    // Offset: 0xB0
    int IGOPFAFMIIP;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 itemId
    [[deprecated("Use field access instead!")]] int& dyn_itemId();
    // Get instance field reference: public System.String slotName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_slotName();
    // Get instance field reference: public ExtUI.InventoryItemInstance inventoryItem
    [[deprecated("Use field access instead!")]] ::ExtUI::InventoryItemInstance*& dyn_inventoryItem();
    // Get instance field reference: public System.Boolean autoSnapBack
    [[deprecated("Use field access instead!")]] bool& dyn_autoSnapBack();
    // Get instance field reference: public System.Boolean isHidden
    [[deprecated("Use field access instead!")]] bool& dyn_isHidden();
    // Get instance field reference: public System.Single snapBackDelay
    [[deprecated("Use field access instead!")]] float& dyn_snapBackDelay();
    // Get instance field reference: public UnityEngine.Vector3 toolBeltOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_toolBeltOffset();
    // Get instance field reference: public UnityEngine.Vector3 toolBeltOrientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_toolBeltOrientation();
    // Get instance field reference: private UnityEngine.Transform ONANMANNPAN
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_ONANMANNPAN();
    // Get instance field reference: private UnityEngine.Vector3 JBAJFMHBCMD
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_JBAJFMHBCMD();
    // Get instance field reference: private UnityEngine.Quaternion IDFEBFFILHO
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_IDFEBFFILHO();
    // Get instance field reference: private UnityEngine.Vector3 POLONKMGCDN
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_POLONKMGCDN();
    // Get instance field reference: private UnityEngine.Rigidbody EIPMBKLODIJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_EIPMBKLODIJ();
    // Get instance field reference: public System.Boolean isGrabbed
    [[deprecated("Use field access instead!")]] bool& dyn_isGrabbed();
    // Get instance field reference: public System.Boolean inAir
    [[deprecated("Use field access instead!")]] bool& dyn_inAir();
    // Get instance field reference: public MagicalActual.Grabber currentGrabber
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_currentGrabber();
    // Get instance field reference: private UnityEngine.GameObject GHHPIHJAGCG
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_GHHPIHJAGCG();
    // Get instance field reference: public MagicalActual.PlayerAvatar myAvatar
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerAvatar*& dyn_myAvatar();
    // Get instance field reference: private PhysicsInteractable <NPOPILONGLE>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PhysicsInteractable*& dyn_$NPOPILONGLE$k__BackingField();
    // Get instance field reference: private System.Int32 IGOPFAFMIIP
    [[deprecated("Use field access instead!")]] int& dyn_IGOPFAFMIIP();
    // public System.Void SnapBack()
    // Offset: 0x147C190
    void SnapBack();
    // public System.Void DLEDMKFGHLD()
    // Offset: 0x147C3FC
    void DLEDMKFGHLD();
    // public System.Void KMHNEGFEJKC()
    // Offset: 0x147C66C
    void KMHNEGFEJKC();
    // public System.Void EGEHGADLCJD(System.Byte KLIPNGBEELK)
    // Offset: 0x147C730
    void EGEHGADLCJD(uint8_t KLIPNGBEELK);
    // private System.Void FJDLNIJBGIN(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x147C7B4
    void FJDLNIJBGIN(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // private System.Void AFIACGLCIPB()
    // Offset: 0x147C7BC
    void AFIACGLCIPB();
    // public System.Void .ctor()
    // Offset: 0x147CA34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PlayerTool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTool*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x147CB08
    void Start();
    // private System.Void PhysicsInteractableGrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147CD60
    void PhysicsInteractableGrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void PhysicsInteractableUngrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147CE74
    void PhysicsInteractableUngrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void DBLHNPALFEG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147CF60
    void DBLHNPALFEG(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void FDILPFPJCCK()
    // Offset: 0x147D074
    void FDILPFPJCCK();
    // public System.Void ReceiveSignal(System.Byte KLIPNGBEELK)
    // Offset: 0x147D15C
    void ReceiveSignal(uint8_t KLIPNGBEELK);
    // public System.Void CLMGNNDJOEG()
    // Offset: 0x147D1E0
    void CLMGNNDJOEG();
    // private System.Void ECBJEKPINME(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147D27C
    void ECBJEKPINME(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void CaptureStartingPosition()
    // Offset: 0x147CC9C
    void CaptureStartingPosition();
    // private System.Void FJMGMOMABFO(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147D39C
    void FJMGMOMABFO(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void AGNOEHOKDFG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147D488
    void AGNOEHOKDFG(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void Hide()
    // Offset: 0x147D570
    void Hide();
    // public System.Void GKPGMKIFMKH()
    // Offset: 0x147C5D0
    void GKPGMKIFMKH();
    // public System.Void SendToolSignal(System.UInt16 PKHBJNKPFHO)
    // Offset: 0x147D610
    void SendToolSignal(uint16_t PKHBJNKPFHO);
    // private System.Void GMGFCMJCALC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147D6F4
    void GMGFCMJCALC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void EKONALBEDHD(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x147D154
    void EKONALBEDHD(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // public System.Void OGDFBKAFNMJ()
    // Offset: 0x147D808
    void OGDFBKAFNMJ();
    // private System.Void DJJPJCNGKMI(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x147D8A8
    void DJJPJCNGKMI(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // private System.Void OBEBPGLHIHJ(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147D8B0
    void OBEBPGLHIHJ(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void CAOFDMMNMBE(PhysicsInteractable MMMEIONJJFJ)
    // Offset: 0x147D9B0
    void CAOFDMMNMBE(::GlobalNamespace::PhysicsInteractable* MMMEIONJJFJ);
    // public System.Void GKDDFNOFPFD()
    // Offset: 0x147D9B8
    void GKDDFNOFPFD();
    // public System.Void Show()
    // Offset: 0x147C360
    void Show();
    // public PhysicsInteractable NNHMHLKDCCF()
    // Offset: 0x147DA58
    ::GlobalNamespace::PhysicsInteractable* NNHMHLKDCCF();
    // private System.Void AFMOIOAGKLM()
    // Offset: 0x147DA60
    void AFMOIOAGKLM();
    // public System.Void OACCKOMFEIO()
    // Offset: 0x147DB40
    void OACCKOMFEIO();
    // private System.Void NIGDKALGFHM(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147DD14
    void NIGDKALGFHM(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void IPIFMKAGODD()
    // Offset: 0x147DE00
    void IPIFMKAGODD();
    // public System.Void KLHLOIAIKNL(System.UInt16 PKHBJNKPFHO)
    // Offset: 0x147DFB4
    void KLHLOIAIKNL(uint16_t PKHBJNKPFHO);
    // public System.Void BFNDHFJMCDI(System.UInt16 PKHBJNKPFHO)
    // Offset: 0x147E098
    void BFNDHFJMCDI(uint16_t PKHBJNKPFHO);
    // private System.Void CLCEPJAGHCB(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x147E174
    void CLCEPJAGHCB(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void HILDBCPMLDJ()
    // Offset: 0x147C970
    void HILDBCPMLDJ();
    // public System.Void NFLKGGCCDBH(System.UInt16 PKHBJNKPFHO)
    // Offset: 0x147E25C
    void NFLKGGCCDBH(uint16_t PKHBJNKPFHO);
    // private System.Void DGELIHGGOKB()
    // Offset: 0x147E32C
    void DGELIHGGOKB();
    // private System.Void EDJIILEFNPD()
    // Offset: 0x147E40C
    void EDJIILEFNPD();
    // public PhysicsInteractable ICFFMNFDCKA()
    // Offset: 0x147E4EC
    ::GlobalNamespace::PhysicsInteractable* ICFFMNFDCKA();
    // private System.Void Awake()
    // Offset: 0x147E4F4
    void Awake();
    // public System.Void MOPJENBGCHH()
    // Offset: 0x147E5D4
    void MOPJENBGCHH();
    // public PhysicsInteractable get_myPhysicsInteractable()
    // Offset: 0x147E7A8
    ::GlobalNamespace::PhysicsInteractable* get_myPhysicsInteractable();
  }; // MagicalActual.PlayerTool
  #pragma pack(pop)
  static check_size<sizeof(PlayerTool), 176 + sizeof(int)> __MagicalActual_PlayerToolSizeCheck;
  static_assert(sizeof(PlayerTool) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PlayerTool::SnapBack
// Il2CppName: SnapBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::SnapBack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "SnapBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::DLEDMKFGHLD
// Il2CppName: DLEDMKFGHLD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::DLEDMKFGHLD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "DLEDMKFGHLD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::KMHNEGFEJKC
// Il2CppName: KMHNEGFEJKC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::KMHNEGFEJKC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "KMHNEGFEJKC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::EGEHGADLCJD
// Il2CppName: EGEHGADLCJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(uint8_t)>(&MagicalActual::PlayerTool::EGEHGADLCJD)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "EGEHGADLCJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::FJDLNIJBGIN
// Il2CppName: FJDLNIJBGIN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::PlayerTool::FJDLNIJBGIN)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "FJDLNIJBGIN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::PlayerTool::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::PhysicsInteractableGrip
// Il2CppName: PhysicsInteractableGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::PhysicsInteractableGrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "PhysicsInteractableGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::PhysicsInteractableUngrip
// Il2CppName: PhysicsInteractableUngrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::PhysicsInteractableUngrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "PhysicsInteractableUngrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::DBLHNPALFEG
// Il2CppName: DBLHNPALFEG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::DBLHNPALFEG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "DBLHNPALFEG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::FDILPFPJCCK
// Il2CppName: FDILPFPJCCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::FDILPFPJCCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "FDILPFPJCCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::ReceiveSignal
// Il2CppName: ReceiveSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(uint8_t)>(&MagicalActual::PlayerTool::ReceiveSignal)> {
  static const MethodInfo* get() {
    static auto* KLIPNGBEELK = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "ReceiveSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KLIPNGBEELK});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::CLMGNNDJOEG
// Il2CppName: CLMGNNDJOEG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::CLMGNNDJOEG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "CLMGNNDJOEG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::ECBJEKPINME
// Il2CppName: ECBJEKPINME
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::ECBJEKPINME)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "ECBJEKPINME", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::CaptureStartingPosition
// Il2CppName: CaptureStartingPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::CaptureStartingPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "CaptureStartingPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::FJMGMOMABFO
// Il2CppName: FJMGMOMABFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::FJMGMOMABFO)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "FJMGMOMABFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::AGNOEHOKDFG
// Il2CppName: AGNOEHOKDFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::AGNOEHOKDFG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "AGNOEHOKDFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::GKPGMKIFMKH
// Il2CppName: GKPGMKIFMKH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::GKPGMKIFMKH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "GKPGMKIFMKH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::SendToolSignal
// Il2CppName: SendToolSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(uint16_t)>(&MagicalActual::PlayerTool::SendToolSignal)> {
  static const MethodInfo* get() {
    static auto* PKHBJNKPFHO = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "SendToolSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PKHBJNKPFHO});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::GMGFCMJCALC
// Il2CppName: GMGFCMJCALC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::GMGFCMJCALC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "GMGFCMJCALC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::EKONALBEDHD
// Il2CppName: EKONALBEDHD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::PlayerTool::EKONALBEDHD)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "EKONALBEDHD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::OGDFBKAFNMJ
// Il2CppName: OGDFBKAFNMJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::OGDFBKAFNMJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "OGDFBKAFNMJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::DJJPJCNGKMI
// Il2CppName: DJJPJCNGKMI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::PlayerTool::DJJPJCNGKMI)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "DJJPJCNGKMI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::OBEBPGLHIHJ
// Il2CppName: OBEBPGLHIHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::OBEBPGLHIHJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "OBEBPGLHIHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::CAOFDMMNMBE
// Il2CppName: CAOFDMMNMBE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::GlobalNamespace::PhysicsInteractable*)>(&MagicalActual::PlayerTool::CAOFDMMNMBE)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("", "PhysicsInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "CAOFDMMNMBE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::GKDDFNOFPFD
// Il2CppName: GKDDFNOFPFD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::GKDDFNOFPFD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "GKDDFNOFPFD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::NNHMHLKDCCF
// Il2CppName: NNHMHLKDCCF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::NNHMHLKDCCF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "NNHMHLKDCCF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::AFMOIOAGKLM
// Il2CppName: AFMOIOAGKLM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::AFMOIOAGKLM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "AFMOIOAGKLM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::OACCKOMFEIO
// Il2CppName: OACCKOMFEIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::OACCKOMFEIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "OACCKOMFEIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::NIGDKALGFHM
// Il2CppName: NIGDKALGFHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::NIGDKALGFHM)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "NIGDKALGFHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::KLHLOIAIKNL
// Il2CppName: KLHLOIAIKNL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(uint16_t)>(&MagicalActual::PlayerTool::KLHLOIAIKNL)> {
  static const MethodInfo* get() {
    static auto* PKHBJNKPFHO = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "KLHLOIAIKNL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PKHBJNKPFHO});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::BFNDHFJMCDI
// Il2CppName: BFNDHFJMCDI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(uint16_t)>(&MagicalActual::PlayerTool::BFNDHFJMCDI)> {
  static const MethodInfo* get() {
    static auto* PKHBJNKPFHO = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "BFNDHFJMCDI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PKHBJNKPFHO});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::CLCEPJAGHCB
// Il2CppName: CLCEPJAGHCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(::MagicalActual::Grabber*)>(&MagicalActual::PlayerTool::CLCEPJAGHCB)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "CLCEPJAGHCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::HILDBCPMLDJ
// Il2CppName: HILDBCPMLDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::HILDBCPMLDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "HILDBCPMLDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::NFLKGGCCDBH
// Il2CppName: NFLKGGCCDBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)(uint16_t)>(&MagicalActual::PlayerTool::NFLKGGCCDBH)> {
  static const MethodInfo* get() {
    static auto* PKHBJNKPFHO = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "NFLKGGCCDBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{PKHBJNKPFHO});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::DGELIHGGOKB
// Il2CppName: DGELIHGGOKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::DGELIHGGOKB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "DGELIHGGOKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::EDJIILEFNPD
// Il2CppName: EDJIILEFNPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::EDJIILEFNPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "EDJIILEFNPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::ICFFMNFDCKA
// Il2CppName: ICFFMNFDCKA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::ICFFMNFDCKA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "ICFFMNFDCKA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::MOPJENBGCHH
// Il2CppName: MOPJENBGCHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::MOPJENBGCHH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "MOPJENBGCHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::PlayerTool::get_myPhysicsInteractable
// Il2CppName: get_myPhysicsInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PhysicsInteractable* (MagicalActual::PlayerTool::*)()>(&MagicalActual::PlayerTool::get_myPhysicsInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::PlayerTool*), "get_myPhysicsInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
