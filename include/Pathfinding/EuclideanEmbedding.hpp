// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.HeuristicOptimizationMode
#include "Pathfinding/HeuristicOptimizationMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: EuclideanEmbedding
  class EuclideanEmbedding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::EuclideanEmbedding);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::EuclideanEmbedding*, "Pathfinding", "EuclideanEmbedding");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.EuclideanEmbedding
  // [TokenAttribute] Offset: FFFFFFFF
  class EuclideanEmbedding : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.HeuristicOptimizationMode mode
    // Size: 0x4
    // Offset: 0x10
    ::Pathfinding::HeuristicOptimizationMode mode;
    // Field size check
    static_assert(sizeof(::Pathfinding::HeuristicOptimizationMode) == 0x4);
    // public System.Int32 seed
    // Size: 0x4
    // Offset: 0x14
    int seed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Transform pivotPointRoot
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* pivotPointRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 spreadOutCount
    // Size: 0x4
    // Offset: 0x20
    int spreadOutCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean dirty
    // Size: 0x1
    // Offset: 0x24
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pathfinding.HeuristicOptimizationMode mode
    [[deprecated("Use field access instead!")]] ::Pathfinding::HeuristicOptimizationMode& dyn_mode();
    // Get instance field reference: public System.Int32 seed
    [[deprecated("Use field access instead!")]] int& dyn_seed();
    // Get instance field reference: public UnityEngine.Transform pivotPointRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pivotPointRoot();
    // Get instance field reference: public System.Int32 spreadOutCount
    [[deprecated("Use field access instead!")]] int& dyn_spreadOutCount();
    // Get instance field reference: public System.Boolean dirty
    [[deprecated("Use field access instead!")]] bool& dyn_dirty();
    // private System.Void EnsureCapacity(System.Int32 index)
    // Offset: 0x1C06DE4
    void EnsureCapacity(int index);
    // public System.UInt32 GetHeuristic(System.Int32 nodeIndex1, System.Int32 nodeIndex2)
    // Offset: 0x1C06DE8
    uint GetHeuristic(int nodeIndex1, int nodeIndex2);
    // public System.Void RecalculatePivots()
    // Offset: 0x1C06DF0
    void RecalculatePivots();
    // public System.Void RecalculateCosts()
    // Offset: 0x1C06DF4
    void RecalculateCosts();
    // public System.Void OnDrawGizmos()
    // Offset: 0x1C06DFC
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x1C06E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EuclideanEmbedding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::EuclideanEmbedding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EuclideanEmbedding*, creationType>()));
    }
  }; // Pathfinding.EuclideanEmbedding
  #pragma pack(pop)
  static check_size<sizeof(EuclideanEmbedding), 36 + sizeof(bool)> __Pathfinding_EuclideanEmbeddingSizeCheck;
  static_assert(sizeof(EuclideanEmbedding) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::EuclideanEmbedding::EnsureCapacity
// Il2CppName: EnsureCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::EuclideanEmbedding::*)(int)>(&Pathfinding::EuclideanEmbedding::EnsureCapacity)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::EuclideanEmbedding*), "EnsureCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::EuclideanEmbedding::GetHeuristic
// Il2CppName: GetHeuristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Pathfinding::EuclideanEmbedding::*)(int, int)>(&Pathfinding::EuclideanEmbedding::GetHeuristic)> {
  static const MethodInfo* get() {
    static auto* nodeIndex1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeIndex2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::EuclideanEmbedding*), "GetHeuristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeIndex1, nodeIndex2});
  }
};
// Writing MetadataGetter for method: Pathfinding::EuclideanEmbedding::RecalculatePivots
// Il2CppName: RecalculatePivots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::EuclideanEmbedding::*)()>(&Pathfinding::EuclideanEmbedding::RecalculatePivots)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::EuclideanEmbedding*), "RecalculatePivots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::EuclideanEmbedding::RecalculateCosts
// Il2CppName: RecalculateCosts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::EuclideanEmbedding::*)()>(&Pathfinding::EuclideanEmbedding::RecalculateCosts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::EuclideanEmbedding*), "RecalculateCosts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::EuclideanEmbedding::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::EuclideanEmbedding::*)()>(&Pathfinding::EuclideanEmbedding::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::EuclideanEmbedding*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::EuclideanEmbedding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
