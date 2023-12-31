// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: DynamicPlayerMap
  class DynamicPlayerMap;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: POIMapIcon
  class POIMapIcon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::POIMapIcon);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::POIMapIcon*, "MagicalActual", "POIMapIcon");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.POIMapIcon
  // [TokenAttribute] Offset: FFFFFFFF
  class POIMapIcon : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.UI.Image iconImage
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* iconImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 ID
    // Size: 0x4
    // Offset: 0x28
    int _ID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean selected
    // Size: 0x1
    // Offset: 0x2C
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: selected and: myMap
    char __padding3[0x3] = {};
    // public MagicalActual.DynamicPlayerMap myMap
    // Size: 0x8
    // Offset: 0x30
    ::MagicalActual::DynamicPlayerMap* myMap;
    // Field size check
    static_assert(sizeof(::MagicalActual::DynamicPlayerMap*) == 0x8);
    // public UnityEngine.Vector3 desiredBeaconPosition
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 desiredBeaconPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean isMiniZonePOI
    // Size: 0x1
    // Offset: 0x44
    bool isMiniZonePOI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMiniZonePOI and: KIFABALOFON
    char __padding6[0x3] = {};
    // private UnityEngine.Color KIFABALOFON
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color KIFABALOFON;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color KOIKEPLFPNO
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color KOIKEPLFPNO;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.Image iconImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_iconImage();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Int32 ID
    [[deprecated("Use field access instead!")]] int& dyn_ID();
    // Get instance field reference: public System.Boolean selected
    [[deprecated("Use field access instead!")]] bool& dyn_selected();
    // Get instance field reference: public MagicalActual.DynamicPlayerMap myMap
    [[deprecated("Use field access instead!")]] ::MagicalActual::DynamicPlayerMap*& dyn_myMap();
    // Get instance field reference: public UnityEngine.Vector3 desiredBeaconPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_desiredBeaconPosition();
    // Get instance field reference: public System.Boolean isMiniZonePOI
    [[deprecated("Use field access instead!")]] bool& dyn_isMiniZonePOI();
    // Get instance field reference: private UnityEngine.Color KIFABALOFON
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_KIFABALOFON();
    // Get instance field reference: private UnityEngine.Color KOIKEPLFPNO
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_KOIKEPLFPNO();
    // public System.Void FNDGAPGHJGN()
    // Offset: 0xFD12AC
    void FNDGAPGHJGN();
    // public System.Void PALJHDGDCFA()
    // Offset: 0xFD136C
    void PALJHDGDCFA();
    // public System.Void LCJLLJMEFDP()
    // Offset: 0xFD1430
    void LCJLLJMEFDP();
    // public System.Void MPPKDIHIHEM()
    // Offset: 0xFD14F4
    void MPPKDIHIHEM();
    // public System.Void KPOMGCOAHKJ()
    // Offset: 0xFD15B4
    void KPOMGCOAHKJ();
    // public System.Void DLCIKGHHKBN()
    // Offset: 0xFD1678
    void DLCIKGHHKBN();
    // public System.Void .ctor()
    // Offset: 0xFD173C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static POIMapIcon* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::POIMapIcon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<POIMapIcon*, creationType>()));
    }
    // public System.Void CBKIFNOAOHF()
    // Offset: 0xFD17E8
    void CBKIFNOAOHF();
    // public System.Void GOGOHIJDFJJ()
    // Offset: 0xFD18A8
    void GOGOHIJDFJJ();
    // public System.Void OAGBDCKPIDF()
    // Offset: 0xFD1968
    void OAGBDCKPIDF();
    // public System.Void MNOJBCNAMDO()
    // Offset: 0xFD1A2C
    void MNOJBCNAMDO();
    // public System.Void AINENKMOCBB()
    // Offset: 0xFD1AEC
    void AINENKMOCBB();
    // public System.Void KKJPENFFKFE()
    // Offset: 0xFD1BB0
    void KKJPENFFKFE();
    // public System.Void ELGECGIPDOO()
    // Offset: 0xFD1C74
    void ELGECGIPDOO();
    // public System.Void KABFGCCFOLN()
    // Offset: 0xFD1D38
    void KABFGCCFOLN();
    // public System.Void JHPFLBBJHAO()
    // Offset: 0xFD1DF8
    void JHPFLBBJHAO();
    // public System.Void IBKKDCCECPD()
    // Offset: 0xFD1EBC
    void IBKKDCCECPD();
    // public System.Void JPJFKEPFNFK()
    // Offset: 0xFD1F7C
    void JPJFKEPFNFK();
    // public System.Void CCDBMCEPLHH()
    // Offset: 0xFD203C
    void CCDBMCEPLHH();
    // public System.Void DEOPONDDEDB()
    // Offset: 0xFD2100
    void DEOPONDDEDB();
    // public System.Void KCDIDAANBOM()
    // Offset: 0xFD21C0
    void KCDIDAANBOM();
    // public System.Void PFCNGKLINCC()
    // Offset: 0xFD2280
    void PFCNGKLINCC();
    // public System.Void JDDLMEPGMKN()
    // Offset: 0xFD2340
    void JDDLMEPGMKN();
    // public System.Void PGIMKICMKDA()
    // Offset: 0xFD2404
    void PGIMKICMKDA();
    // public System.Void AHCOECFOIGD()
    // Offset: 0xFD24C4
    void AHCOECFOIGD();
    // public System.Void FJHFEEEHOBL()
    // Offset: 0xFD2588
    void FJHFEEEHOBL();
    // public System.Void NCJLANJFKFE()
    // Offset: 0xFD264C
    void NCJLANJFKFE();
    // public System.Void EMELGNMFMOA()
    // Offset: 0xFD2710
    void EMELGNMFMOA();
    // public System.Void IHFHBDMLJGL()
    // Offset: 0xFD27D0
    void IHFHBDMLJGL();
    // public System.Void AFMNODEFOHA()
    // Offset: 0xFD2890
    void AFMNODEFOHA();
    // public System.Void POIClicked()
    // Offset: 0xFD2950
    void POIClicked();
    // public System.Void PELDGDKBMOG()
    // Offset: 0xFD2A14
    void PELDGDKBMOG();
    // public System.Void PFLGJKECEDK()
    // Offset: 0xFD2AD4
    void PFLGJKECEDK();
    // public System.Void PKLJJNKDLCO()
    // Offset: 0xFD2B98
    void PKLJJNKDLCO();
    // public System.Void GBOGKCPFBND()
    // Offset: 0xFD2C58
    void GBOGKCPFBND();
    // public System.Void LNGGKOACCBL()
    // Offset: 0xFD2D18
    void LNGGKOACCBL();
  }; // MagicalActual.POIMapIcon
  #pragma pack(pop)
  static check_size<sizeof(POIMapIcon), 88 + sizeof(::UnityEngine::Color)> __MagicalActual_POIMapIconSizeCheck;
  static_assert(sizeof(POIMapIcon) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::FNDGAPGHJGN
// Il2CppName: FNDGAPGHJGN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::FNDGAPGHJGN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "FNDGAPGHJGN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::PALJHDGDCFA
// Il2CppName: PALJHDGDCFA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::PALJHDGDCFA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "PALJHDGDCFA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::LCJLLJMEFDP
// Il2CppName: LCJLLJMEFDP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::LCJLLJMEFDP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "LCJLLJMEFDP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::MPPKDIHIHEM
// Il2CppName: MPPKDIHIHEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::MPPKDIHIHEM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "MPPKDIHIHEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::KPOMGCOAHKJ
// Il2CppName: KPOMGCOAHKJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::KPOMGCOAHKJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "KPOMGCOAHKJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::DLCIKGHHKBN
// Il2CppName: DLCIKGHHKBN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::DLCIKGHHKBN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "DLCIKGHHKBN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::CBKIFNOAOHF
// Il2CppName: CBKIFNOAOHF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::CBKIFNOAOHF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "CBKIFNOAOHF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::GOGOHIJDFJJ
// Il2CppName: GOGOHIJDFJJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::GOGOHIJDFJJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "GOGOHIJDFJJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::OAGBDCKPIDF
// Il2CppName: OAGBDCKPIDF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::OAGBDCKPIDF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "OAGBDCKPIDF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::MNOJBCNAMDO
// Il2CppName: MNOJBCNAMDO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::MNOJBCNAMDO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "MNOJBCNAMDO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::AINENKMOCBB
// Il2CppName: AINENKMOCBB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::AINENKMOCBB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "AINENKMOCBB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::KKJPENFFKFE
// Il2CppName: KKJPENFFKFE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::KKJPENFFKFE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "KKJPENFFKFE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::ELGECGIPDOO
// Il2CppName: ELGECGIPDOO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::ELGECGIPDOO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "ELGECGIPDOO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::KABFGCCFOLN
// Il2CppName: KABFGCCFOLN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::KABFGCCFOLN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "KABFGCCFOLN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::JHPFLBBJHAO
// Il2CppName: JHPFLBBJHAO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::JHPFLBBJHAO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "JHPFLBBJHAO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::IBKKDCCECPD
// Il2CppName: IBKKDCCECPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::IBKKDCCECPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "IBKKDCCECPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::JPJFKEPFNFK
// Il2CppName: JPJFKEPFNFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::JPJFKEPFNFK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "JPJFKEPFNFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::CCDBMCEPLHH
// Il2CppName: CCDBMCEPLHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::CCDBMCEPLHH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "CCDBMCEPLHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::DEOPONDDEDB
// Il2CppName: DEOPONDDEDB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::DEOPONDDEDB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "DEOPONDDEDB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::KCDIDAANBOM
// Il2CppName: KCDIDAANBOM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::KCDIDAANBOM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "KCDIDAANBOM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::PFCNGKLINCC
// Il2CppName: PFCNGKLINCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::PFCNGKLINCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "PFCNGKLINCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::JDDLMEPGMKN
// Il2CppName: JDDLMEPGMKN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::JDDLMEPGMKN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "JDDLMEPGMKN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::PGIMKICMKDA
// Il2CppName: PGIMKICMKDA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::PGIMKICMKDA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "PGIMKICMKDA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::AHCOECFOIGD
// Il2CppName: AHCOECFOIGD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::AHCOECFOIGD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "AHCOECFOIGD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::FJHFEEEHOBL
// Il2CppName: FJHFEEEHOBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::FJHFEEEHOBL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "FJHFEEEHOBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::NCJLANJFKFE
// Il2CppName: NCJLANJFKFE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::NCJLANJFKFE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "NCJLANJFKFE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::EMELGNMFMOA
// Il2CppName: EMELGNMFMOA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::EMELGNMFMOA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "EMELGNMFMOA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::IHFHBDMLJGL
// Il2CppName: IHFHBDMLJGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::IHFHBDMLJGL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "IHFHBDMLJGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::AFMNODEFOHA
// Il2CppName: AFMNODEFOHA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::AFMNODEFOHA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "AFMNODEFOHA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::POIClicked
// Il2CppName: POIClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::POIClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "POIClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::PELDGDKBMOG
// Il2CppName: PELDGDKBMOG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::PELDGDKBMOG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "PELDGDKBMOG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::PFLGJKECEDK
// Il2CppName: PFLGJKECEDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::PFLGJKECEDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "PFLGJKECEDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::PKLJJNKDLCO
// Il2CppName: PKLJJNKDLCO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::PKLJJNKDLCO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "PKLJJNKDLCO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::GBOGKCPFBND
// Il2CppName: GBOGKCPFBND
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::GBOGKCPFBND)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "GBOGKCPFBND", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::POIMapIcon::LNGGKOACCBL
// Il2CppName: LNGGKOACCBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::POIMapIcon::*)()>(&MagicalActual::POIMapIcon::LNGGKOACCBL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::POIMapIcon*), "LNGGKOACCBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
