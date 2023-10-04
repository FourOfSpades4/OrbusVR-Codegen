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
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Grabber
  class Grabber;
  // Forward declaring type: DynamicPlayerMap
  class DynamicPlayerMap;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: ClimableWall
  class ClimableWall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::ClimableWall);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::ClimableWall*, "MagicalActual", "ClimableWall");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.ClimableWall
  // [TokenAttribute] Offset: FFFFFFFF
  class ClimableWall : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::MagicalActual::ClimableWall::$TransitionToDestination$d__17
    class $TransitionToDestination$d__17;
    public:
    // public UnityEngine.BoxCollider myCollider
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::BoxCollider* myCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    // private UnityEngine.Transform startPostion
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* startPostion;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Boolean frontFaceOnly
    // Size: 0x1
    // Offset: 0x28
    bool frontFaceOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isBeingClimbed
    // Size: 0x1
    // Offset: 0x29
    bool isBeingClimbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean peakHit
    // Size: 0x1
    // Offset: 0x2A
    bool peakHit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: peakHit and: GHDDGKIMLEE
    char __padding4[0x5] = {};
    // private MagicalActual.Grabber GHDDGKIMLEE
    // Size: 0x8
    // Offset: 0x30
    ::MagicalActual::Grabber* GHDDGKIMLEE;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // private MagicalActual.Grabber ONLIAPFNCLO
    // Size: 0x8
    // Offset: 0x38
    ::MagicalActual::Grabber* ONLIAPFNCLO;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // private MagicalActual.Grabber KICJHMMGJBG
    // Size: 0x8
    // Offset: 0x40
    ::MagicalActual::Grabber* KICJHMMGJBG;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // private MagicalActual.Grabber AJAALMIBKMG
    // Size: 0x8
    // Offset: 0x48
    ::MagicalActual::Grabber* AJAALMIBKMG;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // private MagicalActual.DynamicPlayerMap OOAIOOMLGHB
    // Size: 0x8
    // Offset: 0x50
    ::MagicalActual::DynamicPlayerMap* OOAIOOMLGHB;
    // Field size check
    static_assert(sizeof(::MagicalActual::DynamicPlayerMap*) == 0x8);
    // private System.Single AMENBLFIOIN
    // Size: 0x4
    // Offset: 0x58
    float AMENBLFIOIN;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.BoxCollider myCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn_myCollider();
    // Get instance field reference: private UnityEngine.Transform startPostion
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_startPostion();
    // Get instance field reference: public System.Boolean frontFaceOnly
    [[deprecated("Use field access instead!")]] bool& dyn_frontFaceOnly();
    // Get instance field reference: public System.Boolean isBeingClimbed
    [[deprecated("Use field access instead!")]] bool& dyn_isBeingClimbed();
    // Get instance field reference: public System.Boolean peakHit
    [[deprecated("Use field access instead!")]] bool& dyn_peakHit();
    // Get instance field reference: private MagicalActual.Grabber GHDDGKIMLEE
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_GHDDGKIMLEE();
    // Get instance field reference: private MagicalActual.Grabber ONLIAPFNCLO
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_ONLIAPFNCLO();
    // Get instance field reference: private MagicalActual.Grabber KICJHMMGJBG
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_KICJHMMGJBG();
    // Get instance field reference: private MagicalActual.Grabber AJAALMIBKMG
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_AJAALMIBKMG();
    // Get instance field reference: private MagicalActual.DynamicPlayerMap OOAIOOMLGHB
    [[deprecated("Use field access instead!")]] ::MagicalActual::DynamicPlayerMap*& dyn_OOAIOOMLGHB();
    // Get instance field reference: private System.Single AMENBLFIOIN
    [[deprecated("Use field access instead!")]] float& dyn_AMENBLFIOIN();
    // public System.Void IBPFNAMMJBO()
    // Offset: 0x1AEE34C
    void IBPFNAMMJBO();
    // public System.Void PIJOPKAKBDN()
    // Offset: 0x1AEE444
    void PIJOPKAKBDN();
    // public System.Void EFLLEILOGJN()
    // Offset: 0x1AEE4C0
    void EFLLEILOGJN();
    // public System.Void DCPOGANMGMA(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEE978
    void DCPOGANMGMA(::MagicalActual::Grabber* BALIAOKIHIC);
    // public System.Void PlayerFell()
    // Offset: 0x1AEEAB8
    void PlayerFell();
    // public System.Void FBDBGKLFFOI()
    // Offset: 0x1AEEBAC
    void FBDBGKLFFOI();
    // public System.Void IKELPLBJNNN()
    // Offset: 0x1AEEFC8
    void IKELPLBJNNN();
    // public System.Void KNJMGIJJCBM(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEF048
    void KNJMGIJJCBM(::MagicalActual::Grabber* BALIAOKIHIC);
    // private System.Void Start()
    // Offset: 0x1AEF114
    void Start();
    // private System.Collections.IEnumerator ANFKPELBBNA()
    // Offset: 0x1AEE3CC
    ::System::Collections::IEnumerator* ANFKPELBBNA();
    // public System.Void HandGrabbed(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEF1BC
    void HandGrabbed(::MagicalActual::Grabber* BALIAOKIHIC);
    // public System.Void EFGJFMENOAL()
    // Offset: 0x1AEF2F4
    void EFGJFMENOAL();
    // public System.Void HBHDELKJPCO()
    // Offset: 0x1AEF730
    void HBHDELKJPCO();
    // public System.Void HKOCBGPELEB()
    // Offset: 0x1AEE8FC
    void HKOCBGPELEB();
    // public System.Void .ctor()
    // Offset: 0x1AEF824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClimableWall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::ClimableWall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClimableWall*, creationType>()));
    }
    // public System.Void LBIIBKELPPG()
    // Offset: 0x1AEF82C
    void LBIIBKELPPG();
    // public System.Void JLCIFICDJPL(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEF848
    void JLCIFICDJPL(::MagicalActual::Grabber* BALIAOKIHIC);
    // public System.Void PGLDNLAENGC(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEF988
    void PGLDNLAENGC(::MagicalActual::Grabber* BALIAOKIHIC);
    // public System.Void OHKGAEAHAFM(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEFA54
    void OHKGAEAHAFM(::MagicalActual::Grabber* BALIAOKIHIC);
    // public System.Void HandReleased(MagicalActual.Grabber BALIAOKIHIC)
    // Offset: 0x1AEFB90
    void HandReleased(::MagicalActual::Grabber* BALIAOKIHIC);
    // public System.Void Update()
    // Offset: 0x1AEFC5C
    void Update();
    // public System.Void PNKHLJDEJNA()
    // Offset: 0x1AF0014
    void PNKHLJDEJNA();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x1AF03E4
    void MLGBKBMHHLE();
    // public System.Void DPDDNOBAFIP()
    // Offset: 0x1AF0460
    void DPDDNOBAFIP();
    // public System.Void NMINKHACGAD()
    // Offset: 0x1AF089C
    void NMINKHACGAD();
    // public System.Void INJNMDOBFOI()
    // Offset: 0x1AF091C
    void INJNMDOBFOI();
    // private System.Collections.IEnumerator NCFCNECEOPE()
    // Offset: 0x1AEF7AC
    ::System::Collections::IEnumerator* NCFCNECEOPE();
    // public System.Void ResetHands()
    // Offset: 0x1AF0D58
    void ResetHands();
    // public System.Void BANOGCBHFDG()
    // Offset: 0x1AF0D70
    void BANOGCBHFDG();
    // public System.Void NJIFCEJCMOD()
    // Offset: 0x1AF0D88
    void NJIFCEJCMOD();
    // private System.Collections.IEnumerator BGLIOKGKMJI()
    // Offset: 0x1AEEB38
    ::System::Collections::IEnumerator* BGLIOKGKMJI();
  }; // MagicalActual.ClimableWall
  #pragma pack(pop)
  static check_size<sizeof(ClimableWall), 88 + sizeof(float)> __MagicalActual_ClimableWallSizeCheck;
  static_assert(sizeof(ClimableWall) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::ClimableWall::IBPFNAMMJBO
// Il2CppName: IBPFNAMMJBO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::IBPFNAMMJBO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "IBPFNAMMJBO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::PIJOPKAKBDN
// Il2CppName: PIJOPKAKBDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::PIJOPKAKBDN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "PIJOPKAKBDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::EFLLEILOGJN
// Il2CppName: EFLLEILOGJN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::EFLLEILOGJN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "EFLLEILOGJN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::DCPOGANMGMA
// Il2CppName: DCPOGANMGMA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::DCPOGANMGMA)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "DCPOGANMGMA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::PlayerFell
// Il2CppName: PlayerFell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::PlayerFell)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "PlayerFell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::FBDBGKLFFOI
// Il2CppName: FBDBGKLFFOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::FBDBGKLFFOI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "FBDBGKLFFOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::IKELPLBJNNN
// Il2CppName: IKELPLBJNNN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::IKELPLBJNNN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "IKELPLBJNNN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::KNJMGIJJCBM
// Il2CppName: KNJMGIJJCBM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::KNJMGIJJCBM)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "KNJMGIJJCBM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::ANFKPELBBNA
// Il2CppName: ANFKPELBBNA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::ANFKPELBBNA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "ANFKPELBBNA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::HandGrabbed
// Il2CppName: HandGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::HandGrabbed)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "HandGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::EFGJFMENOAL
// Il2CppName: EFGJFMENOAL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::EFGJFMENOAL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "EFGJFMENOAL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::HBHDELKJPCO
// Il2CppName: HBHDELKJPCO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::HBHDELKJPCO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "HBHDELKJPCO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::HKOCBGPELEB
// Il2CppName: HKOCBGPELEB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::HKOCBGPELEB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "HKOCBGPELEB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::ClimableWall::LBIIBKELPPG
// Il2CppName: LBIIBKELPPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::LBIIBKELPPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "LBIIBKELPPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::JLCIFICDJPL
// Il2CppName: JLCIFICDJPL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::JLCIFICDJPL)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "JLCIFICDJPL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::PGLDNLAENGC
// Il2CppName: PGLDNLAENGC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::PGLDNLAENGC)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "PGLDNLAENGC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::OHKGAEAHAFM
// Il2CppName: OHKGAEAHAFM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::OHKGAEAHAFM)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "OHKGAEAHAFM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::HandReleased
// Il2CppName: HandReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)(::MagicalActual::Grabber*)>(&MagicalActual::ClimableWall::HandReleased)> {
  static const MethodInfo* get() {
    static auto* BALIAOKIHIC = &::il2cpp_utils::GetClassFromName("MagicalActual", "Grabber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "HandReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{BALIAOKIHIC});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::PNKHLJDEJNA
// Il2CppName: PNKHLJDEJNA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::PNKHLJDEJNA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "PNKHLJDEJNA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::DPDDNOBAFIP
// Il2CppName: DPDDNOBAFIP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::DPDDNOBAFIP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "DPDDNOBAFIP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::NMINKHACGAD
// Il2CppName: NMINKHACGAD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::NMINKHACGAD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "NMINKHACGAD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::INJNMDOBFOI
// Il2CppName: INJNMDOBFOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::INJNMDOBFOI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "INJNMDOBFOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::NCFCNECEOPE
// Il2CppName: NCFCNECEOPE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::NCFCNECEOPE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "NCFCNECEOPE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::ResetHands
// Il2CppName: ResetHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::ResetHands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "ResetHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::BANOGCBHFDG
// Il2CppName: BANOGCBHFDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::BANOGCBHFDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "BANOGCBHFDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::NJIFCEJCMOD
// Il2CppName: NJIFCEJCMOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::NJIFCEJCMOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "NJIFCEJCMOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::ClimableWall::BGLIOKGKMJI
// Il2CppName: BGLIOKGKMJI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (MagicalActual::ClimableWall::*)()>(&MagicalActual::ClimableWall::BGLIOKGKMJI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::ClimableWall*), "BGLIOKGKMJI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
