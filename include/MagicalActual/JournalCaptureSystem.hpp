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
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: JournalCaptureSystem
  class JournalCaptureSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::JournalCaptureSystem);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::JournalCaptureSystem*, "MagicalActual", "JournalCaptureSystem");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.JournalCaptureSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class JournalCaptureSystem : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Camera APHPGNNLPMA
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Camera* APHPGNNLPMA;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.RenderTexture LDAPDHOIFAM
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RenderTexture* LDAPDHOIFAM;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // public UnityEngine.GameObject[] templates
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> templates;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private MagicalActual.JournalCaptureSystem DNGBHJKDLGN
    static ::MagicalActual::JournalCaptureSystem* _get_DNGBHJKDLGN();
    // Set static field: static private MagicalActual.JournalCaptureSystem DNGBHJKDLGN
    static void _set_DNGBHJKDLGN(::MagicalActual::JournalCaptureSystem* value);
    // Get instance field reference: private UnityEngine.Camera APHPGNNLPMA
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_APHPGNNLPMA();
    // Get instance field reference: private UnityEngine.RenderTexture LDAPDHOIFAM
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn_LDAPDHOIFAM();
    // Get instance field reference: public UnityEngine.GameObject[] templates
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_templates();
    // private System.Void NDAOHLAOCDE()
    // Offset: 0x12701EC
    void NDAOHLAOCDE();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x12703C8
    void KPOAAAHLGLA();
    // private System.Void GHLPBOJJHNG()
    // Offset: 0x1270488
    void GHLPBOJJHNG();
    // private System.Void IGIJBKHAMJH()
    // Offset: 0x127052C
    void IGIJBKHAMJH();
    // private System.Void AFIACGLCIPB()
    // Offset: 0x1270708
    void AFIACGLCIPB();
    // public System.Void CDLKGBECDDC(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x12707AC
    void CDLKGBECDDC(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // private System.Void GECHLDPLPCC()
    // Offset: 0x1270C6C
    void GECHLDPLPCC();
    // private System.Void MELPNKHDJFN()
    // Offset: 0x1270D14
    void MELPNKHDJFN();
    // public System.Void IMODIELOAPP(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x1270EF0
    void IMODIELOAPP(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // public System.Void BAJNFLDNDNA(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x1271394
    void BAJNFLDNDNA(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // private System.Void BDEDGNGMHMN()
    // Offset: 0x1271854
    void BDEDGNGMHMN();
    // private System.Void OKCGDOEIOGA()
    // Offset: 0x1271914
    void OKCGDOEIOGA();
    // static public MagicalActual.JournalCaptureSystem HAEGCBKGGPB()
    // Offset: 0x1271AF0
    static ::MagicalActual::JournalCaptureSystem* HAEGCBKGGPB();
    // public System.Void .ctor()
    // Offset: 0x1271B40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JournalCaptureSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::JournalCaptureSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JournalCaptureSystem*, creationType>()));
    }
    // public System.Void CapturePageWithText(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x1271B48
    void CapturePageWithText(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // public System.Void NNDCLPCMIBF(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x1272000
    void NNDCLPCMIBF(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // private System.Void GKIOLADOCOK()
    // Offset: 0x12724A4
    void GKIOLADOCOK();
    // private System.Void IAMHAELCKHH()
    // Offset: 0x127254C
    void IAMHAELCKHH();
    // public System.Void AIHNDLLDPJO(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x1272728
    void AIHNDLLDPJO(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // private System.Void DJIGIJKOPDC()
    // Offset: 0x1272BCC
    void DJIGIJKOPDC();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x1272DA8
    void CBMDGNKFPIO();
    // private System.Void FEJNAOBCKJK()
    // Offset: 0x1272E68
    void FEJNAOBCKJK();
    // private System.Void JBEJCKDIKIE()
    // Offset: 0x1273044
    void JBEJCKDIKIE();
    // static public MagicalActual.JournalCaptureSystem NJHEJPODMGP()
    // Offset: 0x1273220
    static ::MagicalActual::JournalCaptureSystem* NJHEJPODMGP();
    // static public MagicalActual.JournalCaptureSystem MDHMIGPKHBM()
    // Offset: 0x1273270
    static ::MagicalActual::JournalCaptureSystem* MDHMIGPKHBM();
    // public System.Void BECKJKLKLBG(System.String AEIKALAOENM, UnityEngine.Texture2D JKEOPHOIGOD, System.Int32 OACIPFEGEHN, System.String EFELLJHLGGI)
    // Offset: 0x12732C0
    void BECKJKLKLBG(::StringW AEIKALAOENM, ::UnityEngine::Texture2D* JKEOPHOIGOD, int OACIPFEGEHN, ::StringW EFELLJHLGGI);
    // private System.Void MIPEOCANMMO()
    // Offset: 0x1273764
    void MIPEOCANMMO();
    // private System.Void ICBFACJBNPI()
    // Offset: 0x1273940
    void ICBFACJBNPI();
    // static public MagicalActual.JournalCaptureSystem IMGMJCEFGEB()
    // Offset: 0x1273B1C
    static ::MagicalActual::JournalCaptureSystem* IMGMJCEFGEB();
    // private System.Void KGKKNFEMGAM()
    // Offset: 0x1273B6C
    void KGKKNFEMGAM();
    // static public MagicalActual.JournalCaptureSystem CEAIHAODCFO()
    // Offset: 0x1273D48
    static ::MagicalActual::JournalCaptureSystem* CEAIHAODCFO();
    // private System.Void CNBJHFMDCOE()
    // Offset: 0x1273D98
    void CNBJHFMDCOE();
    // static public MagicalActual.JournalCaptureSystem get_Instance()
    // Offset: 0x1273F74
    static ::MagicalActual::JournalCaptureSystem* get_Instance();
    // private System.Void LMFIENPBFKA()
    // Offset: 0x1273FC4
    void LMFIENPBFKA();
    // static public MagicalActual.JournalCaptureSystem DLMHFFDOHGI()
    // Offset: 0x12741A0
    static ::MagicalActual::JournalCaptureSystem* DLMHFFDOHGI();
    // private System.Void Awake()
    // Offset: 0x12741F0
    void Awake();
    // private System.Void Start()
    // Offset: 0x12743CC
    void Start();
    // static public MagicalActual.JournalCaptureSystem JDEJCDJPAGF()
    // Offset: 0x127448C
    static ::MagicalActual::JournalCaptureSystem* JDEJCDJPAGF();
  }; // MagicalActual.JournalCaptureSystem
  #pragma pack(pop)
  static check_size<sizeof(JournalCaptureSystem), 40 + sizeof(::ArrayW<::UnityEngine::GameObject*>)> __MagicalActual_JournalCaptureSystemSizeCheck;
  static_assert(sizeof(JournalCaptureSystem) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::NDAOHLAOCDE
// Il2CppName: NDAOHLAOCDE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::NDAOHLAOCDE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "NDAOHLAOCDE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::GHLPBOJJHNG
// Il2CppName: GHLPBOJJHNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::GHLPBOJJHNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "GHLPBOJJHNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::IGIJBKHAMJH
// Il2CppName: IGIJBKHAMJH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::IGIJBKHAMJH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "IGIJBKHAMJH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::AFIACGLCIPB
// Il2CppName: AFIACGLCIPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::AFIACGLCIPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "AFIACGLCIPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::CDLKGBECDDC
// Il2CppName: CDLKGBECDDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::CDLKGBECDDC)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "CDLKGBECDDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::GECHLDPLPCC
// Il2CppName: GECHLDPLPCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::GECHLDPLPCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "GECHLDPLPCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::MELPNKHDJFN
// Il2CppName: MELPNKHDJFN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::MELPNKHDJFN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "MELPNKHDJFN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::IMODIELOAPP
// Il2CppName: IMODIELOAPP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::IMODIELOAPP)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "IMODIELOAPP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::BAJNFLDNDNA
// Il2CppName: BAJNFLDNDNA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::BAJNFLDNDNA)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "BAJNFLDNDNA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::BDEDGNGMHMN
// Il2CppName: BDEDGNGMHMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::BDEDGNGMHMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "BDEDGNGMHMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::OKCGDOEIOGA
// Il2CppName: OKCGDOEIOGA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::OKCGDOEIOGA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "OKCGDOEIOGA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::HAEGCBKGGPB
// Il2CppName: HAEGCBKGGPB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::HAEGCBKGGPB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "HAEGCBKGGPB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::CapturePageWithText
// Il2CppName: CapturePageWithText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::CapturePageWithText)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "CapturePageWithText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::NNDCLPCMIBF
// Il2CppName: NNDCLPCMIBF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::NNDCLPCMIBF)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "NNDCLPCMIBF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::IAMHAELCKHH
// Il2CppName: IAMHAELCKHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::IAMHAELCKHH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "IAMHAELCKHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::AIHNDLLDPJO
// Il2CppName: AIHNDLLDPJO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::AIHNDLLDPJO)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "AIHNDLLDPJO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::DJIGIJKOPDC
// Il2CppName: DJIGIJKOPDC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::DJIGIJKOPDC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "DJIGIJKOPDC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::FEJNAOBCKJK
// Il2CppName: FEJNAOBCKJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::FEJNAOBCKJK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "FEJNAOBCKJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::JBEJCKDIKIE
// Il2CppName: JBEJCKDIKIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::JBEJCKDIKIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "JBEJCKDIKIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::NJHEJPODMGP
// Il2CppName: NJHEJPODMGP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::NJHEJPODMGP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "NJHEJPODMGP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::MDHMIGPKHBM
// Il2CppName: MDHMIGPKHBM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::MDHMIGPKHBM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "MDHMIGPKHBM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::BECKJKLKLBG
// Il2CppName: BECKJKLKLBG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)(::StringW, ::UnityEngine::Texture2D*, int, ::StringW)>(&MagicalActual::JournalCaptureSystem::BECKJKLKLBG)> {
  static const MethodInfo* get() {
    static auto* AEIKALAOENM = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* JKEOPHOIGOD = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* OACIPFEGEHN = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* EFELLJHLGGI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "BECKJKLKLBG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{AEIKALAOENM, JKEOPHOIGOD, OACIPFEGEHN, EFELLJHLGGI});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::MIPEOCANMMO
// Il2CppName: MIPEOCANMMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::MIPEOCANMMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "MIPEOCANMMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::ICBFACJBNPI
// Il2CppName: ICBFACJBNPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::ICBFACJBNPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "ICBFACJBNPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::IMGMJCEFGEB
// Il2CppName: IMGMJCEFGEB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::IMGMJCEFGEB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "IMGMJCEFGEB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::KGKKNFEMGAM
// Il2CppName: KGKKNFEMGAM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::KGKKNFEMGAM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "KGKKNFEMGAM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::CEAIHAODCFO
// Il2CppName: CEAIHAODCFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::CEAIHAODCFO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "CEAIHAODCFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::CNBJHFMDCOE
// Il2CppName: CNBJHFMDCOE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::CNBJHFMDCOE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "CNBJHFMDCOE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::LMFIENPBFKA
// Il2CppName: LMFIENPBFKA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::LMFIENPBFKA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "LMFIENPBFKA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::DLMHFFDOHGI
// Il2CppName: DLMHFFDOHGI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::DLMHFFDOHGI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "DLMHFFDOHGI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::JournalCaptureSystem::*)()>(&MagicalActual::JournalCaptureSystem::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::JournalCaptureSystem::JDEJCDJPAGF
// Il2CppName: JDEJCDJPAGF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MagicalActual::JournalCaptureSystem* (*)()>(&MagicalActual::JournalCaptureSystem::JDEJCDJPAGF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::JournalCaptureSystem*), "JDEJCDJPAGF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
