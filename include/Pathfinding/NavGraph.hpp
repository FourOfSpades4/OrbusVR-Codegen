// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Util.Guid
#include "Pathfinding/Util/Guid.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNodeDelegateCancelable
  class GraphNodeDelegateCancelable;
  // Forward declaring type: NNInfo
  struct NNInfo;
  // Forward declaring type: NNConstraint
  class NNConstraint;
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: OnScanStatus
  class OnScanStatus;
  // Forward declaring type: PathHandler
  class PathHandler;
  // Forward declaring type: Path
  class Path;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavGraph
  class NavGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NavGraph);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NavGraph*, "Pathfinding", "NavGraph");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0xC4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NavGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class NavGraph : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::NavGraph::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: ::Pathfinding::NavGraph::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: ::Pathfinding::NavGraph::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // Nested type: ::Pathfinding::NavGraph::$$c
    class $$c;
    // Nested type: ::Pathfinding::NavGraph::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    public:
    // public AstarPath active
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::AstarPath* active;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AstarPath*) == 0x8);
    // public Pathfinding.Util.Guid guid
    // Size: 0x10
    // Offset: 0x18
    ::Pathfinding::Util::Guid guid;
    // Field size check
    static_assert(sizeof(::Pathfinding::Util::Guid) == 0x10);
    // public System.UInt32 initialPenalty
    // Size: 0x4
    // Offset: 0x28
    uint initialPenalty;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Boolean open
    // Size: 0x1
    // Offset: 0x2C
    bool open;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: open and: graphIndex
    char __padding3[0x3] = {};
    // public System.UInt32 graphIndex
    // Size: 0x4
    // Offset: 0x30
    uint graphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: graphIndex and: name
    char __padding4[0x4] = {};
    // public System.String name
    // Size: 0x8
    // Offset: 0x38
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean drawGizmos
    // Size: 0x1
    // Offset: 0x40
    bool drawGizmos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean infoScreenOpen
    // Size: 0x1
    // Offset: 0x41
    bool infoScreenOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: infoScreenOpen and: matrix
    char __padding7[0x2] = {};
    // public UnityEngine.Matrix4x4 matrix
    // Size: 0x40
    // Offset: 0x44
    ::UnityEngine::Matrix4x4 matrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public UnityEngine.Matrix4x4 inverseMatrix
    // Size: 0x40
    // Offset: 0x84
    ::UnityEngine::Matrix4x4 inverseMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    public:
    // Get instance field reference: public AstarPath active
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AstarPath*& dyn_active();
    // Get instance field reference: public Pathfinding.Util.Guid guid
    [[deprecated("Use field access instead!")]] ::Pathfinding::Util::Guid& dyn_guid();
    // Get instance field reference: public System.UInt32 initialPenalty
    [[deprecated("Use field access instead!")]] uint& dyn_initialPenalty();
    // Get instance field reference: public System.Boolean open
    [[deprecated("Use field access instead!")]] bool& dyn_open();
    // Get instance field reference: public System.UInt32 graphIndex
    [[deprecated("Use field access instead!")]] uint& dyn_graphIndex();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Boolean drawGizmos
    [[deprecated("Use field access instead!")]] bool& dyn_drawGizmos();
    // Get instance field reference: public System.Boolean infoScreenOpen
    [[deprecated("Use field access instead!")]] bool& dyn_infoScreenOpen();
    // Get instance field reference: public UnityEngine.Matrix4x4 matrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_matrix();
    // Get instance field reference: public UnityEngine.Matrix4x4 inverseMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_inverseMatrix();
    // public System.Int32 CountNodes()
    // Offset: 0x1C1D244
    int CountNodes();
    // public System.Void GetNodes(Pathfinding.GraphNodeDelegateCancelable del)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetNodes(::Pathfinding::GraphNodeDelegateCancelable* del);
    // public System.Void SetMatrix(UnityEngine.Matrix4x4 m)
    // Offset: 0x1C0FB64
    void SetMatrix(::UnityEngine::Matrix4x4 m);
    // public System.Void RelocateNodes(UnityEngine.Matrix4x4 oldMatrix, UnityEngine.Matrix4x4 newMatrix)
    // Offset: 0x1C1D308
    void RelocateNodes(::UnityEngine::Matrix4x4 oldMatrix, ::UnityEngine::Matrix4x4 newMatrix);
    // public Pathfinding.NNInfo GetNearest(UnityEngine.Vector3 position)
    // Offset: 0x1C1D4E0
    ::Pathfinding::NNInfo GetNearest(::UnityEngine::Vector3 position);
    // public Pathfinding.NNInfo GetNearest(UnityEngine.Vector3 position, Pathfinding.NNConstraint constraint)
    // Offset: 0x1C1D544
    ::Pathfinding::NNInfo GetNearest(::UnityEngine::Vector3 position, ::Pathfinding::NNConstraint* constraint);
    // public Pathfinding.NNInfo GetNearest(UnityEngine.Vector3 position, Pathfinding.NNConstraint constraint, Pathfinding.GraphNode hint)
    // Offset: 0x1C1D554
    ::Pathfinding::NNInfo GetNearest(::UnityEngine::Vector3 position, ::Pathfinding::NNConstraint* constraint, ::Pathfinding::GraphNode* hint);
    // public Pathfinding.NNInfo GetNearestForce(UnityEngine.Vector3 position, Pathfinding.NNConstraint constraint)
    // Offset: 0x1C1D894
    ::Pathfinding::NNInfo GetNearestForce(::UnityEngine::Vector3 position, ::Pathfinding::NNConstraint* constraint);
    // public System.Void Awake()
    // Offset: 0x1C1D8A4
    void Awake();
    // public System.Void OnDestroy()
    // Offset: 0x1C0E190
    void OnDestroy();
    // public System.Void ScanGraph()
    // Offset: 0x1C1D8A8
    void ScanGraph();
    // public System.Void Scan()
    // Offset: 0x1C1DAE0
    void Scan();
    // public System.Void ScanInternal()
    // Offset: 0x1C1DAD0
    void ScanInternal();
    // public System.Void ScanInternal(Pathfinding.OnScanStatus statusCallback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ScanInternal(::Pathfinding::OnScanStatus* statusCallback);
    // public UnityEngine.Color NodeColor(Pathfinding.GraphNode node, Pathfinding.PathHandler data)
    // Offset: 0x1C1DB54
    ::UnityEngine::Color NodeColor(::Pathfinding::GraphNode* node, ::Pathfinding::PathHandler* data);
    // public System.Void SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x1C1E018
    void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public System.Void DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x1C1E01C
    void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public System.Void PostDeserialization()
    // Offset: 0x1C1E020
    void PostDeserialization();
    // public System.Void DeserializeSettingsCompatibility(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x1C16100
    void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // static public System.Boolean InSearchTree(Pathfinding.GraphNode node, Pathfinding.Path path)
    // Offset: 0x1C13A8C
    static bool InSearchTree(::Pathfinding::GraphNode* node, ::Pathfinding::Path* path);
    // public System.Void OnDrawGizmos(System.Boolean drawNodes)
    // Offset: 0x1C1E024
    void OnDrawGizmos(bool drawNodes);
    // System.Void UnloadGizmoMeshes()
    // Offset: 0x1C1E16C
    void UnloadGizmoMeshes();
    // protected System.Void .ctor()
    // Offset: 0x1C0E898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NavGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavGraph*, creationType>()));
    }
  }; // Pathfinding.NavGraph
  #pragma pack(pop)
  static check_size<sizeof(NavGraph), 132 + sizeof(::UnityEngine::Matrix4x4)> __Pathfinding_NavGraphSizeCheck;
  static_assert(sizeof(NavGraph) == 0xC4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NavGraph::CountNodes
// Il2CppName: CountNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::CountNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "CountNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::GetNodes
// Il2CppName: GetNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::Pathfinding::GraphNodeDelegateCancelable*)>(&Pathfinding::NavGraph::GetNodes)> {
  static const MethodInfo* get() {
    static auto* del = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNodeDelegateCancelable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "GetNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{del});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::SetMatrix
// Il2CppName: SetMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::UnityEngine::Matrix4x4)>(&Pathfinding::NavGraph::SetMatrix)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "SetMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::RelocateNodes
// Il2CppName: RelocateNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&Pathfinding::NavGraph::RelocateNodes)> {
  static const MethodInfo* get() {
    static auto* oldMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* newMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "RelocateNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldMatrix, newMatrix});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::GetNearest
// Il2CppName: GetNearest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::NNInfo (Pathfinding::NavGraph::*)(::UnityEngine::Vector3)>(&Pathfinding::NavGraph::GetNearest)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "GetNearest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::GetNearest
// Il2CppName: GetNearest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::NNInfo (Pathfinding::NavGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&Pathfinding::NavGraph::GetNearest)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "GetNearest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, constraint});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::GetNearest
// Il2CppName: GetNearest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::NNInfo (Pathfinding::NavGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&Pathfinding::NavGraph::GetNearest)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    static auto* hint = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "GetNearest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, constraint, hint});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::GetNearestForce
// Il2CppName: GetNearestForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::NNInfo (Pathfinding::NavGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&Pathfinding::NavGraph::GetNearestForce)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "GetNearestForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, constraint});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::ScanGraph
// Il2CppName: ScanGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::ScanGraph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "ScanGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::Scan
// Il2CppName: Scan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::Scan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "Scan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::ScanInternal
// Il2CppName: ScanInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::ScanInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "ScanInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::ScanInternal
// Il2CppName: ScanInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::Pathfinding::OnScanStatus*)>(&Pathfinding::NavGraph::ScanInternal)> {
  static const MethodInfo* get() {
    static auto* statusCallback = &::il2cpp_utils::GetClassFromName("Pathfinding", "OnScanStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "ScanInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statusCallback});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::NodeColor
// Il2CppName: NodeColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Pathfinding::NavGraph::*)(::Pathfinding::GraphNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::NavGraph::NodeColor)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "NodeColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, data});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::SerializeExtraInfo
// Il2CppName: SerializeExtraInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::NavGraph::SerializeExtraInfo)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "SerializeExtraInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::DeserializeExtraInfo
// Il2CppName: DeserializeExtraInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::NavGraph::DeserializeExtraInfo)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "DeserializeExtraInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::PostDeserialization
// Il2CppName: PostDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::PostDeserialization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "PostDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::DeserializeSettingsCompatibility
// Il2CppName: DeserializeSettingsCompatibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::NavGraph::DeserializeSettingsCompatibility)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "DeserializeSettingsCompatibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::InSearchTree
// Il2CppName: InSearchTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Pathfinding::GraphNode*, ::Pathfinding::Path*)>(&Pathfinding::NavGraph::InSearchTree)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "InSearchTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, path});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)(bool)>(&Pathfinding::NavGraph::OnDrawGizmos)> {
  static const MethodInfo* get() {
    static auto* drawNodes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{drawNodes});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::UnloadGizmoMeshes
// Il2CppName: UnloadGizmoMeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::*)()>(&Pathfinding::NavGraph::UnloadGizmoMeshes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph*), "UnloadGizmoMeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!