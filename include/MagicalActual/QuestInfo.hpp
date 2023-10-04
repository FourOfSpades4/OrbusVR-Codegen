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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: QuestInfo
  class QuestInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::QuestInfo);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::QuestInfo*, "MagicalActual", "QuestInfo");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.QuestInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class QuestInfo : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.UI.Text Description
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Text* Description;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.GameObject CheckMark
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* CheckMark;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject beaconObject
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* beaconObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x30
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: MOFKIAEIIFO
    char __padding3[0x4] = {};
    // private UnityEngine.GameObject MOFKIAEIIFO
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* MOFKIAEIIFO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.Text Description
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_Description();
    // Get instance field reference: private UnityEngine.GameObject CheckMark
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_CheckMark();
    // Get instance field reference: private UnityEngine.GameObject beaconObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_beaconObject();
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: private UnityEngine.GameObject MOFKIAEIIFO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_MOFKIAEIIFO();
    // public System.Void PMELJHOOMHG(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A6CE4
    void PMELJHOOMHG(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void LIFHHDAEPFK()
    // Offset: 0x15A6DF0
    void LIFHHDAEPFK();
    // private System.Void JFLOJMEGKIE(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A6F40
    void JFLOJMEGKIE(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void SetQuestComplete()
    // Offset: 0x15A70B0
    void SetQuestComplete();
    // private System.Void KIPCFLBKGGL(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A70E4
    void KIPCFLBKGGL(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void ShowBeacon(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A71A8
    void ShowBeacon(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void OFGBPNCOEEN(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A72B4
    void OFGBPNCOEEN(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void KKDCMINKAMK(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A7424
    void KKDCMINKAMK(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void BHPCJCCHFGC()
    // Offset: 0x15A7530
    void BHPCJCCHFGC();
    // public System.Void EHJNDAOOPKO()
    // Offset: 0x15A7680
    void EHJNDAOOPKO();
    // public System.Void PLFBFMKKAJH()
    // Offset: 0x15A7378
    void PLFBFMKKAJH();
    // public System.Void ECEBIFJPCFG()
    // Offset: 0x15A76B4
    void ECEBIFJPCFG();
    // private System.Void NKEBCIKHDBD(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A76E8
    void NKEBCIKHDBD(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // private System.Void GPFBGGFPINB()
    // Offset: 0x15A77AC
    void GPFBGGFPINB();
    // public System.Void HideBeacon()
    // Offset: 0x15A7004
    void HideBeacon();
    // private System.Void IEPHGHBCEEA(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A7848
    void IEPHGHBCEEA(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // private System.Void CODEKFLHLJG()
    // Offset: 0x15A790C
    void CODEKFLHLJG();
    // private System.Void AIIPHBBOJHK(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A7A5C
    void AIIPHBBOJHK(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void LCLFIIAKIIL(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A7BCC
    void LCLFIIAKIIL(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void JIKJBAMGGBF()
    // Offset: 0x15A7CD8
    void JIKJBAMGGBF();
    // private System.Void GECHLDPLPCC()
    // Offset: 0x15A7D7C
    void GECHLDPLPCC();
    // private System.Void OKKOIDMPIPF(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A7E18
    void OKKOIDMPIPF(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void JPOOOKDJOIB()
    // Offset: 0x15A75D4
    void JPOOOKDJOIB();
    // private System.Void NLGDFODNIOJ(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A7EDC
    void NLGDFODNIOJ(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // private System.Void Start()
    // Offset: 0x15A7FA0
    void Start();
    // public System.Void JJALBOJNKAK(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A803C
    void JJALBOJNKAK(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void DEGCMEJJNJI()
    // Offset: 0x15A8148
    void DEGCMEJJNJI();
    // private System.Void PFEDLELEPOC(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A81E4
    void PFEDLELEPOC(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void PFPAJNGBACI()
    // Offset: 0x15A82A8
    void PFPAJNGBACI();
    // public System.Void NDAMONAFAFG()
    // Offset: 0x15A7B20
    void NDAMONAFAFG();
    // public System.Void .ctor()
    // Offset: 0x15A82DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuestInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::QuestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuestInfo*, creationType>()));
    }
    // public System.Void APACEPLKMDD(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A82E4
    void APACEPLKMDD(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // public System.Void IDJFIGKIKFB(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A83F0
    void IDJFIGKIKFB(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // public System.Void MAJAKOOBBIH(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A84FC
    void MAJAKOOBBIH(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void PJIBCELJMEF(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A8608
    void PJIBCELJMEF(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // private System.Void JJFAIECPNBO(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A86CC
    void JJFAIECPNBO(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // private System.Void DIBLOAOHNMO()
    // Offset: 0x15A8790
    void DIBLOAOHNMO();
    // private System.Void HKINNMLBMMG()
    // Offset: 0x15A8834
    void HKINNMLBMMG();
    // private System.Void BPOGPFACKBD()
    // Offset: 0x15A88D0
    void BPOGPFACKBD();
    // public System.Void DMEJBOEDGHE()
    // Offset: 0x15A6E94
    void DMEJBOEDGHE();
    // private System.Void ILCAAOMNMDK(UnityEngine.SceneManagement.Scene OJHNMMDHDOC, UnityEngine.SceneManagement.LoadSceneMode GFAHKBFCGKK)
    // Offset: 0x15A8974
    void ILCAAOMNMDK(::UnityEngine::SceneManagement::Scene OJHNMMDHDOC, ::UnityEngine::SceneManagement::LoadSceneMode GFAHKBFCGKK);
    // public System.Void FBGICHFNMDJ()
    // Offset: 0x15A79B0
    void FBGICHFNMDJ();
    // private System.Void OnDestroy()
    // Offset: 0x15A8A38
    void OnDestroy();
    // private System.Void HJKFJENIJFO()
    // Offset: 0x15A8ADC
    void HJKFJENIJFO();
    // public System.Void JABPAPMCOBI(System.Boolean LMOHIOCKNHF, UnityEngine.Vector3 JOLJLMLEGBD)
    // Offset: 0x15A8B78
    void JABPAPMCOBI(bool LMOHIOCKNHF, ::UnityEngine::Vector3 JOLJLMLEGBD);
    // private System.Void LBBHKKFNJPA()
    // Offset: 0x15A8C84
    void LBBHKKFNJPA();
  }; // MagicalActual.QuestInfo
  #pragma pack(pop)
  static check_size<sizeof(QuestInfo), 56 + sizeof(::UnityEngine::GameObject*)> __MagicalActual_QuestInfoSizeCheck;
  static_assert(sizeof(QuestInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::QuestInfo::PMELJHOOMHG
// Il2CppName: PMELJHOOMHG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::PMELJHOOMHG)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "PMELJHOOMHG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::LIFHHDAEPFK
// Il2CppName: LIFHHDAEPFK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::LIFHHDAEPFK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "LIFHHDAEPFK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::JFLOJMEGKIE
// Il2CppName: JFLOJMEGKIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::JFLOJMEGKIE)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "JFLOJMEGKIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::SetQuestComplete
// Il2CppName: SetQuestComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::SetQuestComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "SetQuestComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::KIPCFLBKGGL
// Il2CppName: KIPCFLBKGGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::KIPCFLBKGGL)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "KIPCFLBKGGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::ShowBeacon
// Il2CppName: ShowBeacon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::ShowBeacon)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "ShowBeacon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::OFGBPNCOEEN
// Il2CppName: OFGBPNCOEEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::OFGBPNCOEEN)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "OFGBPNCOEEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::KKDCMINKAMK
// Il2CppName: KKDCMINKAMK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::KKDCMINKAMK)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "KKDCMINKAMK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::BHPCJCCHFGC
// Il2CppName: BHPCJCCHFGC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::BHPCJCCHFGC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "BHPCJCCHFGC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::EHJNDAOOPKO
// Il2CppName: EHJNDAOOPKO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::EHJNDAOOPKO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "EHJNDAOOPKO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::PLFBFMKKAJH
// Il2CppName: PLFBFMKKAJH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::PLFBFMKKAJH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "PLFBFMKKAJH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::ECEBIFJPCFG
// Il2CppName: ECEBIFJPCFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::ECEBIFJPCFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "ECEBIFJPCFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::NKEBCIKHDBD
// Il2CppName: NKEBCIKHDBD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::NKEBCIKHDBD)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "NKEBCIKHDBD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::GPFBGGFPINB
// Il2CppName: GPFBGGFPINB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::GPFBGGFPINB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "GPFBGGFPINB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::HideBeacon
// Il2CppName: HideBeacon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::HideBeacon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "HideBeacon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::IEPHGHBCEEA
// Il2CppName: IEPHGHBCEEA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::IEPHGHBCEEA)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "IEPHGHBCEEA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::CODEKFLHLJG
// Il2CppName: CODEKFLHLJG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::CODEKFLHLJG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "CODEKFLHLJG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::AIIPHBBOJHK
// Il2CppName: AIIPHBBOJHK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::AIIPHBBOJHK)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "AIIPHBBOJHK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::LCLFIIAKIIL
// Il2CppName: LCLFIIAKIIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::LCLFIIAKIIL)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "LCLFIIAKIIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::JIKJBAMGGBF
// Il2CppName: JIKJBAMGGBF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::JIKJBAMGGBF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "JIKJBAMGGBF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::OKKOIDMPIPF
// Il2CppName: OKKOIDMPIPF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::OKKOIDMPIPF)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "OKKOIDMPIPF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::JPOOOKDJOIB
// Il2CppName: JPOOOKDJOIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::JPOOOKDJOIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "JPOOOKDJOIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::NLGDFODNIOJ
// Il2CppName: NLGDFODNIOJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::NLGDFODNIOJ)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "NLGDFODNIOJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::JJALBOJNKAK
// Il2CppName: JJALBOJNKAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::JJALBOJNKAK)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "JJALBOJNKAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::DEGCMEJJNJI
// Il2CppName: DEGCMEJJNJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::DEGCMEJJNJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "DEGCMEJJNJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::PFEDLELEPOC
// Il2CppName: PFEDLELEPOC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::PFEDLELEPOC)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "PFEDLELEPOC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::PFPAJNGBACI
// Il2CppName: PFPAJNGBACI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::PFPAJNGBACI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "PFPAJNGBACI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::NDAMONAFAFG
// Il2CppName: NDAMONAFAFG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::NDAMONAFAFG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "NDAMONAFAFG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::QuestInfo::APACEPLKMDD
// Il2CppName: APACEPLKMDD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::APACEPLKMDD)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "APACEPLKMDD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::IDJFIGKIKFB
// Il2CppName: IDJFIGKIKFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::IDJFIGKIKFB)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "IDJFIGKIKFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::MAJAKOOBBIH
// Il2CppName: MAJAKOOBBIH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::MAJAKOOBBIH)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "MAJAKOOBBIH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::PJIBCELJMEF
// Il2CppName: PJIBCELJMEF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::PJIBCELJMEF)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "PJIBCELJMEF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::JJFAIECPNBO
// Il2CppName: JJFAIECPNBO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::JJFAIECPNBO)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "JJFAIECPNBO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::DIBLOAOHNMO
// Il2CppName: DIBLOAOHNMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::DIBLOAOHNMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "DIBLOAOHNMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::HKINNMLBMMG
// Il2CppName: HKINNMLBMMG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::HKINNMLBMMG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "HKINNMLBMMG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::BPOGPFACKBD
// Il2CppName: BPOGPFACKBD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::BPOGPFACKBD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "BPOGPFACKBD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::DMEJBOEDGHE
// Il2CppName: DMEJBOEDGHE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::DMEJBOEDGHE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "DMEJBOEDGHE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::ILCAAOMNMDK
// Il2CppName: ILCAAOMNMDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&MagicalActual::QuestInfo::ILCAAOMNMDK)> {
  static const MethodInfo* get() {
    static auto* OJHNMMDHDOC = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* GFAHKBFCGKK = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "ILCAAOMNMDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OJHNMMDHDOC, GFAHKBFCGKK});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::FBGICHFNMDJ
// Il2CppName: FBGICHFNMDJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::FBGICHFNMDJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "FBGICHFNMDJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::HJKFJENIJFO
// Il2CppName: HJKFJENIJFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::HJKFJENIJFO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "HJKFJENIJFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::JABPAPMCOBI
// Il2CppName: JABPAPMCOBI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)(bool, ::UnityEngine::Vector3)>(&MagicalActual::QuestInfo::JABPAPMCOBI)> {
  static const MethodInfo* get() {
    static auto* LMOHIOCKNHF = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* JOLJLMLEGBD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "JABPAPMCOBI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LMOHIOCKNHF, JOLJLMLEGBD});
  }
};
// Writing MetadataGetter for method: MagicalActual::QuestInfo::LBBHKKFNJPA
// Il2CppName: LBBHKKFNJPA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::QuestInfo::*)()>(&MagicalActual::QuestInfo::LBBHKKFNJPA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::QuestInfo*), "LBBHKKFNJPA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};