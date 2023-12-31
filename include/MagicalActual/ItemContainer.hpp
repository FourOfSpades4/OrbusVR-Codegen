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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: NetEntity
  class NetEntity;
}
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: InventoryItemInstance
  class InventoryItemInstance;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ItemContainer
  class ItemContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ItemContainer);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ItemContainer*, "MagicalActual", "ItemContainer");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ItemContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class ItemContainer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::ItemContainer::$$c
    class $$c;
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE4738
    // private MagicalActual.NetEntity <JANFCAJMFMP>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::NetEntity* JANFCAJMFMP;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // public System.String findByType
    // Size: 0x8
    // Offset: 0x28
    ::StringW findByType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String findById
    // Size: 0x8
    // Offset: 0x30
    ::StringW findById;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String onlyAcceptType
    // Size: 0x8
    // Offset: 0x38
    ::StringW onlyAcceptType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String onlyAcceptClass
    // Size: 0x8
    // Offset: 0x40
    ::StringW onlyAcceptClass;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Boolean HELEHMONNAD
    // Size: 0x1
    // Offset: 0x48
    bool HELEHMONNAD;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HELEHMONNAD and: PBOPBMCGMNP
    char __padding6[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAE4748
    // private ExtUI.InventoryItemInstance[] <PBOPBMCGMNP>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::ExtUI::InventoryItemInstance*> PBOPBMCGMNP;
    // Field size check
    static_assert(sizeof(::ArrayW<::ExtUI::InventoryItemInstance*>) == 0x8);
    // private System.String LIKAPAKJMDJ
    // Size: 0x8
    // Offset: 0x58
    ::StringW LIKAPAKJMDJ;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE4758
    // private System.Int32 <EOCNKIFGIEG>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    int EOCNKIFGIEG;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity <JANFCAJMFMP>k__BackingField
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_$JANFCAJMFMP$k__BackingField();
    // Get instance field reference: public System.String findByType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_findByType();
    // Get instance field reference: public System.String findById
    [[deprecated("Use field access instead!")]] ::StringW& dyn_findById();
    // Get instance field reference: public System.String onlyAcceptType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_onlyAcceptType();
    // Get instance field reference: public System.String onlyAcceptClass
    [[deprecated("Use field access instead!")]] ::StringW& dyn_onlyAcceptClass();
    // Get instance field reference: protected System.Boolean HELEHMONNAD
    [[deprecated("Use field access instead!")]] bool& dyn_HELEHMONNAD();
    // Get instance field reference: private ExtUI.InventoryItemInstance[] <PBOPBMCGMNP>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::ExtUI::InventoryItemInstance*>& dyn_$PBOPBMCGMNP$k__BackingField();
    // Get instance field reference: private System.String LIKAPAKJMDJ
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LIKAPAKJMDJ();
    // Get instance field reference: private System.Int32 <EOCNKIFGIEG>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$EOCNKIFGIEG$k__BackingField();
    // private System.Void MDLKFCINDNC(System.Object OMLPNCLFFMJ)
    // Offset: 0x1269854
    void MDLKFCINDNC(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void DHKPPAENLLA(MagicalActual.NetEntity MMMEIONJJFJ)
    // Offset: 0x1269918
    void DHKPPAENLLA(::MagicalActual::NetEntity* MMMEIONJJFJ);
    // public System.Void OpenContainerInventory()
    // Offset: 0x1269920
    void OpenContainerInventory();
    // public System.Void DetachedFromInterface()
    // Offset: 0x12699CC
    void DetachedFromInterface();
    // public ExtUI.InventoryItemInstance[] get_myInventory()
    // Offset: 0x12699D4
    ::ArrayW<::ExtUI::InventoryItemInstance*> get_myInventory();
    // protected System.Void EEMBCPKCOIL()
    // Offset: 0x12699DC
    void EEMBCPKCOIL();
    // private System.Void GLFIMBIMENJ(ExtUI.InventoryItemInstance[] MMMEIONJJFJ)
    // Offset: 0x1269B60
    void GLFIMBIMENJ(::ArrayW<::ExtUI::InventoryItemInstance*> MMMEIONJJFJ);
    // private System.Void NLAEIAPNHBN(System.Int32 MMMEIONJJFJ)
    // Offset: 0x1269B68
    void NLAEIAPNHBN(int MMMEIONJJFJ);
    // protected System.Void LBDNIEPEFOO()
    // Offset: 0x1269B70
    void LBDNIEPEFOO();
    // private System.Void PMBELKGDEJM(System.Object OMLPNCLFFMJ)
    // Offset: 0x1269C2C
    void PMBELKGDEJM(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Int32 get_availableCurrency()
    // Offset: 0x1269CF4
    int get_availableCurrency();
    // private System.Void ENNJNOGFHNP(System.Object OMLPNCLFFMJ)
    // Offset: 0x1269CFC
    void ENNJNOGFHNP(::Il2CppObject* OMLPNCLFFMJ);
    // protected System.Void MMBJIKNCNGM()
    // Offset: 0x1269D70
    void MMBJIKNCNGM();
    // public System.Void KBDGAPMJGLG()
    // Offset: 0x1269E24
    void KBDGAPMJGLG();
    // protected System.Void DOHIBEDOAPM()
    // Offset: 0x1269E38
    void DOHIBEDOAPM();
    // public System.Void FKGKFMEOEEG()
    // Offset: 0x1269E70
    void FKGKFMEOEEG();
    // private System.Void KHGLJNKJPIH(System.Object OMLPNCLFFMJ)
    // Offset: 0x1269FB8
    void KHGLJNKJPIH(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void IKGNPMNLJOK(ExtUI.InventoryItemInstance[] MMMEIONJJFJ)
    // Offset: 0x126A030
    void IKGNPMNLJOK(::ArrayW<::ExtUI::InventoryItemInstance*> MMMEIONJJFJ);
    // public System.Void NJHHIMFNFCO()
    // Offset: 0x126A038
    void NJHHIMFNFCO();
    // private System.Void DCLKIIAKBPM(ExtUI.InventoryItemInstance[] MMMEIONJJFJ)
    // Offset: 0x126A0E8
    void DCLKIIAKBPM(::ArrayW<::ExtUI::InventoryItemInstance*> MMMEIONJJFJ);
    // private System.Void GCHNOACKEKG(System.Object OMLPNCLFFMJ)
    // Offset: 0x126A0F0
    void GCHNOACKEKG(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void AttachedToInterface()
    // Offset: 0x126A164
    void AttachedToInterface();
    // public System.Int32 DLPEOKNIAEP()
    // Offset: 0x126A170
    int DLPEOKNIAEP();
    // public System.Void WithdrawCurrency()
    // Offset: 0x126A178
    void WithdrawCurrency();
    // private System.Void FOMAEPJHPHO(System.Int32 MMMEIONJJFJ)
    // Offset: 0x1269E30
    void FOMAEPJHPHO(int MMMEIONJJFJ);
    // public System.Void ResetInventory()
    // Offset: 0x126A2C0
    void ResetInventory();
    // public System.Void .ctor()
    // Offset: 0x126A2CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ItemContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ItemContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ItemContainer*, creationType>()));
    }
    // public System.Void FDDDNDIGIOD()
    // Offset: 0x126A33C
    void FDDDNDIGIOD();
    // public System.Void BLBKOOGJNBB(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x126A344
    void BLBKOOGJNBB(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JDPFFFDDLHM(System.Object OMLPNCLFFMJ)
    // Offset: 0x126A458
    void JDPFFFDDLHM(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x126A4CC
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void LOECNMPGLMM()
    // Offset: 0x126A5E0
    void LOECNMPGLMM();
    // private System.Void OHJPAHMACFE(ExtUI.InventoryItemInstance[] MMMEIONJJFJ)
    // Offset: 0x1269C24
    void OHJPAHMACFE(::ArrayW<::ExtUI::InventoryItemInstance*> MMMEIONJJFJ);
    // public System.Void HICFANHNBBI()
    // Offset: 0x126A5F0
    void HICFANHNBBI();
    // protected System.Void TriggerTab()
    // Offset: 0x126A5F8
    void TriggerTab();
    // protected System.Void PEHJNFDBNMB()
    // Offset: 0x126A630
    void PEHJNFDBNMB();
    // public MagicalActual.NetEntity IMKONPPPIGG()
    // Offset: 0x1269FB0
    ::MagicalActual::NetEntity* IMKONPPPIGG();
    // public MagicalActual.NetEntity get_myEntity()
    // Offset: 0x126A2B8
    ::MagicalActual::NetEntity* get_myEntity();
    // private System.Void EKPAPCPHNPK(System.Object OMLPNCLFFMJ)
    // Offset: 0x126A6E4
    void EKPAPCPHNPK(::Il2CppObject* OMLPNCLFFMJ);
    // protected System.Void GGAGNINOKAA()
    // Offset: 0x126A758
    void GGAGNINOKAA();
    // public System.Void Start()
    // Offset: 0x126A790
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0x126A798
    void FixedUpdate();
    // public System.Void OHBHLPKMPPA()
    // Offset: 0x126A918
    void OHBHLPKMPPA();
    // public System.Void CloseContainerInventory()
    // Offset: 0x126A9F0
    void CloseContainerInventory();
    // public ExtUI.InventoryItemInstance[] DJDBJCFBBOK()
    // Offset: 0x126AAC8
    ::ArrayW<::ExtUI::InventoryItemInstance*> DJDBJCFBBOK();
  }; // MagicalActual.ItemContainer
  #pragma pack(pop)
  static check_size<sizeof(ItemContainer), 96 + sizeof(int)> __MagicalActual_ItemContainerSizeCheck;
  static_assert(sizeof(ItemContainer) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ItemContainer::MDLKFCINDNC
// Il2CppName: MDLKFCINDNC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::MDLKFCINDNC)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "MDLKFCINDNC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::DHKPPAENLLA
// Il2CppName: DHKPPAENLLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ItemContainer::DHKPPAENLLA)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "DHKPPAENLLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::OpenContainerInventory
// Il2CppName: OpenContainerInventory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::OpenContainerInventory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "OpenContainerInventory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::DetachedFromInterface
// Il2CppName: DetachedFromInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::DetachedFromInterface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "DetachedFromInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::get_myInventory
// Il2CppName: get_myInventory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ExtUI::InventoryItemInstance*> (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::get_myInventory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "get_myInventory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::EEMBCPKCOIL
// Il2CppName: EEMBCPKCOIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::EEMBCPKCOIL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "EEMBCPKCOIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::GLFIMBIMENJ
// Il2CppName: GLFIMBIMENJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::ArrayW<::ExtUI::InventoryItemInstance*>)>(&MagicalActual::ItemContainer::GLFIMBIMENJ)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("ExtUI", "InventoryItemInstance"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "GLFIMBIMENJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::NLAEIAPNHBN
// Il2CppName: NLAEIAPNHBN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(int)>(&MagicalActual::ItemContainer::NLAEIAPNHBN)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "NLAEIAPNHBN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::LBDNIEPEFOO
// Il2CppName: LBDNIEPEFOO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::LBDNIEPEFOO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "LBDNIEPEFOO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::PMBELKGDEJM
// Il2CppName: PMBELKGDEJM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::PMBELKGDEJM)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "PMBELKGDEJM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::get_availableCurrency
// Il2CppName: get_availableCurrency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::get_availableCurrency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "get_availableCurrency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::ENNJNOGFHNP
// Il2CppName: ENNJNOGFHNP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::ENNJNOGFHNP)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "ENNJNOGFHNP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::MMBJIKNCNGM
// Il2CppName: MMBJIKNCNGM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::MMBJIKNCNGM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "MMBJIKNCNGM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::DOHIBEDOAPM
// Il2CppName: DOHIBEDOAPM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::DOHIBEDOAPM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "DOHIBEDOAPM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::FKGKFMEOEEG
// Il2CppName: FKGKFMEOEEG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::FKGKFMEOEEG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "FKGKFMEOEEG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::KHGLJNKJPIH
// Il2CppName: KHGLJNKJPIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::KHGLJNKJPIH)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "KHGLJNKJPIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::IKGNPMNLJOK
// Il2CppName: IKGNPMNLJOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::ArrayW<::ExtUI::InventoryItemInstance*>)>(&MagicalActual::ItemContainer::IKGNPMNLJOK)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("ExtUI", "InventoryItemInstance"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "IKGNPMNLJOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::NJHHIMFNFCO
// Il2CppName: NJHHIMFNFCO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::NJHHIMFNFCO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "NJHHIMFNFCO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::DCLKIIAKBPM
// Il2CppName: DCLKIIAKBPM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::ArrayW<::ExtUI::InventoryItemInstance*>)>(&MagicalActual::ItemContainer::DCLKIIAKBPM)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("ExtUI", "InventoryItemInstance"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "DCLKIIAKBPM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::GCHNOACKEKG
// Il2CppName: GCHNOACKEKG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::GCHNOACKEKG)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "GCHNOACKEKG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::AttachedToInterface
// Il2CppName: AttachedToInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::AttachedToInterface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "AttachedToInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::DLPEOKNIAEP
// Il2CppName: DLPEOKNIAEP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::DLPEOKNIAEP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "DLPEOKNIAEP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::WithdrawCurrency
// Il2CppName: WithdrawCurrency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::WithdrawCurrency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "WithdrawCurrency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::FOMAEPJHPHO
// Il2CppName: FOMAEPJHPHO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(int)>(&MagicalActual::ItemContainer::FOMAEPJHPHO)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "FOMAEPJHPHO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::ResetInventory
// Il2CppName: ResetInventory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::ResetInventory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "ResetInventory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::ItemContainer::FDDDNDIGIOD
// Il2CppName: FDDDNDIGIOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::FDDDNDIGIOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "FDDDNDIGIOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::BLBKOOGJNBB
// Il2CppName: BLBKOOGJNBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ItemContainer::BLBKOOGJNBB)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "BLBKOOGJNBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::JDPFFFDDLHM
// Il2CppName: JDPFFFDDLHM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::JDPFFFDDLHM)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "JDPFFFDDLHM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::MagicalActual::NetEntity*)>(&MagicalActual::ItemContainer::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::LOECNMPGLMM
// Il2CppName: LOECNMPGLMM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::LOECNMPGLMM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "LOECNMPGLMM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::OHJPAHMACFE
// Il2CppName: OHJPAHMACFE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::ArrayW<::ExtUI::InventoryItemInstance*>)>(&MagicalActual::ItemContainer::OHJPAHMACFE)> {
  static const MethodInfo* get() {
    static auto* MMMEIONJJFJ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("ExtUI", "InventoryItemInstance"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "OHJPAHMACFE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MMMEIONJJFJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::HICFANHNBBI
// Il2CppName: HICFANHNBBI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::HICFANHNBBI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "HICFANHNBBI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::TriggerTab
// Il2CppName: TriggerTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::TriggerTab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "TriggerTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::PEHJNFDBNMB
// Il2CppName: PEHJNFDBNMB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::PEHJNFDBNMB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "PEHJNFDBNMB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::IMKONPPPIGG
// Il2CppName: IMKONPPPIGG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::NetEntity* (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::IMKONPPPIGG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "IMKONPPPIGG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::get_myEntity
// Il2CppName: get_myEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::NetEntity* (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::get_myEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "get_myEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::EKPAPCPHNPK
// Il2CppName: EKPAPCPHNPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)(::Il2CppObject*)>(&MagicalActual::ItemContainer::EKPAPCPHNPK)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "EKPAPCPHNPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::GGAGNINOKAA
// Il2CppName: GGAGNINOKAA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::GGAGNINOKAA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "GGAGNINOKAA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::OHBHLPKMPPA
// Il2CppName: OHBHLPKMPPA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::OHBHLPKMPPA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "OHBHLPKMPPA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::CloseContainerInventory
// Il2CppName: CloseContainerInventory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::CloseContainerInventory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "CloseContainerInventory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ItemContainer::DJDBJCFBBOK
// Il2CppName: DJDBJCFBBOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ExtUI::InventoryItemInstance*> (MagicalActual::ItemContainer::*)()>(&MagicalActual::ItemContainer::DJDBJCFBBOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ItemContainer*), "DJDBJCFBBOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
