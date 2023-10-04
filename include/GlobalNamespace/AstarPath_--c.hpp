// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AstarPath
#include "GlobalNamespace/AstarPath.hpp"
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
NEED_NO_BOX(::GlobalNamespace::AstarPath::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AstarPath::$$c*, "", "AstarPath/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AstarPath/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACD0B8
  class AstarPath::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly AstarPath/<>c <>9
    static ::GlobalNamespace::AstarPath::$$c* _get_$$9();
    // Set static field: static public readonly AstarPath/<>c <>9
    static void _set_$$9(::GlobalNamespace::AstarPath::$$c* value);
    // Get static field: static public Pathfinding.GraphNodeDelegateCancelable <>9__143_0
    static ::Pathfinding::GraphNodeDelegateCancelable* _get_$$9__143_0();
    // Set static field: static public Pathfinding.GraphNodeDelegateCancelable <>9__143_0
    static void _set_$$9__143_0(::Pathfinding::GraphNodeDelegateCancelable* value);
    // Get static field: static public Pathfinding.GraphNodeDelegateCancelable <>9__149_0
    static ::Pathfinding::GraphNodeDelegateCancelable* _get_$$9__149_0();
    // Set static field: static public Pathfinding.GraphNodeDelegateCancelable <>9__149_0
    static void _set_$$9__149_0(::Pathfinding::GraphNodeDelegateCancelable* value);
    // static private System.Void .cctor()
    // Offset: 0x12A636C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x12A63D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarPath::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AstarPath::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarPath::$$c*, creationType>()));
    }
    // System.Boolean <FloodFill>b__143_0(Pathfinding.GraphNode node)
    // Offset: 0x12A63D8
    bool $FloodFill$b__143_0(::Pathfinding::GraphNode* node);
    // System.Boolean <ScanLoop>b__149_0(Pathfinding.GraphNode node)
    // Offset: 0x12A6414
    bool $ScanLoop$b__149_0(::Pathfinding::GraphNode* node);
  }; // AstarPath/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::AstarPath::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c::$FloodFill$b__143_0
// Il2CppName: <FloodFill>b__143_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AstarPath::$$c::*)(::Pathfinding::GraphNode*)>(&GlobalNamespace::AstarPath::$$c::$FloodFill$b__143_0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$$c*), "<FloodFill>b__143_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c::$ScanLoop$b__149_0
// Il2CppName: <ScanLoop>b__149_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AstarPath::$$c::*)(::Pathfinding::GraphNode*)>(&GlobalNamespace::AstarPath::$$c::$ScanLoop$b__149_0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$$c*), "<ScanLoop>b__149_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};