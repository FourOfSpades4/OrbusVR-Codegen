// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TerrainData
#include "UnityEngine/TerrainData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData::BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainData/BoundaryValueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TerrainData::BoundaryValueType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoundaryValueType
    constexpr BoundaryValueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MaxHeightmapRes
    static constexpr const int MaxHeightmapRes = 0;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MaxHeightmapRes
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MaxHeightmapRes();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MaxHeightmapRes
    static void _set_MaxHeightmapRes(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MinDetailResPerPatch
    static constexpr const int MinDetailResPerPatch = 1;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MinDetailResPerPatch
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MinDetailResPerPatch();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MinDetailResPerPatch
    static void _set_MinDetailResPerPatch(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MaxDetailResPerPatch
    static constexpr const int MaxDetailResPerPatch = 2;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MaxDetailResPerPatch
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MaxDetailResPerPatch();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MaxDetailResPerPatch
    static void _set_MaxDetailResPerPatch(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MaxDetailPatchCount
    static constexpr const int MaxDetailPatchCount = 3;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MaxDetailPatchCount
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MaxDetailPatchCount();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MaxDetailPatchCount
    static void _set_MaxDetailPatchCount(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MinAlphamapRes
    static constexpr const int MinAlphamapRes = 4;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MinAlphamapRes
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MinAlphamapRes();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MinAlphamapRes
    static void _set_MinAlphamapRes(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MaxAlphamapRes
    static constexpr const int MaxAlphamapRes = 5;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MaxAlphamapRes
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MaxAlphamapRes();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MaxAlphamapRes
    static void _set_MaxAlphamapRes(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MinBaseMapRes
    static constexpr const int MinBaseMapRes = 6;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MinBaseMapRes
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MinBaseMapRes();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MinBaseMapRes
    static void _set_MinBaseMapRes(::UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/BoundaryValueType MaxBaseMapRes
    static constexpr const int MaxBaseMapRes = 7;
    // Get static field: static public UnityEngine.TerrainData/BoundaryValueType MaxBaseMapRes
    static ::UnityEngine::TerrainData::BoundaryValueType _get_MaxBaseMapRes();
    // Set static field: static public UnityEngine.TerrainData/BoundaryValueType MaxBaseMapRes
    static void _set_MaxBaseMapRes(::UnityEngine::TerrainData::BoundaryValueType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TerrainData/BoundaryValueType
  #pragma pack(pop)
  static check_size<sizeof(TerrainData::BoundaryValueType), 0 + sizeof(int)> __UnityEngine_TerrainData_BoundaryValueTypeSizeCheck;
  static_assert(sizeof(TerrainData::BoundaryValueType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"