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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GraphNode::$$c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GraphNode::$$c__DisplayClass40_0*, "Pathfinding", "GraphNode/<>c__DisplayClass40_0");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GraphNode/<>c__DisplayClass40_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD81EC
  class GraphNode::$$c__DisplayClass40_0 : public ::Il2CppObject {
    public:
    public:
    // public System.UInt32 region
    // Size: 0x4
    // Offset: 0x10
    uint region;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: region and: stack
    char __padding0[0x4] = {};
    // public System.Collections.Generic.Stack`1<Pathfinding.GraphNode> stack
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>* stack;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*) == 0x8);
    public:
    // Get instance field reference: public System.UInt32 region
    [[deprecated("Use field access instead!")]] uint& dyn_region();
    // Get instance field reference: public System.Collections.Generic.Stack`1<Pathfinding.GraphNode> stack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*& dyn_stack();
    // public System.Void .ctor()
    // Offset: 0x1C0A6E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphNode::$$c__DisplayClass40_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GraphNode::$$c__DisplayClass40_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphNode::$$c__DisplayClass40_0*, creationType>()));
    }
    // System.Void <FloodFill>b__0(Pathfinding.GraphNode other)
    // Offset: 0x1C0A9DC
    void $FloodFill$b__0(::Pathfinding::GraphNode* other);
  }; // Pathfinding.GraphNode/<>c__DisplayClass40_0
  #pragma pack(pop)
  static check_size<sizeof(GraphNode::$$c__DisplayClass40_0), 24 + sizeof(::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*)> __Pathfinding_GraphNode_$$c__DisplayClass40_0SizeCheck;
  static_assert(sizeof(GraphNode::$$c__DisplayClass40_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GraphNode::$$c__DisplayClass40_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::GraphNode::$$c__DisplayClass40_0::$FloodFill$b__0
// Il2CppName: <FloodFill>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphNode::$$c__DisplayClass40_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GraphNode::$$c__DisplayClass40_0::$FloodFill$b__0)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphNode::$$c__DisplayClass40_0*), "<FloodFill>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
