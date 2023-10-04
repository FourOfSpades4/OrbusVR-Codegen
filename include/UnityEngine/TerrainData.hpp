// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.TreeInstance
#include "UnityEngine/TreeInstance.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: TreePrototype
  class TreePrototype;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: TerrainLayer
  class TerrainLayer;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TerrainData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainData
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A8A1EC
  // [NativeHeaderAttribute] Offset: A8A1EC
  // [UsedByNativeCodeAttribute] Offset: A8A1EC
  class TerrainData : public ::UnityEngine::Object {
    public:
    // Nested type: ::UnityEngine::TerrainData::BoundaryValueType
    struct BoundaryValueType;
    // Get static field: static private readonly System.Int32 k_MaximumResolution
    static int _get_k_MaximumResolution();
    // Set static field: static private readonly System.Int32 k_MaximumResolution
    static void _set_k_MaximumResolution(int value);
    // Get static field: static private readonly System.Int32 k_MinimumDetailResolutionPerPatch
    static int _get_k_MinimumDetailResolutionPerPatch();
    // Set static field: static private readonly System.Int32 k_MinimumDetailResolutionPerPatch
    static void _set_k_MinimumDetailResolutionPerPatch(int value);
    // Get static field: static private readonly System.Int32 k_MaximumDetailResolutionPerPatch
    static int _get_k_MaximumDetailResolutionPerPatch();
    // Set static field: static private readonly System.Int32 k_MaximumDetailResolutionPerPatch
    static void _set_k_MaximumDetailResolutionPerPatch(int value);
    // Get static field: static private readonly System.Int32 k_MaximumDetailPatchCount
    static int _get_k_MaximumDetailPatchCount();
    // Set static field: static private readonly System.Int32 k_MaximumDetailPatchCount
    static void _set_k_MaximumDetailPatchCount(int value);
    // Get static field: static private readonly System.Int32 k_MinimumAlphamapResolution
    static int _get_k_MinimumAlphamapResolution();
    // Set static field: static private readonly System.Int32 k_MinimumAlphamapResolution
    static void _set_k_MinimumAlphamapResolution(int value);
    // Get static field: static private readonly System.Int32 k_MaximumAlphamapResolution
    static int _get_k_MaximumAlphamapResolution();
    // Set static field: static private readonly System.Int32 k_MaximumAlphamapResolution
    static void _set_k_MaximumAlphamapResolution(int value);
    // Get static field: static private readonly System.Int32 k_MinimumBaseMapResolution
    static int _get_k_MinimumBaseMapResolution();
    // Set static field: static private readonly System.Int32 k_MinimumBaseMapResolution
    static void _set_k_MinimumBaseMapResolution(int value);
    // Get static field: static private readonly System.Int32 k_MaximumBaseMapResolution
    static int _get_k_MaximumBaseMapResolution();
    // Set static field: static private readonly System.Int32 k_MaximumBaseMapResolution
    static void _set_k_MaximumBaseMapResolution(int value);
    // public System.Void .ctor()
    // Offset: 0x2888288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TerrainData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainData*, creationType>()));
    }
    // static private System.Int32 GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType type)
    // Offset: 0x2888384
    static int GetBoundaryValue(::UnityEngine::TerrainData::BoundaryValueType type);
    // static private System.Void Internal_Create(UnityEngine.TerrainData terrainData)
    // Offset: 0x2888318
    static void Internal_Create(::UnityEngine::TerrainData* terrainData);
    // public System.Int32 get_heightmapWidth()
    // Offset: 0x28883F0
    int get_heightmapWidth();
    // public System.Int32 get_heightmapHeight()
    // Offset: 0x288845C
    int get_heightmapHeight();
    // public System.Int32 get_heightmapResolution()
    // Offset: 0x28884C8
    int get_heightmapResolution();
    // private System.Int32 get_internalHeightmapResolution()
    // Offset: 0x28884CC
    int get_internalHeightmapResolution();
    // public UnityEngine.Vector3 get_size()
    // Offset: 0x28869EC
    ::UnityEngine::Vector3 get_size();
    // public System.Single[,] GetHeights(System.Int32 xBase, System.Int32 yBase, System.Int32 width, System.Int32 height)
    // Offset: 0x28885AC
    ::ArrayW<float> GetHeights(int xBase, int yBase, int width, int height);
    // private System.Single[,] Internal_GetHeights(System.Int32 xBase, System.Int32 yBase, System.Int32 width, System.Int32 height)
    // Offset: 0x28886A4
    ::ArrayW<float> Internal_GetHeights(int xBase, int yBase, int width, int height);
    // public UnityEngine.Vector3 GetInterpolatedNormal(System.Single x, System.Single y)
    // Offset: 0x2888740
    ::UnityEngine::Vector3 GetInterpolatedNormal(float x, float y);
    // public UnityEngine.TreeInstance[] get_treeInstances()
    // Offset: 0x28887FC
    ::ArrayW<::UnityEngine::TreeInstance> get_treeInstances();
    // private UnityEngine.TreeInstance[] Internal_GetTreeInstances()
    // Offset: 0x2888800
    ::ArrayW<::UnityEngine::TreeInstance> Internal_GetTreeInstances();
    // public UnityEngine.TreePrototype[] get_treePrototypes()
    // Offset: 0x288886C
    ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes();
    // System.Single GetAlphamapResolutionInternal()
    // Offset: 0x28888D8
    float GetAlphamapResolutionInternal();
    // public UnityEngine.Texture2D GetAlphamapTexture(System.Int32 index)
    // Offset: 0x2888944
    ::UnityEngine::Texture2D* GetAlphamapTexture(int index);
    // public System.Int32 get_alphamapTextureCount()
    // Offset: 0x28889B8
    int get_alphamapTextureCount();
    // public UnityEngine.Texture2D[] get_alphamapTextures()
    // Offset: 0x2888A24
    ::ArrayW<::UnityEngine::Texture2D*> get_alphamapTextures();
    // public UnityEngine.TerrainLayer[] get_terrainLayers()
    // Offset: 0x2888B20
    ::ArrayW<::UnityEngine::TerrainLayer*> get_terrainLayers();
    // static private System.Void .cctor()
    // Offset: 0x2888B8C
    static void _cctor();
    // private System.Void get_size_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2888538
    void get_size_Injected(ByRef<::UnityEngine::Vector3> ret);
    // private System.Void GetInterpolatedNormal_Injected(System.Single x, System.Single y, out UnityEngine.Vector3 ret)
    // Offset: 0x2888770
    void GetInterpolatedNormal_Injected(float x, float y, ByRef<::UnityEngine::Vector3> ret);
  }; // UnityEngine.TerrainData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TerrainData::GetBoundaryValue
// Il2CppName: GetBoundaryValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::TerrainData::BoundaryValueType)>(&UnityEngine::TerrainData::GetBoundaryValue)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData/BoundaryValueType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "GetBoundaryValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*)>(&UnityEngine::TerrainData::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrainData});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_heightmapWidth
// Il2CppName: get_heightmapWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_heightmapWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_heightmapWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_heightmapHeight
// Il2CppName: get_heightmapHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_heightmapHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_heightmapHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_heightmapResolution
// Il2CppName: get_heightmapResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_heightmapResolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_heightmapResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_internalHeightmapResolution
// Il2CppName: get_internalHeightmapResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_internalHeightmapResolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_internalHeightmapResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::GetHeights
// Il2CppName: GetHeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (UnityEngine::TerrainData::*)(int, int, int, int)>(&UnityEngine::TerrainData::GetHeights)> {
  static const MethodInfo* get() {
    static auto* xBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "GetHeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xBase, yBase, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::Internal_GetHeights
// Il2CppName: Internal_GetHeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (UnityEngine::TerrainData::*)(int, int, int, int)>(&UnityEngine::TerrainData::Internal_GetHeights)> {
  static const MethodInfo* get() {
    static auto* xBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "Internal_GetHeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xBase, yBase, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::GetInterpolatedNormal
// Il2CppName: GetInterpolatedNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::TerrainData::*)(float, float)>(&UnityEngine::TerrainData::GetInterpolatedNormal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "GetInterpolatedNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_treeInstances
// Il2CppName: get_treeInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TreeInstance> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_treeInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_treeInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::Internal_GetTreeInstances
// Il2CppName: Internal_GetTreeInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TreeInstance> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::Internal_GetTreeInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "Internal_GetTreeInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_treePrototypes
// Il2CppName: get_treePrototypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TreePrototype*> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_treePrototypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_treePrototypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::GetAlphamapResolutionInternal
// Il2CppName: GetAlphamapResolutionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::GetAlphamapResolutionInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "GetAlphamapResolutionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::GetAlphamapTexture
// Il2CppName: GetAlphamapTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::TerrainData::*)(int)>(&UnityEngine::TerrainData::GetAlphamapTexture)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "GetAlphamapTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_alphamapTextureCount
// Il2CppName: get_alphamapTextureCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_alphamapTextureCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_alphamapTextureCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_alphamapTextures
// Il2CppName: get_alphamapTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Texture2D*> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_alphamapTextures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_alphamapTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_terrainLayers
// Il2CppName: get_terrainLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TerrainLayer*> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_terrainLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_terrainLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TerrainData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::get_size_Injected
// Il2CppName: get_size_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::TerrainData::get_size_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "get_size_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainData::GetInterpolatedNormal_Injected
// Il2CppName: GetInterpolatedNormal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(float, float, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::TerrainData::GetInterpolatedNormal_Injected)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainData*), "GetInterpolatedNormal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, ret});
  }
};