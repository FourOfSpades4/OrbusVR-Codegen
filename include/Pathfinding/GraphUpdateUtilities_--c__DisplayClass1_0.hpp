// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GraphUpdateUtilities
#include "Pathfinding/GraphUpdateUtilities.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphUpdateObject
  class GraphUpdateObject;
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0*, "Pathfinding", "GraphUpdateUtilities/<>c__DisplayClass1_0");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GraphUpdateUtilities/<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD85F4
  class GraphUpdateUtilities::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.GraphUpdateObject guo
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::GraphUpdateObject* guo;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphUpdateObject*) == 0x8);
    // public System.Boolean worked
    // Size: 0x1
    // Offset: 0x18
    bool worked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: worked and: nodes
    char __padding1[0x7] = {};
    // public System.Collections.Generic.List`1<Pathfinding.GraphNode> nodes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* nodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*) == 0x8);
    // public System.Boolean alwaysRevert
    // Size: 0x1
    // Offset: 0x28
    bool alwaysRevert;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pathfinding.GraphUpdateObject guo
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphUpdateObject*& dyn_guo();
    // Get instance field reference: public System.Boolean worked
    [[deprecated("Use field access instead!")]] bool& dyn_worked();
    // Get instance field reference: public System.Collections.Generic.List`1<Pathfinding.GraphNode> nodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& dyn_nodes();
    // Get instance field reference: public System.Boolean alwaysRevert
    [[deprecated("Use field access instead!")]] bool& dyn_alwaysRevert();
    // public System.Void .ctor()
    // Offset: 0x1C0E018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphUpdateUtilities::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphUpdateUtilities::$$c__DisplayClass1_0*, creationType>()));
    }
    // System.Void <UpdateGraphsNoBlock>b__0()
    // Offset: 0x1C0E020
    void $UpdateGraphsNoBlock$b__0();
  }; // Pathfinding.GraphUpdateUtilities/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(GraphUpdateUtilities::$$c__DisplayClass1_0), 40 + sizeof(bool)> __Pathfinding_GraphUpdateUtilities_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(GraphUpdateUtilities::$$c__DisplayClass1_0) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0::$UpdateGraphsNoBlock$b__0
// Il2CppName: <UpdateGraphsNoBlock>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0::*)()>(&Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0::$UpdateGraphsNoBlock$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateUtilities::$$c__DisplayClass1_0*), "<UpdateGraphsNoBlock>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
