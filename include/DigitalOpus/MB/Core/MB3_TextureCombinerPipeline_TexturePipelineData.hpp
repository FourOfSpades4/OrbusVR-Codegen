// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline.hpp"
// Including type: DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum
#include "DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB2_TextureBakeResults
  class MB2_TextureBakeResults;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
  // Forward declaring type: MB3_TextureCombinerNonTextureProperties
  class MB3_TextureCombinerNonTextureProperties;
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPipeline::TexturePipelineData : public ::Il2CppObject {
    public:
    public:
    // MB2_TextureBakeResults _textureBakeResults
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MB2_TextureBakeResults* textureBakeResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults*) == 0x8);
    // System.Int32 _atlasPadding
    // Size: 0x4
    // Offset: 0x18
    int atlasPadding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _maxAtlasWidth
    // Size: 0x4
    // Offset: 0x1C
    int maxAtlasWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _maxAtlasHeight
    // Size: 0x4
    // Offset: 0x20
    int maxAtlasHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _useMaxAtlasHeightOverride
    // Size: 0x1
    // Offset: 0x24
    bool useMaxAtlasHeightOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _useMaxAtlasWidthOverride
    // Size: 0x1
    // Offset: 0x25
    bool useMaxAtlasWidthOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _resizePowerOfTwoTextures
    // Size: 0x1
    // Offset: 0x26
    bool resizePowerOfTwoTextures;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _fixOutOfBoundsUVs
    // Size: 0x1
    // Offset: 0x27
    bool fixOutOfBoundsUVs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Int32 _maxTilingBakeSize
    // Size: 0x4
    // Offset: 0x28
    int maxTilingBakeSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _saveAtlasesAsAssets
    // Size: 0x1
    // Offset: 0x2C
    bool saveAtlasesAsAssets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: saveAtlasesAsAssets and: packingAlgorithm
    char __padding9[0x3] = {};
    // DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum _packingAlgorithm
    // Size: 0x4
    // Offset: 0x30
    ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum packingAlgorithm;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum) == 0x4);
    // System.Boolean _meshBakerTexturePackerForcePowerOfTwo
    // Size: 0x1
    // Offset: 0x34
    bool meshBakerTexturePackerForcePowerOfTwo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: meshBakerTexturePackerForcePowerOfTwo and: customShaderPropNames
    char __padding11[0x3] = {};
    // System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> _customShaderPropNames
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* customShaderPropNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*) == 0x8);
    // System.Boolean _normalizeTexelDensity
    // Size: 0x1
    // Offset: 0x40
    bool normalizeTexelDensity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _considerNonTextureProperties
    // Size: 0x1
    // Offset: 0x41
    bool considerNonTextureProperties;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: considerNonTextureProperties and: nonTexturePropertyBlender
    char __padding14[0x6] = {};
    // DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties nonTexturePropertyBlender
    // Size: 0x8
    // Offset: 0x48
    ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* nonTexturePropertyBlender;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*) == 0x8);
    // System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet> distinctMaterialTextures
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*) == 0x8);
    // System.Collections.Generic.List`1<UnityEngine.GameObject> allObjsToMesh
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* allObjsToMesh;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // System.Collections.Generic.List`1<UnityEngine.Material> allowedMaterialsFilter
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Material*>*) == 0x8);
    // System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> texPropertyNames
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*) == 0x8);
    // DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/CreateAtlasForProperty[] allTexturesAreNullAndSameColor
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreateAtlasForProperty> allTexturesAreNullAndSameColor;
    // Field size check
    static_assert(sizeof(::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreateAtlasForProperty>) == 0x8);
    // UnityEngine.Material resultMaterial
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Material* resultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: MB2_TextureBakeResults _textureBakeResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB2_TextureBakeResults*& dyn__textureBakeResults();
    // Get instance field reference: System.Int32 _atlasPadding
    [[deprecated("Use field access instead!")]] int& dyn__atlasPadding();
    // Get instance field reference: System.Int32 _maxAtlasWidth
    [[deprecated("Use field access instead!")]] int& dyn__maxAtlasWidth();
    // Get instance field reference: System.Int32 _maxAtlasHeight
    [[deprecated("Use field access instead!")]] int& dyn__maxAtlasHeight();
    // Get instance field reference: System.Boolean _useMaxAtlasHeightOverride
    [[deprecated("Use field access instead!")]] bool& dyn__useMaxAtlasHeightOverride();
    // Get instance field reference: System.Boolean _useMaxAtlasWidthOverride
    [[deprecated("Use field access instead!")]] bool& dyn__useMaxAtlasWidthOverride();
    // Get instance field reference: System.Boolean _resizePowerOfTwoTextures
    [[deprecated("Use field access instead!")]] bool& dyn__resizePowerOfTwoTextures();
    // Get instance field reference: System.Boolean _fixOutOfBoundsUVs
    [[deprecated("Use field access instead!")]] bool& dyn__fixOutOfBoundsUVs();
    // Get instance field reference: System.Int32 _maxTilingBakeSize
    [[deprecated("Use field access instead!")]] int& dyn__maxTilingBakeSize();
    // Get instance field reference: System.Boolean _saveAtlasesAsAssets
    [[deprecated("Use field access instead!")]] bool& dyn__saveAtlasesAsAssets();
    // Get instance field reference: DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum _packingAlgorithm
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum& dyn__packingAlgorithm();
    // Get instance field reference: System.Boolean _meshBakerTexturePackerForcePowerOfTwo
    [[deprecated("Use field access instead!")]] bool& dyn__meshBakerTexturePackerForcePowerOfTwo();
    // Get instance field reference: System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> _customShaderPropNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& dyn__customShaderPropNames();
    // Get instance field reference: System.Boolean _normalizeTexelDensity
    [[deprecated("Use field access instead!")]] bool& dyn__normalizeTexelDensity();
    // Get instance field reference: System.Boolean _considerNonTextureProperties
    [[deprecated("Use field access instead!")]] bool& dyn__considerNonTextureProperties();
    // Get instance field reference: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties nonTexturePropertyBlender
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& dyn_nonTexturePropertyBlender();
    // Get instance field reference: System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet> distinctMaterialTextures
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& dyn_distinctMaterialTextures();
    // Get instance field reference: System.Collections.Generic.List`1<UnityEngine.GameObject> allObjsToMesh
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_allObjsToMesh();
    // Get instance field reference: System.Collections.Generic.List`1<UnityEngine.Material> allowedMaterialsFilter
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& dyn_allowedMaterialsFilter();
    // Get instance field reference: System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> texPropertyNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& dyn_texPropertyNames();
    // Get instance field reference: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/CreateAtlasForProperty[] allTexturesAreNullAndSameColor
    [[deprecated("Use field access instead!")]] ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreateAtlasForProperty>& dyn_allTexturesAreNullAndSameColor();
    // Get instance field reference: UnityEngine.Material resultMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_resultMaterial();
    // System.Int32 get_numAtlases()
    // Offset: 0xF34270
    int get_numAtlases();
    // System.Boolean OnlyOneTextureInAtlasReuseTextures()
    // Offset: 0xF347B4
    bool OnlyOneTextureInAtlasReuseTextures();
    // public System.Void .ctor()
    // Offset: 0xF34874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPipeline::TexturePipelineData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPipeline::TexturePipelineData*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerPipeline::TexturePipelineData), 120 + sizeof(::UnityEngine::Material*)> __DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TexturePipelineDataSizeCheck;
  static_assert(sizeof(MB3_TextureCombinerPipeline::TexturePipelineData) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::get_numAtlases
// Il2CppName: get_numAtlases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::get_numAtlases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*), "get_numAtlases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::OnlyOneTextureInAtlasReuseTextures
// Il2CppName: OnlyOneTextureInAtlasReuseTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::OnlyOneTextureInAtlasReuseTextures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*), "OnlyOneTextureInAtlasReuseTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!