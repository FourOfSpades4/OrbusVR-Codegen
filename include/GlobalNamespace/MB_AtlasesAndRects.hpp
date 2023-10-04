// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB_MaterialAndUVRect
  class MB_MaterialAndUVRect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB_AtlasesAndRects
  class MB_AtlasesAndRects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB_AtlasesAndRects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB_AtlasesAndRects*, "", "MB_AtlasesAndRects");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MB_AtlasesAndRects
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_AtlasesAndRects : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Texture2D[] atlases
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Texture2D*> atlases;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public System.Collections.Generic.List`1<MB_MaterialAndUVRect> mat2rect_map
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>* mat2rect_map;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*) == 0x8);
    // public System.String[] texPropertyNames
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> texPropertyNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Texture2D[] atlases
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_atlases();
    // Get instance field reference: public System.Collections.Generic.List`1<MB_MaterialAndUVRect> mat2rect_map
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*& dyn_mat2rect_map();
    // Get instance field reference: public System.String[] texPropertyNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_texPropertyNames();
    // public System.Void .ctor()
    // Offset: 0x19F5B24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_AtlasesAndRects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB_AtlasesAndRects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_AtlasesAndRects*, creationType>()));
    }
  }; // MB_AtlasesAndRects
  #pragma pack(pop)
  static check_size<sizeof(MB_AtlasesAndRects), 32 + sizeof(::ArrayW<::StringW>)> __GlobalNamespace_MB_AtlasesAndRectsSizeCheck;
  static_assert(sizeof(MB_AtlasesAndRects) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB_AtlasesAndRects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
