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
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: RelevantGraphSurface
  class RelevantGraphSurface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RelevantGraphSurface);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RelevantGraphSurface*, "Pathfinding", "RelevantGraphSurface");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RelevantGraphSurface
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: AD8594
  // [AddComponentMenu] Offset: AD8594
  class RelevantGraphSurface : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single maxRange
    // Size: 0x4
    // Offset: 0x18
    float maxRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxRange and: prev
    char __padding0[0x4] = {};
    // private Pathfinding.RelevantGraphSurface prev
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::RelevantGraphSurface* prev;
    // Field size check
    static_assert(sizeof(::Pathfinding::RelevantGraphSurface*) == 0x8);
    // private Pathfinding.RelevantGraphSurface next
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::RelevantGraphSurface* next;
    // Field size check
    static_assert(sizeof(::Pathfinding::RelevantGraphSurface*) == 0x8);
    // private UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private Pathfinding.RelevantGraphSurface root
    static ::Pathfinding::RelevantGraphSurface* _get_root();
    // Set static field: static private Pathfinding.RelevantGraphSurface root
    static void _set_root(::Pathfinding::RelevantGraphSurface* value);
    // Get instance field reference: public System.Single maxRange
    [[deprecated("Use field access instead!")]] float& dyn_maxRange();
    // Get instance field reference: private Pathfinding.RelevantGraphSurface prev
    [[deprecated("Use field access instead!")]] ::Pathfinding::RelevantGraphSurface*& dyn_prev();
    // Get instance field reference: private Pathfinding.RelevantGraphSurface next
    [[deprecated("Use field access instead!")]] ::Pathfinding::RelevantGraphSurface*& dyn_next();
    // Get instance field reference: private UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // public UnityEngine.Vector3 get_Position()
    // Offset: 0x16B6680
    ::UnityEngine::Vector3 get_Position();
    // public Pathfinding.RelevantGraphSurface get_Next()
    // Offset: 0x16B668C
    ::Pathfinding::RelevantGraphSurface* get_Next();
    // public Pathfinding.RelevantGraphSurface get_Prev()
    // Offset: 0x16B6694
    ::Pathfinding::RelevantGraphSurface* get_Prev();
    // static public Pathfinding.RelevantGraphSurface get_Root()
    // Offset: 0x16B669C
    static ::Pathfinding::RelevantGraphSurface* get_Root();
    // public System.Void UpdatePosition()
    // Offset: 0x16B66EC
    void UpdatePosition();
    // private System.Void OnEnable()
    // Offset: 0x16B6730
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x16B67FC
    void OnDisable();
    // static public System.Void UpdateAllPositions()
    // Offset: 0x16B69A0
    static void UpdateAllPositions();
    // static public System.Void FindAllGraphSurfaces()
    // Offset: 0x16B6A54
    static void FindAllGraphSurfaces();
    // public System.Void OnDrawGizmos()
    // Offset: 0x16B6BA8
    void OnDrawGizmos();
    // public System.Void OnDrawGizmosSelected()
    // Offset: 0x16B6D5C
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x16B6F08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelevantGraphSurface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RelevantGraphSurface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelevantGraphSurface*, creationType>()));
    }
  }; // Pathfinding.RelevantGraphSurface
  #pragma pack(pop)
  static check_size<sizeof(RelevantGraphSurface), 48 + sizeof(::UnityEngine::Vector3)> __Pathfinding_RelevantGraphSurfaceSizeCheck;
  static_assert(sizeof(RelevantGraphSurface) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::get_Next
// Il2CppName: get_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RelevantGraphSurface* (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::get_Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "get_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::get_Prev
// Il2CppName: get_Prev
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RelevantGraphSurface* (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::get_Prev)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "get_Prev", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::get_Root
// Il2CppName: get_Root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RelevantGraphSurface* (*)()>(&Pathfinding::RelevantGraphSurface::get_Root)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "get_Root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::UpdatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::UpdateAllPositions
// Il2CppName: UpdateAllPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::RelevantGraphSurface::UpdateAllPositions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "UpdateAllPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::FindAllGraphSurfaces
// Il2CppName: FindAllGraphSurfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::RelevantGraphSurface::FindAllGraphSurfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "FindAllGraphSurfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RelevantGraphSurface::*)()>(&Pathfinding::RelevantGraphSurface::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RelevantGraphSurface*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RelevantGraphSurface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
