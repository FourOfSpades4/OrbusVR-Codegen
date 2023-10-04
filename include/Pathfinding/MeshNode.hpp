// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GraphNode
#include "Pathfinding/GraphNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Skipping declaration: Int3 because it is already included!
  // Forward declaring type: GraphNodeDelegate
  class GraphNodeDelegate;
  // Forward declaring type: Path
  class Path;
  // Forward declaring type: PathNode
  class PathNode;
  // Forward declaring type: PathHandler
  class PathHandler;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: MeshNode
  class MeshNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::MeshNode);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::MeshNode*, "Pathfinding", "MeshNode");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.MeshNode
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshNode : public ::Pathfinding::GraphNode {
    public:
    public:
    // public Pathfinding.GraphNode[] connections
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Pathfinding::GraphNode*> connections;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::GraphNode*>) == 0x8);
    // public System.UInt32[] connectionCosts
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint> connectionCosts;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get instance field reference: public Pathfinding.GraphNode[] connections
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::GraphNode*>& dyn_connections();
    // Get instance field reference: public System.UInt32[] connectionCosts
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_connectionCosts();
    // public Pathfinding.Int3 GetVertex(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::Int3 GetVertex(int i);
    // public System.Int32 GetVertexCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetVertexCount();
    // public UnityEngine.Vector3 ClosestPointOnNode(UnityEngine.Vector3 p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3 p);
    // public UnityEngine.Vector3 ClosestPointOnNodeXZ(UnityEngine.Vector3 p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 ClosestPointOnNodeXZ(::UnityEngine::Vector3 p);
    // public System.Boolean ContainsPoint(Pathfinding.Int3 p)
    // Offset: 0x1C1C25C
    bool ContainsPoint(::Pathfinding::Int3 p);
    // protected System.Void .ctor(AstarPath astar)
    // Offset: 0x1C1B738
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::.ctor(AstarPath astar)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshNode* New_ctor(::GlobalNamespace::AstarPath* astar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::MeshNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshNode*, creationType>(astar)));
    }
    // public override System.Void ClearConnections(System.Boolean alsoReverse)
    // Offset: 0x1C1B73C
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::ClearConnections(System.Boolean alsoReverse)
    void ClearConnections(bool alsoReverse);
    // public override System.Void GetConnections(Pathfinding.GraphNodeDelegate del)
    // Offset: 0x1C1B7F0
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::GetConnections(Pathfinding.GraphNodeDelegate del)
    void GetConnections(::Pathfinding::GraphNodeDelegate* del);
    // public override System.Void FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode> stack, System.UInt32 region)
    // Offset: 0x1C1B8A0
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode> stack, System.UInt32 region)
    void FloodFill(::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>* stack, uint region);
    // public override System.Boolean ContainsConnection(Pathfinding.GraphNode node)
    // Offset: 0x1C1B9B8
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Boolean GraphNode::ContainsConnection(Pathfinding.GraphNode node)
    bool ContainsConnection(::Pathfinding::GraphNode* node);
    // public override System.Void UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x1C1BA58
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void UpdateRecursiveG(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    // Offset: 0x1C1BB98
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    void AddConnection(::Pathfinding::GraphNode* node, uint cost);
    // public override System.Void RemoveConnection(Pathfinding.GraphNode node)
    // Offset: 0x1C1BEE8
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::RemoveConnection(Pathfinding.GraphNode node)
    void RemoveConnection(::Pathfinding::GraphNode* node);
    // public override System.Void SerializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x1C1C434
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public override System.Void DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x1C1C5B4
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext* ctx);
  }; // Pathfinding.MeshNode
  #pragma pack(pop)
  static check_size<sizeof(MeshNode), 48 + sizeof(::ArrayW<uint>)> __Pathfinding_MeshNodeSizeCheck;
  static_assert(sizeof(MeshNode) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::MeshNode::GetVertex
// Il2CppName: GetVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::MeshNode::*)(int)>(&Pathfinding::MeshNode::GetVertex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "GetVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::GetVertexCount
// Il2CppName: GetVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::MeshNode::*)()>(&Pathfinding::MeshNode::GetVertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "GetVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::ClosestPointOnNode
// Il2CppName: ClosestPointOnNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::MeshNode::*)(::UnityEngine::Vector3)>(&Pathfinding::MeshNode::ClosestPointOnNode)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "ClosestPointOnNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::ClosestPointOnNodeXZ
// Il2CppName: ClosestPointOnNodeXZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::MeshNode::*)(::UnityEngine::Vector3)>(&Pathfinding::MeshNode::ClosestPointOnNodeXZ)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "ClosestPointOnNodeXZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::ContainsPoint
// Il2CppName: ContainsPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::MeshNode::*)(::Pathfinding::Int3)>(&Pathfinding::MeshNode::ContainsPoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "ContainsPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::MeshNode::ClearConnections
// Il2CppName: ClearConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(bool)>(&Pathfinding::MeshNode::ClearConnections)> {
  static const MethodInfo* get() {
    static auto* alsoReverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "ClearConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alsoReverse});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::GetConnections
// Il2CppName: GetConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::Pathfinding::GraphNodeDelegate*)>(&Pathfinding::MeshNode::GetConnections)> {
  static const MethodInfo* get() {
    static auto* del = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNodeDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "GetConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{del});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::FloodFill
// Il2CppName: FloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*, uint)>(&Pathfinding::MeshNode::FloodFill)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Stack`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    static auto* region = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "FloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack, region});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::ContainsConnection
// Il2CppName: ContainsConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*)>(&Pathfinding::MeshNode::ContainsConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "ContainsConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::UpdateRecursiveG
// Il2CppName: UpdateRecursiveG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::MeshNode::UpdateRecursiveG)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "UpdateRecursiveG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::AddConnection
// Il2CppName: AddConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*, uint)>(&Pathfinding::MeshNode::AddConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* cost = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "AddConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, cost});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*)>(&Pathfinding::MeshNode::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::SerializeReferences
// Il2CppName: SerializeReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::MeshNode::SerializeReferences)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "SerializeReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::MeshNode::DeserializeReferences
// Il2CppName: DeserializeReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::MeshNode::DeserializeReferences)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MeshNode*), "DeserializeReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
