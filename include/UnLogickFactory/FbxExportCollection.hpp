// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: Cloth
  class Cloth;
  // Forward declaring type: Terrain
  class Terrain;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Light
  class Light;
}
// Completed forward declares
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Forward declaring type: FbxExportCollection
  class FbxExportCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnLogickFactory::FbxExportCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxExportCollection*, "UnLogickFactory", "FbxExportCollection");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.FbxExportCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class FbxExportCollection : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.IntPtr> FbxNodes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::IntPtr>* FbxNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::IntPtr>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.MeshRenderer> Meshes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* Meshes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> SkinnedMeshes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* SkinnedMeshes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Cloth> Cloths
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Cloth*>* Cloths;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Cloth*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Terrain> Terrains
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::Terrain*>* Terrains;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Terrain*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Camera> Cameras
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* Cameras;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Camera*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Light> Lights
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Light*>* Lights;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Light*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.IntPtr> FbxNodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::IntPtr>*& dyn_FbxNodes();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.MeshRenderer> Meshes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*& dyn_Meshes();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> SkinnedMeshes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*& dyn_SkinnedMeshes();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Cloth> Cloths
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Cloth*>*& dyn_Cloths();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Terrain> Terrains
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Terrain*>*& dyn_Terrains();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Camera> Cameras
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*& dyn_Cameras();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Light> Lights
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Light*>*& dyn_Lights();
    // public System.Void .ctor()
    // Offset: 0x11905D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FbxExportCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::FbxExportCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FbxExportCollection*, creationType>()));
    }
  }; // UnLogickFactory.FbxExportCollection
  #pragma pack(pop)
  static check_size<sizeof(FbxExportCollection), 64 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Light*>*)> __UnLogickFactory_FbxExportCollectionSizeCheck;
  static_assert(sizeof(FbxExportCollection) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::FbxExportCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
