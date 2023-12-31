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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshTriangulation
  struct NavMeshTriangulation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshTriangulation, "UnityEngine.AI", "NavMeshTriangulation");
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AI.NavMeshTriangulation
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A911C4
  // [MovedFromAttribute] Offset: A911C4
  struct NavMeshTriangulation/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public System.Int32[] indices
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<int> indices;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32[] areas
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> areas;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating value type constructor for type: NavMeshTriangulation
    constexpr NavMeshTriangulation(::ArrayW<::UnityEngine::Vector3> vertices_ = ::ArrayW<::UnityEngine::Vector3>(static_cast<void*>(nullptr)), ::ArrayW<int> indices_ = ::ArrayW<int>(static_cast<void*>(nullptr)), ::ArrayW<int> areas_ = ::ArrayW<int>(static_cast<void*>(nullptr))) noexcept : vertices{vertices_}, indices{indices_}, areas{areas_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3[] vertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_vertices();
    // Get instance field reference: public System.Int32[] indices
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_indices();
    // Get instance field reference: public System.Int32[] areas
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_areas();
  }; // UnityEngine.AI.NavMeshTriangulation
  #pragma pack(pop)
  static check_size<sizeof(NavMeshTriangulation), 16 + sizeof(::ArrayW<int>)> __UnityEngine_AI_NavMeshTriangulationSizeCheck;
  static_assert(sizeof(NavMeshTriangulation) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
