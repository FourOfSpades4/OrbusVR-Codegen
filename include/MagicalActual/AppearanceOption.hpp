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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Grabber
  class Grabber;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: AppearanceOption
  class AppearanceOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::AppearanceOption);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::AppearanceOption*, "MagicalActual", "AppearanceOption");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.AppearanceOption
  // [TokenAttribute] Offset: FFFFFFFF
  class AppearanceOption : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String appearanceProperty
    // Size: 0x8
    // Offset: 0x18
    ::StringW appearanceProperty;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 appearanceIdx
    // Size: 0x4
    // Offset: 0x20
    int appearanceIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 FKKFPPDHEBJ
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 FKKFPPDHEBJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion IGDFBOBOAJL
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Quaternion IGDFBOBOAJL;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform JNBOAIGLFGP
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* JNBOAIGLFGP;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean PPBCICDGEJC
    // Size: 0x1
    // Offset: 0x48
    bool PPBCICDGEJC;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PPBCICDGEJC and: FCDNLCMGDPC
    char __padding5[0x3] = {};
    // private System.Single FCDNLCMGDPC
    // Size: 0x4
    // Offset: 0x4C
    float FCDNLCMGDPC;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Collider[] JGOGJDHABHN
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Collider*> JGOGJDHABHN;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private UnityEngine.Rigidbody EIPMBKLODIJ
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Rigidbody* EIPMBKLODIJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String appearanceProperty
    [[deprecated("Use field access instead!")]] ::StringW& dyn_appearanceProperty();
    // Get instance field reference: public System.Int32 appearanceIdx
    [[deprecated("Use field access instead!")]] int& dyn_appearanceIdx();
    // Get instance field reference: private UnityEngine.Vector3 FKKFPPDHEBJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_FKKFPPDHEBJ();
    // Get instance field reference: private UnityEngine.Quaternion IGDFBOBOAJL
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_IGDFBOBOAJL();
    // Get instance field reference: private UnityEngine.Transform JNBOAIGLFGP
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_JNBOAIGLFGP();
    // Get instance field reference: private System.Boolean PPBCICDGEJC
    [[deprecated("Use field access instead!")]] bool& dyn_PPBCICDGEJC();
    // Get instance field reference: private System.Single FCDNLCMGDPC
    [[deprecated("Use field access instead!")]] float& dyn_FCDNLCMGDPC();
    // Get instance field reference: private UnityEngine.Collider[] JGOGJDHABHN
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_JGOGJDHABHN();
    // Get instance field reference: private UnityEngine.Rigidbody EIPMBKLODIJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_EIPMBKLODIJ();
    // public System.Void IGOICEDENHI(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B562C
    void IGOICEDENHI(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void PABPOCMFEJK(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B5644
    void PABPOCMFEJK(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void HHKOFMNJKDA()
    // Offset: 0x10B5648
    void HHKOFMNJKDA();
    // private System.Void MAMCIOHIMDB()
    // Offset: 0x10B5A80
    void MAMCIOHIMDB();
    // private System.Void EEMBCPKCOIL()
    // Offset: 0x10B5B80
    void EEMBCPKCOIL();
    // public System.Void CHKCOPCNIDC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B5EBC
    void CHKCOPCNIDC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void FNGLOIECKDG()
    // Offset: 0x10B5EC0
    void FNGLOIECKDG();
    // private System.Void NLFOPEAGLDJ()
    // Offset: 0x10B61D4
    void NLFOPEAGLDJ();
    // public System.Void PFKPOGPEBJP(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B6510
    void PFKPOGPEBJP(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void GMLKDIKGBCK()
    // Offset: 0x10B5984
    void GMLKDIKGBCK();
    // public System.Void PEBCHDDABFA(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B6524
    void PEBCHDDABFA(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x10B653C
    void DGJGAFKDIDK();
    // private System.Void GLPCGKKPKOG()
    // Offset: 0x10B6414
    void GLPCGKKPKOG();
    // public System.Void .ctor()
    // Offset: 0x10B6850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppearanceOption* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::AppearanceOption::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppearanceOption*, creationType>()));
    }
    // private System.Void KBDGAPMJGLG()
    // Offset: 0x10B68A8
    void KBDGAPMJGLG();
    // private System.Void BDHLJMBOHFD()
    // Offset: 0x10B6BBC
    void BDHLJMBOHFD();
    // public System.Void FOEGEJAMHBC(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B6CB8
    void FOEGEJAMHBC(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void PhysicsInteractableGrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B6CCC
    void PhysicsInteractableGrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // public System.Void PhysicsInteractableUngrip(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B6CD0
    void PhysicsInteractableUngrip(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void BIMCNDAFFJC()
    // Offset: 0x10B6CE0
    void BIMCNDAFFJC();
    // private System.Void NAPGGGFOEKO()
    // Offset: 0x10B6F20
    void NAPGGGFOEKO();
    // private System.Void Start()
    // Offset: 0x10B7160
    void Start();
    // public System.Void FJMGMOMABFO(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B7468
    void FJMGMOMABFO(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x10B747C
    void NNDKJCJFIAK();
    // public System.Void AGNOEHOKDFG(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B7790
    void AGNOEHOKDFG(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void KBPPDCFIPPG()
    // Offset: 0x10B77A8
    void KBPPDCFIPPG();
    // public System.Void OBEBPGLHIHJ(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B78A8
    void OBEBPGLHIHJ(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void JENOIOBAEPG()
    // Offset: 0x10B78AC
    void JENOIOBAEPG();
    // public System.Void LODDPHAEIAD(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B7BC0
    void LODDPHAEIAD(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void LBIKOKCCILF()
    // Offset: 0x10B7BC4
    void LBIKOKCCILF();
    // private System.Void FixedUpdate()
    // Offset: 0x10B7ED8
    void FixedUpdate();
    // private System.Void ODCHJDLLNCB()
    // Offset: 0x10B5DC0
    void ODCHJDLLNCB();
    // private System.Void KIKDGHLDACK()
    // Offset: 0x10B5888
    void KIKDGHLDACK();
    // public System.Void GPLMNLOCHNM(MagicalActual.Grabber FOIEAOKBGLM)
    // Offset: 0x10B810C
    void GPLMNLOCHNM(::MagicalActual::Grabber* FOIEAOKBGLM);
    // private System.Void GGAFMPPDBOH()
    // Offset: 0x10B8110
    void GGAFMPPDBOH();
    // private System.Void JCOEAIILOND()
    // Offset: 0x10B8350
    void JCOEAIILOND();
  }; // MagicalActual.AppearanceOption
  #pragma pack(pop)
  static check_size<sizeof(AppearanceOption), 88 + sizeof(::UnityEngine::Rigidbody*)> __MagicalActual_AppearanceOptionSizeCheck;
  static_assert(sizeof(AppearanceOption) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::IGOICEDENHI
// Il2CppName: IGOICEDENHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::IGOICEDENHI)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "IGOICEDENHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::PABPOCMFEJK
// Il2CppName: PABPOCMFEJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::PABPOCMFEJK)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "PABPOCMFEJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::HHKOFMNJKDA
// Il2CppName: HHKOFMNJKDA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::HHKOFMNJKDA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "HHKOFMNJKDA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::MAMCIOHIMDB
// Il2CppName: MAMCIOHIMDB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::MAMCIOHIMDB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "MAMCIOHIMDB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::EEMBCPKCOIL
// Il2CppName: EEMBCPKCOIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::EEMBCPKCOIL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "EEMBCPKCOIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::CHKCOPCNIDC
// Il2CppName: CHKCOPCNIDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::CHKCOPCNIDC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "CHKCOPCNIDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::NLFOPEAGLDJ
// Il2CppName: NLFOPEAGLDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::NLFOPEAGLDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "NLFOPEAGLDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::PFKPOGPEBJP
// Il2CppName: PFKPOGPEBJP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::PFKPOGPEBJP)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "PFKPOGPEBJP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::GMLKDIKGBCK
// Il2CppName: GMLKDIKGBCK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::GMLKDIKGBCK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "GMLKDIKGBCK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::PEBCHDDABFA
// Il2CppName: PEBCHDDABFA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::PEBCHDDABFA)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "PEBCHDDABFA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::GLPCGKKPKOG
// Il2CppName: GLPCGKKPKOG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::GLPCGKKPKOG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "GLPCGKKPKOG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::KBDGAPMJGLG
// Il2CppName: KBDGAPMJGLG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::KBDGAPMJGLG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "KBDGAPMJGLG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::BDHLJMBOHFD
// Il2CppName: BDHLJMBOHFD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::BDHLJMBOHFD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "BDHLJMBOHFD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::FOEGEJAMHBC
// Il2CppName: FOEGEJAMHBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::FOEGEJAMHBC)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "FOEGEJAMHBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::PhysicsInteractableGrip
// Il2CppName: PhysicsInteractableGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::PhysicsInteractableGrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "PhysicsInteractableGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::PhysicsInteractableUngrip
// Il2CppName: PhysicsInteractableUngrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::PhysicsInteractableUngrip)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "PhysicsInteractableUngrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::BIMCNDAFFJC
// Il2CppName: BIMCNDAFFJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::BIMCNDAFFJC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "BIMCNDAFFJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::NAPGGGFOEKO
// Il2CppName: NAPGGGFOEKO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::NAPGGGFOEKO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "NAPGGGFOEKO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::FJMGMOMABFO
// Il2CppName: FJMGMOMABFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::FJMGMOMABFO)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "FJMGMOMABFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::AGNOEHOKDFG
// Il2CppName: AGNOEHOKDFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::AGNOEHOKDFG)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "AGNOEHOKDFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::KBPPDCFIPPG
// Il2CppName: KBPPDCFIPPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::KBPPDCFIPPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "KBPPDCFIPPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::OBEBPGLHIHJ
// Il2CppName: OBEBPGLHIHJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::OBEBPGLHIHJ)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "OBEBPGLHIHJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::LODDPHAEIAD
// Il2CppName: LODDPHAEIAD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::LODDPHAEIAD)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "LODDPHAEIAD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::LBIKOKCCILF
// Il2CppName: LBIKOKCCILF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::LBIKOKCCILF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "LBIKOKCCILF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::ODCHJDLLNCB
// Il2CppName: ODCHJDLLNCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::ODCHJDLLNCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "ODCHJDLLNCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::KIKDGHLDACK
// Il2CppName: KIKDGHLDACK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::KIKDGHLDACK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "KIKDGHLDACK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::GPLMNLOCHNM
// Il2CppName: GPLMNLOCHNM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)(::MagicalActual::Grabber*)>(&MagicalActual::AppearanceOption::GPLMNLOCHNM)> {
  static const MethodInfo* get() {
    static auto* FOIEAOKBGLM = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "GPLMNLOCHNM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{FOIEAOKBGLM});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::GGAFMPPDBOH
// Il2CppName: GGAFMPPDBOH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::GGAFMPPDBOH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "GGAFMPPDBOH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AppearanceOption::JCOEAIILOND
// Il2CppName: JCOEAIILOND
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AppearanceOption::*)()>(&MagicalActual::AppearanceOption::JCOEAIILOND)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AppearanceOption*), "JCOEAIILOND", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
