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
// Forward declaring namespace: Jacovone
namespace Jacovone {
  // Forward declaring type: PathMagic
  class PathMagic;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GotoWaypoint
  class GotoWaypoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GotoWaypoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GotoWaypoint*, "", "GotoWaypoint");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GotoWaypoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACE6A0
  class GotoWaypoint : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Int32 requestedWaypoint
    // Size: 0x4
    // Offset: 0x18
    int requestedWaypoint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: requestedWaypoint and: pathMagic
    char __padding0[0x4] = {};
    // private Jacovone.PathMagic pathMagic
    // Size: 0x8
    // Offset: 0x20
    ::Jacovone::PathMagic* pathMagic;
    // Field size check
    static_assert(sizeof(::Jacovone::PathMagic*) == 0x8);
    // private System.Int32 lastRequestedWaypoint
    // Size: 0x4
    // Offset: 0x28
    int lastRequestedWaypoint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single lastRequestedPos
    // Size: 0x4
    // Offset: 0x2C
    float lastRequestedPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 requestedWaypoint
    [[deprecated("Use field access instead!")]] int& dyn_requestedWaypoint();
    // Get instance field reference: private Jacovone.PathMagic pathMagic
    [[deprecated("Use field access instead!")]] ::Jacovone::PathMagic*& dyn_pathMagic();
    // Get instance field reference: private System.Int32 lastRequestedWaypoint
    [[deprecated("Use field access instead!")]] int& dyn_lastRequestedWaypoint();
    // Get instance field reference: private System.Single lastRequestedPos
    [[deprecated("Use field access instead!")]] float& dyn_lastRequestedPos();
    // private System.Void Start()
    // Offset: 0x1492588
    void Start();
    // private System.Void Update()
    // Offset: 0x14925E4
    void Update();
    // private System.Single CalcPosForWaypointIndex(Jacovone.PathMagic pm, System.Int32 index)
    // Offset: 0x1492A40
    float CalcPosForWaypointIndex(::Jacovone::PathMagic* pm, int index);
    // public System.Single ComputePosForWaypoint(Jacovone.PathMagic pm, System.Int32 waypoint)
    // Offset: 0x14926D4
    float ComputePosForWaypoint(::Jacovone::PathMagic* pm, int waypoint);
    // public System.Void .ctor()
    // Offset: 0x1492AAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GotoWaypoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GotoWaypoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GotoWaypoint*, creationType>()));
    }
  }; // GotoWaypoint
  #pragma pack(pop)
  static check_size<sizeof(GotoWaypoint), 44 + sizeof(float)> __GlobalNamespace_GotoWaypointSizeCheck;
  static_assert(sizeof(GotoWaypoint) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GotoWaypoint::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GotoWaypoint::*)()>(&GlobalNamespace::GotoWaypoint::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GotoWaypoint*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GotoWaypoint::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GotoWaypoint::*)()>(&GlobalNamespace::GotoWaypoint::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GotoWaypoint*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GotoWaypoint::CalcPosForWaypointIndex
// Il2CppName: CalcPosForWaypointIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GotoWaypoint::*)(::Jacovone::PathMagic*, int)>(&GlobalNamespace::GotoWaypoint::CalcPosForWaypointIndex)> {
  static const MethodInfo* get() {
    static auto* pm = &::il2cpp_utils::GetClassFromName("Jacovone", "PathMagic")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GotoWaypoint*), "CalcPosForWaypointIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pm, index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GotoWaypoint::ComputePosForWaypoint
// Il2CppName: ComputePosForWaypoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GotoWaypoint::*)(::Jacovone::PathMagic*, int)>(&GlobalNamespace::GotoWaypoint::ComputePosForWaypoint)> {
  static const MethodInfo* get() {
    static auto* pm = &::il2cpp_utils::GetClassFromName("Jacovone", "PathMagic")->byval_arg;
    static auto* waypoint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GotoWaypoint*), "ComputePosForWaypoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pm, waypoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GotoWaypoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!