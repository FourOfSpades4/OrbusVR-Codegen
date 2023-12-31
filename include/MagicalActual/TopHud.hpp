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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerAvatar
  class PlayerAvatar;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Slider
  class Slider;
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SuperTextMesh
  class SuperTextMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: TopHud
  class TopHud;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::TopHud);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::TopHud*, "MagicalActual", "TopHud");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.TopHud
  // [TokenAttribute] Offset: FFFFFFFF
  class TopHud : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject trackingTarget
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* trackingTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private MagicalActual.PlayerAvatar FLOJOIBDGPG
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::PlayerAvatar* FLOJOIBDGPG;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerAvatar*) == 0x8);
    // public UnityEngine.UI.Slider xpBar
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Slider* xpBar;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Slider*) == 0x8);
    // public SuperTextMesh levelLabel
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SuperTextMesh* levelLabel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // public SuperTextMesh playerStatusText
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SuperTextMesh* playerStatusText;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // public SuperTextMesh playerWarningText
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SuperTextMesh* playerWarningText;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // public SuperTextMesh partyRoleText
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SuperTextMesh* partyRoleText;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // public UnityEngine.UI.Text warningLabel
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Text* warningLabel;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.SpriteRenderer dangerWarning
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::SpriteRenderer* dangerWarning;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // public UnityEngine.UI.Text logText
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::UI::Text* logText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> MDONCFJAGBF
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::StringW>* MDONCFJAGBF;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject trackingTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_trackingTarget();
    // Get instance field reference: private MagicalActual.PlayerAvatar FLOJOIBDGPG
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerAvatar*& dyn_FLOJOIBDGPG();
    // Get instance field reference: public UnityEngine.UI.Slider xpBar
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Slider*& dyn_xpBar();
    // Get instance field reference: public SuperTextMesh levelLabel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_levelLabel();
    // Get instance field reference: public SuperTextMesh playerStatusText
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_playerStatusText();
    // Get instance field reference: public SuperTextMesh playerWarningText
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_playerWarningText();
    // Get instance field reference: public SuperTextMesh partyRoleText
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_partyRoleText();
    // Get instance field reference: public UnityEngine.UI.Text warningLabel
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_warningLabel();
    // Get instance field reference: public UnityEngine.SpriteRenderer dangerWarning
    [[deprecated("Use field access instead!")]] ::UnityEngine::SpriteRenderer*& dyn_dangerWarning();
    // Get instance field reference: public UnityEngine.UI.Text logText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_logText();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> MDONCFJAGBF
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_MDONCFJAGBF();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x13BA480
    void CBMDGNKFPIO();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x13BA544
    void MLGBKBMHHLE();
    // private System.Void KCEPMBHOMCD()
    // Offset: 0x13BA608
    void KCEPMBHOMCD();
    // private System.Void LJOGIPIJIPF()
    // Offset: 0x13BA78C
    void LJOGIPIJIPF();
    // public System.Void GHOELBAHDBL(System.String LBMMPOBMLMI)
    // Offset: 0x13BA910
    void GHOELBAHDBL(::StringW LBMMPOBMLMI);
    // private System.Void FEIGDJNEHBG()
    // Offset: 0x13BAA90
    void FEIGDJNEHBG();
    // public System.Void BPKGCCHJJMP(System.String LBMMPOBMLMI)
    // Offset: 0x13BAC14
    void BPKGCCHJJMP(::StringW LBMMPOBMLMI);
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x13BAD84
    void EPCHNEGNKNF();
    // private System.Void EFGJFMENOAL()
    // Offset: 0x13BAE48
    void EFGJFMENOAL();
    // private System.Void GEJIJMPGALF()
    // Offset: 0x13BAFCC
    void GEJIJMPGALF();
    // private System.Void JJNHCABMBIH()
    // Offset: 0x13BB150
    void JJNHCABMBIH();
    // private System.Void GHBOEBHBEEJ()
    // Offset: 0x13BB2D4
    void GHBOEBHBEEJ();
    // private System.Void CEGEBCFNLFC()
    // Offset: 0x13BB458
    void CEGEBCFNLFC();
    // public System.Void PMPBJAPEJAB(System.String LBMMPOBMLMI)
    // Offset: 0x13BB5DC
    void PMPBJAPEJAB(::StringW LBMMPOBMLMI);
    // private System.Void MHHFAOGFAPO()
    // Offset: 0x13BB75C
    void MHHFAOGFAPO();
    // public System.Void EHMIDPCEGKH(System.String LBMMPOBMLMI)
    // Offset: 0x13BB8E0
    void EHMIDPCEGKH(::StringW LBMMPOBMLMI);
    // private System.Void BJMMJNDCPLF()
    // Offset: 0x13BBA60
    void BJMMJNDCPLF();
    // public System.Void AddToLog(System.String LBMMPOBMLMI)
    // Offset: 0x13BBBE4
    void AddToLog(::StringW LBMMPOBMLMI);
    // public System.Void .ctor()
    // Offset: 0x13BBD64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TopHud* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::TopHud::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TopHud*, creationType>()));
    }
    // private System.Void NHADFEMILCC()
    // Offset: 0x13BBDD4
    void NHADFEMILCC();
    // public System.Void GGIKFHLDCEM(System.String LBMMPOBMLMI)
    // Offset: 0x13BBE98
    void GGIKFHLDCEM(::StringW LBMMPOBMLMI);
    // private System.Void Update()
    // Offset: 0x13BC010
    void Update();
    // private System.Void KEBOKGFLFJA()
    // Offset: 0x13BC18C
    void KEBOKGFLFJA();
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x13BC310
    void BDEDGNGMHMN();
    // private System.Void Start()
    // Offset: 0x13BC3D4
    void Start();
    // private System.Void EFLLEILOGJN()
    // Offset: 0x13BC498
    void EFLLEILOGJN();
  }; // MagicalActual.TopHud
  #pragma pack(pop)
  static check_size<sizeof(TopHud), 104 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __MagicalActual_TopHudSizeCheck;
  static_assert(sizeof(TopHud) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::TopHud::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::KCEPMBHOMCD
// Il2CppName: KCEPMBHOMCD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::KCEPMBHOMCD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "KCEPMBHOMCD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::LJOGIPIJIPF
// Il2CppName: LJOGIPIJIPF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::LJOGIPIJIPF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "LJOGIPIJIPF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::GHOELBAHDBL
// Il2CppName: GHOELBAHDBL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)(::StringW)>(&MagicalActual::TopHud::GHOELBAHDBL)> {
  static const MethodInfo* get() {
    static auto* LBMMPOBMLMI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "GHOELBAHDBL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LBMMPOBMLMI});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::FEIGDJNEHBG
// Il2CppName: FEIGDJNEHBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::FEIGDJNEHBG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "FEIGDJNEHBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::BPKGCCHJJMP
// Il2CppName: BPKGCCHJJMP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)(::StringW)>(&MagicalActual::TopHud::BPKGCCHJJMP)> {
  static const MethodInfo* get() {
    static auto* LBMMPOBMLMI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "BPKGCCHJJMP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LBMMPOBMLMI});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::EFGJFMENOAL
// Il2CppName: EFGJFMENOAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::EFGJFMENOAL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "EFGJFMENOAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::GEJIJMPGALF
// Il2CppName: GEJIJMPGALF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::GEJIJMPGALF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "GEJIJMPGALF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::JJNHCABMBIH
// Il2CppName: JJNHCABMBIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::JJNHCABMBIH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "JJNHCABMBIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::GHBOEBHBEEJ
// Il2CppName: GHBOEBHBEEJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::GHBOEBHBEEJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "GHBOEBHBEEJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::CEGEBCFNLFC
// Il2CppName: CEGEBCFNLFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::CEGEBCFNLFC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "CEGEBCFNLFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::PMPBJAPEJAB
// Il2CppName: PMPBJAPEJAB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)(::StringW)>(&MagicalActual::TopHud::PMPBJAPEJAB)> {
  static const MethodInfo* get() {
    static auto* LBMMPOBMLMI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "PMPBJAPEJAB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LBMMPOBMLMI});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::MHHFAOGFAPO
// Il2CppName: MHHFAOGFAPO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::MHHFAOGFAPO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "MHHFAOGFAPO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::EHMIDPCEGKH
// Il2CppName: EHMIDPCEGKH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)(::StringW)>(&MagicalActual::TopHud::EHMIDPCEGKH)> {
  static const MethodInfo* get() {
    static auto* LBMMPOBMLMI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "EHMIDPCEGKH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LBMMPOBMLMI});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::BJMMJNDCPLF
// Il2CppName: BJMMJNDCPLF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::BJMMJNDCPLF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "BJMMJNDCPLF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::AddToLog
// Il2CppName: AddToLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)(::StringW)>(&MagicalActual::TopHud::AddToLog)> {
  static const MethodInfo* get() {
    static auto* LBMMPOBMLMI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "AddToLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LBMMPOBMLMI});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::TopHud::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::GGIKFHLDCEM
// Il2CppName: GGIKFHLDCEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)(::StringW)>(&MagicalActual::TopHud::GGIKFHLDCEM)> {
  static const MethodInfo* get() {
    static auto* LBMMPOBMLMI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "GGIKFHLDCEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LBMMPOBMLMI});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::KEBOKGFLFJA
// Il2CppName: KEBOKGFLFJA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::KEBOKGFLFJA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "KEBOKGFLFJA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::TopHud::EFLLEILOGJN
// Il2CppName: EFLLEILOGJN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::TopHud::*)()>(&MagicalActual::TopHud::EFLLEILOGJN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::TopHud*), "EFLLEILOGJN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
