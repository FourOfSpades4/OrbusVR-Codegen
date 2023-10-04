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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Light
  class Light;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: LevelLoadCollider
  class LevelLoadCollider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::LevelLoadCollider);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::LevelLoadCollider*, "MagicalActual", "LevelLoadCollider");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.LevelLoadCollider
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelLoadCollider : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::LevelLoadCollider::$LoadMyLevel$d__19
    class $LoadMyLevel$d__19;
    // Nested type: ::MagicalActual::LevelLoadCollider::$UnLoadMyLevel$d__20
    class $UnLoadMyLevel$d__20;
    public:
    // private UnityEngine.BoxCollider BBOMOHLELBB
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::BoxCollider* BBOMOHLELBB;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    // public System.String myLevelFile
    // Size: 0x8
    // Offset: 0x20
    ::StringW myLevelFile;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean ignoreInEditor
    // Size: 0x1
    // Offset: 0x28
    bool ignoreInEditor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableChildren
    // Size: 0x1
    // Offset: 0x29
    bool enableChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isLoaded
    // Size: 0x1
    // Offset: 0x2A
    bool isLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean GCGNFOOHJCO
    // Size: 0x1
    // Offset: 0x2B
    bool GCGNFOOHJCO;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single IKJNMPCLFCN
    // Size: 0x4
    // Offset: 0x2C
    float IKJNMPCLFCN;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single allowLoadStateChangeEvery
    // Size: 0x4
    // Offset: 0x30
    float allowLoadStateChangeEvery;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single LDPHDOEIOIG
    // Size: 0x4
    // Offset: 0x34
    float LDPHDOEIOIG;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single IGGADHFLOPH
    // Size: 0x4
    // Offset: 0x38
    float IGGADHFLOPH;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: IGGADHFLOPH and: EJALDDLCKBL
    char __padding9[0x4] = {};
    // private UnityEngine.AsyncOperation EJALDDLCKBL
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AsyncOperation* EJALDDLCKBL;
    // Field size check
    static_assert(sizeof(::UnityEngine::AsyncOperation*) == 0x8);
    // private UnityEngine.GameObject NDPOPGGPPBA
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* NDPOPGGPPBA;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.String IBHJHKMLFGN
    // Size: 0x8
    // Offset: 0x50
    ::StringW IBHJHKMLFGN;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Renderer[] JGFJMLMMJLI
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Renderer*> JGFJMLMMJLI;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    // private UnityEngine.Light[] HOHHFIOHDOD
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::UnityEngine::Light*> HOHHFIOHDOD;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Light*>) == 0x8);
    // private UnityEngine.Collider[] HCIIGFDMLFK
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Collider*> HCIIGFDMLFK;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private MagicalActual.LevelLoadCollider[] HIJHKOLAMAE
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::MagicalActual::LevelLoadCollider*> HIJHKOLAMAE;
    // Field size check
    static_assert(sizeof(::ArrayW<::MagicalActual::LevelLoadCollider*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.BoxCollider BBOMOHLELBB
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn_BBOMOHLELBB();
    // Get instance field reference: public System.String myLevelFile
    [[deprecated("Use field access instead!")]] ::StringW& dyn_myLevelFile();
    // Get instance field reference: public System.Boolean ignoreInEditor
    [[deprecated("Use field access instead!")]] bool& dyn_ignoreInEditor();
    // Get instance field reference: public System.Boolean enableChildren
    [[deprecated("Use field access instead!")]] bool& dyn_enableChildren();
    // Get instance field reference: public System.Boolean isLoaded
    [[deprecated("Use field access instead!")]] bool& dyn_isLoaded();
    // Get instance field reference: private System.Boolean GCGNFOOHJCO
    [[deprecated("Use field access instead!")]] bool& dyn_GCGNFOOHJCO();
    // Get instance field reference: private System.Single IKJNMPCLFCN
    [[deprecated("Use field access instead!")]] float& dyn_IKJNMPCLFCN();
    // Get instance field reference: public System.Single allowLoadStateChangeEvery
    [[deprecated("Use field access instead!")]] float& dyn_allowLoadStateChangeEvery();
    // Get instance field reference: private System.Single LDPHDOEIOIG
    [[deprecated("Use field access instead!")]] float& dyn_LDPHDOEIOIG();
    // Get instance field reference: private System.Single IGGADHFLOPH
    [[deprecated("Use field access instead!")]] float& dyn_IGGADHFLOPH();
    // Get instance field reference: private UnityEngine.AsyncOperation EJALDDLCKBL
    [[deprecated("Use field access instead!")]] ::UnityEngine::AsyncOperation*& dyn_EJALDDLCKBL();
    // Get instance field reference: private UnityEngine.GameObject NDPOPGGPPBA
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_NDPOPGGPPBA();
    // Get instance field reference: private System.String IBHJHKMLFGN
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IBHJHKMLFGN();
    // Get instance field reference: private UnityEngine.Renderer[] JGFJMLMMJLI
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Renderer*>& dyn_JGFJMLMMJLI();
    // Get instance field reference: private UnityEngine.Light[] HOHHFIOHDOD
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Light*>& dyn_HOHHFIOHDOD();
    // Get instance field reference: private UnityEngine.Collider[] HCIIGFDMLFK
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_HCIIGFDMLFK();
    // Get instance field reference: private MagicalActual.LevelLoadCollider[] HIJHKOLAMAE
    [[deprecated("Use field access instead!")]] ::ArrayW<::MagicalActual::LevelLoadCollider*>& dyn_HIJHKOLAMAE();
    // private System.Collections.IEnumerator LMCMPBOLPOK()
    // Offset: 0x127C768
    ::System::Collections::IEnumerator* LMCMPBOLPOK();
    // private System.Void DDJINHIPKCE()
    // Offset: 0x127C80C
    void DDJINHIPKCE();
    // private System.Void DGELIHGGOKB()
    // Offset: 0x127CAC4
    void DGELIHGGOKB();
    // private System.Void DJIGIJKOPDC()
    // Offset: 0x127CDCC
    void DJIGIJKOPDC();
    // private System.Void EEMBCPKCOIL()
    // Offset: 0x127D0AC
    void EEMBCPKCOIL();
    // private System.Collections.IEnumerator LNMIICHEEEI()
    // Offset: 0x127D36C
    ::System::Collections::IEnumerator* LNMIICHEEEI();
    // private System.Collections.IEnumerator DEMLGOGPKLP()
    // Offset: 0x127D3E0
    ::System::Collections::IEnumerator* DEMLGOGPKLP();
    // private System.Void AKONOOIDPDA()
    // Offset: 0x127D454
    void AKONOOIDPDA();
    // private System.Void MIPEOCANMMO()
    // Offset: 0x127D758
    void MIPEOCANMMO();
    // private System.Void FIJGCHFAFHN()
    // Offset: 0x127DA68
    void FIJGCHFAFHN();
    // private System.Collections.IEnumerator EPNJHPPPLMI()
    // Offset: 0x127C9D8
    ::System::Collections::IEnumerator* EPNJHPPPLMI();
    // private System.Collections.IEnumerator GNPHLLBKOCB()
    // Offset: 0x127DCA4
    ::System::Collections::IEnumerator* GNPHLLBKOCB();
    // private System.Collections.IEnumerator KILNHGDADCI()
    // Offset: 0x127DD18
    ::System::Collections::IEnumerator* KILNHGDADCI();
    // private System.Void NDAOHLAOCDE()
    // Offset: 0x127DD90
    void NDAOHLAOCDE();
    // public System.Void .ctor()
    // Offset: 0x127E0A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelLoadCollider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::LevelLoadCollider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelLoadCollider*, creationType>()));
    }
    // private System.Collections.IEnumerator KLGEPHLBOLF()
    // Offset: 0x127DC30
    ::System::Collections::IEnumerator* KLGEPHLBOLF();
    // private System.Collections.IEnumerator JELOPOEHNJA()
    // Offset: 0x127E110
    ::System::Collections::IEnumerator* JELOPOEHNJA();
    // private System.Collections.IEnumerator MHGFBOGBKPP()
    // Offset: 0x127CA50
    ::System::Collections::IEnumerator* MHGFBOGBKPP();
    // private System.Collections.IEnumerator NLIABOIDHKK()
    // Offset: 0x127E184
    ::System::Collections::IEnumerator* NLIABOIDHKK();
    // private System.Void IDGLLGOOENO()
    // Offset: 0x127E1F8
    void IDGLLGOOENO();
    // private System.Collections.IEnumerator DGDOAIDNGEE()
    // Offset: 0x127E3C4
    ::System::Collections::IEnumerator* DGDOAIDNGEE();
    // private System.Void AFMOIOAGKLM()
    // Offset: 0x127E438
    void AFMOIOAGKLM();
    // private System.Void DAPFFOEMAAM()
    // Offset: 0x127E71C
    void DAPFFOEMAAM();
    // private System.Collections.IEnumerator FNLCCGKEAIB()
    // Offset: 0x127E9FC
    ::System::Collections::IEnumerator* FNLCCGKEAIB();
    // private System.Void FixedUpdate()
    // Offset: 0x127EA74
    void FixedUpdate();
    // private System.Void BLIPCIAAIHI()
    // Offset: 0x127EC2C
    void BLIPCIAAIHI();
    // private System.Collections.IEnumerator JEMPDIIOGFF()
    // Offset: 0x127EE00
    ::System::Collections::IEnumerator* JEMPDIIOGFF();
    // private System.Void Awake()
    // Offset: 0x127EE78
    void Awake();
    // private System.Void JDJILFHNOGP()
    // Offset: 0x127F180
    void JDJILFHNOGP();
    // private System.Collections.IEnumerator IOGHNBCFIFJ()
    // Offset: 0x127F48C
    ::System::Collections::IEnumerator* IOGHNBCFIFJ();
    // private System.Collections.IEnumerator MBBBANNENII()
    // Offset: 0x127D280
    ::System::Collections::IEnumerator* MBBBANNENII();
    // private System.Collections.IEnumerator ADFEKAHEBOD()
    // Offset: 0x127D2F8
    ::System::Collections::IEnumerator* ADFEKAHEBOD();
  }; // MagicalActual.LevelLoadCollider
  #pragma pack(pop)
  static check_size<sizeof(LevelLoadCollider), 112 + sizeof(::ArrayW<::MagicalActual::LevelLoadCollider*>)> __MagicalActual_LevelLoadColliderSizeCheck;
  static_assert(sizeof(LevelLoadCollider) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::LMCMPBOLPOK
// Il2CppName: LMCMPBOLPOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::LMCMPBOLPOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "LMCMPBOLPOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::DDJINHIPKCE
// Il2CppName: DDJINHIPKCE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::DDJINHIPKCE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "DDJINHIPKCE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::DGELIHGGOKB
// Il2CppName: DGELIHGGOKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::DGELIHGGOKB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "DGELIHGGOKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::DJIGIJKOPDC
// Il2CppName: DJIGIJKOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::DJIGIJKOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "DJIGIJKOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::EEMBCPKCOIL
// Il2CppName: EEMBCPKCOIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::EEMBCPKCOIL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "EEMBCPKCOIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::LNMIICHEEEI
// Il2CppName: LNMIICHEEEI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::LNMIICHEEEI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "LNMIICHEEEI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::DEMLGOGPKLP
// Il2CppName: DEMLGOGPKLP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::DEMLGOGPKLP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "DEMLGOGPKLP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::AKONOOIDPDA
// Il2CppName: AKONOOIDPDA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::AKONOOIDPDA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "AKONOOIDPDA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::MIPEOCANMMO
// Il2CppName: MIPEOCANMMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::MIPEOCANMMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "MIPEOCANMMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::FIJGCHFAFHN
// Il2CppName: FIJGCHFAFHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::FIJGCHFAFHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "FIJGCHFAFHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::EPNJHPPPLMI
// Il2CppName: EPNJHPPPLMI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::EPNJHPPPLMI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "EPNJHPPPLMI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::GNPHLLBKOCB
// Il2CppName: GNPHLLBKOCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::GNPHLLBKOCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "GNPHLLBKOCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::KILNHGDADCI
// Il2CppName: KILNHGDADCI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::KILNHGDADCI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "KILNHGDADCI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::NDAOHLAOCDE
// Il2CppName: NDAOHLAOCDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::NDAOHLAOCDE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "NDAOHLAOCDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::KLGEPHLBOLF
// Il2CppName: KLGEPHLBOLF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::KLGEPHLBOLF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "KLGEPHLBOLF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::JELOPOEHNJA
// Il2CppName: JELOPOEHNJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::JELOPOEHNJA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "JELOPOEHNJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::MHGFBOGBKPP
// Il2CppName: MHGFBOGBKPP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::MHGFBOGBKPP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "MHGFBOGBKPP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::NLIABOIDHKK
// Il2CppName: NLIABOIDHKK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::NLIABOIDHKK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "NLIABOIDHKK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::IDGLLGOOENO
// Il2CppName: IDGLLGOOENO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::IDGLLGOOENO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "IDGLLGOOENO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::DGDOAIDNGEE
// Il2CppName: DGDOAIDNGEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::DGDOAIDNGEE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "DGDOAIDNGEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::AFMOIOAGKLM
// Il2CppName: AFMOIOAGKLM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::AFMOIOAGKLM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "AFMOIOAGKLM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::DAPFFOEMAAM
// Il2CppName: DAPFFOEMAAM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::DAPFFOEMAAM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "DAPFFOEMAAM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::FNLCCGKEAIB
// Il2CppName: FNLCCGKEAIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::FNLCCGKEAIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "FNLCCGKEAIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::BLIPCIAAIHI
// Il2CppName: BLIPCIAAIHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::BLIPCIAAIHI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "BLIPCIAAIHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::JEMPDIIOGFF
// Il2CppName: JEMPDIIOGFF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::JEMPDIIOGFF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "JEMPDIIOGFF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::JDJILFHNOGP
// Il2CppName: JDJILFHNOGP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::JDJILFHNOGP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "JDJILFHNOGP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::IOGHNBCFIFJ
// Il2CppName: IOGHNBCFIFJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::IOGHNBCFIFJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "IOGHNBCFIFJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::MBBBANNENII
// Il2CppName: MBBBANNENII
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::MBBBANNENII)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "MBBBANNENII", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LevelLoadCollider::ADFEKAHEBOD
// Il2CppName: ADFEKAHEBOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::LevelLoadCollider::*)()>(&MagicalActual::LevelLoadCollider::ADFEKAHEBOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LevelLoadCollider*), "ADFEKAHEBOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};