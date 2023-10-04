// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AstarPath
#include "GlobalNamespace/AstarPath.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: GraphNodeDelegateCancelable
  class GraphNodeDelegateCancelable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AstarPath::$$c__DisplayClass163_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AstarPath::$$c__DisplayClass163_0*, "", "AstarPath/<>c__DisplayClass163_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AstarPath/<>c__DisplayClass163_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACD108
  class AstarPath::$$c__DisplayClass163_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 lineOrigin
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 lineOrigin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lineDirection
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 lineDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single minDist
    // Size: 0x4
    // Offset: 0x28
    float minDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: minDist and: nearestNode
    char __padding2[0x4] = {};
    // public Pathfinding.GraphNode nearestNode
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::GraphNode* nearestNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public Pathfinding.GraphNodeDelegateCancelable <>9__0
    // Size: 0x8
    // Offset: 0x38
    ::Pathfinding::GraphNodeDelegateCancelable* $$9__0;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNodeDelegateCancelable*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Vector3 lineOrigin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lineOrigin();
    // Get instance field reference: public UnityEngine.Vector3 lineDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lineDirection();
    // Get instance field reference: public System.Single minDist
    [[deprecated("Use field access instead!")]] float& dyn_minDist();
    // Get instance field reference: public Pathfinding.GraphNode nearestNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_nearestNode();
    // Get instance field reference: public Pathfinding.GraphNodeDelegateCancelable <>9__0
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNodeDelegateCancelable*& dyn_$$9__0();
    // public System.Void .ctor()
    // Offset: 0x12A5DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarPath::$$c__DisplayClass163_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AstarPath::$$c__DisplayClass163_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarPath::$$c__DisplayClass163_0*, creationType>()));
    }
    // System.Boolean <GetNearest>b__0(Pathfinding.GraphNode node)
    // Offset: 0x12A694C
    bool $GetNearest$b__0(::Pathfinding::GraphNode* node);
  }; // AstarPath/<>c__DisplayClass163_0
  #pragma pack(pop)
  static check_size<sizeof(AstarPath::$$c__DisplayClass163_0), 56 + sizeof(::Pathfinding::GraphNodeDelegateCancelable*)> __GlobalNamespace_AstarPath_$$c__DisplayClass163_0SizeCheck;
  static_assert(sizeof(AstarPath::$$c__DisplayClass163_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c__DisplayClass163_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c__DisplayClass163_0::$GetNearest$b__0
// Il2CppName: <GetNearest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AstarPath::$$c__DisplayClass163_0::*)(::Pathfinding::GraphNode*)>(&GlobalNamespace::AstarPath::$$c__DisplayClass163_0::$GetNearest$b__0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$$c__DisplayClass163_0*), "<GetNearest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};