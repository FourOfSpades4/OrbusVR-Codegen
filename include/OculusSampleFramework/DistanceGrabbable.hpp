// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRGrabbable
#include "GlobalNamespace/OVRGrabbable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: GrabbableCrosshair
  class GrabbableCrosshair;
  // Forward declaring type: GrabManager
  class GrabManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: DistanceGrabbable
  class DistanceGrabbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::DistanceGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::DistanceGrabbable*, "OculusSampleFramework", "DistanceGrabbable");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x72
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.DistanceGrabbable
  // [TokenAttribute] Offset: FFFFFFFF
  class DistanceGrabbable : public ::GlobalNamespace::OVRGrabbable {
    public:
    public:
    // public System.String m_materialColorField
    // Size: 0x8
    // Offset: 0x48
    ::StringW m_materialColorField;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private OculusSampleFramework.GrabbableCrosshair m_crosshair
    // Size: 0x8
    // Offset: 0x50
    ::OculusSampleFramework::GrabbableCrosshair* m_crosshair;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::GrabbableCrosshair*) == 0x8);
    // private OculusSampleFramework.GrabManager m_crosshairManager
    // Size: 0x8
    // Offset: 0x58
    ::OculusSampleFramework::GrabManager* m_crosshairManager;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::GrabManager*) == 0x8);
    // private UnityEngine.Renderer m_renderer
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Renderer* m_renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock m_mpb
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::MaterialPropertyBlock* m_mpb;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private System.Boolean m_inRange
    // Size: 0x1
    // Offset: 0x70
    bool m_inRange;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_targeted
    // Size: 0x1
    // Offset: 0x71
    bool m_targeted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String m_materialColorField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_materialColorField();
    // Get instance field reference: private OculusSampleFramework.GrabbableCrosshair m_crosshair
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::GrabbableCrosshair*& dyn_m_crosshair();
    // Get instance field reference: private OculusSampleFramework.GrabManager m_crosshairManager
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::GrabManager*& dyn_m_crosshairManager();
    // Get instance field reference: private UnityEngine.Renderer m_renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_m_renderer();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock m_mpb
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn_m_mpb();
    // Get instance field reference: private System.Boolean m_inRange
    [[deprecated("Use field access instead!")]] bool& dyn_m_inRange();
    // Get instance field reference: private System.Boolean m_targeted
    [[deprecated("Use field access instead!")]] bool& dyn_m_targeted();
    // public System.Boolean get_InRange()
    // Offset: 0xD70794
    bool get_InRange();
    // public System.Void set_InRange(System.Boolean value)
    // Offset: 0xD7079C
    void set_InRange(bool value);
    // public System.Boolean get_Targeted()
    // Offset: 0xD709AC
    bool get_Targeted();
    // public System.Void set_Targeted(System.Boolean value)
    // Offset: 0xD709B4
    void set_Targeted(bool value);
    // private System.Void RefreshCrosshair()
    // Offset: 0xD707A8
    void RefreshCrosshair();
    // public System.Void .ctor()
    // Offset: 0xD70BB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistanceGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::DistanceGrabbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistanceGrabbable*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0xD709C0
    // Implemented from: OVRGrabbable
    // Base method: System.Void OVRGrabbable::Start()
    void Start();
  }; // OculusSampleFramework.DistanceGrabbable
  #pragma pack(pop)
  static check_size<sizeof(DistanceGrabbable), 113 + sizeof(bool)> __OculusSampleFramework_DistanceGrabbableSizeCheck;
  static_assert(sizeof(DistanceGrabbable) == 0x72);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::get_InRange
// Il2CppName: get_InRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabbable::*)()>(&OculusSampleFramework::DistanceGrabbable::get_InRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabbable*), "get_InRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::set_InRange
// Il2CppName: set_InRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabbable::*)(bool)>(&OculusSampleFramework::DistanceGrabbable::set_InRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabbable*), "set_InRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::get_Targeted
// Il2CppName: get_Targeted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabbable::*)()>(&OculusSampleFramework::DistanceGrabbable::get_Targeted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabbable*), "get_Targeted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::set_Targeted
// Il2CppName: set_Targeted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabbable::*)(bool)>(&OculusSampleFramework::DistanceGrabbable::set_Targeted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabbable*), "set_Targeted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::RefreshCrosshair
// Il2CppName: RefreshCrosshair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabbable::*)()>(&OculusSampleFramework::DistanceGrabbable::RefreshCrosshair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabbable*), "RefreshCrosshair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabbable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabbable::*)()>(&OculusSampleFramework::DistanceGrabbable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabbable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};