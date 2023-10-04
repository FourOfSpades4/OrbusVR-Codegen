// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
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
  // Forward declaring type: AOECircleIndicator
  class AOECircleIndicator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::AOECircleIndicator);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::AOECircleIndicator*, "MagicalActual", "AOECircleIndicator");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.AOECircleIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  class AOECircleIndicator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single BOUNDARY_WIDTH
    // Size: 0x4
    // Offset: 0x18
    float BOUNDARY_WIDTH;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single accuracy
    // Size: 0x4
    // Offset: 0x1C
    float accuracy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.MeshRenderer HCMCDILAJCJ
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* HCMCDILAJCJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshFilter BFIMIJNJOOI
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::MeshFilter* BFIMIJNJOOI;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Mesh GGAGBPCDDMJ
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Mesh* GGAGBPCDDMJ;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> NKACLEJOHKJ
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NKACLEJOHKJ;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Vector3[] IEIIOCMNHFF
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Vector3> IEIIOCMNHFF;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Int32[] DPNEKENMBDB
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<int> DPNEKENMBDB;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private UnityEngine.Vector3[] AGJLCLHIBKN
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> AGJLCLHIBKN;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector2[] AKIJOGDENGA
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Vector2> AKIJOGDENGA;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // private System.Int32 CCHEOCELOMJ
    // Size: 0x4
    // Offset: 0x60
    int CCHEOCELOMJ;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x64
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single HIBKKMEKAFO
    static constexpr const float HIBKKMEKAFO = 0.03;
    // Get static field: static private System.Single HIBKKMEKAFO
    static float _get_HIBKKMEKAFO();
    // Set static field: static private System.Single HIBKKMEKAFO
    static void _set_HIBKKMEKAFO(float value);
    // Get instance field reference: public System.Single BOUNDARY_WIDTH
    [[deprecated("Use field access instead!")]] float& dyn_BOUNDARY_WIDTH();
    // Get instance field reference: public System.Single accuracy
    [[deprecated("Use field access instead!")]] float& dyn_accuracy();
    // Get instance field reference: private UnityEngine.MeshRenderer HCMCDILAJCJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_HCMCDILAJCJ();
    // Get instance field reference: private UnityEngine.MeshFilter BFIMIJNJOOI
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn_BFIMIJNJOOI();
    // Get instance field reference: private UnityEngine.Mesh GGAGBPCDDMJ
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_GGAGBPCDDMJ();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> NKACLEJOHKJ
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn_NKACLEJOHKJ();
    // Get instance field reference: private UnityEngine.Vector3[] IEIIOCMNHFF
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_IEIIOCMNHFF();
    // Get instance field reference: private System.Int32[] DPNEKENMBDB
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_DPNEKENMBDB();
    // Get instance field reference: private UnityEngine.Vector3[] AGJLCLHIBKN
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_AGJLCLHIBKN();
    // Get instance field reference: private UnityEngine.Vector2[] AKIJOGDENGA
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_AKIJOGDENGA();
    // Get instance field reference: private System.Int32 CCHEOCELOMJ
    [[deprecated("Use field access instead!")]] int& dyn_CCHEOCELOMJ();
    // Get instance field reference: public System.Single radius
    [[deprecated("Use field access instead!")]] float& dyn_radius();
    // private System.Void DHHJJNNOJKE()
    // Offset: 0x19F9598
    void DHHJJNNOJKE();
    // public System.Void HEFEEBBKOIG()
    // Offset: 0x19F9DA0
    void HEFEEBBKOIG();
    // private System.Void FNGPOAEOFCO()
    // Offset: 0x19FA15C
    void FNGPOAEOFCO();
    // private System.Void DKLMOLIDKCM()
    // Offset: 0x19FA91C
    void DKLMOLIDKCM();
    // private System.Void HFFLHPCIELN()
    // Offset: 0x19FAF20
    void HFFLHPCIELN();
    // public System.Void .ctor()
    // Offset: 0x19FB748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AOECircleIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::AOECircleIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AOECircleIndicator*, creationType>()));
    }
    // private UnityEngine.Vector3 CPLIOJHFIOF(UnityEngine.Vector3 EENBBLBIKAL, System.Single GHINIOILDHP)
    // Offset: 0x19F9F80
    ::UnityEngine::Vector3 CPLIOJHFIOF(::UnityEngine::Vector3 EENBBLBIKAL, float GHINIOILDHP);
    // private System.Void IAJFHMCOILK()
    // Offset: 0x19FB75C
    void IAJFHMCOILK();
    // private System.Void ICBFACJBNPI()
    // Offset: 0x19FBD64
    void ICBFACJBNPI();
    // private System.Void Awake()
    // Offset: 0x19FBE14
    void Awake();
    // private System.Void AIKBLNGPOON()
    // Offset: 0x19FBED0
    void AIKBLNGPOON();
    // private System.Void MLGBKBMHHLE()
    // Offset: 0x19FBF8C
    void MLGBKBMHHLE();
    // private System.Void DGELIHGGOKB()
    // Offset: 0x19FC170
    void DGELIHGGOKB();
    // private System.Void MOODHAHGAOI()
    // Offset: 0x19FC230
    void MOODHAHGAOI();
    // public System.Void FitToGround()
    // Offset: 0x19FBF90
    void FitToGround();
    // private UnityEngine.Vector3 OJCOMIPKAFJ(UnityEngine.Vector3 EENBBLBIKAL, System.Single GHINIOILDHP)
    // Offset: 0x19FCA6C
    ::UnityEngine::Vector3 OJCOMIPKAFJ(::UnityEngine::Vector3 EENBBLBIKAL, float GHINIOILDHP);
    // private UnityEngine.Vector3 ANJJPGMNMLF(UnityEngine.Vector3 EENBBLBIKAL, System.Single GHINIOILDHP)
    // Offset: 0x19FBB8C
    ::UnityEngine::Vector3 ANJJPGMNMLF(::UnityEngine::Vector3 EENBBLBIKAL, float GHINIOILDHP);
    // private System.Void Start()
    // Offset: 0x19FCC48
    void Start();
    // private System.Void FOLEGHHJHOD()
    // Offset: 0x19FCC4C
    void FOLEGHHJHOD();
    // private UnityEngine.Vector3 EPFHJCNFHGN(UnityEngine.Vector3 EENBBLBIKAL, System.Single GHINIOILDHP)
    // Offset: 0x19FD07C
    ::UnityEngine::Vector3 EPFHJCNFHGN(::UnityEngine::Vector3 EENBBLBIKAL, float GHINIOILDHP);
    // private System.Void JDNAHCKOKMN()
    // Offset: 0x19FD258
    void JDNAHCKOKMN();
    // private System.Void MBGFABFIGHK()
    // Offset: 0x19FDAAC
    void MBGFABFIGHK();
    // public System.Void CJGAJCDEFDK()
    // Offset: 0x19FDEA4
    void CJGAJCDEFDK();
    // private UnityEngine.Vector3 JKMOJHKDOOP(UnityEngine.Vector3 EENBBLBIKAL, System.Single GHINIOILDHP)
    // Offset: 0x19FAD44
    ::UnityEngine::Vector3 JKMOJHKDOOP(::UnityEngine::Vector3 EENBBLBIKAL, float GHINIOILDHP);
    // private System.Void EKLHCOPFEJD()
    // Offset: 0x19FE088
    void EKLHCOPFEJD();
    // private System.Void FCHFBHOPKHC()
    // Offset: 0x19FE880
    void FCHFBHOPKHC();
    // private System.Void HIBDKEDPOFB()
    // Offset: 0x19FF134
    void HIBDKEDPOFB();
    // private System.Void JBEJCKDIKIE()
    // Offset: 0x19FF93C
    void JBEJCKDIKIE();
    // private System.Void JENOIOBAEPG()
    // Offset: 0x19FF9EC
    void JENOIOBAEPG();
  }; // MagicalActual.AOECircleIndicator
  #pragma pack(pop)
  static check_size<sizeof(AOECircleIndicator), 100 + sizeof(float)> __MagicalActual_AOECircleIndicatorSizeCheck;
  static_assert(sizeof(AOECircleIndicator) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::DHHJJNNOJKE
// Il2CppName: DHHJJNNOJKE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::DHHJJNNOJKE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "DHHJJNNOJKE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::HEFEEBBKOIG
// Il2CppName: HEFEEBBKOIG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::HEFEEBBKOIG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "HEFEEBBKOIG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::FNGPOAEOFCO
// Il2CppName: FNGPOAEOFCO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::FNGPOAEOFCO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "FNGPOAEOFCO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::DKLMOLIDKCM
// Il2CppName: DKLMOLIDKCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::DKLMOLIDKCM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "DKLMOLIDKCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::HFFLHPCIELN
// Il2CppName: HFFLHPCIELN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::HFFLHPCIELN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "HFFLHPCIELN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::CPLIOJHFIOF
// Il2CppName: CPLIOJHFIOF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::AOECircleIndicator::*)(::UnityEngine::Vector3, float)>(&MagicalActual::AOECircleIndicator::CPLIOJHFIOF)> {
  static const MethodInfo* get() {
    static auto* EENBBLBIKAL = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* GHINIOILDHP = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "CPLIOJHFIOF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{EENBBLBIKAL, GHINIOILDHP});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::IAJFHMCOILK
// Il2CppName: IAJFHMCOILK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::IAJFHMCOILK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "IAJFHMCOILK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::ICBFACJBNPI
// Il2CppName: ICBFACJBNPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::ICBFACJBNPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "ICBFACJBNPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::AIKBLNGPOON
// Il2CppName: AIKBLNGPOON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::AIKBLNGPOON)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "AIKBLNGPOON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::MLGBKBMHHLE
// Il2CppName: MLGBKBMHHLE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::MLGBKBMHHLE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "MLGBKBMHHLE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::DGELIHGGOKB
// Il2CppName: DGELIHGGOKB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::DGELIHGGOKB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "DGELIHGGOKB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::MOODHAHGAOI
// Il2CppName: MOODHAHGAOI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::MOODHAHGAOI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "MOODHAHGAOI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::FitToGround
// Il2CppName: FitToGround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::FitToGround)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "FitToGround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::OJCOMIPKAFJ
// Il2CppName: OJCOMIPKAFJ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::AOECircleIndicator::*)(::UnityEngine::Vector3, float)>(&MagicalActual::AOECircleIndicator::OJCOMIPKAFJ)> {
  static const MethodInfo* get() {
    static auto* EENBBLBIKAL = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* GHINIOILDHP = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "OJCOMIPKAFJ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{EENBBLBIKAL, GHINIOILDHP});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::ANJJPGMNMLF
// Il2CppName: ANJJPGMNMLF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::AOECircleIndicator::*)(::UnityEngine::Vector3, float)>(&MagicalActual::AOECircleIndicator::ANJJPGMNMLF)> {
  static const MethodInfo* get() {
    static auto* EENBBLBIKAL = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* GHINIOILDHP = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "ANJJPGMNMLF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{EENBBLBIKAL, GHINIOILDHP});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::FOLEGHHJHOD
// Il2CppName: FOLEGHHJHOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::FOLEGHHJHOD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "FOLEGHHJHOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::EPFHJCNFHGN
// Il2CppName: EPFHJCNFHGN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::AOECircleIndicator::*)(::UnityEngine::Vector3, float)>(&MagicalActual::AOECircleIndicator::EPFHJCNFHGN)> {
  static const MethodInfo* get() {
    static auto* EENBBLBIKAL = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* GHINIOILDHP = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "EPFHJCNFHGN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{EENBBLBIKAL, GHINIOILDHP});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::JDNAHCKOKMN
// Il2CppName: JDNAHCKOKMN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::JDNAHCKOKMN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "JDNAHCKOKMN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::MBGFABFIGHK
// Il2CppName: MBGFABFIGHK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::MBGFABFIGHK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "MBGFABFIGHK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::CJGAJCDEFDK
// Il2CppName: CJGAJCDEFDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::CJGAJCDEFDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "CJGAJCDEFDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::JKMOJHKDOOP
// Il2CppName: JKMOJHKDOOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (MagicalActual::AOECircleIndicator::*)(::UnityEngine::Vector3, float)>(&MagicalActual::AOECircleIndicator::JKMOJHKDOOP)> {
  static const MethodInfo* get() {
    static auto* EENBBLBIKAL = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* GHINIOILDHP = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "JKMOJHKDOOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{EENBBLBIKAL, GHINIOILDHP});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::EKLHCOPFEJD
// Il2CppName: EKLHCOPFEJD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::EKLHCOPFEJD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "EKLHCOPFEJD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::FCHFBHOPKHC
// Il2CppName: FCHFBHOPKHC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::FCHFBHOPKHC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "FCHFBHOPKHC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::HIBDKEDPOFB
// Il2CppName: HIBDKEDPOFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::HIBDKEDPOFB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "HIBDKEDPOFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::JBEJCKDIKIE
// Il2CppName: JBEJCKDIKIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::JBEJCKDIKIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "JBEJCKDIKIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::AOECircleIndicator::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::AOECircleIndicator::*)()>(&MagicalActual::AOECircleIndicator::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::AOECircleIndicator*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
