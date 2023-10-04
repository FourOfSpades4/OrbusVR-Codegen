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
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Monster
  class Monster;
  // Forward declaring type: NetEntity
  class NetEntity;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: LichKing
  class LichKing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::LichKing);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::LichKing*, "MagicalActual", "LichKing");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.LichKing
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD3434
  class LichKing : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.Monster BIIBEOELIHH
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::Monster* BIIBEOELIHH;
    // Field size check
    static_assert(sizeof(::MagicalActual::Monster*) == 0x8);
    // public UnityEngine.GameObject vfxSlash
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* vfxSlash;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Mesh phaseOneMesh
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Mesh* phaseOneMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Mesh phaseTwoMesh
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Mesh* phaseTwoMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Material phaseOneMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* phaseOneMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material phaseTwoMaterial
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* phaseTwoMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.SkinnedMeshRenderer scalerRenderer
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::SkinnedMeshRenderer* scalerRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // public UnityEngine.GameObject scalerObject
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* scalerObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Vector3 phaseOneScaling
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 phaseOneScaling;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 phaseTwoScaling
    // Size: 0xC
    // Offset: 0x6C
    ::UnityEngine::Vector3 phaseTwoScaling;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.GameObject transformVfx
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* transformVfx;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject shieldVfx
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* shieldVfx;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private MagicalActual.NetEntity IJJGNKLFGJN
    // Size: 0x8
    // Offset: 0x88
    ::MagicalActual::NetEntity* IJJGNKLFGJN;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private System.Byte NFFAAAGOJLF
    // Size: 0x1
    // Offset: 0x90
    uint8_t NFFAAAGOJLF;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Monster BIIBEOELIHH
    [[deprecated("Use field access instead!")]] ::MagicalActual::Monster*& dyn_BIIBEOELIHH();
    // Get instance field reference: public UnityEngine.GameObject vfxSlash
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vfxSlash();
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: public UnityEngine.Mesh phaseOneMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_phaseOneMesh();
    // Get instance field reference: public UnityEngine.Mesh phaseTwoMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_phaseTwoMesh();
    // Get instance field reference: public UnityEngine.Material phaseOneMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_phaseOneMaterial();
    // Get instance field reference: public UnityEngine.Material phaseTwoMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_phaseTwoMaterial();
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer scalerRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn_scalerRenderer();
    // Get instance field reference: public UnityEngine.GameObject scalerObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_scalerObject();
    // Get instance field reference: public UnityEngine.Vector3 phaseOneScaling
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_phaseOneScaling();
    // Get instance field reference: public UnityEngine.Vector3 phaseTwoScaling
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_phaseTwoScaling();
    // Get instance field reference: public UnityEngine.GameObject transformVfx
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_transformVfx();
    // Get instance field reference: public UnityEngine.GameObject shieldVfx
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_shieldVfx();
    // Get instance field reference: private MagicalActual.NetEntity IJJGNKLFGJN
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_IJJGNKLFGJN();
    // Get instance field reference: private System.Byte NFFAAAGOJLF
    [[deprecated("Use field access instead!")]] uint8_t& dyn_NFFAAAGOJLF();
    // private System.Void FLOFOBHFEGP(System.Object OMLPNCLFFMJ)
    // Offset: 0x189623C
    void FLOFOBHFEGP(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void GILLJBIMGNJ()
    // Offset: 0x1896444
    void GILLJBIMGNJ();
    // private System.Void KFOJHIOCFHO()
    // Offset: 0x1896664
    void KFOJHIOCFHO();
    // private System.Void BHNCIBJGCJI(System.Object OMLPNCLFFMJ)
    // Offset: 0x1896698
    void BHNCIBJGCJI(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void EBJDLAIJJJE(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1896870
    void EBJDLAIJJJE(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void JLEHCOOKCAN()
    // Offset: 0x1896988
    void JLEHCOOKCAN();
    // public System.Void orbusNetInit(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1896ABC
    void orbusNetInit(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void IAMHAELCKHH()
    // Offset: 0x1896BD4
    void IAMHAELCKHH();
    // public System.Void MMJIKEBHBJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1896C2C
    void MMJIKEBHBJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void JFBOMHHGFDN()
    // Offset: 0x1896D44
    void JFBOMHHGFDN();
    // private System.Void JJGACIPIGAL()
    // Offset: 0x1896F68
    void JJGACIPIGAL();
    // private System.Void MIPEOCANMMO()
    // Offset: 0x1896F9C
    void MIPEOCANMMO();
    // private System.Void LJHFLGFCAHG()
    // Offset: 0x1896FF4
    void LJHFLGFCAHG();
    // private System.Void DOLBHKHKGGC()
    // Offset: 0x18970E8
    void DOLBHKHKGGC();
    // private System.Void KKEABMBACIC()
    // Offset: 0x189711C
    void KKEABMBACIC();
    // private System.Void HDMHEDEGDFD()
    // Offset: 0x1897174
    void HDMHEDEGDFD();
    // private System.Void GHECDOMOAEE()
    // Offset: 0x18971CC
    void GHECDOMOAEE();
    // private System.Void Awake()
    // Offset: 0x1897300
    void Awake();
    // private System.Void PHCJNBNAGEJ()
    // Offset: 0x1897358
    void PHCJNBNAGEJ();
    // private System.Void JNPCAPGICGO(System.Object OMLPNCLFFMJ)
    // Offset: 0x1897454
    void JNPCAPGICGO(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void .ctor()
    // Offset: 0x1897654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LichKing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::LichKing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LichKing*, creationType>()));
    }
    // private System.Void BMPAMLHHDLC(System.Object OMLPNCLFFMJ)
    // Offset: 0x18976AC
    void BMPAMLHHDLC(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void JJEJNGMIMOI(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x1897734
    void JJEJNGMIMOI(::MagicalActual::NetEntity* CMLIHJCOINC);
    // public System.Void PLPDCBMCEJF(MagicalActual.NetEntity CMLIHJCOINC)
    // Offset: 0x189784C
    void PLPDCBMCEJF(::MagicalActual::NetEntity* CMLIHJCOINC);
    // private System.Void HNMJKJPBNHI()
    // Offset: 0x1897964
    void HNMJKJPBNHI();
    // public System.Void MKAECMFKIEN()
    // Offset: 0x1897A98
    void MKAECMFKIEN();
    // public System.Void JFKKFKNHPFI()
    // Offset: 0x1897CBC
    void JFKKFKNHPFI();
    // private System.Void PMGKMHPGKJJ(System.Object OMLPNCLFFMJ)
    // Offset: 0x1897EE0
    void PMGKMHPGKJJ(::Il2CppObject* OMLPNCLFFMJ);
    // private System.Void HODFKGEFKHE()
    // Offset: 0x1897F68
    void HODFKGEFKHE();
    // private System.Void LPBOJHGLLLE(System.Object OMLPNCLFFMJ)
    // Offset: 0x1897F9C
    void LPBOJHGLLLE(::Il2CppObject* OMLPNCLFFMJ);
    // public System.Void Slash()
    // Offset: 0x1898024
    void Slash();
    // private System.Void OGJGMBONEKA(System.Object OMLPNCLFFMJ)
    // Offset: 0x189823C
    void OGJGMBONEKA(::Il2CppObject* OMLPNCLFFMJ);
  }; // MagicalActual.LichKing
  #pragma pack(pop)
  static check_size<sizeof(LichKing), 144 + sizeof(uint8_t)> __MagicalActual_LichKingSizeCheck;
  static_assert(sizeof(LichKing) == 0x91);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::LichKing::FLOFOBHFEGP
// Il2CppName: FLOFOBHFEGP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::FLOFOBHFEGP)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "FLOFOBHFEGP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::GILLJBIMGNJ
// Il2CppName: GILLJBIMGNJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::GILLJBIMGNJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "GILLJBIMGNJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::KFOJHIOCFHO
// Il2CppName: KFOJHIOCFHO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::KFOJHIOCFHO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "KFOJHIOCFHO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::BHNCIBJGCJI
// Il2CppName: BHNCIBJGCJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::BHNCIBJGCJI)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "BHNCIBJGCJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::EBJDLAIJJJE
// Il2CppName: EBJDLAIJJJE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::MagicalActual::NetEntity*)>(&MagicalActual::LichKing::EBJDLAIJJJE)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "EBJDLAIJJJE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::JLEHCOOKCAN
// Il2CppName: JLEHCOOKCAN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::JLEHCOOKCAN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "JLEHCOOKCAN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::MagicalActual::NetEntity*)>(&MagicalActual::LichKing::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::IAMHAELCKHH
// Il2CppName: IAMHAELCKHH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::IAMHAELCKHH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "IAMHAELCKHH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::MMJIKEBHBJF
// Il2CppName: MMJIKEBHBJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::MagicalActual::NetEntity*)>(&MagicalActual::LichKing::MMJIKEBHBJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "MMJIKEBHBJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::JFBOMHHGFDN
// Il2CppName: JFBOMHHGFDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::JFBOMHHGFDN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "JFBOMHHGFDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::JJGACIPIGAL
// Il2CppName: JJGACIPIGAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::JJGACIPIGAL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "JJGACIPIGAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::MIPEOCANMMO
// Il2CppName: MIPEOCANMMO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::MIPEOCANMMO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "MIPEOCANMMO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::LJHFLGFCAHG
// Il2CppName: LJHFLGFCAHG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::LJHFLGFCAHG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "LJHFLGFCAHG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::DOLBHKHKGGC
// Il2CppName: DOLBHKHKGGC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::DOLBHKHKGGC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "DOLBHKHKGGC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::KKEABMBACIC
// Il2CppName: KKEABMBACIC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::KKEABMBACIC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "KKEABMBACIC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::HDMHEDEGDFD
// Il2CppName: HDMHEDEGDFD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::HDMHEDEGDFD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "HDMHEDEGDFD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::GHECDOMOAEE
// Il2CppName: GHECDOMOAEE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::GHECDOMOAEE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "GHECDOMOAEE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::PHCJNBNAGEJ
// Il2CppName: PHCJNBNAGEJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::PHCJNBNAGEJ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "PHCJNBNAGEJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::JNPCAPGICGO
// Il2CppName: JNPCAPGICGO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::JNPCAPGICGO)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "JNPCAPGICGO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::LichKing::BMPAMLHHDLC
// Il2CppName: BMPAMLHHDLC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::BMPAMLHHDLC)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "BMPAMLHHDLC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::JJEJNGMIMOI
// Il2CppName: JJEJNGMIMOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::MagicalActual::NetEntity*)>(&MagicalActual::LichKing::JJEJNGMIMOI)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "JJEJNGMIMOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::PLPDCBMCEJF
// Il2CppName: PLPDCBMCEJF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::MagicalActual::NetEntity*)>(&MagicalActual::LichKing::PLPDCBMCEJF)> {
  static const MethodInfo* get() {
    static auto* CMLIHJCOINC = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "PLPDCBMCEJF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CMLIHJCOINC});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::HNMJKJPBNHI
// Il2CppName: HNMJKJPBNHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::HNMJKJPBNHI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "HNMJKJPBNHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::MKAECMFKIEN
// Il2CppName: MKAECMFKIEN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::MKAECMFKIEN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "MKAECMFKIEN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::JFKKFKNHPFI
// Il2CppName: JFKKFKNHPFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::JFKKFKNHPFI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "JFKKFKNHPFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::PMGKMHPGKJJ
// Il2CppName: PMGKMHPGKJJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::PMGKMHPGKJJ)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "PMGKMHPGKJJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::HODFKGEFKHE
// Il2CppName: HODFKGEFKHE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::HODFKGEFKHE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "HODFKGEFKHE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::LPBOJHGLLLE
// Il2CppName: LPBOJHGLLLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::LPBOJHGLLLE)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "LPBOJHGLLLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::Slash
// Il2CppName: Slash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)()>(&MagicalActual::LichKing::Slash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "Slash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::LichKing::OGJGMBONEKA
// Il2CppName: OGJGMBONEKA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::LichKing::*)(::Il2CppObject*)>(&MagicalActual::LichKing::OGJGMBONEKA)> {
  static const MethodInfo* get() {
    static auto* OMLPNCLFFMJ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::LichKing*), "OGJGMBONEKA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{OMLPNCLFFMJ});
  }
};
