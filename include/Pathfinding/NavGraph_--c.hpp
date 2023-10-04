// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.NavGraph
#include "Pathfinding/NavGraph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNodeDelegateCancelable
  class GraphNodeDelegateCancelable;
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NavGraph::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NavGraph::$$c*, "Pathfinding", "NavGraph/<>c");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NavGraph/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD830C
  class NavGraph::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Pathfinding.NavGraph/<>c <>9
    static ::Pathfinding::NavGraph::$$c* _get_$$9();
    // Set static field: static public readonly Pathfinding.NavGraph/<>c <>9
    static void _set_$$9(::Pathfinding::NavGraph::$$c* value);
    // Get static field: static public Pathfinding.GraphNodeDelegateCancelable <>9__19_0
    static ::Pathfinding::GraphNodeDelegateCancelable* _get_$$9__19_0();
    // Set static field: static public Pathfinding.GraphNodeDelegateCancelable <>9__19_0
    static void _set_$$9__19_0(::Pathfinding::GraphNodeDelegateCancelable* value);
    // static private System.Void .cctor()
    // Offset: 0x1C1E170
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1C1E1D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavGraph::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NavGraph::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavGraph::$$c*, creationType>()));
    }
    // System.Boolean <OnDestroy>b__19_0(Pathfinding.GraphNode node)
    // Offset: 0x1C1E1DC
    bool $OnDestroy$b__19_0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.NavGraph/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NavGraph::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::NavGraph::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::NavGraph::$$c::$OnDestroy$b__19_0
// Il2CppName: <OnDestroy>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NavGraph::$$c::*)(::Pathfinding::GraphNode*)>(&Pathfinding::NavGraph::$$c::$OnDestroy$b__19_0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph::$$c*), "<OnDestroy>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
