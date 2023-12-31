// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB2_TextureBakeResults
#include "GlobalNamespace/MB2_TextureBakeResults.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB_MaterialAndUVRect
  class MB_MaterialAndUVRect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Mesh
  class Mesh;
  // Skipping declaration: Rect because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TextureTilingTreatment
  struct MB_TextureTilingTreatment;
  // Skipping declaration: MB2_LogLevel because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper*, "", "MB2_TextureBakeResults/Material2AtlasRectangleMapper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MB2_TextureBakeResults/Material2AtlasRectangleMapper
  // [TokenAttribute] Offset: FFFFFFFF
  class MB2_TextureBakeResults::Material2AtlasRectangleMapper : public ::Il2CppObject {
    public:
    public:
    // private MB2_TextureBakeResults tbr
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MB2_TextureBakeResults* tbr;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults*) == 0x8);
    // private System.Int32[] numTimesMatAppearsInAtlas
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> numTimesMatAppearsInAtlas;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private MB_MaterialAndUVRect[] matsAndSrcUVRect
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*> matsAndSrcUVRect;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>) == 0x8);
    public:
    // Get instance field reference: private MB2_TextureBakeResults tbr
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB2_TextureBakeResults*& dyn_tbr();
    // Get instance field reference: private System.Int32[] numTimesMatAppearsInAtlas
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_numTimesMatAppearsInAtlas();
    // Get instance field reference: private MB_MaterialAndUVRect[] matsAndSrcUVRect
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>& dyn_matsAndSrcUVRect();
    // public System.Void .ctor(MB2_TextureBakeResults res)
    // Offset: 0x1213AF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB2_TextureBakeResults::Material2AtlasRectangleMapper* New_ctor(::GlobalNamespace::MB2_TextureBakeResults* res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB2_TextureBakeResults::Material2AtlasRectangleMapper*, creationType>(res)));
    }
    // public System.Boolean TryMapMaterialToUVRect(UnityEngine.Material mat, UnityEngine.Mesh m, System.Int32 submeshIdx, System.Int32 idxInResultMats, DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache meshChannelCache, System.Collections.Generic.Dictionary`2<System.Int32,DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult[]> meshAnalysisCache, out DigitalOpus.MB.Core.MB_TextureTilingTreatment tilingTreatment, out UnityEngine.Rect rectInAtlas, out UnityEngine.Rect encapsulatingRectOut, out UnityEngine.Rect sourceMaterialTilingOut, ref System.String errorMsg, DigitalOpus.MB.Core.MB2_LogLevel logLevel)
    // Offset: 0x1213E50
    bool TryMapMaterialToUVRect(::UnityEngine::Material* mat, ::UnityEngine::Mesh* m, int submeshIdx, int idxInResultMats, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelCache, ::System::Collections::Generic::Dictionary_2<int, ::ArrayW<::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult>>* meshAnalysisCache, ByRef<::DigitalOpus::MB::Core::MB_TextureTilingTreatment> tilingTreatment, ByRef<::UnityEngine::Rect> rectInAtlas, ByRef<::UnityEngine::Rect> encapsulatingRectOut, ByRef<::UnityEngine::Rect> sourceMaterialTilingOut, ByRef<::StringW> errorMsg, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel);
    // private System.Void UpgradeToCurrentVersion(MB2_TextureBakeResults tbr)
    // Offset: 0x1214928
    void UpgradeToCurrentVersion(::GlobalNamespace::MB2_TextureBakeResults* tbr);
  }; // MB2_TextureBakeResults/Material2AtlasRectangleMapper
  #pragma pack(pop)
  static check_size<sizeof(MB2_TextureBakeResults::Material2AtlasRectangleMapper), 32 + sizeof(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>)> __GlobalNamespace_MB2_TextureBakeResults_Material2AtlasRectangleMapperSizeCheck;
  static_assert(sizeof(MB2_TextureBakeResults::Material2AtlasRectangleMapper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::TryMapMaterialToUVRect
// Il2CppName: TryMapMaterialToUVRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::*)(::UnityEngine::Material*, ::UnityEngine::Mesh*, int, int, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*, ::System::Collections::Generic::Dictionary_2<int, ::ArrayW<::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult>>*, ByRef<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>, ByRef<::StringW>, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::TryMapMaterialToUVRect)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* submeshIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* idxInResultMats = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* meshChannelCache = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache")->byval_arg;
    static auto* meshAnalysisCache = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_Utility/MeshAnalysisResult"), 1)})->byval_arg;
    static auto* tilingTreatment = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TextureTilingTreatment")->this_arg;
    static auto* rectInAtlas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* encapsulatingRectOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* sourceMaterialTilingOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* errorMsg = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* logLevel = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper*), "TryMapMaterialToUVRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat, m, submeshIdx, idxInResultMats, meshChannelCache, meshAnalysisCache, tilingTreatment, rectInAtlas, encapsulatingRectOut, sourceMaterialTilingOut, errorMsg, logLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::UpgradeToCurrentVersion
// Il2CppName: UpgradeToCurrentVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper::UpgradeToCurrentVersion)> {
  static const MethodInfo* get() {
    static auto* tbr = &::il2cpp_utils::GetClassFromName("", "MB2_TextureBakeResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB2_TextureBakeResults::Material2AtlasRectangleMapper*), "UpgradeToCurrentVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tbr});
  }
};
