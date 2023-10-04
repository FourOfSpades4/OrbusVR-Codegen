// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NNInfo
  struct NNInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NNInfo, "Pathfinding", "NNInfo");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.NNInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct NNInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public Pathfinding.GraphNode node
    // Size: 0x8
    // Offset: 0x0
    ::Pathfinding::GraphNode* node;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public Pathfinding.GraphNode constrainedNode
    // Size: 0x8
    // Offset: 0x8
    ::Pathfinding::GraphNode* constrainedNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public UnityEngine.Vector3 clampedPosition
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 clampedPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 constClampedPosition
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 constClampedPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: NNInfo
    constexpr NNInfo(::Pathfinding::GraphNode* node_ = {}, ::Pathfinding::GraphNode* constrainedNode_ = {}, ::UnityEngine::Vector3 clampedPosition_ = {}, ::UnityEngine::Vector3 constClampedPosition_ = {}) noexcept : node{node_}, constrainedNode{constrainedNode_}, clampedPosition{clampedPosition_}, constClampedPosition{constClampedPosition_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Pathfinding.GraphNode node
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_node();
    // Get instance field reference: public Pathfinding.GraphNode constrainedNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_constrainedNode();
    // Get instance field reference: public UnityEngine.Vector3 clampedPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_clampedPosition();
    // Get instance field reference: public UnityEngine.Vector3 constClampedPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_constClampedPosition();
    // public System.Void .ctor(Pathfinding.GraphNode node)
    // Offset: 0xBACC40
    NNInfo(::Pathfinding::GraphNode* node);
    // public System.Void SetConstrained(Pathfinding.GraphNode constrainedNode, UnityEngine.Vector3 clampedPosition)
    // Offset: 0xBACC48
    void SetConstrained(::Pathfinding::GraphNode* constrainedNode, ::UnityEngine::Vector3 clampedPosition);
    // public System.Void UpdateInfo()
    // Offset: 0xBACC58
    void UpdateInfo();
    // static public UnityEngine.Vector3 op_Explicit(Pathfinding.NNInfo ob)
    // Offset: 0x1C1D214
    explicit operator ::UnityEngine::Vector3();
    // static public Pathfinding.GraphNode op_Explicit(Pathfinding.NNInfo ob)
    // Offset: 0x1C1D220
    explicit operator ::Pathfinding::GraphNode*();
    // static public Pathfinding.NNInfo op_Explicit(Pathfinding.GraphNode ob)
    // Offset: 0x1C1D228
    // ABORTED: conflicts with another method.  explicit NNInfo(::Pathfinding::GraphNode* ob);
  }; // Pathfinding.NNInfo
  #pragma pack(pop)
  static check_size<sizeof(NNInfo), 28 + sizeof(::UnityEngine::Vector3)> __Pathfinding_NNInfoSizeCheck;
  static_assert(sizeof(NNInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NNInfo::NNInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::NNInfo::SetConstrained
// Il2CppName: SetConstrained
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NNInfo::*)(::Pathfinding::GraphNode*, ::UnityEngine::Vector3)>(&Pathfinding::NNInfo::SetConstrained)> {
  static const MethodInfo* get() {
    static auto* constrainedNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* clampedPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNInfo), "SetConstrained", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constrainedNode, clampedPosition});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNInfo::UpdateInfo
// Il2CppName: UpdateInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NNInfo::*)()>(&Pathfinding::NNInfo::UpdateInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNInfo), "UpdateInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNInfo::operator ::UnityEngine::Vector3
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::NNInfo::operator ::Pathfinding::GraphNode*
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::NNInfo::NNInfo
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
