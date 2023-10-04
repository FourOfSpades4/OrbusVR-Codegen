// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerRoot.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_TextureCombiner
  class MB3_TextureCombiner;
  // Forward declaring type: MeshBakerMaterialTexture
  class MeshBakerMaterialTexture;
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
  // Forward declaring type: AtlasPackingResult
  class AtlasPackingResult;
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_TextureCombinerPackerUnity
  class MB3_TextureCombinerPackerUnity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerUnity");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerUnity
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPackerUnity : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::$CreateAtlases$d__1
    class $CreateAtlases$d__1;
    // static UnityEngine.Texture2D _copyTexturesIntoAtlas(UnityEngine.Texture2D[] texToPack, System.Int32 padding, UnityEngine.Rect[] rs, System.Int32 w, System.Int32 h, DigitalOpus.MB.Core.MB3_TextureCombiner combiner)
    // Offset: 0x18F965C
    static ::UnityEngine::Texture2D* _copyTexturesIntoAtlas(::ArrayW<::UnityEngine::Texture2D*> texToPack, int padding, ::ArrayW<::UnityEngine::Rect> rs, int w, int h, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner);
    // static UnityEngine.Texture2D GetAdjustedForScaleAndOffset2(System.String propertyName, DigitalOpus.MB.Core.MeshBakerMaterialTexture source, UnityEngine.Vector2 obUVoffset, UnityEngine.Vector2 obUVscale, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x18F99C0
    static ::UnityEngine::Texture2D* GetAdjustedForScaleAndOffset2(::StringW propertyName, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ::UnityEngine::Vector2 obUVoffset, ::UnityEngine::Vector2 obUVscale, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public override DigitalOpus.MB.Core.AtlasPackingResult[] CalculateAtlasRectangles(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, System.Boolean doMultiAtlas, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x18F9424
    // Implemented from: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
    // Base method: DigitalOpus.MB.Core.AtlasPackingResult[] MB3_TextureCombinerPackerRoot::CalculateAtlasRectangles(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, System.Boolean doMultiAtlas, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, bool doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public override System.Collections.IEnumerator CreateAtlases(DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.AtlasPackingResult packedAtlasRects, UnityEngine.Texture2D[] atlases, DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x18F951C
    // Implemented from: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
    // Base method: System.Collections.IEnumerator MB3_TextureCombinerPackerRoot::CreateAtlases(DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.AtlasPackingResult packedAtlasRects, UnityEngine.Texture2D[] atlases, DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    ::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*> atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Void .ctor()
    // Offset: 0x18FA51C
    // Implemented from: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
    // Base method: System.Void MB3_TextureCombinerPackerRoot::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPackerUnity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPackerUnity*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPackerUnity
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::_copyTexturesIntoAtlas
// Il2CppName: _copyTexturesIntoAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::ArrayW<::UnityEngine::Texture2D*>, int, ::ArrayW<::UnityEngine::Rect>, int, int, ::DigitalOpus::MB::Core::MB3_TextureCombiner*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::_copyTexturesIntoAtlas)> {
  static const MethodInfo* get() {
    static auto* texToPack = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D"), 1)->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Rect"), 1)->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity*), "_copyTexturesIntoAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texToPack, padding, rs, w, h, combiner});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::GetAdjustedForScaleAndOffset2
// Il2CppName: GetAdjustedForScaleAndOffset2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::StringW, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::GetAdjustedForScaleAndOffset2)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MeshBakerMaterialTexture")->byval_arg;
    static auto* obUVoffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* obUVscale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity*), "GetAdjustedForScaleAndOffset2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName, source, obUVoffset, obUVscale, data, combiner, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::CalculateAtlasRectangles
// Il2CppName: CalculateAtlasRectangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::CalculateAtlasRectangles)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* doMultiAtlas = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity*), "CalculateAtlasRectangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, doMultiAtlas, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::CreateAtlases
// Il2CppName: CreateAtlases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::ArrayW<::UnityEngine::Texture2D*>, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::CreateAtlases)> {
  static const MethodInfo* get() {
    static auto* progressInfo = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateDelegate")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* packedAtlasRects = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPackingResult")->byval_arg;
    static auto* atlases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D"), 1)->byval_arg;
    static auto* textureEditorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity*), "CreateAtlases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerUnity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
