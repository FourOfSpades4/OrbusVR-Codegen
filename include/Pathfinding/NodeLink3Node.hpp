// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.PointNode
#include "Pathfinding/PointNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NodeLink3
  class NodeLink3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NodeLink3Node
  class NodeLink3Node;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NodeLink3Node);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NodeLink3Node*, "Pathfinding", "NodeLink3Node");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NodeLink3Node
  // [TokenAttribute] Offset: FFFFFFFF
  class NodeLink3Node : public ::Pathfinding::PointNode {
    public:
    public:
    // public Pathfinding.NodeLink3 link
    // Size: 0x8
    // Offset: 0x48
    ::Pathfinding::NodeLink3* link;
    // Field size check
    static_assert(sizeof(::Pathfinding::NodeLink3*) == 0x8);
    // public UnityEngine.Vector3 portalA
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 portalA;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 portalB
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 portalB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public Pathfinding.NodeLink3 link
    [[deprecated("Use field access instead!")]] ::Pathfinding::NodeLink3*& dyn_link();
    // Get instance field reference: public UnityEngine.Vector3 portalA
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_portalA();
    // Get instance field reference: public UnityEngine.Vector3 portalB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_portalB();
    // public Pathfinding.GraphNode GetOther(Pathfinding.GraphNode a)
    // Offset: 0x16A6134
    ::Pathfinding::GraphNode* GetOther(::Pathfinding::GraphNode* a);
    // private Pathfinding.GraphNode GetOtherInternal(Pathfinding.GraphNode a)
    // Offset: 0x16A6374
    ::Pathfinding::GraphNode* GetOtherInternal(::Pathfinding::GraphNode* a);
    // public System.Void .ctor(AstarPath active)
    // Offset: 0x16A37C0
    // Implemented from: Pathfinding.PointNode
    // Base method: System.Void PointNode::.ctor(AstarPath active)
    // Base method: System.Void GraphNode::.ctor(AstarPath active)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NodeLink3Node* New_ctor(::GlobalNamespace::AstarPath* active) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NodeLink3Node::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NodeLink3Node*, creationType>(active)));
    }
    // public override System.Boolean GetPortal(Pathfinding.GraphNode other, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    // Offset: 0x16A5FB8
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Boolean GraphNode::GetPortal(Pathfinding.GraphNode other, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    bool GetPortal(::Pathfinding::GraphNode* other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* right, bool backwards);
  }; // Pathfinding.NodeLink3Node
  #pragma pack(pop)
  static check_size<sizeof(NodeLink3Node), 92 + sizeof(::UnityEngine::Vector3)> __Pathfinding_NodeLink3NodeSizeCheck;
  static_assert(sizeof(NodeLink3Node) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NodeLink3Node::GetOther
// Il2CppName: GetOther
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphNode* (Pathfinding::NodeLink3Node::*)(::Pathfinding::GraphNode*)>(&Pathfinding::NodeLink3Node::GetOther)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink3Node*), "GetOther", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink3Node::GetOtherInternal
// Il2CppName: GetOtherInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphNode* (Pathfinding::NodeLink3Node::*)(::Pathfinding::GraphNode*)>(&Pathfinding::NodeLink3Node::GetOtherInternal)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink3Node*), "GetOtherInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink3Node::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::NodeLink3Node::GetPortal
// Il2CppName: GetPortal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NodeLink3Node::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&Pathfinding::NodeLink3Node::GetPortal)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* left = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* right = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink3Node*), "GetPortal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, left, right, backwards});
  }
};